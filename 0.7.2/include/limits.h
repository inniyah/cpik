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
#ifndef LIMITS_H
#define LIMITS_H

/* integer limits values for cpik pic18 compiler V0.5.x and higher */

/* Number of bits in a `char'.	*/
#  define CHAR_BIT	8

/* Minimum and maximum values a `signed char' can hold.  */
#  define SCHAR_MIN	(-128)
#  define SCHAR_MAX	127

/* Maximum value an `unsigned char' can hold.  (Minimum is 0.)  */
#  define UCHAR_MAX	255

/* Minimum and maximum values a `char' can hold.  */
#   define CHAR_MIN	SCHAR_MIN
#   define CHAR_MAX	SCHAR_MAX

/* Minimum and maximum values a `signed short int' can hold.  */
#  define SHRT_MIN	SCHAR_MIN
#  define SHRT_MAX	SCHAR_MAX

/* Maximum value an `unsigned short int' can hold.  (Minimum is 0.)  */
#  define USHRT_MAX	UCHAR_MAX

/* Minimum and maximum values a `signed int' can hold.  */
#  define INT_MIN	(-INT_MAX - 1)
#  define INT_MAX	127

/* Maximum value an `unsigned int' can hold.  (Minimum is 0.)  */
#  define UINT_MAX	65535U

/* Minimum and maximum values a `signed long int' can hold.  */
#  define LONG_MAX	32767L
#  define LONG_MIN	(-LONG_MAX - 1L)

/* Maximum value an `unsigned long int' can hold.  (Minimum is 0.)  */
#   define ULONG_MAX	65535UL

/* Minimum and maximum values a `signed long long int' can hold.  */
#   define LLONG_MAX	2147483647LL
#   define LLONG_MIN	(-LLONG_MAX - 1LL)

/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0.)  */
#   define ULLONG_MAX	4294967295ULL

#endif

