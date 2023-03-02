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
#ifndef TYPE_H
// ANSI compliant type definitions 
// (to be continued)
/* CPIK V0.6.0 */
#define TYPE_H
#warning "types.h has moved : please use sys/types.h"
#include <sys/types.h>
/*
#ifdef __CPIK__
typedef int int8_t;
typedef unsigned int uint8_t;
typedef long int16_t;
typedef unsigned long uint16_t;
typedef char char_t ;
typedef unsigned char uchar_t ;
typedef long long int32_t ;
typedef unsigned long long uint32_t ;
typedef unsigned long size_t;
typedef long long ptrdiff_t ;
#else
typedef char int8_t ;
typedef int int16_t ;
typedef unsigned char uchar_t ;
typedef unsigned int uint16_t ;
typedef long int32_t ;
typedef unsigned long uint32_t ;
#endif
*/
#endif

