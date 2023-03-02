/* -----------------------------------------------------------------------
	"AD conversion"  tutorial  part b
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
   return   laddrtab[line] + col ;
}

void AD_init()
{
   /* AN0=analog input, other pins=digital , VREF- =GND, VREF+ = VCC */
   ADCON1 = 0b00_00_1110 ;
   // acquisition time = 16 TAD, AD conv freq = Fosc/32 (OK for 8 Mhz)
   ADCON2 = 0b10_110_010 ;
   /* RA0..RA7 as inputs */
   TRISA |= 0b11111111 ;

   /* no AD conversion termination interrupt */
   PIE1bits.ADIE = 0 ;
   /* enable  AD */
   ADCON0bits.ADON = 1 ;
}

// 16 bit SFR registers

uint16_t  ADRESHL@0xfc3 ; // ADRESH/L : DO NOT USE ADRES, wich is defined as int

uint16_t  AD_get( uint8_t channel)
{
   // choose  channel
   ADCON0 &= 0b11000011 ; 		// mask channel bits
   ADCON0 |= (channel << 2) ; 	// then set channel number


   /* lance la mesure */
   ADCON0bits.GO = 1;

   while( ADCON0bits.GO ) ;

   // CAUTION: symbol ADRES exported by p18f2525.h is an unsigned int (should be unsigned long)!!
   return ADRESHL ;
}
void display_voltage(uint16_t v)
{
   uint16_t  vi = v / 100UL ;
   printf("%lu.", vi) ;
   vi = ( v % 100UL) ;
   if (vi < 10UL) printf("0") ;
   printf("%lu v", vi) ;
}



void voltage_bar(uint16_t  v)
{
   uint8_t n = 0 , step, charcod   ;

   // displays progress bar
   for(step = 50U, charcod = 5 ; step >= 10U ; step -= 10U, --charcod )
   {
      while( v >= step)
      {
         printf("%c", charcod) ;
         v -= step ;
         ++n ;
      }
   }
   // adds  spaces if needed
   for( ; n < 10U ; ++n) printf(" ") ;
}


void define_bargraph_chars()
{
   /* user-defined chars for progress bar */
   static char chr[][8] =
      {
         {0} , // 0 bar
         { 0, 0, 0b00010000,  0b00010000 ,  0b00010000,  0b00010000, 0, 0 }, // 1 bar
         { 0, 0, 0b00011000,  0b00011000 ,  0b00011000,  0b00011000, 0, 0 }, // 2 bars
         { 0, 0, 0b00011100,  0b00011100 ,  0b00011100,  0b00011100, 0, 0 }, // 3 bars
         { 0, 0, 0b00011110,  0b00011110 ,  0b00011110,  0b00011110, 0, 0 }, // 4 bars
         { 0, 0, 0b00011111,  0b00011111 ,  0b00011111,  0b00011111, 0, 0 }  // 5 bars
      } ;

   uint8_t  i ;
   for(i = 0 ; i < 6U ; ++i)
      lcd_define_char(i, chr[i]) ;
}

int8_t  main()
{
   uint16_t voltage ;

   // MCU registers inits
   MCU_init() ;
   AD_init() ;

   lcd_init(15) ; // 8 MHz clock
   set_putchar_vector(&lcd_putchar) ;
   define_bargraph_chars() ;

   lcd_clear() ;

   for( ; ; )
   {
      voltage = AD_get(0) ;
      // convert to 10 mV units
      voltage = voltage * 500ULL / 1023ULL  ;
      lcd_move(lcd_cursor_addr(0, 0)) ;
      display_voltage( voltage) ;
      lcd_move(lcd_cursor_addr(0, 8)) ;
      printf("[") ;
      voltage_bar(voltage) ;
      printf("]") ;
   }

   return 0 ;
}

