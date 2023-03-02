/* -----------------------------------------------------------------------
	"Hello LCD"  tutorial  part b
	Alain GIBAUD, 3/2009
*/

#include <p18f2525.h>
#include <sys/types.h>
#include <macros.h>
#include <lcd.h>
#include <stdio.h>


// internal 8Mhz clock, both RA6 anf RA7 are usable as I/O
#pragma   _CONFIG1H B'00001000'
// not used
// #pragma     _CONFIG1L 0xFF
// WDT not  enabled, will be enabled by software if needed
#pragma  _CONFIG2H B'00010000'
// PWRT disabled, BOR disabled,BOR=2V
#pragma  _CONFIG2L B'00011001'
// MCLR disabled, no AD on port B
#pragma  _CONFIG3H B'00000000'
// not used
// #pragma _CONFIG3L 0xFF
// not used
// #pragma _CONFIG4H 0xFF
// no DEBUG, reset when stack overflow, no LVP
#pragma  _CONFIG4L B'10000001'
// no protection
#pragma  _CONFIG5H B'11000000'
// no protection
#pragma  _CONFIG5L B'00001111'
// no protection
#pragma  _CONFIG6H B'11100000'
// no protection
#pragma  _CONFIG6L B'00001111'
// no protection
#pragma  _CONFIG7H B'01000000'
// no protection
#pragma  _CONFIG7L B'00001111'


/* -------------------------------------------------------------------
	MCU Default initializations
	May be overwritten by specific needs
*/

void MCU_init()
{
   RCON = 0 ;
   INTCON = 0 ;
   INTCON2 = 0b10000000 ; // PORTB pullups disabled
   INTCON3 = 0 ;
   PORTA = 0 ;
   TRISA = 0b11111111 ; // all bits from port A as input
   PORTB = 0 ;
   TRISB = 0b00000000 ; // B as output
   PORTC = 0 ;
   TRISC = 0b11111111;  // port C as input

   OSCCON = 0b01110010 ; // internal clock 8Mhz (no crystal) see also config bits

   PIE1 = 0 ; 		// disable all interrupts
}

#define LCD_COLS 20

uint8_t lcd_cursor_addr( uint8_t line,  uint8_t col)
{
#if LCD_COLS == 16
   static uint8_t laddrtab[4] = { 0x0, 0x40 , 0x10, 0x50 } ;
#elif LCD_COLS == 20
   static uint8_t laddrtab[4] = { 0x0, 0x40 , 0x14, 0x54 } ;
#elif LCD_COLS == 24
   static  uint8_t laddrtab[4] = { 0x0, 0x20 , 0x40, 0x60 } ;
#else
   #error "LCD_COLS should be either 16 20 or 24"
#endif
   return   laddrtab[line]+ col ;
}

int8_t  main()
{
   // MCU registers inits
   MCU_init() ;

   lcd_init(15) ; // 8 MHz clock
   set_putchar_vector(&lcd_putchar) ;

   lcd_clear() ;

   lcd_move(lcd_cursor_addr(1, 5)) ;

   printf("Hello %c%s", 'K'+1, "CD !") ;

   for( ;; ) ;
   return 0 ;
}


