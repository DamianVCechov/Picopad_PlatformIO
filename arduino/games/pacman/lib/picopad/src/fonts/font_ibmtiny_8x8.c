/**
 * Copyright (c) 2023 Miroslav Nemecek, Panda38@seznam.cz, hardyplotter2@gmail.com
 * Repository: https://github.com/Panda381/PicoLibSDK
 */

#include "picopad.h"

// format: 1-bit pixel graphics
// image width: 2048 pixels
// image height: 8 lines
// image pitch: 256 bytes
const uint8_t FontIbmTiny8x8[2048] __attribute__ ((aligned(4))) = {
	0x00, 0x7E, 0x7E, 0x6C, 0x10, 0x38, 0x10, 0x00, 0xFF, 0x00, 0xFF, 0x0F, 0x3C, 0x3F, 0x3F, 0x18, 
	0x80, 0x02, 0x18, 0x24, 0x7F, 0x3E, 0x00, 0x18, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x24, 0x24, 0x18, 0x00, 0x30, 0x10, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3C, 0x10, 0x3C, 0x3C, 0x08, 0x7E, 0x1C, 0x7E, 0x3C, 0x3C, 0x00, 0x00, 0x08, 0x00, 0x10, 0x3C, 
	0x3C, 0x18, 0x7C, 0x1C, 0x78, 0x7E, 0x7E, 0x1C, 0x42, 0x38, 0x0E, 0x62, 0x70, 0x63, 0x62, 0x18, 
	0x7C, 0x3C, 0x7C, 0x3C, 0x7F, 0x42, 0x41, 0x41, 0x41, 0x41, 0x7F, 0x78, 0x80, 0x78, 0x10, 0x00, 
	0x10, 0x00, 0x60, 0x00, 0x06, 0x00, 0x0C, 0x00, 0x60, 0x10, 0x02, 0x60, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x10, 0x30, 0x32, 0x00, 
	0x3C, 0x00, 0x0C, 0x3C, 0x42, 0x30, 0x10, 0x00, 0x3C, 0x42, 0x30, 0x24, 0x7C, 0x30, 0x42, 0x18, 
	0x0C, 0x00, 0x1F, 0x18, 0x00, 0x20, 0x18, 0x20, 0x00, 0x42, 0x42, 0x08, 0x18, 0x44, 0xF8, 0x1C, 
	0x0C, 0x0C, 0x04, 0x00, 0x32, 0x34, 0x3C, 0x38, 0x10, 0x00, 0x00, 0x42, 0x42, 0x00, 0x00, 0x00, 
	0x22, 0x55, 0xDB, 0x10, 0x10, 0x10, 0x14, 0x00, 0x00, 0x14, 0x14, 0x00, 0x14, 0x14, 0x10, 0x00, 
	0x10, 0x10, 0x00, 0x10, 0x00, 0x10, 0x10, 0x14, 0x14, 0x00, 0x14, 0x00, 0x14, 0x00, 0x14, 0x10, 
	0x14, 0x00, 0x00, 0x14, 0x10, 0x00, 0x00, 0x14, 0x10, 0x10, 0x00, 0xFF, 0x00, 0xF0, 0x0F, 0xFF, 
	0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x7C, 0x18, 0x18, 0x1C, 0x00, 0x02, 0x0C, 0x3C, 
	0x00, 0x10, 0x10, 0x08, 0x0C, 0x10, 0x18, 0x00, 0x30, 0x00, 0x00, 0x0F, 0x78, 0x30, 0x00, 0x00, 
	0x00, 0x81, 0xFF, 0xFE, 0x38, 0x7C, 0x10, 0x00, 0xFF, 0x3C, 0xC3, 0x03, 0x42, 0x21, 0x21, 0xDB, 
	0xE0, 0x0E, 0x3C, 0x24, 0x92, 0x63, 0x00, 0x3C, 0x38, 0x10, 0x18, 0x30, 0x00, 0x24, 0x10, 0xFE, 
	0x00, 0x38, 0x24, 0x24, 0x3E, 0x62, 0x48, 0x10, 0x20, 0x10, 0x44, 0x10, 0x00, 0x00, 0x00, 0x02, 
	0x42, 0x30, 0x42, 0x42, 0x18, 0x40, 0x20, 0x42, 0x42, 0x42, 0x10, 0x10, 0x10, 0x00, 0x08, 0x42, 
	0x42, 0x24, 0x22, 0x22, 0x24, 0x22, 0x22, 0x22, 0x42, 0x10, 0x04, 0x24, 0x20, 0x55, 0x52, 0x24, 
	0x22, 0x42, 0x22, 0x42, 0x49, 0x42, 0x41, 0x41, 0x22, 0x22, 0x42, 0x40, 0x40, 0x08, 0x28, 0x00, 
	0x10, 0x00, 0x20, 0x00, 0x02, 0x00, 0x12, 0x00, 0x20, 0x00, 0x00, 0x20, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x08, 0x4C, 0x08, 
	0x42, 0x44, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x82, 0x00, 0x18, 0x18, 
	0x00, 0x00, 0x24, 0x24, 0x42, 0x10, 0x24, 0x10, 0x42, 0x18, 0x00, 0x08, 0x24, 0x28, 0x4C, 0x12, 
	0x00, 0x00, 0x08, 0x04, 0x4C, 0x4C, 0x44, 0x44, 0x00, 0x00, 0x00, 0xC4, 0xC4, 0x10, 0x12, 0x48, 
	0x88, 0xAA, 0x77, 0x10, 0x10, 0x10, 0x14, 0x00, 0x00, 0x14, 0x14, 0x00, 0x14, 0x14, 0x10, 0x00, 
	0x10, 0x10, 0x00, 0x10, 0x00, 0x10, 0x10, 0x14, 0x14, 0x00, 0x14, 0x00, 0x14, 0x00, 0x14, 0x10, 
	0x14, 0x00, 0x00, 0x14, 0x10, 0x00, 0x00, 0x14, 0x10, 0x10, 0x00, 0xFF, 0x00, 0xF0, 0x0F, 0xFF, 
	0x00, 0x3C, 0x7E, 0x3F, 0x42, 0x00, 0x44, 0x33, 0x10, 0x24, 0x24, 0x20, 0x62, 0x04, 0x10, 0x42, 
	0x7E, 0x10, 0x08, 0x10, 0x12, 0x10, 0x18, 0x32, 0x48, 0x00, 0x00, 0x08, 0x44, 0x48, 0x00, 0x00, 
	0x00, 0xA5, 0xDB, 0xFE, 0x7C, 0x38, 0x38, 0x18, 0xE7, 0x66, 0x99, 0x05, 0x42, 0x3F, 0x3F, 0x3C, 
	0xF8, 0x3E, 0x7E, 0x24, 0x92, 0x38, 0x00, 0x7E, 0x7C, 0x10, 0x0C, 0x60, 0x40, 0x66, 0x38, 0xFE, 
	0x00, 0x38, 0x24, 0x7E, 0x40, 0x64, 0x30, 0x20, 0x40, 0x08, 0x38, 0x10, 0x00, 0x00, 0x00, 0x04, 
	0x46, 0x50, 0x02, 0x02, 0x28, 0x7C, 0x40, 0x04, 0x42, 0x42, 0x10, 0x10, 0x20, 0x7E, 0x04, 0x02, 
	0x5E, 0x42, 0x22, 0x40, 0x22, 0x28, 0x28, 0x40, 0x42, 0x10, 0x04, 0x28, 0x20, 0x49, 0x4A, 0x42, 
	0x22, 0x42, 0x22, 0x40, 0x08, 0x42, 0x41, 0x41, 0x14, 0x14, 0x04, 0x40, 0x20, 0x08, 0x44, 0x00, 
	0x08, 0x3C, 0x20, 0x3C, 0x02, 0x3C, 0x10, 0x3D, 0x2C, 0x30, 0x06, 0x24, 0x10, 0x76, 0x5C, 0x3C, 
	0x6C, 0x36, 0x6C, 0x3E, 0x7C, 0x42, 0x41, 0x41, 0x44, 0x42, 0x7C, 0x10, 0x10, 0x08, 0x00, 0x14, 
	0x40, 0x00, 0x3C, 0x38, 0x38, 0x38, 0x38, 0x3C, 0x3C, 0x3C, 0x3C, 0x18, 0x30, 0x18, 0x24, 0x00, 
	0x7C, 0x33, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x3E, 0x20, 0x7C, 0x78, 0x10, 
	0x38, 0x18, 0x00, 0x08, 0x00, 0x00, 0x44, 0x44, 0x10, 0x00, 0x00, 0x48, 0x4A, 0x00, 0x24, 0x24, 
	0x22, 0x55, 0xDB, 0x10, 0x10, 0xF0, 0x14, 0x00, 0xF0, 0xF4, 0x14, 0xFC, 0xF4, 0x14, 0xF0, 0x00, 
	0x10, 0x10, 0x00, 0x10, 0x00, 0x10, 0x1F, 0x14, 0x17, 0x1F, 0xF7, 0xFF, 0x17, 0xFF, 0xF7, 0xFF, 
	0x14, 0xFF, 0x00, 0x14, 0x1F, 0x1F, 0x00, 0x14, 0xFF, 0x10, 0x00, 0xFF, 0x00, 0xF0, 0x0F, 0xFF, 
	0x31, 0x42, 0x42, 0x54, 0x20, 0x3E, 0x44, 0x4C, 0x38, 0x42, 0x42, 0x18, 0x95, 0x3C, 0x20, 0x42, 
	0x00, 0x7C, 0x04, 0x20, 0x12, 0x10, 0x00, 0x4C, 0x48, 0x00, 0x00, 0x08, 0x44, 0x10, 0x3C, 0x00, 
	0x00, 0x81, 0xFF, 0xFE, 0xFE, 0xFE, 0x7C, 0x3C, 0xC3, 0x42, 0xBD, 0x7D, 0x42, 0x20, 0x21, 0xE7, 
	0xFE, 0xFE, 0x18, 0x24, 0x72, 0x44, 0x00, 0x18, 0x54, 0x54, 0xFE, 0xFE, 0x40, 0xFF, 0x7C, 0x7C, 
	0x00, 0x10, 0x00, 0x24, 0x3C, 0x08, 0x56, 0x00, 0x40, 0x08, 0xFE, 0x7C, 0x00, 0x7E, 0x00, 0x08, 
	0x4A, 0x10, 0x0C, 0x1C, 0x48, 0x02, 0x7C, 0x08, 0x3C, 0x3E, 0x00, 0x00, 0x40, 0x00, 0x02, 0x04, 
	0x52, 0x42, 0x3C, 0x40, 0x22, 0x38, 0x38, 0x40, 0x7E, 0x10, 0x04, 0x30, 0x20, 0x41, 0x46, 0x42, 
	0x3C, 0x42, 0x3C, 0x3C, 0x08, 0x42, 0x41, 0x49, 0x08, 0x08, 0x08, 0x40, 0x10, 0x08, 0x82, 0x00, 
	0x00, 0x02, 0x2E, 0x42, 0x3A, 0x42, 0x38, 0x42, 0x32, 0x10, 0x02, 0x28, 0x10, 0x49, 0x62, 0x42, 
	0x32, 0x4C, 0x32, 0x40, 0x10, 0x42, 0x41, 0x49, 0x28, 0x42, 0x08, 0x60, 0x00, 0x06, 0x00, 0x22, 
	0x42, 0x44, 0x42, 0x04, 0x04, 0x04, 0x04, 0x40, 0x42, 0x42, 0x42, 0x08, 0x10, 0x08, 0x42, 0x3C, 
	0x20, 0x0C, 0x7F, 0x3C, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x40, 0x70, 0x10, 0x44, 0x7C, 
	0x04, 0x08, 0x3C, 0x42, 0x7C, 0x62, 0x3E, 0x38, 0x20, 0x7E, 0x7E, 0xF6, 0xF6, 0x10, 0x48, 0x12, 
	0x88, 0xAA, 0xEE, 0x10, 0x10, 0x10, 0x14, 0x00, 0x10, 0x04, 0x14, 0x04, 0x04, 0x14, 0x10, 0x00, 
	0x10, 0x10, 0x00, 0x10, 0x00, 0x10, 0x10, 0x14, 0x10, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x14, 0x00, 0x00, 0x14, 0x10, 0x10, 0x00, 0x14, 0x10, 0x10, 0x00, 0xFF, 0x00, 0xF0, 0x0F, 0xFF, 
	0x4A, 0x7C, 0x40, 0x14, 0x18, 0x48, 0x44, 0x08, 0x44, 0x7E, 0x42, 0x3C, 0x89, 0x4A, 0x3C, 0x42, 
	0x7E, 0x10, 0x08, 0x10, 0x10, 0x10, 0x7E, 0x00, 0x30, 0x18, 0x00, 0x08, 0x44, 0x20, 0x3C, 0x00, 
	0x00, 0xBD, 0xC3, 0x7C, 0x7C, 0xFE, 0xFE, 0x3C, 0xC3, 0x42, 0xBD, 0x84, 0x3C, 0x20, 0x23, 0xE7, 
	0xF8, 0x3E, 0x18, 0x24, 0x12, 0x44, 0x7E, 0x7E, 0x10, 0x7C, 0x0C, 0x60, 0x40, 0x66, 0xFE, 0x38, 
	0x00, 0x10, 0x00, 0x7E, 0x02, 0x10, 0x88, 0x00, 0x40, 0x08, 0x38, 0x10, 0x00, 0x00, 0x00, 0x10, 
	0x52, 0x10, 0x30, 0x02, 0xFE, 0x02, 0x42, 0x10, 0x42, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x08, 
	0x5E, 0x7E, 0x22, 0x40, 0x22, 0x28, 0x28, 0x4E, 0x42, 0x10, 0x44, 0x28, 0x20, 0x41, 0x42, 0x42, 
	0x20, 0x4A, 0x28, 0x02, 0x08, 0x42, 0x22, 0x49, 0x14, 0x08, 0x10, 0x40, 0x08, 0x08, 0x00, 0x00, 
	0x00, 0x3E, 0x31, 0x40, 0x46, 0x7E, 0x10, 0x42, 0x22, 0x10, 0x02, 0x30, 0x10, 0x49, 0x42, 0x42, 
	0x32, 0x4C, 0x22, 0x3C, 0x10, 0x42, 0x22, 0x49, 0x10, 0x42, 0x10, 0x10, 0x10, 0x08, 0x00, 0x41, 
	0x3C, 0x44, 0x7E, 0x3C, 0x3C, 0x3C, 0x3C, 0x40, 0x7E, 0x7E, 0x7E, 0x08, 0x10, 0x08, 0x7E, 0x42, 
	0x38, 0x3F, 0x44, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x40, 0x20, 0x7C, 0x4F, 0x10, 
	0x3C, 0x08, 0x42, 0x42, 0x42, 0x52, 0x00, 0x00, 0x40, 0x40, 0x02, 0x29, 0x2A, 0x10, 0x24, 0x24, 
	0x22, 0x55, 0xDB, 0x10, 0xF0, 0xF0, 0xF4, 0xFC, 0xF0, 0xF4, 0x14, 0xF4, 0xFC, 0xFC, 0xF0, 0xF0, 
	0x1F, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0x1F, 0x17, 0x1F, 0x17, 0xFF, 0xF7, 0x17, 0xFF, 0xF7, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0xFF, 0xFF, 0xF0, 0x1F, 0xFF, 0xFF, 0xF0, 0x0F, 0x00, 
	0x44, 0x42, 0x40, 0x14, 0x20, 0x48, 0x7A, 0x08, 0x44, 0x42, 0x24, 0x42, 0x95, 0x52, 0x20, 0x42, 
	0x00, 0x10, 0x10, 0x08, 0x10, 0x10, 0x00, 0x32, 0x00, 0x18, 0x18, 0x08, 0x44, 0x78, 0x3C, 0x00, 
	0x00, 0x99, 0xE7, 0x38, 0x38, 0xD6, 0x7C, 0x18, 0xE7, 0x66, 0x99, 0x84, 0x18, 0x60, 0x67, 0x3C, 
	0xE0, 0x0E, 0x7E, 0x00, 0x12, 0x38, 0x7E, 0x3C, 0x10, 0x38, 0x18, 0x30, 0x7E, 0x24, 0xFE, 0x10, 
	0x00, 0x00, 0x00, 0x24, 0x7C, 0x26, 0x88, 0x00, 0x20, 0x10, 0x44, 0x10, 0x10, 0x00, 0x10, 0x20, 
	0x62, 0x10, 0x42, 0x42, 0x08, 0x42, 0x42, 0x10, 0x42, 0x04, 0x10, 0x10, 0x10, 0x7E, 0x08, 0x00, 
	0x40, 0x42, 0x22, 0x22, 0x24, 0x22, 0x20, 0x22, 0x42, 0x10, 0x44, 0x24, 0x22, 0x41, 0x42, 0x24, 
	0x20, 0x3C, 0x24, 0x42, 0x08, 0x42, 0x14, 0x49, 0x22, 0x08, 0x21, 0x40, 0x04, 0x08, 0x00, 0x00, 
	0x00, 0x42, 0x31, 0x42, 0x46, 0x40, 0x10, 0x3E, 0x22, 0x10, 0x42, 0x28, 0x10, 0x49, 0x42, 0x42, 
	0x2C, 0x34, 0x20, 0x02, 0x12, 0x46, 0x14, 0x49, 0x28, 0x3E, 0x20, 0x10, 0x10, 0x08, 0x00, 0x41, 
	0x0C, 0x44, 0x40, 0x44, 0x44, 0x44, 0x44, 0x3C, 0x40, 0x40, 0x40, 0x08, 0x10, 0x08, 0x42, 0x7E, 
	0x20, 0x44, 0x44, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3E, 0x24, 0x42, 0x3E, 0x42, 0x10, 0x44, 0x10, 
	0x44, 0x08, 0x42, 0x42, 0x42, 0x4A, 0x7E, 0x7C, 0x42, 0x40, 0x02, 0x43, 0x5F, 0x10, 0x12, 0x48, 
	0x88, 0xAA, 0x77, 0x10, 0x10, 0x10, 0x14, 0x14, 0x10, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x14, 0x00, 0x14, 0x00, 0x14, 0x14, 0x00, 0x14, 0x00, 
	0x00, 0x10, 0x14, 0x00, 0x00, 0x10, 0x14, 0x14, 0x10, 0x00, 0x10, 0xFF, 0xFF, 0xF0, 0x0F, 0x00, 
	0x4A, 0x7C, 0x40, 0x14, 0x42, 0x48, 0x40, 0x08, 0x38, 0x24, 0x24, 0x42, 0x62, 0x3C, 0x10, 0x42, 
	0x7E, 0x00, 0x00, 0x00, 0x10, 0x90, 0x18, 0x4C, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x3C, 0x00, 
	0x00, 0x81, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x00, 0xFF, 0x3C, 0xC3, 0x84, 0x7E, 0xE0, 0xE6, 0xDB, 
	0x80, 0x02, 0x3C, 0x24, 0x12, 0xCC, 0x7E, 0x18, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0x24, 0x18, 0x46, 0x76, 0x00, 0x10, 0x20, 0x00, 0x00, 0x10, 0x00, 0x10, 0x40, 
	0x3C, 0x7C, 0x7E, 0x3C, 0x1C, 0x3C, 0x3C, 0x10, 0x3C, 0x38, 0x10, 0x10, 0x08, 0x00, 0x10, 0x08, 
	0x3C, 0x42, 0x7C, 0x1C, 0x78, 0x7E, 0x70, 0x1E, 0x42, 0x38, 0x38, 0x63, 0x7E, 0x41, 0x42, 0x18, 
	0x70, 0x03, 0x72, 0x3C, 0x1C, 0x3C, 0x08, 0x36, 0x41, 0x1C, 0x7F, 0x78, 0x02, 0x78, 0x00, 0x00, 
	0x00, 0x3F, 0x2E, 0x3C, 0x3B, 0x3C, 0x38, 0x02, 0x62, 0x38, 0x42, 0x26, 0x38, 0x49, 0x42, 0x3C, 
	0x20, 0x04, 0x70, 0x7C, 0x0C, 0x3A, 0x08, 0x36, 0x44, 0x02, 0x7C, 0x0C, 0x10, 0x30, 0x00, 0x7F, 
	0x02, 0x3E, 0x3C, 0x3E, 0x3E, 0x3E, 0x3E, 0x06, 0x3C, 0x3C, 0x3C, 0x1C, 0x38, 0x1C, 0x42, 0x42, 
	0x7C, 0x3B, 0x47, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x02, 0x18, 0x3C, 0x08, 0x7C, 0x10, 0x45, 0x90, 
	0x3E, 0x1C, 0x3C, 0x3C, 0x42, 0x46, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x8C, 0x82, 0x10, 0x00, 0x00, 
	0x22, 0x55, 0xDB, 0x10, 0x10, 0x10, 0x14, 0x14, 0x10, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x14, 0x00, 0x14, 0x00, 0x14, 0x14, 0x00, 0x14, 0x00, 
	0x00, 0x10, 0x14, 0x00, 0x00, 0x10, 0x14, 0x14, 0x10, 0x00, 0x10, 0xFF, 0xFF, 0xF0, 0x0F, 0x00, 
	0x31, 0x40, 0x40, 0x14, 0x7E, 0x30, 0x40, 0x08, 0x10, 0x18, 0x66, 0x3C, 0x00, 0x40, 0x0C, 0x42, 
	0x00, 0x7C, 0x7E, 0x7E, 0x10, 0x90, 0x18, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7E, 0x7E, 0x00, 0x00, 0x38, 0x38, 0x00, 0xFF, 0x00, 0xFF, 0x78, 0x18, 0xC0, 0xC0, 0x18, 
	0x00, 0x00, 0x18, 0x00, 0x00, 0x78, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x70, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x08, 0x00, 0x00, 0xE6, 0x60, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x02, 0x00, 0x00, 0x00, 
	0x88, 0xAA, 0xEE, 0x10, 0x10, 0x10, 0x14, 0x14, 0x10, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x14, 0x00, 0x14, 0x00, 0x14, 0x14, 0x00, 0x14, 0x00, 
	0x00, 0x10, 0x14, 0x00, 0x00, 0x10, 0x14, 0x14, 0x10, 0x00, 0x10, 0xFF, 0xFF, 0xF0, 0x0F, 0x00, 
	0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 
};
