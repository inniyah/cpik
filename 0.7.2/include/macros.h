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
#ifndef MACRO_H
#define MACRO_H
/* CPIK V0.5.1 */

/* portability : DO NOT USE these macros - consider to use typdefs from types.h */
#define UINT8				unsigned int
#define INT8				int
#define UINT16				unsigned long
#define INT16				long

/* bit manipulation */
// set bit
#define BIT_1(reg, bit) ((reg) |= (1<< (bit))) 
// reset bit
#define BIT_0(reg, bit) ((reg) &= ~(1<< (bit))) 
// 0 is bit not set, != 0 if set
#define BIT_TST(reg,bit) ((reg) & (1<< (bit))) 
// generates a mask for bit b
#define BIT_MASK(b) (1<<(b))
// invert bit bit
#define BIT_TOGGLE(reg, bit) ((reg) ^= (1<< (bit))) 
// treg.tbit = sreg.sbit
#define BIT_COPY(treg, tbit, sreg, sbit) \
	if( BIT_TST(sreg,sbit) ) BIT_1(treg,tbit) ; else  BIT_0(treg,tbit) ;
// treg.tbit = ~sreg.sbit
#define BIT_NCOPY(treg, tbit, sreg, sbit) \
	if( BIT_TST(sreg,sbit) ) BIT_0(treg,tbit) ; else  BIT_1(treg,tbit) ;
// treg.tbit = flag
#define BIT_WRITE(treg, tbit, flag) \
        do { if( flag ) BIT_1(treg,tbit) ; else  BIT_0(treg,tbit) ; } while(0)


/* misc */
#define NOP __asm__("\tnop")
#define CLEAR_WATCHDOG __asm__("\tclrwdt")

#endif
