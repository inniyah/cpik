/* ------------------------------------------------------
	EEPROM access
	Direct translation to C of ASM code proposed in Microchip data sheet
	Alain GIBAUD, 2008-02-26
*/
#include "appConfig.h"
#include <eeprom.h>
#include <interrupt.h>


UINT16 EEADRHL@0xFA9 ;

UINT8 ee_read(UINT16 addr)
{
   EEADRHL = addr ;
   BIT0(EECON1, EEPGD) ; // point to data memory
   BIT0(EECON1, CFGS) ;  // point to EEPROM
   BIT1(EECON1, RD) ; // read
   return EEDATA ;
}

UINT16 ee_read16(UINT16 addr)
{
	return ee_read(addr) | (((UINT16)ee_read(addr+1)) << 8) ;
}

void ee_write(UINT16 addr, UINT8 value)
{
   EEADRHL = addr ;
   EEDATA = value ;
   BIT0(EECON1, EEPGD) ; // point to data memory
   BIT0(EECON1, CFGS) ;  // point to EEPROM
   BIT1(EECON1, WREN) ; // write
   // BIT0(INTCON, GIE) ;	// disable interrupt
   DISABLE_IT ;
   // magic sequence !!
   EECON2 = 0x55 ;
   EECON2 = 0xAA ;
   BIT1(EECON1, WR) ;	// begin write
   //BIT1(INTCON, GIE) ;	// reenable interrupt
   ENABLE_IT ;
   while (GETBIT(EECON1, WR)) ; // wait for write complete ...

   BIT0(EECON1, WREN) ; // write disabled
}
/* --------------------------------------------------------
	The following initialization are correct for writing to EEPROM
	in polling mode.
	For IT mode, change each line and install a lo (or hi) priority ISR
*/
void ee_init()
{
   BIT0(IPR2, EEIP) ; // low pri IT on eeprom write termination
   BIT0(PIR2, EEIF) ; // IF cleared => ready for first IT
   BIT0(PIE2, EEIE) ; // disable IT associated to EEPROM write
   return ;
   // the following sequence is just a hack to insert data at eeprom addr in hex file
   // it does not correspond to executable code (and cannot be reached by exec flow)

   __asm__("ee___sav equ $") ;
   __asm__("\torg 0xF00000") ;
   __asm__("\tfill 0,1024") ; // 1K byte eeprom memory for 18F2525
   __asm__("\torg ee___sav") ;

}

/* ---------------------------------------------------------------
	Eeprom refresh NOT TESTED
*/
void ee_refresh()
{
   EEADRHL = 0UL ;
   BIT0(EECON1, EEPGD) ; // point to data memory
   BIT0(EECON1, CFGS) ;  // point to EEPROM
   BIT1(EECON1, WREN) ; // write
   BIT0(INTCON, GIE) ;	// disable interrupt

   __asm__("ee_refresh_loop") ;

   BIT1(EECON1, RD) ; // read current location
   // magic sequence !!
   EECON2 = 0x55 ;
   EECON2 = 0xAA ;
   BIT1(EECON1, WR) ;	// begin write
   // wait for write complete ...
   while (GETBIT(EECON1, WR)) ;

   // this is very clever asm code, from microchip data sheet
   // (really more compact that I can do in C ! )
   __asm__("\tincfsz EEADR,F,0\n\tbra ee_refresh_loop") ;
   __asm__("\tincfsz EEADRH,F,0\n\tbra ee_refresh_loop") ;


   BIT0(EECON1, WREN) ; // write disabled
   BIT1(INTCON, GIE) ;	// reenable interrupt
}
UINT8 ee_inc8(unsigned long addr)
{
   UINT8 v = ee_read(addr) ;
   ++v;
   ee_write(addr, v) ;
   return v;
}

void ee_inc16(unsigned long addr)
{
   UINT8 vl = ee_inc8(addr) ;
   if(vl == 0) ee_inc8(addr + 1) ;
}

void ee_write16(unsigned long addr, unsigned long v)
{
   ee_write(addr, (UINT8)v&0xFF) ;
   ee_write(addr + 1, (UINT8)(v >> 8)) ;
}

