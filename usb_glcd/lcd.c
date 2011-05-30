#include <lpc_types.h>
#include <LPC17xx.h>

#define GLCD_DATA_BIT0_INDEX	0
#define GLCD_DATA_BIT1_INDEX	1
#define GLCD_DATA_BIT2_INDEX	4
#define GLCD_DATA_BIT3_INDEX	8
#define GLCD_DATA_BIT4_INDEX	9
#define GLCD_DATA_BIT5_INDEX	10
#define GLCD_DATA_BIT6_INDEX	14
#define GLCD_DATA_BIT7_INDEX	15

#define GLCD_DATA_MASK			((uint32_t) ((1<<GLCD_DATA_BIT0_INDEX) | (1<<GLCD_DATA_BIT1_INDEX) | (1<<GLCD_DATA_BIT2_INDEX) | (1<<GLCD_DATA_BIT3_INDEX) | \
								 (1<<GLCD_DATA_BIT4_INDEX) | (1<<GLCD_DATA_BIT5_INDEX) | (1<<GLCD_DATA_BIT6_INDEX) | (1<<GLCD_DATA_BIT7_INDEX)))

#define GLCD_E_BIT_INDEX		18
#define GLCD_RW_BIT_INDEX		19
#define GLCD_RS_BIT_INDEX		20
#define GLCD_RESET_BIT_INDEX	21
#define GLCD_CS1_BIT_INDEX		22
#define GLCD_C86_BIT_INDEX		23

#define GLCD_CTRL_MASK			((1<<GLCD_RW_BIT_INDEX) | (1<<GLCD_RS_BIT_INDEX) | (1<<GLCD_CS1_BIT_INDEX) | (1<<GLCD_E_BIT_INDEX) | (1<<GLCD_RESET_BIT_INDEX))

#define PAGE_CMD				0xB0

#define TOTAL_PAGES				8
#define TOTAL_ROWS				64
#define TOTAL_COLUMNS			128

static void
delay(unsigned usec)
{
	int j=0,i=0;

	for(j=0;j<usec;j++)
	{

		/* At 60Mhz, the below loop introduces delay of 10 us */
		for(i=0;i<135;i++);
	}
}

static void
set_or_clear_fio1_bit(int bit, int is_set)
{
	uint32_t mask;

	mask = 1 << bit;
	/* Set direction as output */
	//FIO1DIR = mask;

	/* Set the mask */
	LPC_GPIO1->FIOMASK = ~mask;
	/* Write the value */
	if (is_set) {
		LPC_GPIO1->FIOSET |= mask;
	} else {
		LPC_GPIO1->FIOCLR |= mask;
	}
}

#define SET_FIO1_BIT(bit)		set_or_clear_fio1_bit(bit, 1)
#define CLR_FIO1_BIT(bit)		set_or_clear_fio1_bit(bit, 0)

#define GET_BIT(val, pos) ((val>>pos) & 1)
#define SET_BIT(val, pos, bit_value) val |= (bit_value<<pos)

static void
write_lcd_data(uint8_t data)
{
	uint32_t pin_data=0;
	int i,j;

	j = 0;
	for(i = 0; i < 32; i++) {
		if ((1 << i) & GLCD_DATA_MASK) {
			int bit_data = GET_BIT(data, j);
			SET_BIT(pin_data, i, bit_data);
			j++;
			if (j == 8)
				break;
		}
	}
	/* Set direction as output */
	//FIO1DIR = GLCD_DATA_MASK;
	/* Mask all other bits */
	LPC_GPIO1->FIOMASK = ~GLCD_DATA_MASK;
	/* Write new value */
	LPC_GPIO1->FIOPIN = pin_data;

}

