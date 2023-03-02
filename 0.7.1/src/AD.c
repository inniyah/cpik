


#include "appConfig.h"
#include <AD.h>
#include <macros.h>

void AD_init()
{
	/* AN0..4 analogique, reste en digital , VREF- =GND, VREF+ =AN3 */
	ADCON1 = 0b00011010 ;
#if FREQUENCY == 16
	// acquisition time = 20 TAD, AD conv freq = Fosc/32 (pour 16 Mhz)	
	ADCON2 = 0b10_111_010 ;	
#else
	// acquisition time = 16 TAD, AD conv freq = Fosc/32 (OK pour 8 Mhz)	
	ADCON2 = 0b10_110_010 ;	
#endif
	/* RA0..RA4 as inputs */
	TRISA |= 0b00011111 ;  

	/* pas d'interruption AD */
	BIT0(PIE1,ADIE) ;
	/* valider AD */
	BIT1(ADCON0, ADON) ;
}

/*
	NOTE: channel 3 (AN3) étant utilisé pour entrer la référence de tension VREF+
	Les 4 voies de mesures sont sur AN0, AN1, AN2 et AN4
	(soit les codes 0000 0001 0010 0100)
*/

// 16 bit SFR registers

UINT16 ADRESHL@0xfc3 ; // ADRESH/L : DO NOT USE ADRES, wich is defined as int


UINT16 AD_get(UINT8 channel)
{
	if(channel == 3) channel = 4 ; // channel 3 used for VREF+

	// choose  channel
	ADCON0 &= 0b11000011 ; // mask channel bits
	ADCON0 |= (channel << 2) ; // then force channel number


	/* lance la mesure */
	BIT1(ADCON0, GO);

	while(ADCON0 & (1<<GO)) ;
	
	// CAUTION: symbol ADRES exported by p18f2525.h is an unsigned int (should be unsigned long)!!
	return ADRESHL ;
}
