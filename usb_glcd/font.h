#ifndef _FONT_H
#define _FONT_H

#include <lpc_types.h>

typedef struct font {
	uint16_t   size;   // font_Size_in_Bytes_over_all_included_Size_it_self;
	uint8_t    width;  // font_Width_in_Pixel_for_fixed_drawing;
	uint8_t    height; // font_Height_in_Pixel_for_all_characters;
	uint8_t    first_char; //font_First_Char;
	uint8_t    count; 	   //font_Char_Count;

	uint8_t    *char_widths;

	uint8_t    *font_data;
} __attribute__ ((packed)) font_t;

void font_init (font_t *font, uint8_t *font_data);
uint8_t font_write_char (font_t *font, uint8_t x, uint8_t y, char c);
uint8_t font_write_string (font_t *font, uint8_t x, uint8_t y, char *str);

#endif
