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
#ifndef TIMER0_H
#define TIMER0_H
#include <macros.h>
void reload_timer0() ;
void timer0_init() ;
void timer0_ISR() ;
UINT16 get_clock(UINT8 clocknum) ;
UINT16 get_clockm(UINT8 clocknum) ;
void start_clock(UINT8 clocknum) ;
void restart_clock(UINT8 clocknum) ;
void stop_clock(UINT8 clocknum) ;
void clear_clock(UINT8 clocknum) ;
UINT8 timer0_flags() ;
#define T0_1S_FLAG 	2
#define T0_0_1S_FLAG 	1
#endif
