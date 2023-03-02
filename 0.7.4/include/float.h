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
#ifndef _FLOAT_H__
#define _FLOAT_H__

/*
	Part of the standard ANSI C  float.h
        ------------------------------------
*/

/* Radix of exponent representation, b. */
#define FLT_RADIX	2

/* Number of base-FLT_RADIX digits in the significand, p.  */
#define FLT_MANT_DIG	24

/* Number of decimal digits, q, such that any floating-point number with q
   decimal digits can be rounded into a floating-point number with p radix b
   digits and back again without change to the q decimal digits,

	p * log10(b)			if b is a power of 10
	floor((p - 1) * log10(b))	otherwise
*/
#define FLT_DIG		6

/* Minimum int x such that FLT_RADIX**(x-1) is a normalized float, emin */
#define FLT_MIN_EXP	-125L

/* Minimum negative integer such that 10 raised to that power is in the
   range of normalized floating-point numbers,

	ceil(log10(b) * (emin - 1))
*/
#define FLT_MIN_10_EXP	-37

/* Maximum int x such that FLT_RADIX**(x-1) is a representable float, emax.  */
#define FLT_MAX_EXP	128L

/* Maximum integer such that 10 raised to that power is in the range of
   representable finite floating-point numbers,

	floor(log10((1 - b**-p) * b**emax))
*/
#define FLT_MAX_10_EXP	38

/* Maximum representable finite floating-point number,

	(1 - b**-p) * b**emax
*/
#define FLT_MAX		3.40282347e+38f
// may be defined elsewhere
#undef HUGE_VALF
#define HUGE_VALF 	FLT_MAX

/* The difference between 1 and the least value greater than 1 that is
   representable in the given floating point type, b**1-p.  */
#define FLT_EPSILON	1.19209290e-7f

/* Minimum normalized positive floating-point number, b**(emin - 1).  */
#define FLT_MIN		1.17549435e-38f

/* Addition rounds to 0: zero, 1: nearest, 2: +inf, 3: -inf, -1: unknown.  */
#define FLT_ROUNDS 	1

#endif /* _FLOAT_H___ */
