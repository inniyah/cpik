/* -----------------------------------------------------------------------
	Blink tutorial V2-b
	Alain GIBAUD, 1/2009
*/

#include <p18f2525.h>
#include <types.h>
#include <macros.h>
#include <interrupt.h>


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
   TRISC = 0b11_00_111_0;  // port C[7-6] C[1-2-3] and as input, other pins as output

   OSCCON = 0b01110010 ; // internal clock 8Mhz (no crystal) see also config bits

   PIE1 = 0 ; 		// disable all interrupts
}


void IT_init()
{
   // INT0 on falling edge
   BIT_0(INTCON2, INTEDG0) ;
   // INT1 on falling edge
   BIT_0(INTCON2, INTEDG1) ;
   // INT2 on falling edge
   BIT_0(INTCON2, INTEDG2) ;

   // set IT hi priority
   BIT_1(INTCON3, INT1P) ;
   // set IT hi priority
   BIT_1(INTCON3, INT2P) ;
   // note: INT0 has always hi priority


   // enable INT0
   BIT_1(INTCON, INT0E) ;
   // enable INT1
   BIT_1(INTCON3, INT1E) ;
   // enable INT2
   BIT_1(INTCON3, INT2E) ;
}

uint8_t blink_delay = 10;

void delay( uint8_t i )
{
   uint16_t k ;
   uint8_t  my_delay  ;
   for(  my_delay = blink_delay; i  ; --i)
      for( k = 5000 ; k ; --k)
         if(blink_delay != my_delay) return  ;
}



__interrupt__ void hi_pri_ISR()
{
   SAVE_REGS ; //  defined in interrupt.h

   if ( BIT_TST(INTCON, INT0F) )
   {
      ++blink_delay;
      BIT_0(INTCON, INT0F) ;
   }
   else if ( BIT_TST(INTCON3, INT1F) )
   {
      blink_delay = 10;
      BIT_0(INTCON3, INT1F) ;
   }
   else if ( BIT_TST(INTCON3, INT2F) )
   {
      --blink_delay ;
      BIT_0(INTCON3, INT2F) ;
   }

   RESTORE_REGS ;
}


int8_t  main()
{
   // MCU registers inits
   MCU_init() ;

   // Interrupt inits
   IT_init() ;

   // 	enable hi pri interrupts
   UNMASK_HI_PRI_IT ;

   BIT_1(PORTC, 0 );
   for( ;; )
   {
      delay(blink_delay) ;
      BIT_TOGGLE(PORTC, 0 ) ;
   }

   return 0 ;
}


