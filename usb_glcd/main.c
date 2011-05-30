#include <lpc_types.h>
#include <LPC17xx.h>

#include <cs3.h>
#include <string.h>

#include "usb.h"
#include "glcd.h"

#include "font.h"
#include "time24.h"
#include "system8.h"
#include "arial8.h"

static void
system_init (void)
{
	LPC_PINCON->PINSEL2 = 0;
	LPC_PINCON->PINSEL3 = 0;

	LPC_GPIO1->FIODIR = ~0; /* all are output */
	LPC_GPIO1->FIOMASK = 0;
	LPC_GPIO1->FIOPIN = 0;
}

int
main (void)
{
	int i,j;
	font_t f_times24, f_arial8, f_system8;

	for(i=0; i<__cs3_region_num ;i++) {
		const struct __cs3_region *cr;

		cr = &__cs3_regions[i];
		for(j=0; j<cr->init_size; j++) {
			cr->data[j] = cr->init[j];
		}
		for(j=0; j<cr->zero_size; j++) {
			cr->data[cr->init_size+j] = 0;
		}
	}

	system_init();
	usb_init();

	lcd_init();
	lcd_clear();

	font_init(&f_times24, font_times24);
	font_write_string(&f_times24, 10, 10, "Hello World");
	font_init(&f_arial8, font_arial8);
	font_write_string(&f_arial8, 32, 10, "Hello World");
	font_init(&f_system8, font_system7);
	font_write_string(&f_system8, 42, 10, "Hello World");

	while(1);

	return 0;
}

void
_init()
{
	__cs3_start_c();


	main();
}
