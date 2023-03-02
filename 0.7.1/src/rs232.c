#include <macros.h>
#include <rs232.h>
#include <device/p18f2525.h> // to be changed

void rs232_init()
{
	TRISC.7 = 1 ;
	// TRISC |= 0b10000000 ; // set bit 7 (input)
	// setbit(TRISC,7) ;
	TRISC.6 = 0 ;
	// TRISC &= 0b10111111 ;  // clear bit 6 (output)
	// clrbit(TRISC,6) ;
	
	//  0b00100100 ; // tx enabled, hi speed
	//TXSTA =  BIT(TXEN) | BIT(BRGH) ; 
	TXSTAbits.TXEN = 1 ;
	TXSTAbits.BRGH = 1 ;
	
	// 0b10010000 ; // serial port enabled, 8 bits,
	// continuous rx enabled, no it
	// RCSTA =  BIT(SPEN) | BIT(CREN) ;  
	RCSTAbits.SPEN = 1 ;
	RCSTAbits.CREN = 1 ;
	
	// 9600 bds, hi speed@16Mhz, p200
	SPBRG =  103 ; 
	// 9600 bds, hi speed@8Mhz, p200
	//SPBRG =  51 ; 
	// clear PIE1<4> = disable transmit it	
	// clear PIE1<5> = disable receive it
	//PIE1 &=  0b11001111 ; 
	PIE1bits.TXIE = 0 ;
	PIE1bits.RCIE = 0 ; // test the other style
}

void rs232_putchar(char c)
{
	if( c == '\n' ) // LF -> CR-LF
	{
		while( !(PIR1bits.TXIF) ) ; // wait for TXREG empty
		TXREG = '\r'  ;
		NOP ; NOP ; // because TXREG needs 2 instr to be valid	
	}
	while( !(PIR1bits.TXIF) ) ; // wait for TXREG empty
	TXREG = c ;	
}
// blocking rs232 read
char rs232_getchar()
{
	if( RCSTAbits.FERR) // framing error ?
		PRODH = RCREG ; // clear it by reading RCREG
	if( RCSTAbits.OERR) // overrun error ?
		RCSTAbits.CREN = 0 ; // clear bit CREN
		
	RCSTAbits.CREN = 1 ;
	while( !( PIR1bits.RCIF) ) ; // wait for RCREG full
	return RCREG ;
}
