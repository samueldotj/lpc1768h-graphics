#include <lpc_types.h>

#include "font.h"
#include "glcd.h"

void
font_init (font_t *font, uint8_t *font_data)
{
	font_t *f;

	f = (font_t *)font_data;
	font->size = f->size;
	font->width = f->width;
	font->height = f->height;
	font->first_char = f->first_char;
	font->count = f->count;
	font->char_widths = (uint8_t *)&f->char_widths;
	font->font_data = &font->char_widths[font->count];
}

uint8_t
font_write_char (font_t *font, uint8_t x, uint8_t y, char c)
{
	uint8_t i, h, width, char_index;
	int data_start=0;
	uint8_t data;

	if (c < font->first_char)
		return 0;
	if (c > (font->first_char + font->count))
		return 0;

	char_index = c - font->first_char;
	width = font->char_widths[char_index];
	for(i=0; i < char_index; i++) {
		data_start += ((font->char_widths[i] * font->height) / 8);
		if (((font->char_widths[i] * font->height) % 8)) {
			data_start++;
		}
	}

	for(h=0; h<font->height; h+=8) {
		for(i=0; i<width; i++) {
			data = font->font_data[data_start++];
			lcd_write_column(x+h, y+i, data);
		}
	}

	return width;
}

uint8_t
font_write_string (font_t *font, uint8_t x, uint8_t y, char *str)
{
	uint8_t width, total_width = 0;

	while(*str) {
		width = font_write_char(font, x, y, *str);
		y += width;
		total_width += width;
		str++;
	}

	return 	total_width;
}