static void
lcd_write(uint8_t value, int is_cmd)
{
	if (is_cmd) {
		CLR_FIO1_BIT(GLCD_RS_BIT_INDEX);
	} else {
		SET_FIO1_BIT(GLCD_RS_BIT_INDEX);
	}

	CLR_FIO1_BIT(GLCD_CS1_BIT_INDEX);
	CLR_FIO1_BIT(GLCD_RW_BIT_INDEX);

	write_lcd_data(value);

	SET_FIO1_BIT(GLCD_E_BIT_INDEX);
	delay(10);
	CLR_FIO1_BIT(GLCD_E_BIT_INDEX);

}

void
lcd_init (void)
{
	int i;
	uint8_t init_cmd[] = {
		0xE2, /* SW reset */
		0xA0, /* ADC select */
		0xC8, /* SHL Normal */
		0xA3, /* LCD bias */
		0x2F, /* Power Control */
		0x22, /* reg resistor select */
		0x40, /* Initial display line 40 */
		0xA4, /* Normal display */
		0xA6, /* REverce display a7 */
		0x81, /* Ref vg select mode */
		0x3f, /* Ref vg reg select */
		0xAF, /* Display On */
		0XB0, /* Set page address */
		0x10, /* Set coloumn addr  MSB */
		0x00, /* Set coloumn addr LSB */

	};

	CLR_FIO1_BIT(GLCD_C86_BIT_INDEX);

	CLR_FIO1_BIT(GLCD_RESET_BIT_INDEX);
	delay(1);
	SET_FIO1_BIT(GLCD_RESET_BIT_INDEX);

	for(i=0; i < (sizeof(init_cmd) / sizeof(init_cmd[0])); i++) {
		lcd_write(init_cmd[i], 1);
		delay(10);
	}
}
/* set the cursor to perticular page and coloumn */
static void
lcd_set_page(unsigned char page, unsigned char col)
{
	uint8_t msb,lsb;

	msb = (((col & 0xF0) >> 4)| 0x10);
	lsb = (col & 0x0F);
	lcd_write(page, 1);
	lcd_write(msb, 1);
	lcd_write(lsb, 1);
}

static uint8_t lcd_pixel_data[TOTAL_PAGES][TOTAL_COLUMNS]={{0}};
static uint8_t lcd_cur_row=0, lcd_cur_col=0;

void
lcd_goto(uint8_t page, uint8_t col)
{
	lcd_set_page(PAGE_CMD + page, col);
}

void
lcd_clear()
{
	int i,j;

	lcd_set_page(PAGE_CMD, 0);
	for(i=0; i <= TOTAL_PAGES; i++) {
		for(j=0; j < TOTAL_COLUMNS; j++) {
			lcd_write(0x0, 0);
		}
		lcd_goto(i, 0);
	}
	lcd_set_page(PAGE_CMD, 0);
	lcd_cur_row = 0;
	lcd_cur_col = 0;
}

void
lcd_write_column (uint8_t row, uint8_t col, uint8_t  data)
{
	uint8_t page;

	if (row > TOTAL_ROWS || col > TOTAL_COLUMNS) {
		return;
	}

	page = row / 8;
	if (row != lcd_cur_row || col != lcd_cur_col) {
		lcd_goto(page, col);
		lcd_cur_row = row;
		lcd_cur_col = col;
	}
	row = row % 8;

	lcd_pixel_data[page][col] = data;
	lcd_write(data, 0);
	lcd_cur_col++;
	if (lcd_cur_col == TOTAL_COLUMNS) {
		lcd_cur_col = 0;
		lcd_cur_row++;
		if (lcd_cur_row == TOTAL_ROWS) {
			lcd_cur_row = 0;
		}
		lcd_goto(lcd_cur_row / 8, lcd_cur_col);
	}
}

void
lcd_write_pixel(uint8_t row, uint8_t col, int set)
{
	uint8_t page, data;

	if (row > TOTAL_ROWS || col > TOTAL_COLUMNS) {
		return;
	}

	page = row / 8;

	data = lcd_pixel_data[page][col];
	if (set) {
		data |= (1 << row);
	} else {
		data &=	~(1 << row);
	}

	lcd_write_column(row, col, data);
}
