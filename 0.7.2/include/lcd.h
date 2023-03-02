/*
;   Copyright (C) 2011, Alain Gibaud   alain.gibaud@free.fr
;
;   This file is part of the CPIK library
;   ------------------------------------------------------- 
;   This library is free software; you can redistribute it and/or modify it
;   under the terms of the GNU General Public License as published by the
;   Free Software Foundation; either version 2.1, or (at your option) any
;   later version.
 
;   This library is distributed in the hope that it will be useful,
;   but WITHOUT ANY WARRANTY; without even the implied warranty of
;   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;   GNU General Public License for more details.
 
;  You should have received a copy of the GNU General Public License 
;   along with this library; see the file COPYING. If not, write to the
;   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
;   MA 02110-1301, USA.
 
;   As a special exception, if you link this library with other files,
;   some of which are compiled with CPIK, to produce an executable,
;   this library does not by itself cause the resulting executable to
;   be covered by the GNU General Public License. This exception does
;   not however invalidate any other reasons why the executable file
;   might be covered by the GNU General Public License.

*/

#ifndef LCD_H
#define LCD_H
#include <rom.h>
void lcd_init(unsigned int cnt) ;
#define lcd_init_Mhz(freq) lcd_init((freq)*2) 

void lcd_putchar(char c); // display c at current cursor position
void lcd_move(int pos) ;  // move cursor to pos (line 0 begins at 0, line 1 begins at 0x40)
void lcd_clear() ;        // erase display
void lcd_hex4(unsigned int c) ;    // display  hex nibble
void lcd_define_char(char c,const char bitmap[8]) ; // define a char as a 5x8 matrix 
// the followings are not necessary because supported by hi-level stdio routines
void lcd_hex8(unsigned int c) ;    // display  hex byte
void lcd_hex16(unsigned long n) ;  // display hex 16 bit word 
void lcd_puts(const char *s) ; // put a string constant
void lcd_putcmd(char c) ; // goto command mode and send command c

// the following allow to send data directly from ROM (ie: program) memory to LCD display
void lcd_Rputs(ROMptr) ;  // send a Nul-terminated (ie: C-like) string
void lcd_Rputb(ROMptr, unsigned int size) ;  // send "size" characters from block "p"

// print a text that is located at return addr of the function call
// the most handy way to call it is to use the lcd_Rprint()  macro as following:
// lcd_Rprint("hi !!\0") ;
void lcd_RIputs_() ;
#define lcd_RIputs(txt) { lcd_RIputs_() ; ROM_TXT(txt) ; }


// NOT TESTED, do not use
void lcd_iprint() ;

// macro for easy configuration of LCD connection
#define CONFIGURE_LCD_RS( port, pin ) \
   __asm__("#define LCD_RS_PORT	" #port) ;\
   __asm__("#define LCD_RS_PIN " #pin) ;

#define CONFIGURE_LCD_E( port, pin ) \
   __asm__("#define LCD_E_PORT	" #port) ;\
   __asm__("#define LCD_E_PIN " #pin) ;

#define CONFIGURE_LCD_DATA4( port, pin ) \
   __asm__("#define LCD_DATA4_PORT " #port) ;\
   __asm__("#define LCD_DATA4_PIN " #pin) ;

#define CONFIGURE_LCD_DATA5( port, pin ) \
   __asm__("#define LCD_DATA5_PORT " #port) ;\
   __asm__("#define LCD_DATA5_PIN " #pin) ;

#define CONFIGURE_LCD_DATA6( port, pin ) \
   __asm__("#define LCD_DATA6_PORT " #port) ;\
   __asm__("#define LCD_DATA6_PIN " #pin) ;

#define CONFIGURE_LCD_DATA7( port, pin ) \
   __asm__("#define LCD_DATA7_PORT " #port) ;\
   __asm__("#define LCD_DATA7_PIN " #pin) ;


#endif
