#ifndef SYS_TYPE_H
// ANSI compliant type definitions 
// (to be continued)
/* CPIK V0.6.0 */
#define SYS_TYPE_H

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

#endif

