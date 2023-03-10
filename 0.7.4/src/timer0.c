// Minimal timer0() library for CPIK

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


#include <timer0.h>
#include <interrupt.h>
#include "appConfig.h"

UINT16 clocks[8] = {0} ;
UINT8 running_clocks ;
UINT16 TMR0HL@0xfd6 ;
UINT16 globalclock[2] = {0};

/*
	This code can be called from ISR
*/
void reload_timer0()
{
	// Caution: TMR0 can't be written as a 16 bit value
	// because low byte write (to TMR0L) is used as a latch signal to
	// transmit TMR0H to effective time high byte
	// (unfortunatly code generated by cpik always write low byte first
	// so hi byte of timer is ignored !! )
	// However, reading TMR0 as a 16 bit value is OK.
	
	// valeurs pour 1s, avec prescaler / 128, clock 8Mhz
	//TMR0H = 49870 >> 8 ; // hi byte first
	//TMR0L = 49870 & 0xFF ;
	
	// valeurs pour 0.1 s avec prescaler /16, clock 8Mhz
	TMR0H = (65535-12500) >> 8 ; // hi byte first
	TMR0L = (65535-12500) & 0xFF ;
		
	// note: bit operation on SFR never uses movff, 
	// so the following instruction is safe during interrupt
	BIT0(INTCON,TMR0IF) ; // reset IF
}

void timer0_init() // IDEM
{
	/* timer valide, 16 bits, sur CPU clock, avec prescaler /256 (CPU clock = 16Mhz) */
	// T0CON = 0b10000111 ;	
	/* timer valide, 16 bits, 
		sur CPU clock, avec prescaler /128 (CPU clock = 8 MHz) 
	*/
#if FREQUENCY == 16
	T0CON = 0b10000100 ; // prescaler / 32 (ok pour 16Mhz)
#else
	T0CON = 0b10000011 ; // prescaler / 16 (ok pour 8Mhz)
#endif
	BIT1(INTCON,IPEN) ; // enable peripheral interrupts
	reload_timer0();
	BIT1(INTCON,TMR0IE) ; // enable timer interrupts
	//BIT1(INTCON,GIE) ; // enable interrupts
	UNMASK_HI_PRI_IT ;  // enable interrupts, new look
}
/* ------------------------------------------------
	Timer interrupt service routine
*/
UINT8 _timer0_sec =  0 ;
// bit 0 is toggled each 1/10 s
// bit 1 is toggled each second
UINT8 _timer0_flag ;

void timer0_ISR() 
{	

	UINT16 *p ;
	UINT8 k ;
	if( ++_timer0_sec == 10U)
	{
		_timer0_sec =  0 ;
		for(k = 1 , p = clocks ; k ; k<<=1, ++p)
		{
			if(running_clocks & k)
			{
				++(*p) ;
			}
		}	
		// increment global clock
		if( ++globalclock[0] == 0UL) ++globalclock[1] ;
		_timer0_flag ^= 2 ;
	}
	_timer0_flag ^= 1 ;
	reload_timer0() ;	
}


UINT8 timer0_flags()
{
	return _timer0_flag ;
}

UINT16 *get_globalclkock()
{
	return globalclock ;
}

UINT16 get_clock(UINT8 clocknum) 
{
	return 	clocks[clocknum] ;
}

UINT16 get_clockm(UINT8 clocknum) 
{
	return 	clocks[clocknum]/60UL ;
}

void start_clock( UINT8 clocknum) 
{
	BIT1(running_clocks, clocknum) ;
	clear_clock(clocknum);
}

void restart_clock( UINT8 clocknum) 
{
	BIT1(running_clocks, clocknum) ;
}

void stop_clock(UINT8 clocknum) 
{
	BIT0(running_clocks, clocknum) ;
}

void clear_clock(UINT8 clocknum) 
{
	clocks[clocknum] = 0 ;
}
