/*
	Minor modifications by Alain Gibaud for the port to the cpik compiler
	(alain.gibaud@free.fr)
*/ 
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

/*-------------------------------------------------------------------------
   math.h: Floating point math function declarations

   Copyright (C) 2001, Jesus Calvino-Fraga, jesusc@ieee.org

   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2.1, or (at your option) any
   later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License 
   along with this library; see the file COPYING. If not, write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.

   As a special exception, if you link this library with other files,
   some of which are compiled with SDCC, to produce an executable,
   this library does not by itself cause the resulting executable to
   be covered by the GNU General Public License. This exception does
   not however invalidate any other reasons why the executable file
   might be covered by the GNU General Public License.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

#ifndef _INC_MATH
#define _INC_MATH

#undef  HUGE_VALF
#define HUGE_VALF   3.402823466e+38

#define PI          3.1415926536
#define TWO_PI      6.2831853071
#define HALF_PI     1.5707963268
#define QUART_PI    0.7853981634
#define iPI         0.3183098862
#define iTWO_PI     0.1591549431
#define TWO_O_PI    0.6366197724

/* EPS=B**(-t/2), where B is the radix of the floating-point representation
   and there are t base-B digits in the significand.  Therefore, for floats
   EPS=2**(-12).  Also define EPS2=EPS*EPS. */
#define EPS 244.14062E-6
#define EPS2 59.6046E-9


/**********************************************
 * Prototypes for float ANSI C math functions *
 **********************************************/

/* Trigonometric functions */
float sinf( float x) ;
float cosf( float x) ;
float tanf( float x) ;
float cotf( float x) ;
float asinf( float x) ;
float acosf( float x) ;
float atanf( float x) ;
float atan2f( float x,  float y);

/* Hyperbolic functions */
float sinhf( float x) ;
float coshf( float x) ;
float tanhf( float x) ;

/* Exponential, logarithmic and power functions */
float expf( float x);
float logf( float x) ;
float log10f( float x) ;
float powf( float x,  float y);
float sqrtf( float a) ;

/* Nearest integer, absolute value, and remainder functions */
float fabsf( float x) ;
float frexpf( float x, int *pw2);
float ldexpf( float x,  int pw2);
float ceilf(float x) ;
float floorf(float x) ;
float modff(float x, float * y);

#endif  /* _INC_MATH */
