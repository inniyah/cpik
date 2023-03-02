#ifndef EEPROM_H
#define EEPROM_H
#include <macros.h>
UINT8 ee_read(UINT16 addr) ;
UINT16 ee_read16(UINT16 addr) ;
void ee_init() ;
void ee_write(UINT16 addr, UINT8 value);
void ee_write16(UINT16 addr, UINT16 value);
UINT8 ee_inc8(UINT16 addr) ;
void ee_inc16(UINT16 addr) ;
#endif
