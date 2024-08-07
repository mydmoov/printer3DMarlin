/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Tongue-in-cheek placeholder for a more Marlin-specific bitmap
 * The joke is that every "CR-10" has different branding!
 * Made using The Gimp and...
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
//#define CUSTOM_BOOTSCREEN_BMPWIDTH  54
//#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'imgonline-com-ua-resize-WHuEsVKhgY7lb.bmp'
 */
 /**
  * Made with Marlin Bitmap Converter
  * https://marlinfw.org/tools/u8glib/converter.html
  *
  * This bitmap from the file 'logofinal.bmp'
  /**
   * Made with Marlin Bitmap Converter
   * https://marlinfw.org/tools/u8glib/converter.html
   *
   * This bitmap from the file 'logomod.jpg'
   */
   /**
	* Made with Marlin Bitmap Converter
	* https://marlinfw.org/tools/u8glib/converter.html
	*
	* This bitmap from the file 'A20.bmp'
	*/
   
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
   
   const unsigned char custom_start_bmp[] PROGMEM = {
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x80,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFC,0x1E,0x2E,0x40,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x3E,0x29,0x40,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2E,0x40,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFE,0x29,0x40,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0x40,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x0F,0xFE,0x03,0xFE,0x10,0x80,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFE,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFE,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFB,0xFF,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFD,0xFF,0xBF,0xE0,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFD,0xFF,0xBF,0xE0,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFB,0xFF,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0x80,0x3E,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFE,0x3E,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x1F,0xC3,0xFE,0x7E,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x00,0xFE,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFE,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFE,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0x3E,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x1E,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x7F,0x87,0xE1,0xF8,0x7E,0xFF,0x87,0xE0,0xFD,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x00,0xFF,0x8F,0xE3,0xF8,0xFE,0xFF,0x8F,0xE3,0xFD,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xFF,0x9F,0xE7,0xF9,0xFE,0xFF,0x9F,0xE7,0xFD,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xC0,0x38,0x0E,0x03,0x80,0x1C,0x38,0x07,0x01,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xC0,0x38,0x0E,0x03,0x80,0x1C,0x38,0x0E,0x01,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xCF,0xBF,0xEF,0xFB,0xFE,0x1C,0x3F,0xEE,0x01,0xFF,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xCF,0xBF,0xEF,0xFB,0xFE,0x1C,0x3F,0xEE,0x01,0xFF,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xCF,0xBF,0xEF,0xFB,0xFE,0x1C,0x3F,0xEE,0x01,0xFF,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xC1,0xB8,0x0E,0x03,0x80,0x1C,0x38,0x0E,0x01,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xC1,0xB8,0x0E,0x03,0x80,0x1C,0x38,0x07,0x01,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x01,0xFF,0x9F,0xE7,0xF9,0xFE,0x1C,0x1F,0xE7,0xFD,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x00,0xFF,0x8F,0xE3,0xF8,0xFE,0x1C,0x0F,0xE3,0xFD,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x00,0x7F,0x87,0xE1,0xF8,0x7E,0x1C,0x07,0xE1,0xFD,0xC3,0x80,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
   };
  
