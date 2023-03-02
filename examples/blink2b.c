/* -----------------------------------------------------------------------
	Blink tutorial V2-b
	Alain GIBAUD, 1/2009
*/

#include <p18f2525.h>
#include <sys/types.h>
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
   INTCON2bits.INTEDG0 = 0;
   // INT1 on falling edge
   INTCON2bits.INTEDG1 = 0;
   // INT2 on falling edge
   INTCON2bits.INTEDG2 = 0;

   // set IT hi priority
   INTCON3bits.INT1P = 1;
   // set IT hi priority
   INTCON3bits.INT2P = 1;
   // note: INT0 has always hi priority

   // enable INT0
   INTCONbits.INT0E = 1;
   // enable INT1
   INTCON3bits.INT1E = 1;
   // enable INT2
   INTCON3bits.INT2E = 1;
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
#pragma saved_regs _r0,_r0+1,_r1,_r1+1,_r2,_r2+1,_r3,_r3+1,_r4,_r4+1,_r5,_r5+1,PRODL,PRODH 

   if ( INTCONbits.INT0F )
   {
      ++blink_delay;
      INTCONbits.INT0F = 0 ;
   }
   else if ( INTCON3bits.INT1F )
   {
      blink_delay = 10;
      INTCON3bits.INT1F = 0 ;
   }
   else if ( INTCON3bits.INT2F )
   {
      --blink_delay ;
      INTCON3bits.INT2F = 0 ;
   }
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


