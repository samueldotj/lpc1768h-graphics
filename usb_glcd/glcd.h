#ifndef GLCD_H
#define GLCD_H

#include <lpc_types.h>

void lcd_init(void);
void lcd_goto(uint8_t page, uint8_t col);
void lcd_clear(void);
void lcd_write_column (uint8_t row, uint8_t col, uint8_t  data);
void lcd_write_pixel(uint8_t row, uint8_t col, int set);

#endif
