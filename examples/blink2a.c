/* -----------------------------------------------------------------------
	Blink tutorial V2-a
	Alain GIBAUD, 1/2009
*/

#include <p18f2525.h>
#include <types.h>
#include <macros.h>

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
   TRISB = 0b11111111 ; // B as input
   PORTC = 0 ;
   TRISC = 0b11_000000;  // port C<7-6> as input, other pins as output

   OSCCON = 0b01110010 ; // internal clock 8Mhz (no crystal) see also config bits

   PIE1 = 0 ; 		// disable all interrupts
}

void delay( uint8_t i )
{
   uint16_t k  ;
   for( ; i  ; --i)
      for( k = 15000UL ; k ; --k)  ;
}

int8_t  main()
{
   uint8_t d = 10 ;
   // MCU registers inits
   MCU_init() ;

   BIT_1(PORTC, 0 );
   for( ;; )
   {
      delay(d) ;
      BIT_TOGGLE(PORTC, 0 ) ;
      if( !BIT_TST(PORTB, 0))
         ++d ;
      else if ( !BIT_TST(PORTB, 1))
         d = 10 ;
      else if (!BIT_TST(PORTB, 2))
         --d ;
   }

   return 0 ;
}

