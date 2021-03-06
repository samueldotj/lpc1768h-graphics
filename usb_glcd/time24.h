/*
 *
 * Times24
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Time24.h
 * Date                : 15.05.2011
 * Font size in bytes  : 23746
 * Font width          : 10
 * Font height         : 23
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#ifndef TIMES24_H
#define TIMES24_H

#define TIMES24_WIDTH 10
#define TIMES24_HEIGHT 23

uint8_t font_times24[] = {
    0x5C, 0xC2, // size
    0x0A, // width
    0x18, // height
    0x20, // first char
    0x60, // char count

    // char widths
    0x00, 0x11, 0x06, 0x0B, 0x0A, 0x12, 0x11, 0x02, 0x07, 0x07,
    0x09, 0x0D, 0x04, 0x06, 0x02, 0x07, 0x0A, 0x06, 0x0A, 0x09,
    0x0A, 0x09, 0x0A, 0x0A, 0x0A, 0x0A, 0x02, 0x04, 0x0D, 0x0E,
    0x0D, 0x08, 0x14, 0x11, 0x0E, 0x0E, 0x0F, 0x0D, 0x0C, 0x10,
    0x0F, 0x06, 0x08, 0x10, 0x0D, 0x13, 0x10, 0x0F, 0x0C, 0x0F,
    0x0F, 0x0A, 0x0E, 0x10, 0x10, 0x16, 0x10, 0x10, 0x0E, 0x05,
    0x07, 0x05, 0x0A, 0x0C, 0x03, 0x0A, 0x0B, 0x09, 0x0B, 0x09,
    0x07, 0x0B, 0x0C, 0x06, 0x04, 0x0C, 0x06, 0x11, 0x0C, 0x0A,
    0x0B, 0x0B, 0x08, 0x07, 0x07, 0x0C, 0x0C, 0x11, 0x0C, 0x0C,
    0x0A, 0x07, 0x01, 0x07, 0x0D, 0x0D,

    // font data
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7E, // 33
    0xFE, 0x1E, 0x00, 0x00, 0xFE, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x40, 0x40, 0x40, 0xF8, 0x47, 0x40, 0x40, 0x40, 0xF8, 0x47, 0x40, 0x08, 0xC8, 0x3F, 0x08, 0x08, 0x08, 0xC8, 0x3F, 0x08, 0x08, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // 35
    0x78, 0xFC, 0xC6, 0x82, 0xFF, 0x02, 0x02, 0x04, 0x3C, 0x00, 0xE0, 0x80, 0x01, 0x01, 0xFF, 0x03, 0x06, 0x8C, 0xFC, 0x78, 0x00, 0x02, 0x02, 0x02, 0x06, 0x02, 0x02, 0x00, 0x00, 0x00, // 36
    0xF8, 0xFC, 0x06, 0x02, 0x06, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0xC0, 0x20, 0x18, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x83, 0x61, 0x10, 0x0C, 0x02, 0x01, 0x00, 0x7C, 0xFE, 0x83, 0x01, 0x83, 0xFE, 0x7C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, // 37
    0x00, 0x00, 0x00, 0x00, 0x78, 0xFC, 0x86, 0x82, 0x42, 0x26, 0x1C, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x70, 0xF8, 0x84, 0x02, 0x01, 0x01, 0x07, 0x8E, 0x5C, 0x78, 0xF0, 0xC8, 0x87, 0x81, 0x80, 0xC0, 0x60, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, // 38
    0xFE, 0x1E, 0x00, 0x00, 0x00, 0x00, // 39
    0x80, 0xE0, 0x70, 0x0C, 0x06, 0x02, 0x01, 0x3F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x18, 0x10, 0x20, 0x40, // 40
    0x01, 0x02, 0x04, 0x0C, 0x70, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x7F, 0x40, 0x20, 0x30, 0x18, 0x06, 0x02, 0x00, // 41
    0xCC, 0xCC, 0x78, 0x30, 0xFF, 0x32, 0x78, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x22, 0x22, 0x12, 0x0E, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x80, 0x80, 0x02, 0x02, // 46
    0x00, 0x00, 0x00, 0x80, 0x70, 0x0E, 0x01, 0x00, 0xE0, 0x1C, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xE0, 0xF8, 0x1C, 0x06, 0x02, 0x02, 0x06, 0x0C, 0xF8, 0xE0, 0x1F, 0x7F, 0xE0, 0x80, 0x00, 0x00, 0x80, 0xE0, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 48
    0x04, 0x04, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 49
    0x30, 0x0C, 0x04, 0x06, 0x06, 0x06, 0x0E, 0xFC, 0x78, 0x00, 0x00, 0x80, 0xC0, 0xA0, 0x90, 0x8C, 0x87, 0x81, 0xC0, 0x40, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // 50
    0x08, 0x04, 0x06, 0x06, 0x86, 0x8E, 0x7C, 0x38, 0x00, 0x80, 0x80, 0x00, 0x01, 0x01, 0x03, 0x87, 0x7E, 0x3C, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0xC0, 0x20, 0x18, 0xFE, 0xFE, 0x00, 0x00, 0x18, 0x14, 0x13, 0x10, 0x10, 0x10, 0xFF, 0xFF, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, // 52
    0x00, 0x60, 0x78, 0x66, 0xE6, 0xC6, 0xC6, 0x86, 0x02, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x81, 0x6F, 0x1E, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 53
    0x00, 0xC0, 0x70, 0xB8, 0x88, 0x8C, 0x84, 0x82, 0x02, 0x02, 0x1F, 0x7F, 0xC1, 0x80, 0x00, 0x00, 0x01, 0x83, 0x7F, 0x3E, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 54
    0x18, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x86, 0x76, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x1C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x38, 0x7C, 0xE6, 0xC2, 0x82, 0x02, 0x82, 0x46, 0x7C, 0x38, 0x70, 0xFC, 0x84, 0x03, 0x03, 0x07, 0x06, 0x8E, 0xFC, 0x78, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 56
    0xF0, 0xF8, 0x04, 0x02, 0x02, 0x02, 0x06, 0x0C, 0xF8, 0xE0, 0x01, 0x03, 0x07, 0x86, 0x84, 0x44, 0x64, 0x3A, 0x0F, 0x03, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0xC0, 0xC0, 0x80, 0x80, 0x02, 0x02, // 58
    0xC0, 0xC0, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x22, 0x22, 0x12, 0x0E, // 59
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x02, 0x05, 0x05, 0x05, 0x08, 0x08, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x08, 0x08, 0x05, 0x05, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x38, 0x34, 0x02, 0x02, 0x02, 0x86, 0xFC, 0x78, 0x00, 0x00, 0x00, 0xB8, 0x84, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, // 63
    0x00, 0xC0, 0x30, 0x18, 0x0C, 0x04, 0x02, 0x82, 0xC1, 0x41, 0x21, 0x21, 0x41, 0xC1, 0xE2, 0x26, 0x0C, 0x18, 0xE0, 0x00, 0xFF, 0x01, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0x0F, 0x01, 0x80, 0x40, 0xE0, 0xFC, 0x1F, 0x01, 0x80, 0x40, 0x30, 0x0F, 0x00, 0x00, 0x06, 0x08, 0x30, 0x20, 0x40, 0x42, 0x82, 0x82, 0x80, 0x80, 0x82, 0x82, 0x42, 0x42, 0x20, 0x10, 0x08, 0x04, 0x02, // 64
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x30, 0x0C, 0x1E, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x18, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0B, 0x1F, 0xFC, 0xE0, 0x80, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 65
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x86, 0x8C, 0xFC, 0x78, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x82, 0xC6, 0xFE, 0x38, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 66
    0xC0, 0xF0, 0x38, 0x0C, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x04, 0x1C, 0x3E, 0x0F, 0x3F, 0x70, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, // 67
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x04, 0x0C, 0x38, 0xF0, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x70, 0x3F, 0x0F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0xC2, 0x06, 0x1E, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x80, 0xC0, 0x20, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // 69
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0xC2, 0x02, 0x06, 0x1E, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x07, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xC0, 0xF0, 0x38, 0x0C, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x04, 0x1C, 0x3E, 0x00, 0x00, 0x0F, 0x3F, 0x70, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x81, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, // 71
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 72
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 73
    0x00, 0x00, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, // 74
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x82, 0x80, 0x40, 0x20, 0x12, 0x0E, 0x06, 0x06, 0x02, 0x02, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 75
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x70, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // 76
    0x02, 0x02, 0xFE, 0x1E, 0x7E, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x1C, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x01, 0x0F, 0x3E, 0xF8, 0xE0, 0x60, 0x1C, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 77
    0x02, 0x02, 0x06, 0xFE, 0x1E, 0x38, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x1E, 0x38, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // 78
    0xC0, 0xF0, 0x38, 0x0C, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x0C, 0x38, 0xF0, 0xC0, 0x0F, 0x3F, 0x70, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x06, 0x8C, 0xFC, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0x02, 0x02, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xC0, 0xF0, 0x38, 0x0C, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x0C, 0x38, 0xF0, 0xC0, 0x0F, 0x3F, 0x70, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x70, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x06, 0x0E, 0x1E, 0x1A, 0x30, 0x20, 0x60, 0x40, 0x40, // 81
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x06, 0x8C, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x02, 0x02, 0x02, 0x0E, 0x1F, 0x79, 0xE0, 0x80, 0x80, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, // 82
    0x38, 0xFC, 0xC6, 0xC2, 0x82, 0x02, 0x04, 0x0C, 0x3E, 0x00, 0xF0, 0xC0, 0x80, 0x01, 0x01, 0x03, 0x07, 0x8E, 0xFC, 0x78, 0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, // 83
    0x1E, 0x06, 0x02, 0x02, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x06, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, // 84
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x02, 0x02, 0x06, 0x3E, 0xFA, 0xC2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x62, 0x1E, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x3E, 0xF0, 0xC0, 0x30, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x02, 0x02, 0x06, 0x3E, 0xFE, 0xC2, 0x00, 0x00, 0x02, 0x02, 0x0E, 0xFE, 0xF2, 0x82, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x3E, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3E, 0xF8, 0xC0, 0x38, 0x07, 0x01, 0x03, 0x1F, 0x7C, 0xE0, 0x70, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x02, 0x02, 0x06, 0x0E, 0x3E, 0x72, 0xE2, 0x80, 0x00, 0xC0, 0x22, 0x12, 0x0E, 0x06, 0x02, 0x02, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x10, 0x0D, 0x03, 0x07, 0x1C, 0x38, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 88
    0x02, 0x02, 0x06, 0x1E, 0x3E, 0xF2, 0xC0, 0x00, 0x00, 0x80, 0x40, 0x32, 0x0E, 0x06, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x1E, 0x06, 0x02, 0x02, 0x02, 0x82, 0xC2, 0xF2, 0x3A, 0x1E, 0x06, 0x02, 0x00, 0x00, 0xC0, 0xE0, 0x70, 0x1C, 0x0E, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // 90
    0xFF, 0xFF, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x40, 0x40, 0x40, // 91
    0x01, 0x0E, 0x70, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1C, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, // 92
    0x01, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0x7E, 0x7E, // 93
    0x00, 0xC0, 0x30, 0x0C, 0x02, 0x02, 0x0C, 0x30, 0xC0, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x02, 0x06, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x80, 0x80, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0xE3, 0xF3, 0x98, 0x08, 0x08, 0x84, 0xFF, 0xFF, 0x00, 0x80, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x02, 0x00, // 97
    0x02, 0x02, 0xFF, 0xFF, 0x80, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xC1, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 98
    0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x3E, 0xFF, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0xC3, 0x23, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, // 99
    0x00, 0x00, 0x80, 0x40, 0x40, 0x42, 0x82, 0xFF, 0xFF, 0x00, 0x00, 0x3E, 0xFF, 0xC1, 0x80, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, // 100
    0x00, 0x80, 0x80, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x3E, 0xFF, 0xE4, 0xC4, 0x84, 0x84, 0x84, 0xC7, 0x27, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 101
    0x40, 0x40, 0xF8, 0xFE, 0x42, 0x41, 0x41, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, // 102
    0x00, 0x00, 0x80, 0xC0, 0x40, 0x40, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x8F, 0xDF, 0xB0, 0xA0, 0xA0, 0xB0, 0x9F, 0x8F, 0x80, 0x00, 0x30, 0x38, 0x66, 0x42, 0x42, 0x42, 0x42, 0x42, 0x22, 0x12, 0x0E, // 103
    0x02, 0x02, 0xFF, 0xFF, 0x80, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, // 104
    0x80, 0x80, 0xC3, 0xC3, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 105
    0x80, 0x80, 0xC3, 0xC3, 0x00, 0x00, 0xFF, 0xFF, 0x40, 0x40, 0x3E, 0x1E, // 106
    0x02, 0x02, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x40, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x08, 0x1C, 0x32, 0x61, 0xC0, 0x80, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, // 107
    0x02, 0x02, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 108
    0x80, 0x80, 0xC0, 0xC0, 0x80, 0x80, 0x40, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, // 109
    0x80, 0x80, 0xC0, 0xC0, 0x80, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, // 110
    0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x80, 0x00, 0x3E, 0xFF, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x81, 0x7F, 0x3E, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, // 111
    0x80, 0x80, 0xC0, 0xC0, 0x80, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xC1, 0xFF, 0x3F, 0x40, 0x40, 0x7E, 0x7E, 0x40, 0x42, 0x02, 0x02, 0x00, 0x00, 0x00, // 112
    0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0xC0, 0x80, 0xC0, 0x00, 0x00, 0x7E, 0xFF, 0xC1, 0x80, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x42, 0x40, 0x7E, 0x7E, 0x40, 0x40, // 113
    0x80, 0x80, 0xC0, 0xC0, 0x80, 0x40, 0xC0, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, // 114
    0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0xC0, 0xE7, 0xCE, 0x8C, 0x1C, 0x18, 0xB9, 0x73, 0x02, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, // 115
    0x40, 0x40, 0xF0, 0xFC, 0x40, 0x40, 0x40, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, // 116
    0x40, 0x40, 0xC0, 0xC0, 0x00, 0x00, 0x40, 0x40, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, // 117
    0x40, 0xC0, 0xC0, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x40, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x03, 0x0F, 0x3C, 0xF0, 0xC0, 0x30, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x00, 0x40, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x03, 0x1F, 0xFE, 0xE0, 0x70, 0x0C, 0x03, 0x1F, 0xFE, 0xE0, 0x70, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x00, 0x40, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x80, 0x80, 0x61, 0x17, 0x0E, 0x3E, 0x71, 0xE0, 0x80, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, // 120
    0x40, 0xC0, 0xC0, 0xC0, 0x40, 0x00, 0x00, 0x00, 0x40, 0xC0, 0x40, 0x40, 0x00, 0x00, 0x03, 0x0F, 0x3C, 0xF0, 0xC0, 0x30, 0x0E, 0x01, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x30, 0x0C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 121
    0x00, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x81, 0xE0, 0x70, 0x38, 0x0E, 0x07, 0x03, 0x00, 0xC0, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, // 122
    0x00, 0x00, 0xF8, 0xFE, 0x02, 0x01, 0x01, 0x04, 0x0A, 0xFB, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x1E, 0x20, 0x60, 0x40, // 123
    0xFF, 0xFF, 0x7E, // 124
    0x01, 0x01, 0x02, 0xFE, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0xFB, 0x0A, 0x04, 0x40, 0x60, 0x20, 0x1E, 0x0E, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 // 127

};

#endif
