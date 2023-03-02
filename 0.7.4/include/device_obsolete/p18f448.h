#ifndef DEVICE
#define DEVICE p18f448
#define p18f448

// ======================================
//         PROCESSOR : p18f448
// ======================================

// This file has been automatically generated from Microchip's "p18f448.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xf00 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        RXF0SIDH
// ------------------------------
unsigned int RXF0SIDH@0xf00 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXF0SIDHbits@0xf00  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF0SIDL
// ------------------------------
unsigned int RXF0SIDL@0xf01 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDEN : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF0SIDLbits@0xf01  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF0EIDH
// ------------------------------
unsigned int RXF0EIDH@0xf02 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXF0EIDHbits@0xf02  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF0EIDL
// ------------------------------
unsigned int RXF0EIDL@0xf03 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXF0EIDLbits@0xf03  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF1SIDH
// ------------------------------
unsigned int RXF1SIDH@0xf04 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXF1SIDHbits@0xf04  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF1SIDL
// ------------------------------
unsigned int RXF1SIDL@0xf05 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDEN : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF1SIDLbits@0xf05  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF1EIDH
// ------------------------------
unsigned int RXF1EIDH@0xf06 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXF1EIDHbits@0xf06  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF1EIDL
// ------------------------------
unsigned int RXF1EIDL@0xf07 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXF1EIDLbits@0xf07  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF2SIDH
// ------------------------------
unsigned int RXF2SIDH@0xf08 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXF2SIDHbits@0xf08  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF2SIDL
// ------------------------------
unsigned int RXF2SIDL@0xf09 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDEN : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF2SIDLbits@0xf09  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF2EIDH
// ------------------------------
unsigned int RXF2EIDH@0xf0a ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXF2EIDHbits@0xf0a  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF2EIDL
// ------------------------------
unsigned int RXF2EIDL@0xf0b ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXF2EIDLbits@0xf0b  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF3SIDH
// ------------------------------
unsigned int RXF3SIDH@0xf0c ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXF3SIDHbits@0xf0c  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF3SIDL
// ------------------------------
unsigned int RXF3SIDL@0xf0d ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDEN : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF3SIDLbits@0xf0d  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF3EIDH
// ------------------------------
unsigned int RXF3EIDH@0xf0e ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXF3EIDHbits@0xf0e  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF3EIDL
// ------------------------------
unsigned int RXF3EIDL@0xf0f ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXF3EIDLbits@0xf0f  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF4SIDH
// ------------------------------
unsigned int RXF4SIDH@0xf10 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXF4SIDHbits@0xf10  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF4SIDL
// ------------------------------
unsigned int RXF4SIDL@0xf11 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDEN : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF4SIDLbits@0xf11  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF4EIDH
// ------------------------------
unsigned int RXF4EIDH@0xf12 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXF4EIDHbits@0xf12  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF4EIDL
// ------------------------------
unsigned int RXF4EIDL@0xf13 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXF4EIDLbits@0xf13  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF5SIDH
// ------------------------------
unsigned int RXF5SIDH@0xf14 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXF5SIDHbits@0xf14  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF5SIDL
// ------------------------------
unsigned int RXF5SIDL@0xf15 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDEN : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF5SIDLbits@0xf15  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF5EIDH
// ------------------------------
unsigned int RXF5EIDH@0xf16 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXF5EIDHbits@0xf16  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF5EIDL
// ------------------------------
unsigned int RXF5EIDL@0xf17 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXF5EIDLbits@0xf17  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXM0SIDH
// ------------------------------
unsigned int RXM0SIDH@0xf18 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXM0SIDHbits@0xf18  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXM0SIDL
// ------------------------------
unsigned int RXM0SIDL@0xf19 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 3,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXM0SIDLbits@0xf19  ;

#define _EID16 0
#define _EID17 1
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXM0EIDH
// ------------------------------
unsigned int RXM0EIDH@0xf1a ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXM0EIDHbits@0xf1a  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXM0EIDL
// ------------------------------
unsigned int RXM0EIDL@0xf1b ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXM0EIDLbits@0xf1b  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXM1SIDH
// ------------------------------
unsigned int RXM1SIDH@0xf1c ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXM1SIDHbits@0xf1c  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXM1SIDL
// ------------------------------
unsigned int RXM1SIDL@0xf1d ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 3,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXM1SIDLbits@0xf1d  ;

#define _EID16 0
#define _EID17 1
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXM1EIDH
// ------------------------------
unsigned int RXM1EIDH@0xf1e ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXM1EIDHbits@0xf1e  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXM1EIDL
// ------------------------------
unsigned int RXM1EIDL@0xf1f ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXM1EIDLbits@0xf1f  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        TXB2CON
// ------------------------------
unsigned int TXB2CON@0xf20 ;
union
{

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  : 1,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} TXB2CONbits@0xf20  ;

#define _TXPRI0 0
#define _TXPRI1 1
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6

// The following are aliases ..  
#define __TXPRI 0:2

// ------------------------------
//        TXB2SIDH
// ------------------------------
unsigned int TXB2SIDH@0xf21 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} TXB2SIDHbits@0xf21  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        TXB2SIDL
// ------------------------------
unsigned int TXB2SIDL@0xf22 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} TXB2SIDLbits@0xf22  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        TXB2EIDH
// ------------------------------
unsigned int TXB2EIDH@0xf23 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} TXB2EIDHbits@0xf23  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        TXB2EIDL
// ------------------------------
unsigned int TXB2EIDL@0xf24 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} TXB2EIDLbits@0xf24  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        TXB2DLC
// ------------------------------
unsigned int TXB2DLC@0xf25 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  : 2,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} TXB2DLCbits@0xf25  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        TXB2D0
// ------------------------------
unsigned int TXB2D0@0xf26 ;
union
{

struct 
{
  unsigned int 
  TXB2D00 : 1 ,
  TXB2D01 : 1 ,
  TXB2D02 : 1 ,
  TXB2D03 : 1 ,
  TXB2D04 : 1 ,
  TXB2D05 : 1 ,
  TXB2D06 : 1 ,
  TXB2D07 : 1 ;
} ; 

} TXB2D0bits@0xf26  ;

#define _TXB2D00 0
#define _TXB2D01 1
#define _TXB2D02 2
#define _TXB2D03 3
#define _TXB2D04 4
#define _TXB2D05 5
#define _TXB2D06 6
#define _TXB2D07 7

// ------------------------------
//        TXB2D1
// ------------------------------
unsigned int TXB2D1@0xf27 ;
union
{

struct 
{
  unsigned int 
  TXB2D10 : 1 ,
  TXB2D11 : 1 ,
  TXB2D12 : 1 ,
  TXB2D13 : 1 ,
  TXB2D14 : 1 ,
  TXB2D15 : 1 ,
  TXB2D16 : 1 ,
  TXB2D17 : 1 ;
} ; 

} TXB2D1bits@0xf27  ;

#define _TXB2D10 0
#define _TXB2D11 1
#define _TXB2D12 2
#define _TXB2D13 3
#define _TXB2D14 4
#define _TXB2D15 5
#define _TXB2D16 6
#define _TXB2D17 7

// ------------------------------
//        TXB2D2
// ------------------------------
unsigned int TXB2D2@0xf28 ;
union
{

struct 
{
  unsigned int 
  TXB2D20 : 1 ,
  TXB2D21 : 1 ,
  TXB2D22 : 1 ,
  TXB2D23 : 1 ,
  TXB2D24 : 1 ,
  TXB2D25 : 1 ,
  TXB2D26 : 1 ,
  TXB2D27 : 1 ;
} ; 

} TXB2D2bits@0xf28  ;

#define _TXB2D20 0
#define _TXB2D21 1
#define _TXB2D22 2
#define _TXB2D23 3
#define _TXB2D24 4
#define _TXB2D25 5
#define _TXB2D26 6
#define _TXB2D27 7

// ------------------------------
//        TXB2D3
// ------------------------------
unsigned int TXB2D3@0xf29 ;
union
{

struct 
{
  unsigned int 
  TXB2D30 : 1 ,
  TXB2D31 : 1 ,
  TXB2D32 : 1 ,
  TXB2D33 : 1 ,
  TXB2D34 : 1 ,
  TXB2D35 : 1 ,
  TXB2D36 : 1 ,
  TXB2D37 : 1 ;
} ; 

} TXB2D3bits@0xf29  ;

#define _TXB2D30 0
#define _TXB2D31 1
#define _TXB2D32 2
#define _TXB2D33 3
#define _TXB2D34 4
#define _TXB2D35 5
#define _TXB2D36 6
#define _TXB2D37 7

// ------------------------------
//        TXB2D4
// ------------------------------
unsigned int TXB2D4@0xf2a ;
union
{

struct 
{
  unsigned int 
  TXB2D40 : 1 ,
  TXB2D41 : 1 ,
  TXB2D42 : 1 ,
  TXB2D43 : 1 ,
  TXB2D44 : 1 ,
  TXB2D45 : 1 ,
  TXB2D46 : 1 ,
  TXB2D47 : 1 ;
} ; 

} TXB2D4bits@0xf2a  ;

#define _TXB2D40 0
#define _TXB2D41 1
#define _TXB2D42 2
#define _TXB2D43 3
#define _TXB2D44 4
#define _TXB2D45 5
#define _TXB2D46 6
#define _TXB2D47 7

// ------------------------------
//        TXB2D5
// ------------------------------
unsigned int TXB2D5@0xf2b ;
union
{

struct 
{
  unsigned int 
  TXB2D50 : 1 ,
  TXB2D51 : 1 ,
  TXB2D52 : 1 ,
  TXB2D53 : 1 ,
  TXB2D54 : 1 ,
  TXB2D55 : 1 ,
  TXB2D56 : 1 ,
  TXB2D57 : 1 ;
} ; 

} TXB2D5bits@0xf2b  ;

#define _TXB2D50 0
#define _TXB2D51 1
#define _TXB2D52 2
#define _TXB2D53 3
#define _TXB2D54 4
#define _TXB2D55 5
#define _TXB2D56 6
#define _TXB2D57 7

// ------------------------------
//        TXB2D6
// ------------------------------
unsigned int TXB2D6@0xf2c ;
union
{

struct 
{
  unsigned int 
  TXB2D60 : 1 ,
  TXB2D61 : 1 ,
  TXB2D62 : 1 ,
  TXB2D63 : 1 ,
  TXB2D64 : 1 ,
  TXB2D65 : 1 ,
  TXB2D66 : 1 ,
  TXB2D67 : 1 ;
} ; 

} TXB2D6bits@0xf2c  ;

#define _TXB2D60 0
#define _TXB2D61 1
#define _TXB2D62 2
#define _TXB2D63 3
#define _TXB2D64 4
#define _TXB2D65 5
#define _TXB2D66 6
#define _TXB2D67 7

// ------------------------------
//        TXB2D7
// ------------------------------
unsigned int TXB2D7@0xf2d ;
union
{

struct 
{
  unsigned int 
  TXB2D70 : 1 ,
  TXB2D71 : 1 ,
  TXB2D72 : 1 ,
  TXB2D73 : 1 ,
  TXB2D74 : 1 ,
  TXB2D75 : 1 ,
  TXB2D76 : 1 ,
  TXB2D77 : 1 ;
} ; 

} TXB2D7bits@0xf2d  ;

#define _TXB2D70 0
#define _TXB2D71 1
#define _TXB2D72 2
#define _TXB2D73 3
#define _TXB2D74 4
#define _TXB2D75 5
#define _TXB2D76 6
#define _TXB2D77 7

// ------------------------------
//        CANSTATRO4
// ------------------------------
unsigned int CANSTATRO4@0xf2e ;
union
{

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ,
  : 1,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ,
  : 1,
  _OPMODE : 3 ;
} ; 

} CANSTATRO4bits@0xf2e  ;

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

// The following are aliases ..  
#define __ICODE 1:3
#define __OPMODE 5:3

// ------------------------------
//        TXB1CON
// ------------------------------
unsigned int TXB1CON@0xf30 ;
union
{

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  : 1,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} TXB1CONbits@0xf30  ;

#define _TXPRI0 0
#define _TXPRI1 1
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6

// The following are aliases ..  
#define __TXPRI 0:2

// ------------------------------
//        TXB1SIDH
// ------------------------------
unsigned int TXB1SIDH@0xf31 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} TXB1SIDHbits@0xf31  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        TXB1SIDL
// ------------------------------
unsigned int TXB1SIDL@0xf32 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} TXB1SIDLbits@0xf32  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        TXB1EIDH
// ------------------------------
unsigned int TXB1EIDH@0xf33 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} TXB1EIDHbits@0xf33  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        TXB1EIDL
// ------------------------------
unsigned int TXB1EIDL@0xf34 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} TXB1EIDLbits@0xf34  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        TXB1DLC
// ------------------------------
unsigned int TXB1DLC@0xf35 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  : 2,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} TXB1DLCbits@0xf35  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        TXB1D0
// ------------------------------
unsigned int TXB1D0@0xf36 ;
union
{

struct 
{
  unsigned int 
  TXB1D00 : 1 ,
  TXB1D01 : 1 ,
  TXB1D02 : 1 ,
  TXB1D03 : 1 ,
  TXB1D04 : 1 ,
  TXB1D05 : 1 ,
  TXB1D06 : 1 ,
  TXB1D07 : 1 ;
} ; 

} TXB1D0bits@0xf36  ;

#define _TXB1D00 0
#define _TXB1D01 1
#define _TXB1D02 2
#define _TXB1D03 3
#define _TXB1D04 4
#define _TXB1D05 5
#define _TXB1D06 6
#define _TXB1D07 7

// ------------------------------
//        TXB1D1
// ------------------------------
unsigned int TXB1D1@0xf37 ;
union
{

struct 
{
  unsigned int 
  TXB1D10 : 1 ,
  TXB1D11 : 1 ,
  TXB1D12 : 1 ,
  TXB1D13 : 1 ,
  TXB1D14 : 1 ,
  TXB1D15 : 1 ,
  TXB1D16 : 1 ,
  TXB1D17 : 1 ;
} ; 

} TXB1D1bits@0xf37  ;

#define _TXB1D10 0
#define _TXB1D11 1
#define _TXB1D12 2
#define _TXB1D13 3
#define _TXB1D14 4
#define _TXB1D15 5
#define _TXB1D16 6
#define _TXB1D17 7

// ------------------------------
//        TXB1D2
// ------------------------------
unsigned int TXB1D2@0xf38 ;
union
{

struct 
{
  unsigned int 
  TXB1D20 : 1 ,
  TXB1D21 : 1 ,
  TXB1D22 : 1 ,
  TXB1D23 : 1 ,
  TXB1D24 : 1 ,
  TXB1D25 : 1 ,
  TXB1D26 : 1 ,
  TXB1D27 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  TBB1D23 : 1 ;
} ; 

} TXB1D2bits@0xf38  ;

#define _TXB1D20 0
#define _TXB1D21 1
#define _TXB1D22 2
#define _TXB1D23 3
#define _TXB1D24 4
#define _TXB1D25 5
#define _TXB1D26 6
#define _TXB1D27 7

#define _TBB1D23 3

// ------------------------------
//        TXB1D3
// ------------------------------
unsigned int TXB1D3@0xf39 ;
union
{

struct 
{
  unsigned int 
  TXB1D30 : 1 ,
  TXB1D31 : 1 ,
  TXB1D32 : 1 ,
  TXB1D33 : 1 ,
  TXB1D34 : 1 ,
  TXB1D35 : 1 ,
  TXB1D36 : 1 ,
  TXB1D37 : 1 ;
} ; 

} TXB1D3bits@0xf39  ;

#define _TXB1D30 0
#define _TXB1D31 1
#define _TXB1D32 2
#define _TXB1D33 3
#define _TXB1D34 4
#define _TXB1D35 5
#define _TXB1D36 6
#define _TXB1D37 7

// ------------------------------
//        TXB1D4
// ------------------------------
unsigned int TXB1D4@0xf3a ;
union
{

struct 
{
  unsigned int 
  TXB1D40 : 1 ,
  TXB1D41 : 1 ,
  TXB1D42 : 1 ,
  TXB1D43 : 1 ,
  TXB1D44 : 1 ,
  TXB1D45 : 1 ,
  TXB1D46 : 1 ,
  TXB1D47 : 1 ;
} ; 

} TXB1D4bits@0xf3a  ;

#define _TXB1D40 0
#define _TXB1D41 1
#define _TXB1D42 2
#define _TXB1D43 3
#define _TXB1D44 4
#define _TXB1D45 5
#define _TXB1D46 6
#define _TXB1D47 7

// ------------------------------
//        TXB1D5
// ------------------------------
unsigned int TXB1D5@0xf3b ;
union
{

struct 
{
  unsigned int 
  TXB1D50 : 1 ,
  TXB1D51 : 1 ,
  TXB1D52 : 1 ,
  TXB1D53 : 1 ,
  TXB1D54 : 1 ,
  TXB1D55 : 1 ,
  TXB1D56 : 1 ,
  TXB1D57 : 1 ;
} ; 

} TXB1D5bits@0xf3b  ;

#define _TXB1D50 0
#define _TXB1D51 1
#define _TXB1D52 2
#define _TXB1D53 3
#define _TXB1D54 4
#define _TXB1D55 5
#define _TXB1D56 6
#define _TXB1D57 7

// ------------------------------
//        TXB1D6
// ------------------------------
unsigned int TXB1D6@0xf3c ;
union
{

struct 
{
  unsigned int 
  TXB1D60 : 1 ,
  TXB1D61 : 1 ,
  TXB1D62 : 1 ,
  TXB1D63 : 1 ,
  TXB1D64 : 1 ,
  TXB1D65 : 1 ,
  TXB1D66 : 1 ,
  TXB1D67 : 1 ;
} ; 

} TXB1D6bits@0xf3c  ;

#define _TXB1D60 0
#define _TXB1D61 1
#define _TXB1D62 2
#define _TXB1D63 3
#define _TXB1D64 4
#define _TXB1D65 5
#define _TXB1D66 6
#define _TXB1D67 7

// ------------------------------
//        TXB1D7
// ------------------------------
unsigned int TXB1D7@0xf3d ;
union
{

struct 
{
  unsigned int 
  TXB1D70 : 1 ,
  TXB1D71 : 1 ,
  TXB1D72 : 1 ,
  TXB1D73 : 1 ,
  TXB1D74 : 1 ,
  TXB1D75 : 1 ,
  TXB1D76 : 1 ,
  TXB1D77 : 1 ;
} ; 

} TXB1D7bits@0xf3d  ;

#define _TXB1D70 0
#define _TXB1D71 1
#define _TXB1D72 2
#define _TXB1D73 3
#define _TXB1D74 4
#define _TXB1D75 5
#define _TXB1D76 6
#define _TXB1D77 7

// ------------------------------
//        CANSTATRO3
// ------------------------------
unsigned int CANSTATRO3@0xf3e ;
union
{

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ,
  : 1,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ,
  : 1,
  _OPMODE : 3 ;
} ; 

} CANSTATRO3bits@0xf3e  ;

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

// The following are aliases ..  
#define __ICODE 1:3
#define __OPMODE 5:3

// ------------------------------
//        TXB0CON
// ------------------------------
unsigned int TXB0CON@0xf40 ;
union
{

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  : 1,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} TXB0CONbits@0xf40  ;

#define _TXPRI0 0
#define _TXPRI1 1
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6

// The following are aliases ..  
#define __TXPRI 0:2

// ------------------------------
//        TXB0SIDH
// ------------------------------
unsigned int TXB0SIDH@0xf41 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} TXB0SIDHbits@0xf41  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        TXB0SIDL
// ------------------------------
unsigned int TXB0SIDL@0xf42 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} TXB0SIDLbits@0xf42  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        TXB0EIDH
// ------------------------------
unsigned int TXB0EIDH@0xf43 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} TXB0EIDHbits@0xf43  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        TXB0EIDL
// ------------------------------
unsigned int TXB0EIDL@0xf44 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} TXB0EIDLbits@0xf44  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        TXB0DLC
// ------------------------------
unsigned int TXB0DLC@0xf45 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  : 2,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} TXB0DLCbits@0xf45  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        TXB0D0
// ------------------------------
unsigned int TXB0D0@0xf46 ;
union
{

struct 
{
  unsigned int 
  TXB0D00 : 1 ,
  TXB0D01 : 1 ,
  TXB0D02 : 1 ,
  TXB0D03 : 1 ,
  TXB0D04 : 1 ,
  TXB0D05 : 1 ,
  TXB0D06 : 1 ,
  TXB0D07 : 1 ;
} ; 

} TXB0D0bits@0xf46  ;

#define _TXB0D00 0
#define _TXB0D01 1
#define _TXB0D02 2
#define _TXB0D03 3
#define _TXB0D04 4
#define _TXB0D05 5
#define _TXB0D06 6
#define _TXB0D07 7

// ------------------------------
//        TXB0D1
// ------------------------------
unsigned int TXB0D1@0xf47 ;
union
{

struct 
{
  unsigned int 
  TXB0D10 : 1 ,
  TXB0D11 : 1 ,
  TXB0D12 : 1 ,
  TXB0D13 : 1 ,
  TXB0D14 : 1 ,
  TXB0D15 : 1 ,
  TXB0D16 : 1 ,
  TXB0D17 : 1 ;
} ; 

} TXB0D1bits@0xf47  ;

#define _TXB0D10 0
#define _TXB0D11 1
#define _TXB0D12 2
#define _TXB0D13 3
#define _TXB0D14 4
#define _TXB0D15 5
#define _TXB0D16 6
#define _TXB0D17 7

// ------------------------------
//        TXB0D2
// ------------------------------
unsigned int TXB0D2@0xf48 ;
union
{

struct 
{
  unsigned int 
  TXB0D20 : 1 ,
  TXB0D21 : 1 ,
  TXB0D22 : 1 ,
  TXB0D23 : 1 ,
  TXB0D24 : 1 ,
  TXB0D25 : 1 ,
  TXB0D26 : 1 ,
  TXB0D27 : 1 ;
} ; 

} TXB0D2bits@0xf48  ;

#define _TXB0D20 0
#define _TXB0D21 1
#define _TXB0D22 2
#define _TXB0D23 3
#define _TXB0D24 4
#define _TXB0D25 5
#define _TXB0D26 6
#define _TXB0D27 7

// ------------------------------
//        TXB0D3
// ------------------------------
unsigned int TXB0D3@0xf49 ;
union
{

struct 
{
  unsigned int 
  TXB0D30 : 1 ,
  TXB0D31 : 1 ,
  TXB0D32 : 1 ,
  TXB0D33 : 1 ,
  TXB0D34 : 1 ,
  TXB0D35 : 1 ,
  TXB0D36 : 1 ,
  TXB0D37 : 1 ;
} ; 

} TXB0D3bits@0xf49  ;

#define _TXB0D30 0
#define _TXB0D31 1
#define _TXB0D32 2
#define _TXB0D33 3
#define _TXB0D34 4
#define _TXB0D35 5
#define _TXB0D36 6
#define _TXB0D37 7

// ------------------------------
//        TXB0D4
// ------------------------------
unsigned int TXB0D4@0xf4a ;
union
{

struct 
{
  unsigned int 
  TXB0D40 : 1 ,
  TXB0D41 : 1 ,
  TXB0D42 : 1 ,
  TXB0D43 : 1 ,
  TXB0D44 : 1 ,
  TXB0D45 : 1 ,
  TXB0D46 : 1 ,
  TXB0D47 : 1 ;
} ; 

} TXB0D4bits@0xf4a  ;

#define _TXB0D40 0
#define _TXB0D41 1
#define _TXB0D42 2
#define _TXB0D43 3
#define _TXB0D44 4
#define _TXB0D45 5
#define _TXB0D46 6
#define _TXB0D47 7

// ------------------------------
//        TXB0D5
// ------------------------------
unsigned int TXB0D5@0xf4b ;
union
{

struct 
{
  unsigned int 
  TXB0D50 : 1 ,
  TXB0D51 : 1 ,
  TXB0D52 : 1 ,
  TXB0D53 : 1 ,
  TXB0D54 : 1 ,
  TXB0D55 : 1 ,
  TXB0D56 : 1 ,
  TXB0D57 : 1 ;
} ; 

} TXB0D5bits@0xf4b  ;

#define _TXB0D50 0
#define _TXB0D51 1
#define _TXB0D52 2
#define _TXB0D53 3
#define _TXB0D54 4
#define _TXB0D55 5
#define _TXB0D56 6
#define _TXB0D57 7

// ------------------------------
//        TXB0D6
// ------------------------------
unsigned int TXB0D6@0xf4c ;
union
{

struct 
{
  unsigned int 
  TXB0D60 : 1 ,
  TXB0D61 : 1 ,
  TXB0D62 : 1 ,
  TXB0D63 : 1 ,
  TXB0D64 : 1 ,
  TXB0D65 : 1 ,
  TXB0D66 : 1 ,
  TXB0D67 : 1 ;
} ; 

} TXB0D6bits@0xf4c  ;

#define _TXB0D60 0
#define _TXB0D61 1
#define _TXB0D62 2
#define _TXB0D63 3
#define _TXB0D64 4
#define _TXB0D65 5
#define _TXB0D66 6
#define _TXB0D67 7

// ------------------------------
//        TXB0D7
// ------------------------------
unsigned int TXB0D7@0xf4d ;
union
{

struct 
{
  unsigned int 
  TXB0D70 : 1 ,
  TXB0D71 : 1 ,
  TXB0D72 : 1 ,
  TXB0D73 : 1 ,
  TXB0D74 : 1 ,
  TXB0D75 : 1 ,
  TXB0D76 : 1 ,
  TXB0D77 : 1 ;
} ; 

} TXB0D7bits@0xf4d  ;

#define _TXB0D70 0
#define _TXB0D71 1
#define _TXB0D72 2
#define _TXB0D73 3
#define _TXB0D74 4
#define _TXB0D75 5
#define _TXB0D76 6
#define _TXB0D77 7

// ------------------------------
//        CANSTATRO2
// ------------------------------
unsigned int CANSTATRO2@0xf4e ;
union
{

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ,
  : 1,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ,
  : 1,
  _OPMODE : 3 ;
} ; 

} CANSTATRO2bits@0xf4e  ;

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

// The following are aliases ..  
#define __ICODE 1:3
#define __OPMODE 5:3

// ------------------------------
//        RXB1CON
// ------------------------------
unsigned int RXB1CON@0xf50 ;
union
{

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  RXRTRRO : 1 ,
  : 1,
  RXM0 : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 3 ,
  : 2,
  _RXM : 2 ;
} ; 

} RXB1CONbits@0xf50  ;

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _RXRTRRO 3
#define _RXM0 5
#define _RXM1 6
#define _RXFUL 7

// The following are aliases ..  
#define __FILHIT 0:3
#define __RXM 5:2

// ------------------------------
//        RXB1SIDH
// ------------------------------
unsigned int RXB1SIDH@0xf51 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXB1SIDHbits@0xf51  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXB1SIDL
// ------------------------------
unsigned int RXB1SIDL@0xf52 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXID : 1 ,
  SRR : 1 ,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXB1SIDLbits@0xf52  ;

#define _EID16 0
#define _EID17 1
#define _EXID 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXB1EIDH
// ------------------------------
unsigned int RXB1EIDH@0xf53 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXB1EIDHbits@0xf53  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXB1EIDL
// ------------------------------
unsigned int RXB1EIDL@0xf54 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXB1EIDLbits@0xf54  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXB1DLC
// ------------------------------
unsigned int RXB1DLC@0xf55 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_RXB1DLC : 1 ,
  RB1_RXB1DLC : 1 ,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RESB0 : 1 ,
  RESB1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  _RESB : 2 ;
} ; 

} RXB1DLCbits@0xf55  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_RXB1DLC 4
#define _RB1_RXB1DLC 5
#define _RXRTR 6

#define _RESB0 4
#define _RESB1 5

// The following are aliases ..  
#define __DLC 0:4

#define __RESB 4:2

// ------------------------------
//        RXB1D0
// ------------------------------
unsigned int RXB1D0@0xf56 ;
union
{

struct 
{
  unsigned int 
  RXB1D00 : 1 ,
  RXB1D01 : 1 ,
  RXB1D02 : 1 ,
  RXB1D03 : 1 ,
  RXB1D04 : 1 ,
  RXB1D05 : 1 ,
  RXB1D06 : 1 ,
  RXB1D07 : 1 ;
} ; 

} RXB1D0bits@0xf56  ;

#define _RXB1D00 0
#define _RXB1D01 1
#define _RXB1D02 2
#define _RXB1D03 3
#define _RXB1D04 4
#define _RXB1D05 5
#define _RXB1D06 6
#define _RXB1D07 7

// ------------------------------
//        RXB1D1
// ------------------------------
unsigned int RXB1D1@0xf57 ;
union
{

struct 
{
  unsigned int 
  RXB1D10 : 1 ,
  RXB1D11 : 1 ,
  RXB1D12 : 1 ,
  RXB1D13 : 1 ,
  RXB1D14 : 1 ,
  RXB1D15 : 1 ,
  RXB1D16 : 1 ,
  RXB1D17 : 1 ;
} ; 

} RXB1D1bits@0xf57  ;

#define _RXB1D10 0
#define _RXB1D11 1
#define _RXB1D12 2
#define _RXB1D13 3
#define _RXB1D14 4
#define _RXB1D15 5
#define _RXB1D16 6
#define _RXB1D17 7

// ------------------------------
//        RXB1D2
// ------------------------------
unsigned int RXB1D2@0xf58 ;
union
{

struct 
{
  unsigned int 
  RXB1D20 : 1 ,
  RXB1D21 : 1 ,
  RXB1D22 : 1 ,
  RXB1D23 : 1 ,
  RXB1D24 : 1 ,
  RXB1D25 : 1 ,
  RXB1D26 : 1 ,
  RXB1D27 : 1 ;
} ; 

} RXB1D2bits@0xf58  ;

#define _RXB1D20 0
#define _RXB1D21 1
#define _RXB1D22 2
#define _RXB1D23 3
#define _RXB1D24 4
#define _RXB1D25 5
#define _RXB1D26 6
#define _RXB1D27 7

// ------------------------------
//        RXB1D3
// ------------------------------
unsigned int RXB1D3@0xf59 ;
union
{

struct 
{
  unsigned int 
  RXB1D30 : 1 ,
  RXB1D31 : 1 ,
  RXB1D32 : 1 ,
  RXB1D33 : 1 ,
  RXB1D34 : 1 ,
  RXB1D35 : 1 ,
  RXB1D36 : 1 ,
  RXB1D37 : 1 ;
} ; 

} RXB1D3bits@0xf59  ;

#define _RXB1D30 0
#define _RXB1D31 1
#define _RXB1D32 2
#define _RXB1D33 3
#define _RXB1D34 4
#define _RXB1D35 5
#define _RXB1D36 6
#define _RXB1D37 7

// ------------------------------
//        RXB1D4
// ------------------------------
unsigned int RXB1D4@0xf5a ;
union
{

struct 
{
  unsigned int 
  RXB1D40 : 1 ,
  RXB1D41 : 1 ,
  RXB1D42 : 1 ,
  RXB1D43 : 1 ,
  RXB1D44 : 1 ,
  RXB1D45 : 1 ,
  RXB1D46 : 1 ,
  RXB1D47 : 1 ;
} ; 

} RXB1D4bits@0xf5a  ;

#define _RXB1D40 0
#define _RXB1D41 1
#define _RXB1D42 2
#define _RXB1D43 3
#define _RXB1D44 4
#define _RXB1D45 5
#define _RXB1D46 6
#define _RXB1D47 7

// ------------------------------
//        RXB1D5
// ------------------------------
unsigned int RXB1D5@0xf5b ;
union
{

struct 
{
  unsigned int 
  RXB1D50 : 1 ,
  RXB1D51 : 1 ,
  RXB1D52 : 1 ,
  RXB1D53 : 1 ,
  RXB1D54 : 1 ,
  RXB1D55 : 1 ,
  RXB1D56 : 1 ,
  RXB1D57 : 1 ;
} ; 

} RXB1D5bits@0xf5b  ;

#define _RXB1D50 0
#define _RXB1D51 1
#define _RXB1D52 2
#define _RXB1D53 3
#define _RXB1D54 4
#define _RXB1D55 5
#define _RXB1D56 6
#define _RXB1D57 7

// ------------------------------
//        RXB1D6
// ------------------------------
unsigned int RXB1D6@0xf5c ;
union
{

struct 
{
  unsigned int 
  RXB1D60 : 1 ,
  RXB1D61 : 1 ,
  RXB1D62 : 1 ,
  RXB1D63 : 1 ,
  RXB1D64 : 1 ,
  RXB1D65 : 1 ,
  RXB1D66 : 1 ,
  RXB1D67 : 1 ;
} ; 

} RXB1D6bits@0xf5c  ;

#define _RXB1D60 0
#define _RXB1D61 1
#define _RXB1D62 2
#define _RXB1D63 3
#define _RXB1D64 4
#define _RXB1D65 5
#define _RXB1D66 6
#define _RXB1D67 7

// ------------------------------
//        RXB1D7
// ------------------------------
unsigned int RXB1D7@0xf5d ;
union
{

struct 
{
  unsigned int 
  RXB1D70 : 1 ,
  RXB1D71 : 1 ,
  RXB1D72 : 1 ,
  RXB1D73 : 1 ,
  RXB1D74 : 1 ,
  RXB1D75 : 1 ,
  RXB1D76 : 1 ,
  RXB1D77 : 1 ;
} ; 

} RXB1D7bits@0xf5d  ;

#define _RXB1D70 0
#define _RXB1D71 1
#define _RXB1D72 2
#define _RXB1D73 3
#define _RXB1D74 4
#define _RXB1D75 5
#define _RXB1D76 6
#define _RXB1D77 7

// ------------------------------
//        CANSTATRO1
// ------------------------------
unsigned int CANSTATRO1@0xf5e ;
union
{

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ,
  : 1,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ,
  : 1,
  _OPMODE : 3 ;
} ; 

} CANSTATRO1bits@0xf5e  ;

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

// The following are aliases ..  
#define __ICODE 1:3
#define __OPMODE 5:3

// ------------------------------
//        RXB0CON
// ------------------------------
unsigned int RXB0CON@0xf60 ;
union
{

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  JTOFF : 1 ,
  RXB0DBEN : 1 ,
  RXRTRRO : 1 ,
  : 1,
  RXM0 : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 1 ,
  : 4,
  _RXM : 2 ;
} ; 

} RXB0CONbits@0xf60  ;

#define _FILHIT0 0
#define _JTOFF 1
#define _RXB0DBEN 2
#define _RXRTRRO 3
#define _RXM0 5
#define _RXM1 6
#define _RXFUL 7

// The following are aliases ..  
#define __FILHIT 0
#define __RXM 5:2

// ------------------------------
//        RXB0SIDH
// ------------------------------
unsigned int RXB0SIDH@0xf61 ;
union
{

struct 
{
  unsigned int 
  SID3 : 1 ,
  SID4 : 1 ,
  SID5 : 1 ,
  SID6 : 1 ,
  SID7 : 1 ,
  SID8 : 1 ,
  SID9 : 1 ,
  SID10 : 1 ;
} ; 

} RXB0SIDHbits@0xf61  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXB0SIDL
// ------------------------------
unsigned int RXB0SIDL@0xf62 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXID : 1 ,
  SRR : 1 ,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXB0SIDLbits@0xf62  ;

#define _EID16 0
#define _EID17 1
#define _EXID 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXB0EIDH
// ------------------------------
unsigned int RXB0EIDH@0xf63 ;
union
{

struct 
{
  unsigned int 
  EID8 : 1 ,
  EID9 : 1 ,
  EID10 : 1 ,
  EID11 : 1 ,
  EID12 : 1 ,
  EID13 : 1 ,
  EID14 : 1 ,
  EID15 : 1 ;
} ; 

} RXB0EIDHbits@0xf63  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXB0EIDL
// ------------------------------
unsigned int RXB0EIDL@0xf64 ;
union
{

struct 
{
  unsigned int 
  EID0 : 1 ,
  EID1 : 1 ,
  EID2 : 1 ,
  EID3 : 1 ,
  EID4 : 1 ,
  EID5 : 1 ,
  EID6 : 1 ,
  EID7 : 1 ;
} ; 

} RXB0EIDLbits@0xf64  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXB0DLC
// ------------------------------
unsigned int RXB0DLC@0xf65 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_RXB0DLC : 1 ,
  RB1_RXB0DLC : 1 ,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RESB0 : 1 ,
  RESB1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  _RESB : 2 ;
} ; 

} RXB0DLCbits@0xf65  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_RXB0DLC 4
#define _RB1_RXB0DLC 5
#define _RXRTR 6

#define _RESB0 4
#define _RESB1 5

// The following are aliases ..  
#define __DLC 0:4

#define __RESB 4:2

// ------------------------------
//        RXB0D0
// ------------------------------
unsigned int RXB0D0@0xf66 ;
union
{

struct 
{
  unsigned int 
  RXB0D00 : 1 ,
  RXB0D01 : 1 ,
  RXB0D02 : 1 ,
  RXB0D03 : 1 ,
  RXB0D04 : 1 ,
  RXB0D05 : 1 ,
  RXB0D06 : 1 ,
  RXB0D07 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D00 : 1 ,
  RB0D01 : 1 ,
  RB0D02 : 1 ,
  RB0D03 : 1 ,
  RB0D04 : 1 ,
  RB0D05 : 1 ,
  RB0D06 : 1 ,
  RB0D07 : 1 ;
} ; 

} RXB0D0bits@0xf66  ;

#define _RXB0D00 0
#define _RXB0D01 1
#define _RXB0D02 2
#define _RXB0D03 3
#define _RXB0D04 4
#define _RXB0D05 5
#define _RXB0D06 6
#define _RXB0D07 7

#define _RB0D00 0
#define _RB0D01 1
#define _RB0D02 2
#define _RB0D03 3
#define _RB0D04 4
#define _RB0D05 5
#define _RB0D06 6
#define _RB0D07 7

// ------------------------------
//        RXB0D1
// ------------------------------
unsigned int RXB0D1@0xf67 ;
union
{

struct 
{
  unsigned int 
  RXB0D10 : 1 ,
  RXB0D11 : 1 ,
  RXB0D12 : 1 ,
  RXB0D13 : 1 ,
  RXB0D14 : 1 ,
  RXB0D15 : 1 ,
  RXB0D16 : 1 ,
  RXB0D17 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D10 : 1 ,
  RB0D11 : 1 ,
  RB0D12 : 1 ,
  RB0D13 : 1 ,
  RB0D14 : 1 ,
  RB0D15 : 1 ,
  RB0D16 : 1 ,
  RB0D17 : 1 ;
} ; 

} RXB0D1bits@0xf67  ;

#define _RXB0D10 0
#define _RXB0D11 1
#define _RXB0D12 2
#define _RXB0D13 3
#define _RXB0D14 4
#define _RXB0D15 5
#define _RXB0D16 6
#define _RXB0D17 7

#define _RB0D10 0
#define _RB0D11 1
#define _RB0D12 2
#define _RB0D13 3
#define _RB0D14 4
#define _RB0D15 5
#define _RB0D16 6
#define _RB0D17 7

// ------------------------------
//        RXB0D2
// ------------------------------
unsigned int RXB0D2@0xf68 ;
union
{

struct 
{
  unsigned int 
  RXB0D20 : 1 ,
  RXB0D21 : 1 ,
  RXB0D22 : 1 ,
  RXB0D23 : 1 ,
  RXB0D24 : 1 ,
  RXB0D25 : 1 ,
  RXB0D26 : 1 ,
  RXB0D27 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D20 : 1 ,
  RB0D21 : 1 ,
  RB0D22 : 1 ,
  RB0D23 : 1 ,
  RB0D24 : 1 ,
  RB0D25 : 1 ,
  RB0D26 : 1 ,
  RB0D27 : 1 ;
} ; 

} RXB0D2bits@0xf68  ;

#define _RXB0D20 0
#define _RXB0D21 1
#define _RXB0D22 2
#define _RXB0D23 3
#define _RXB0D24 4
#define _RXB0D25 5
#define _RXB0D26 6
#define _RXB0D27 7

#define _RB0D20 0
#define _RB0D21 1
#define _RB0D22 2
#define _RB0D23 3
#define _RB0D24 4
#define _RB0D25 5
#define _RB0D26 6
#define _RB0D27 7

// ------------------------------
//        RXB0D3
// ------------------------------
unsigned int RXB0D3@0xf69 ;
union
{

struct 
{
  unsigned int 
  RXB0D30 : 1 ,
  RXB0D31 : 1 ,
  RXB0D32 : 1 ,
  RXB0D33 : 1 ,
  RXB0D34 : 1 ,
  RXB0D35 : 1 ,
  RXB0D36 : 1 ,
  RXB0D37 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D30 : 1 ,
  RB0D31 : 1 ,
  RB0D32 : 1 ,
  RB0D33 : 1 ,
  RB0D34 : 1 ,
  RB0D35 : 1 ,
  RB0D36 : 1 ,
  RB0D37 : 1 ;
} ; 

} RXB0D3bits@0xf69  ;

#define _RXB0D30 0
#define _RXB0D31 1
#define _RXB0D32 2
#define _RXB0D33 3
#define _RXB0D34 4
#define _RXB0D35 5
#define _RXB0D36 6
#define _RXB0D37 7

#define _RB0D30 0
#define _RB0D31 1
#define _RB0D32 2
#define _RB0D33 3
#define _RB0D34 4
#define _RB0D35 5
#define _RB0D36 6
#define _RB0D37 7

// ------------------------------
//        RXB0D4
// ------------------------------
unsigned int RXB0D4@0xf6a ;
union
{

struct 
{
  unsigned int 
  RXB0D40 : 1 ,
  RXB0D41 : 1 ,
  RXB0D42 : 1 ,
  RXB0D43 : 1 ,
  RXB0D44 : 1 ,
  RXB0D45 : 1 ,
  RXB0D46 : 1 ,
  RXB0D47 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D40 : 1 ,
  RB0D41 : 1 ,
  RB0D42 : 1 ,
  RB0D43 : 1 ,
  RB0D44 : 1 ,
  RB0D45 : 1 ,
  RB0D46 : 1 ,
  RB0D47 : 1 ;
} ; 

} RXB0D4bits@0xf6a  ;

#define _RXB0D40 0
#define _RXB0D41 1
#define _RXB0D42 2
#define _RXB0D43 3
#define _RXB0D44 4
#define _RXB0D45 5
#define _RXB0D46 6
#define _RXB0D47 7

#define _RB0D40 0
#define _RB0D41 1
#define _RB0D42 2
#define _RB0D43 3
#define _RB0D44 4
#define _RB0D45 5
#define _RB0D46 6
#define _RB0D47 7

// ------------------------------
//        RXB0D5
// ------------------------------
unsigned int RXB0D5@0xf6b ;
union
{

struct 
{
  unsigned int 
  RXB0D50 : 1 ,
  RXB0D51 : 1 ,
  RXB0D52 : 1 ,
  RXB0D53 : 1 ,
  RXB0D54 : 1 ,
  RXB0D55 : 1 ,
  RXB0D56 : 1 ,
  RXB0D57 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D50 : 1 ,
  RB0D51 : 1 ,
  RB0D52 : 1 ,
  RB0D53 : 1 ,
  RB0D54 : 1 ,
  RB0D55 : 1 ,
  RB0D56 : 1 ,
  RB0D57 : 1 ;
} ; 

} RXB0D5bits@0xf6b  ;

#define _RXB0D50 0
#define _RXB0D51 1
#define _RXB0D52 2
#define _RXB0D53 3
#define _RXB0D54 4
#define _RXB0D55 5
#define _RXB0D56 6
#define _RXB0D57 7

#define _RB0D50 0
#define _RB0D51 1
#define _RB0D52 2
#define _RB0D53 3
#define _RB0D54 4
#define _RB0D55 5
#define _RB0D56 6
#define _RB0D57 7

// ------------------------------
//        RXB0D6
// ------------------------------
unsigned int RXB0D6@0xf6c ;
union
{

struct 
{
  unsigned int 
  RXB0D60 : 1 ,
  RXB0D61 : 1 ,
  RXB0D62 : 1 ,
  RXB0D63 : 1 ,
  RXB0D64 : 1 ,
  RXB0D65 : 1 ,
  RXB0D66 : 1 ,
  RXB0D67 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D60 : 1 ,
  RB0D61 : 1 ,
  RB0D62 : 1 ,
  RB0D63 : 1 ,
  RB0D64 : 1 ,
  RB0D65 : 1 ,
  RB0D66 : 1 ,
  RB0D67 : 1 ;
} ; 

} RXB0D6bits@0xf6c  ;

#define _RXB0D60 0
#define _RXB0D61 1
#define _RXB0D62 2
#define _RXB0D63 3
#define _RXB0D64 4
#define _RXB0D65 5
#define _RXB0D66 6
#define _RXB0D67 7

#define _RB0D60 0
#define _RB0D61 1
#define _RB0D62 2
#define _RB0D63 3
#define _RB0D64 4
#define _RB0D65 5
#define _RB0D66 6
#define _RB0D67 7

// ------------------------------
//        RXB0D7
// ------------------------------
unsigned int RXB0D7@0xf6d ;
union
{

struct 
{
  unsigned int 
  RXB0D70 : 1 ,
  RXB0D71 : 1 ,
  RXB0D72 : 1 ,
  RXB0D73 : 1 ,
  RXB0D74 : 1 ,
  RXB0D75 : 1 ,
  RXB0D76 : 1 ,
  RXB0D77 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0D70 : 1 ,
  RB0D71 : 1 ,
  RB0D72 : 1 ,
  RB0D73 : 1 ,
  RB0D74 : 1 ,
  RB0D75 : 1 ,
  RB0D76 : 1 ,
  RB0D77 : 1 ;
} ; 

} RXB0D7bits@0xf6d  ;

#define _RXB0D70 0
#define _RXB0D71 1
#define _RXB0D72 2
#define _RXB0D73 3
#define _RXB0D74 4
#define _RXB0D75 5
#define _RXB0D76 6
#define _RXB0D77 7

#define _RB0D70 0
#define _RB0D71 1
#define _RB0D72 2
#define _RB0D73 3
#define _RB0D74 4
#define _RB0D75 5
#define _RB0D76 6
#define _RB0D77 7

// ------------------------------
//        CANSTAT
// ------------------------------
unsigned int CANSTAT@0xf6e ;
union
{

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ,
  : 1,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ,
  : 1,
  _OPMODE : 3 ;
} ; 

} CANSTATbits@0xf6e  ;

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

// The following are aliases ..  
#define __ICODE 1:3
#define __OPMODE 5:3

// ------------------------------
//        CANCON
// ------------------------------
unsigned int CANCON@0xf6f ;
union
{

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ,
  ABAT : 1 ,
  REQOP0 : 1 ,
  REQOP1 : 1 ,
  REQOP2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ,
  : 1,
  _REQOP : 3 ;
} ; 

} CANCONbits@0xf6f  ;

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3
#define _ABAT 4
#define _REQOP0 5
#define _REQOP1 6
#define _REQOP2 7

// The following are aliases ..  
#define __WIN 1:3
#define __REQOP 5:3

// ------------------------------
//        BRGCON1
// ------------------------------
unsigned int BRGCON1@0xf70 ;
union
{

struct 
{
  unsigned int 
  BRP0 : 1 ,
  BRP1 : 1 ,
  BRP2 : 1 ,
  BRP3 : 1 ,
  BRP4 : 1 ,
  BRP5 : 1 ,
  SJW0 : 1 ,
  SJW1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _BRP : 6 ,
  _SJW : 2 ;
} ; 

} BRGCON1bits@0xf70  ;

#define _BRP0 0
#define _BRP1 1
#define _BRP2 2
#define _BRP3 3
#define _BRP4 4
#define _BRP5 5
#define _SJW0 6
#define _SJW1 7

// The following are aliases ..  
#define __BRP 0:6
#define __SJW 6:2

// ------------------------------
//        BRGCON2
// ------------------------------
unsigned int BRGCON2@0xf71 ;
union
{

struct 
{
  unsigned int 
  PRSEG0 : 1 ,
  PRSEG1 : 1 ,
  PRSEG2 : 1 ,
  SEG1PH0 : 1 ,
  SEG1PH1 : 1 ,
  SEG1PH2 : 1 ,
  SAM : 1 ,
  SEG2PHTS : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PRSEG : 3 ,
  _SEG1PH : 3 ;
} ; 

} BRGCON2bits@0xf71  ;

#define _PRSEG0 0
#define _PRSEG1 1
#define _PRSEG2 2
#define _SEG1PH0 3
#define _SEG1PH1 4
#define _SEG1PH2 5
#define _SAM 6
#define _SEG2PHTS 7

// The following are aliases ..  
#define __PRSEG 0:3
#define __SEG1PH 3:3

// ------------------------------
//        BRGCON3
// ------------------------------
unsigned int BRGCON3@0xf72 ;
union
{

struct 
{
  unsigned int 
  SEG2PH0 : 1 ,
  SEG2PH1 : 1 ,
  SEG2PH2 : 1 ,
  : 3,
  WAKFIL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SEG2PH : 3 ;
} ; 

} BRGCON3bits@0xf72  ;

#define _SEG2PH0 0
#define _SEG2PH1 1
#define _SEG2PH2 2
#define _WAKFIL 6

// The following are aliases ..  
#define __SEG2PH 0:3

// ------------------------------
//        CIOCON
// ------------------------------
unsigned int CIOCON@0xf73 ;
union
{

struct 
{
  unsigned int 
  : 4,
  CANCAP : 1 ,
  ENDRHI : 1 ;
} ; 

} CIOCONbits@0xf73  ;

#define _CANCAP 4
#define _ENDRHI 5

// ------------------------------
//        COMSTAT
// ------------------------------
unsigned int COMSTAT@0xf74 ;
union
{

struct 
{
  unsigned int 
  EWARN : 1 ,
  RXWARN : 1 ,
  TXWARN : 1 ,
  RXBP : 1 ,
  TXBP : 1 ,
  TXBO : 1 ,
  RXB1OVFL : 1 ,
  RXB0OVFL : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RX2OVFL : 1 ,
  RX1OVFL : 1 ;
} ; 

} COMSTATbits@0xf74  ;

#define _EWARN 0
#define _RXWARN 1
#define _TXWARN 2
#define _RXBP 3
#define _TXBP 4
#define _TXBO 5
#define _RXB1OVFL 6
#define _RXB0OVFL 7

#define _RX2OVFL 6
#define _RX1OVFL 7

// ------------------------------
//        RXERRCNT
// ------------------------------
unsigned int RXERRCNT@0xf75 ;
union
{

struct 
{
  unsigned int 
  REC0 : 1 ,
  REC1 : 1 ,
  REC2 : 1 ,
  REC3 : 1 ,
  REC4 : 1 ,
  REC5 : 1 ,
  REC6 : 1 ,
  REC7 : 1 ;
} ; 

} RXERRCNTbits@0xf75  ;

#define _REC0 0
#define _REC1 1
#define _REC2 2
#define _REC3 3
#define _REC4 4
#define _REC5 5
#define _REC6 6
#define _REC7 7

// ------------------------------
//        TXERRCNT
// ------------------------------
unsigned int TXERRCNT@0xf76 ;
union
{

struct 
{
  unsigned int 
  TEC0 : 1 ,
  TEC1 : 1 ,
  TEC2 : 1 ,
  TEC3 : 1 ,
  TEC4 : 1 ,
  TEC5 : 1 ,
  TEC6 : 1 ,
  TEC7 : 1 ;
} ; 

} TXERRCNTbits@0xf76  ;

#define _TEC0 0
#define _TEC1 1
#define _TEC2 2
#define _TEC3 3
#define _TEC4 4
#define _TEC5 5
#define _TEC6 6
#define _TEC7 7

// ------------------------------
//        PORTA
// ------------------------------
unsigned int PORTA@0xf80 ;
union
{

struct 
{
  unsigned int 
  RA0 : 1 ,
  RA1 : 1 ,
  RA2 : 1 ,
  RA3 : 1 ,
  RA4 : 1 ,
  RA5 : 1 ,
  RA6 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN0 : 1 ,
  AN1 : 1 ,
  AN2 : 1 ,
  AN3 : 1 ,
  : 1,
  AN4 : 1 ,
  OSC2 : 1 ;
} ; 

struct 
{
  unsigned int 
  CVREF : 1 ,
  : 1,
  VREFM : 1 ,
  VREFP : 1 ,
  T0CKI : 1 ,
  NOT_SS : 1 ,
  CLKO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  SS : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  LVDIN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RA : 7 ;
} ; 

struct 
{
  unsigned int 
  _AN : 4 ;
} ; 

} PORTAbits@0xf80  ;

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5
#define _RA6 6

#define _AN0 0
#define _AN1 1
#define _AN2 2
#define _AN3 3
#define _AN4 5
#define _OSC2 6

#define _CVREF 0
#define _VREFM 2
#define _VREFP 3
#define _T0CKI 4
#define _NOT_SS 5
#define _CLKO 6

#define _SS 5

#define _LVDIN 5

// The following are aliases ..  
#define __RA 0:7

#define __AN 0:4

// ------------------------------
//        PORTB
// ------------------------------
unsigned int PORTB@0xf81 ;
union
{

struct 
{
  unsigned int 
  RB0_PORTB : 1 ,
  RB1_PORTB : 1 ,
  RB2 : 1 ,
  RB3 : 1 ,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

struct 
{
  unsigned int 
  INT0 : 1 ,
  INT1 : 1 ,
  CANTX : 1 ,
  CANRX : 1 ,
  : 1,
  PGM : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT : 2 ;
} ; 

} PORTBbits@0xf81  ;

#define _RB0_PORTB 0
#define _RB1_PORTB 1
#define _RB2 2
#define _RB3 3
#define _RB4 4
#define _RB5 5
#define _RB6 6
#define _RB7 7

#define _INT0 0
#define _INT1 1
#define _CANTX 2
#define _CANRX 3
#define _PGM 5
#define _PGC 6
#define _PGD 7

// The following are aliases ..  
#define __INT 0:2

// ------------------------------
//        PORTC
// ------------------------------
unsigned int PORTC@0xf82 ;
union
{

struct 
{
  unsigned int 
  RC0 : 1 ,
  RC1 : 1 ,
  RC2 : 1 ,
  RC3 : 1 ,
  RC4 : 1 ,
  RC5 : 1 ,
  RC6 : 1 ,
  RC7 : 1 ;
} ; 

struct 
{
  unsigned int 
  T1OSO : 1 ,
  T1OSI : 1 ,
  : 1,
  SCK : 1 ,
  SDI : 1 ,
  SDO : 1 ,
  TX : 1 ,
  RX : 1 ;
} ; 

struct 
{
  unsigned int 
  T1CKI : 1 ,
  : 1,
  CCP1 : 1 ,
  SCL : 1 ,
  SDA : 1 ,
  : 1,
  CK : 1 ;
} ; 

} PORTCbits@0xf82  ;

#define _RC0 0
#define _RC1 1
#define _RC2 2
#define _RC3 3
#define _RC4 4
#define _RC5 5
#define _RC6 6
#define _RC7 7

#define _T1OSO 0
#define _T1OSI 1
#define _SCK 3
#define _SDI 4
#define _SDO 5
#define _TX 6
#define _RX 7

#define _T1CKI 0
#define _CCP1 2
#define _SCL 3
#define _SDA 4
#define _CK 6

// ------------------------------
//        PORTD
// ------------------------------
unsigned int PORTD@0xf83 ;
union
{

struct 
{
  unsigned int 
  RD0 : 1 ,
  RD1 : 1 ,
  RD2 : 1 ,
  RD3 : 1 ,
  RD4 : 1 ,
  RD5 : 1 ,
  RD6 : 1 ,
  RD7 : 1 ;
} ; 

struct 
{
  unsigned int 
  C1INP : 1 ,
  C1INM : 1 ,
  C2INP : 1 ,
  C2INM : 1 ,
  P1A : 1 ,
  P1B : 1 ,
  P1C : 1 ,
  P1D : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  ECCP1 : 1 ;
} ; 

struct 
{
  unsigned int 
  PSP0 : 1 ,
  PSP1 : 1 ,
  PSP2 : 1 ,
  PSP3 : 1 ,
  PSP4 : 1 ,
  PSP5 : 1 ,
  PSP6 : 1 ,
  PSP7 : 1 ;
} ; 

} PORTDbits@0xf83  ;

#define _RD0 0
#define _RD1 1
#define _RD2 2
#define _RD3 3
#define _RD4 4
#define _RD5 5
#define _RD6 6
#define _RD7 7

#define _C1INP 0
#define _C1INM 1
#define _C2INP 2
#define _C2INM 3
#define _P1A 4
#define _P1B 5
#define _P1C 6
#define _P1D 7

#define _ECCP1 4

#define _PSP0 0
#define _PSP1 1
#define _PSP2 2
#define _PSP3 3
#define _PSP4 4
#define _PSP5 5
#define _PSP6 6
#define _PSP7 7

// ------------------------------
//        PORTE
// ------------------------------
unsigned int PORTE@0xf84 ;
union
{

struct 
{
  unsigned int 
  RE0 : 1 ,
  RE1 : 1 ,
  RE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN5 : 1 ,
  AN6 : 1 ,
  AN7 : 1 ;
} ; 

struct 
{
  unsigned int 
  NOT_RD : 1 ,
  NOT_WR : 1 ,
  NOT_CS : 1 ;
} ; 

struct 
{
  unsigned int 
  RD : 1 ,
  WR : 1 ,
  CS : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RE : 3 ;
} ; 

} PORTEbits@0xf84  ;

#define _RE0 0
#define _RE1 1
#define _RE2 2

#define _AN5 0
#define _AN6 1
#define _AN7 2

#define _NOT_RD 0
#define _NOT_WR 1
#define _NOT_CS 2

#define _RD 0
#define _WR 1
#define _CS 2

// The following are aliases ..  
#define __RE 0:3

// ------------------------------
//        LATA
// ------------------------------
unsigned int LATA@0xf89 ;
union
{

struct 
{
  unsigned int 
  LATA0 : 1 ,
  LATA1 : 1 ,
  LATA2 : 1 ,
  LATA3 : 1 ,
  LATA4 : 1 ,
  LATA5 : 1 ,
  LATA6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATA : 7 ;
} ; 

} LATAbits@0xf89  ;

#define _LATA0 0
#define _LATA1 1
#define _LATA2 2
#define _LATA3 3
#define _LATA4 4
#define _LATA5 5
#define _LATA6 6

// The following are aliases ..  
#define __LATA 0:7

// ------------------------------
//        LATB
// ------------------------------
unsigned int LATB@0xf8a ;
union
{

struct 
{
  unsigned int 
  LATB0 : 1 ,
  LATB1 : 1 ,
  LATB2 : 1 ,
  LATB3 : 1 ,
  LATB4 : 1 ,
  LATB5 : 1 ,
  LATB6 : 1 ,
  LATB7 : 1 ;
} ; 

} LATBbits@0xf8a  ;

#define _LATB0 0
#define _LATB1 1
#define _LATB2 2
#define _LATB3 3
#define _LATB4 4
#define _LATB5 5
#define _LATB6 6
#define _LATB7 7

// ------------------------------
//        LATC
// ------------------------------
unsigned int LATC@0xf8b ;
union
{

struct 
{
  unsigned int 
  LATC0 : 1 ,
  LATC1 : 1 ,
  LATC2 : 1 ,
  LATC3 : 1 ,
  LATC4 : 1 ,
  LATC5 : 1 ,
  LATC6 : 1 ,
  LATC7 : 1 ;
} ; 

} LATCbits@0xf8b  ;

#define _LATC0 0
#define _LATC1 1
#define _LATC2 2
#define _LATC3 3
#define _LATC4 4
#define _LATC5 5
#define _LATC6 6
#define _LATC7 7

// ------------------------------
//        LATD
// ------------------------------
unsigned int LATD@0xf8c ;
union
{

struct 
{
  unsigned int 
  LATD0 : 1 ,
  LATD1 : 1 ,
  LATD2 : 1 ,
  LATD3 : 1 ,
  LATD4 : 1 ,
  LATD5 : 1 ,
  LATD6 : 1 ,
  LATD7 : 1 ;
} ; 

} LATDbits@0xf8c  ;

#define _LATD0 0
#define _LATD1 1
#define _LATD2 2
#define _LATD3 3
#define _LATD4 4
#define _LATD5 5
#define _LATD6 6
#define _LATD7 7

// ------------------------------
//        LATE
// ------------------------------
unsigned int LATE@0xf8d ;
union
{

struct 
{
  unsigned int 
  LATE0 : 1 ,
  LATE1 : 1 ,
  LATE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATE : 3 ;
} ; 

} LATEbits@0xf8d  ;

#define _LATE0 0
#define _LATE1 1
#define _LATE2 2

// The following are aliases ..  
#define __LATE 0:3

// ------------------------------
//        DDRA
// ------------------------------
unsigned int DDRA@0xf92 ;
union
{

struct 
{
  unsigned int 
  TRISA0 : 1 ,
  TRISA1 : 1 ,
  TRISA2 : 1 ,
  TRISA3 : 1 ,
  TRISA4 : 1 ,
  TRISA5 : 1 ,
  TRISA6 : 1 ;
} ; 

struct 
{
  unsigned int 
  RA0 : 1 ,
  RA1 : 1 ,
  RA2 : 1 ,
  RA3 : 1 ,
  RA4 : 1 ,
  RA5 : 1 ,
  RA6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISA : 7 ;
} ; 

struct 
{
  unsigned int 
  _RA : 7 ;
} ; 

} DDRAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA4 4
#define _TRISA5 5
#define _TRISA6 6

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5
#define _RA6 6

// The following are aliases ..  
#define __TRISA 0:7

#define __RA 0:7

// ------------------------------
//        TRISA
// ------------------------------
unsigned int TRISA@0xf92 ;
union
{

struct 
{
  unsigned int 
  TRISA0 : 1 ,
  TRISA1 : 1 ,
  TRISA2 : 1 ,
  TRISA3 : 1 ,
  TRISA4 : 1 ,
  TRISA5 : 1 ,
  TRISA6 : 1 ;
} ; 

struct 
{
  unsigned int 
  RA0 : 1 ,
  RA1 : 1 ,
  RA2 : 1 ,
  RA3 : 1 ,
  RA4 : 1 ,
  RA5 : 1 ,
  RA6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISA : 7 ;
} ; 

struct 
{
  unsigned int 
  _RA : 7 ;
} ; 

} TRISAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA4 4
#define _TRISA5 5
#define _TRISA6 6

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5
#define _RA6 6

// The following are aliases ..  
#define __TRISA 0:7

#define __RA 0:7

// ------------------------------
//        DDRB
// ------------------------------
unsigned int DDRB@0xf93 ;
union
{

struct 
{
  unsigned int 
  TRISB0 : 1 ,
  TRISB1 : 1 ,
  TRISB2 : 1 ,
  TRISB3 : 1 ,
  TRISB4 : 1 ,
  TRISB5 : 1 ,
  TRISB6 : 1 ,
  TRISB7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0_DDRB : 1 ,
  RB1_DDRB : 1 ,
  RB2 : 1 ,
  RB3 : 1 ,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

} DDRBbits@0xf93  ;

#define _TRISB0 0
#define _TRISB1 1
#define _TRISB2 2
#define _TRISB3 3
#define _TRISB4 4
#define _TRISB5 5
#define _TRISB6 6
#define _TRISB7 7

#define _RB0_DDRB 0
#define _RB1_DDRB 1
#define _RB2 2
#define _RB3 3
#define _RB4 4
#define _RB5 5
#define _RB6 6
#define _RB7 7

// ------------------------------
//        TRISB
// ------------------------------
unsigned int TRISB@0xf93 ;
union
{

struct 
{
  unsigned int 
  TRISB0 : 1 ,
  TRISB1 : 1 ,
  TRISB2 : 1 ,
  TRISB3 : 1 ,
  TRISB4 : 1 ,
  TRISB5 : 1 ,
  TRISB6 : 1 ,
  TRISB7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RB0_TRISB : 1 ,
  RB1_TRISB : 1 ,
  RB2 : 1 ,
  RB3 : 1 ,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

} TRISBbits@0xf93  ;

#define _TRISB0 0
#define _TRISB1 1
#define _TRISB2 2
#define _TRISB3 3
#define _TRISB4 4
#define _TRISB5 5
#define _TRISB6 6
#define _TRISB7 7

#define _RB0_TRISB 0
#define _RB1_TRISB 1
#define _RB2 2
#define _RB3 3
#define _RB4 4
#define _RB5 5
#define _RB6 6
#define _RB7 7

// ------------------------------
//        DDRC
// ------------------------------
unsigned int DDRC@0xf94 ;
union
{

struct 
{
  unsigned int 
  TRISC0 : 1 ,
  TRISC1 : 1 ,
  TRISC2 : 1 ,
  TRISC3 : 1 ,
  TRISC4 : 1 ,
  TRISC5 : 1 ,
  TRISC6 : 1 ,
  TRISC7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RC0 : 1 ,
  RC1 : 1 ,
  RC2 : 1 ,
  RC3 : 1 ,
  RC4 : 1 ,
  RC5 : 1 ,
  RC6 : 1 ,
  RC7 : 1 ;
} ; 

} DDRCbits@0xf94  ;

#define _TRISC0 0
#define _TRISC1 1
#define _TRISC2 2
#define _TRISC3 3
#define _TRISC4 4
#define _TRISC5 5
#define _TRISC6 6
#define _TRISC7 7

#define _RC0 0
#define _RC1 1
#define _RC2 2
#define _RC3 3
#define _RC4 4
#define _RC5 5
#define _RC6 6
#define _RC7 7

// ------------------------------
//        TRISC
// ------------------------------
unsigned int TRISC@0xf94 ;
union
{

struct 
{
  unsigned int 
  TRISC0 : 1 ,
  TRISC1 : 1 ,
  TRISC2 : 1 ,
  TRISC3 : 1 ,
  TRISC4 : 1 ,
  TRISC5 : 1 ,
  TRISC6 : 1 ,
  TRISC7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RC0 : 1 ,
  RC1 : 1 ,
  RC2 : 1 ,
  RC3 : 1 ,
  RC4 : 1 ,
  RC5 : 1 ,
  RC6 : 1 ,
  RC7 : 1 ;
} ; 

} TRISCbits@0xf94  ;

#define _TRISC0 0
#define _TRISC1 1
#define _TRISC2 2
#define _TRISC3 3
#define _TRISC4 4
#define _TRISC5 5
#define _TRISC6 6
#define _TRISC7 7

#define _RC0 0
#define _RC1 1
#define _RC2 2
#define _RC3 3
#define _RC4 4
#define _RC5 5
#define _RC6 6
#define _RC7 7

// ------------------------------
//        DDRD
// ------------------------------
unsigned int DDRD@0xf95 ;
union
{

struct 
{
  unsigned int 
  TRISD0 : 1 ,
  TRISD1 : 1 ,
  TRISD2 : 1 ,
  TRISD3 : 1 ,
  TRISD4 : 1 ,
  TRISD5 : 1 ,
  TRISD6 : 1 ,
  TRISD7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RD0 : 1 ,
  RD1 : 1 ,
  RD2 : 1 ,
  RD3 : 1 ,
  RD4 : 1 ,
  RD5 : 1 ,
  RD6 : 1 ,
  RD7 : 1 ;
} ; 

} DDRDbits@0xf95  ;

#define _TRISD0 0
#define _TRISD1 1
#define _TRISD2 2
#define _TRISD3 3
#define _TRISD4 4
#define _TRISD5 5
#define _TRISD6 6
#define _TRISD7 7

#define _RD0 0
#define _RD1 1
#define _RD2 2
#define _RD3 3
#define _RD4 4
#define _RD5 5
#define _RD6 6
#define _RD7 7

// ------------------------------
//        TRISD
// ------------------------------
unsigned int TRISD@0xf95 ;
union
{

struct 
{
  unsigned int 
  TRISD0 : 1 ,
  TRISD1 : 1 ,
  TRISD2 : 1 ,
  TRISD3 : 1 ,
  TRISD4 : 1 ,
  TRISD5 : 1 ,
  TRISD6 : 1 ,
  TRISD7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RD0 : 1 ,
  RD1 : 1 ,
  RD2 : 1 ,
  RD3 : 1 ,
  RD4 : 1 ,
  RD5 : 1 ,
  RD6 : 1 ,
  RD7 : 1 ;
} ; 

} TRISDbits@0xf95  ;

#define _TRISD0 0
#define _TRISD1 1
#define _TRISD2 2
#define _TRISD3 3
#define _TRISD4 4
#define _TRISD5 5
#define _TRISD6 6
#define _TRISD7 7

#define _RD0 0
#define _RD1 1
#define _RD2 2
#define _RD3 3
#define _RD4 4
#define _RD5 5
#define _RD6 6
#define _RD7 7

// ------------------------------
//        DDRE
// ------------------------------
unsigned int DDRE@0xf96 ;
union
{

struct 
{
  unsigned int 
  TRISE0 : 1 ,
  TRISE1 : 1 ,
  TRISE2 : 1 ,
  : 1,
  PSPMODE : 1 ,
  IBOV : 1 ,
  OBF : 1 ,
  IBF : 1 ;
} ; 

struct 
{
  unsigned int 
  RE0 : 1 ,
  RE1 : 1 ,
  RE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  DDRE0 : 1 ,
  DDRE1 : 1 ,
  DDRE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISE : 3 ;
} ; 

struct 
{
  unsigned int 
  _RE : 3 ;
} ; 

struct 
{
  unsigned int 
  _DDRE : 3 ;
} ; 

} DDREbits@0xf96  ;

#define _TRISE0 0
#define _TRISE1 1
#define _TRISE2 2
#define _PSPMODE 4
#define _IBOV 5
#define _OBF 6
#define _IBF 7

#define _RE0 0
#define _RE1 1
#define _RE2 2

#define _DDRE0 0
#define _DDRE1 1
#define _DDRE2 2

// The following are aliases ..  
#define __TRISE 0:3

#define __RE 0:3

#define __DDRE 0:3

// ------------------------------
//        TRISE
// ------------------------------
unsigned int TRISE@0xf96 ;
union
{

struct 
{
  unsigned int 
  TRISE0 : 1 ,
  TRISE1 : 1 ,
  TRISE2 : 1 ,
  : 1,
  PSPMODE : 1 ,
  IBOV : 1 ,
  OBF : 1 ,
  IBF : 1 ;
} ; 

struct 
{
  unsigned int 
  RE0 : 1 ,
  RE1 : 1 ,
  RE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  DDRE0 : 1 ,
  DDRE1 : 1 ,
  DDRE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISE : 3 ;
} ; 

struct 
{
  unsigned int 
  _RE : 3 ;
} ; 

struct 
{
  unsigned int 
  _DDRE : 3 ;
} ; 

} TRISEbits@0xf96  ;

#define _TRISE0 0
#define _TRISE1 1
#define _TRISE2 2
#define _PSPMODE 4
#define _IBOV 5
#define _OBF 6
#define _IBF 7

#define _RE0 0
#define _RE1 1
#define _RE2 2

#define _DDRE0 0
#define _DDRE1 1
#define _DDRE2 2

// The following are aliases ..  
#define __TRISE 0:3

#define __RE 0:3

#define __DDRE 0:3

// ------------------------------
//        PIE1
// ------------------------------
unsigned int PIE1@0xf9d ;
union
{

struct 
{
  unsigned int 
  TMR1IE : 1 ,
  TMR2IE : 1 ,
  CCP1IE : 1 ,
  SSPIE : 1 ,
  TXIE : 1 ,
  RCIE : 1 ,
  ADIE : 1 ,
  PSPIE : 1 ;
} ; 

} PIE1bits@0xf9d  ;

#define _TMR1IE 0
#define _TMR2IE 1
#define _CCP1IE 2
#define _SSPIE 3
#define _TXIE 4
#define _RCIE 5
#define _ADIE 6
#define _PSPIE 7

// ------------------------------
//        PIR1
// ------------------------------
unsigned int PIR1@0xf9e ;
union
{

struct 
{
  unsigned int 
  TMR1IF : 1 ,
  TMR2IF : 1 ,
  CCP1IF : 1 ,
  SSPIF : 1 ,
  TXIF : 1 ,
  RCIF : 1 ,
  ADIF : 1 ,
  PSPIF : 1 ;
} ; 

} PIR1bits@0xf9e  ;

#define _TMR1IF 0
#define _TMR2IF 1
#define _CCP1IF 2
#define _SSPIF 3
#define _TXIF 4
#define _RCIF 5
#define _ADIF 6
#define _PSPIF 7

// ------------------------------
//        IPR1
// ------------------------------
unsigned int IPR1@0xf9f ;
union
{

struct 
{
  unsigned int 
  TMR1IP : 1 ,
  TMR2IP : 1 ,
  CCP1IP : 1 ,
  SSPIP : 1 ,
  TXIP : 1 ,
  RCIP : 1 ,
  ADIP : 1 ,
  PSPIP : 1 ;
} ; 

} IPR1bits@0xf9f  ;

#define _TMR1IP 0
#define _TMR2IP 1
#define _CCP1IP 2
#define _SSPIP 3
#define _TXIP 4
#define _RCIP 5
#define _ADIP 6
#define _PSPIP 7

// ------------------------------
//        PIE2
// ------------------------------
unsigned int PIE2@0xfa0 ;
union
{

struct 
{
  unsigned int 
  ECCP1IE : 1 ,
  TMR3IE : 1 ,
  LVDIE : 1 ,
  BCLIE : 1 ,
  EEIE : 1 ,
  : 1,
  CMIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _ECCP1IE 0
#define _TMR3IE 1
#define _LVDIE 2
#define _BCLIE 3
#define _EEIE 4
#define _CMIE 6

// ------------------------------
//        PIR2
// ------------------------------
unsigned int PIR2@0xfa1 ;
union
{

struct 
{
  unsigned int 
  ECCP1IF : 1 ,
  TMR3IF : 1 ,
  LVDIF : 1 ,
  BCLIF : 1 ,
  EEIF : 1 ,
  : 1,
  CMIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _ECCP1IF 0
#define _TMR3IF 1
#define _LVDIF 2
#define _BCLIF 3
#define _EEIF 4
#define _CMIF 6

// ------------------------------
//        IPR2
// ------------------------------
unsigned int IPR2@0xfa2 ;
union
{

struct 
{
  unsigned int 
  ECCP1IP : 1 ,
  TMR3IP : 1 ,
  LVDIP : 1 ,
  BCLIP : 1 ,
  EEIP : 1 ,
  : 1,
  CMIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _ECCP1IP 0
#define _TMR3IP 1
#define _LVDIP 2
#define _BCLIP 3
#define _EEIP 4
#define _CMIP 6

// ------------------------------
//        PIE3
// ------------------------------
unsigned int PIE3@0xfa3 ;
union
{

struct 
{
  unsigned int 
  RXB0IE : 1 ,
  RXB1IE : 1 ,
  TXB0IE : 1 ,
  TXB1IE : 1 ,
  TXB2IE : 1 ,
  ERRIE : 1 ,
  WAKIE : 1 ,
  IRXIE : 1 ;
} ; 

struct 
{
  unsigned int 
  RX0IE : 1 ,
  RX1IE : 1 ,
  TX0IE : 1 ,
  TX1IE : 1 ,
  TX2IE : 1 ,
  : 2,
  IVRE : 1 ;
} ; 

} PIE3bits@0xfa3  ;

#define _RXB0IE 0
#define _RXB1IE 1
#define _TXB0IE 2
#define _TXB1IE 3
#define _TXB2IE 4
#define _ERRIE 5
#define _WAKIE 6
#define _IRXIE 7

#define _RX0IE 0
#define _RX1IE 1
#define _TX0IE 2
#define _TX1IE 3
#define _TX2IE 4
#define _IVRE 7

// ------------------------------
//        PIR3
// ------------------------------
unsigned int PIR3@0xfa4 ;
union
{

struct 
{
  unsigned int 
  RXB0IF : 1 ,
  RXB1IF : 1 ,
  TXB0IF : 1 ,
  TXB1IF : 1 ,
  TXB2IF : 1 ,
  ERRIF : 1 ,
  WAKIF : 1 ,
  IRXIF : 1 ;
} ; 

struct 
{
  unsigned int 
  RX0IF : 1 ,
  RX1IF : 1 ,
  TX0IF : 1 ,
  TX1IF : 1 ,
  TX2IF : 1 ,
  : 2,
  IVRF : 1 ;
} ; 

} PIR3bits@0xfa4  ;

#define _RXB0IF 0
#define _RXB1IF 1
#define _TXB0IF 2
#define _TXB1IF 3
#define _TXB2IF 4
#define _ERRIF 5
#define _WAKIF 6
#define _IRXIF 7

#define _RX0IF 0
#define _RX1IF 1
#define _TX0IF 2
#define _TX1IF 3
#define _TX2IF 4
#define _IVRF 7

// ------------------------------
//        IPR3
// ------------------------------
unsigned int IPR3@0xfa5 ;
union
{

struct 
{
  unsigned int 
  RXB0IP : 1 ,
  RXB1IP : 1 ,
  TXB0IP : 1 ,
  TXB1IP : 1 ,
  TXB2IP : 1 ,
  ERRIP : 1 ,
  WAKIP : 1 ,
  IRXIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 7,
  IVRP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

#define _RXB0IP 0
#define _RXB1IP 1
#define _TXB0IP 2
#define _TXB1IP 3
#define _TXB2IP 4
#define _ERRIP 5
#define _WAKIP 6
#define _IRXIP 7

#define _IVRP 7

// ------------------------------
//        EECON1
// ------------------------------
unsigned int EECON1@0xfa6 ;
union
{

struct 
{
  unsigned int 
  RD : 1 ,
  WR : 1 ,
  WREN : 1 ,
  WRERR : 1 ,
  FREE : 1 ,
  : 1,
  CFGS : 1 ,
  EEPGD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  EEFS : 1 ;
} ; 

} EECON1bits@0xfa6  ;

#define _RD 0
#define _WR 1
#define _WREN 2
#define _WRERR 3
#define _FREE 4
#define _CFGS 6
#define _EEPGD 7

#define _EEFS 6

// ------------------------------
//        EECON2
// ------------------------------
unsigned int EECON2@0xfa7 ;
// ------------------------------
//        EEDATA
// ------------------------------
unsigned int EEDATA@0xfa8 ;
// ------------------------------
//        EEADR
// ------------------------------
unsigned int EEADR@0xfa9 ;
// ------------------------------
//        RCSTA
// ------------------------------
unsigned int RCSTA@0xfab ;
union
{

struct 
{
  unsigned int 
  RX9D : 1 ,
  OERR : 1 ,
  FERR : 1 ,
  ADDEN : 1 ,
  CREN : 1 ,
  SREN : 1 ,
  RX9 : 1 ,
  SPEN : 1 ;
} ; 

struct 
{
  unsigned int 
  RCD8 : 1 ,
  : 5,
  RC9 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RC8_9 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  NOT_RC8 : 1 ;
} ; 

} RCSTAbits@0xfab  ;

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _RCD8 0
#define _RC9 6

#define _RC8_9 6

#define _NOT_RC8 6

// ------------------------------
//        TXSTA
// ------------------------------
unsigned int TXSTA@0xfac ;
union
{

struct 
{
  unsigned int 
  TX9D : 1 ,
  TRMT : 1 ,
  BRGH : 1 ,
  : 1,
  SYNC : 1 ,
  TXEN : 1 ,
  TX9 : 1 ,
  CSRC : 1 ;
} ; 

struct 
{
  unsigned int 
  TXD8 : 1 ,
  : 5,
  TX8_9 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  NOT_TX8 : 1 ;
} ; 

} TXSTAbits@0xfac  ;

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

#define _TXD8 0
#define _TX8_9 6

#define _NOT_TX8 6

// ------------------------------
//        TXREG
// ------------------------------
unsigned int TXREG@0xfad ;
// ------------------------------
//        RCREG
// ------------------------------
unsigned int RCREG@0xfae ;
// ------------------------------
//        SPBRG
// ------------------------------
unsigned int SPBRG@0xfaf ;
// ------------------------------
//        T3CON
// ------------------------------
unsigned int T3CON@0xfb1 ;
union
{

struct 
{
  unsigned int 
  TMR3ON : 1 ,
  TMR3CS : 1 ,
  NOT_T3SYNC : 1 ,
  T3CCP1 : 1 ,
  : 2,
  T3ECCP1 : 1 ,
  RD16 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T3INSYNC : 1 ,
  : 1,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T3SYNC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T3CKPS : 2 ;
} ; 

} T3CONbits@0xfb1  ;

#define _TMR3ON 0
#define _TMR3CS 1
#define _NOT_T3SYNC 2
#define _T3CCP1 3
#define _T3ECCP1 6
#define _RD16 7

#define _T3INSYNC 2
#define _T3CKPS0 4
#define _T3CKPS1 5

#define _T3SYNC 2

// The following are aliases ..  
#define __T3CKPS 4:2

// ------------------------------
//        TMR3
// ------------------------------
unsigned int TMR3@0xfb2 ;
// ------------------------------
//        TMR3L
// ------------------------------
unsigned int TMR3L@0xfb2 ;
// ------------------------------
//        TMR3H
// ------------------------------
unsigned int TMR3H@0xfb3 ;
// ------------------------------
//        CMCON
// ------------------------------
unsigned int CMCON@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 3,
  CIS : 1 ,
  C1INV : 1 ,
  C2INV : 1 ,
  C1OUT : 1 ,
  C2OUT : 1 ;
} ; 

struct 
{
  unsigned int 
  CM0 : 1 ,
  CM1 : 1 ,
  CM2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CM : 3 ;
} ; 

} CMCONbits@0xfb4  ;

#define _CIS 3
#define _C1INV 4
#define _C2INV 5
#define _C1OUT 6
#define _C2OUT 7

#define _CM0 0
#define _CM1 1
#define _CM2 2

// The following are aliases ..  
#define __CM 0:3

// ------------------------------
//        CVRCON
// ------------------------------
unsigned int CVRCON@0xfb5 ;
union
{

struct 
{
  unsigned int 
  : 4,
  CVRSS : 1 ,
  CVRR : 1 ,
  CVROE : 1 ,
  CVREN : 1 ;
} ; 

struct 
{
  unsigned int 
  CVR0 : 1 ,
  CVR1 : 1 ,
  CVR2 : 1 ,
  CVR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CVR : 4 ;
} ; 

} CVRCONbits@0xfb5  ;

#define _CVRSS 4
#define _CVRR 5
#define _CVROE 6
#define _CVREN 7

#define _CVR0 0
#define _CVR1 1
#define _CVR2 2
#define _CVR3 3

// The following are aliases ..  
#define __CVR 0:4

// ------------------------------
//        ECCPAS
// ------------------------------
unsigned int ECCPAS@0xfb6 ;
union
{

struct 
{
  unsigned int 
  : 7,
  ECCPASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSSBD0 : 1 ,
  PSSBD1 : 1 ,
  PSSAC0 : 1 ,
  PSSAC1 : 1 ,
  ECCPAS0 : 1 ,
  ECCPAS1 : 1 ,
  ECCPAS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSSBD : 2 ,
  _PSSAC : 2 ,
  _ECCPAS : 3 ;
} ; 

} ECCPASbits@0xfb6  ;

#define _ECCPASE 7

#define _PSSBD0 0
#define _PSSBD1 1
#define _PSSAC0 2
#define _PSSAC1 3
#define _ECCPAS0 4
#define _ECCPAS1 5
#define _ECCPAS2 6

// The following are aliases ..  
#define __PSSBD 0:2
#define __PSSAC 2:2
#define __ECCPAS 4:3

// ------------------------------
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xfb7 ;
union
{

struct 
{
  unsigned int 
  EPDC0 : 1 ,
  EPDC1 : 1 ,
  EPDC2 : 1 ,
  EPDC3 : 1 ,
  EPDC4 : 1 ,
  EPDC5 : 1 ,
  EPDC6 : 1 ,
  EPDC7 : 1 ;
} ; 

} ECCP1DELbits@0xfb7  ;

#define _EPDC0 0
#define _EPDC1 1
#define _EPDC2 2
#define _EPDC3 3
#define _EPDC4 4
#define _EPDC5 5
#define _EPDC6 6
#define _EPDC7 7

// ------------------------------
//        ECCP1CON
// ------------------------------
unsigned int ECCP1CON@0xfba ;
union
{

struct 
{
  unsigned int 
  ECCP1M0 : 1 ,
  ECCP1M1 : 1 ,
  ECCP1M2 : 1 ,
  ECCP1M3 : 1 ,
  EDC1B0 : 1 ,
  EDC1B1 : 1 ,
  EPWM1M0 : 1 ,
  EPWM1M1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  EDC2B0 : 1 ,
  EDC2B1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ECCP1M : 4 ,
  _EDC1B : 2 ,
  _EPWM1M : 2 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  _EDC2B : 2 ;
} ; 

} ECCP1CONbits@0xfba  ;

#define _ECCP1M0 0
#define _ECCP1M1 1
#define _ECCP1M2 2
#define _ECCP1M3 3
#define _EDC1B0 4
#define _EDC1B1 5
#define _EPWM1M0 6
#define _EPWM1M1 7

#define _EDC2B0 4
#define _EDC2B1 5

// The following are aliases ..  
#define __ECCP1M 0:4
#define __EDC1B 4:2
#define __EPWM1M 6:2

#define __EDC2B 4:2

// ------------------------------
//        ECCPR1
// ------------------------------
unsigned int ECCPR1@0xfbb ;
// ------------------------------
//        ECCPR1L
// ------------------------------
unsigned int ECCPR1L@0xfbb ;
// ------------------------------
//        ECCPR1H
// ------------------------------
unsigned int ECCPR1H@0xfbc ;
// ------------------------------
//        CCP1CON
// ------------------------------
unsigned int CCP1CON@0xfbd ;
union
{

struct 
{
  unsigned int 
  CCP1M0 : 1 ,
  CCP1M1 : 1 ,
  CCP1M2 : 1 ,
  CCP1M3 : 1 ,
  DC1B0 : 1 ,
  DC1B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP1Y : 1 ,
  CCP1X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP1M : 4 ,
  _DC1B : 2 ;
} ; 

} CCP1CONbits@0xfbd  ;

#define _CCP1M0 0
#define _CCP1M1 1
#define _CCP1M2 2
#define _CCP1M3 3
#define _DC1B0 4
#define _DC1B1 5

#define _CCP1Y 4
#define _CCP1X 5

// The following are aliases ..  
#define __CCP1M 0:4
#define __DC1B 4:2

// ------------------------------
//        CCPR1
// ------------------------------
unsigned int CCPR1@0xfbe ;
// ------------------------------
//        CCPR1L
// ------------------------------
unsigned int CCPR1L@0xfbe ;
// ------------------------------
//        CCPR1H
// ------------------------------
unsigned int CCPR1H@0xfbf ;
// ------------------------------
//        ADCON1
// ------------------------------
unsigned int ADCON1@0xfc1 ;
union
{

struct 
{
  unsigned int 
  : 6,
  ADCS2 : 1 ,
  ADFM : 1 ;
} ; 

struct 
{
  unsigned int 
  PCFG0 : 1 ,
  PCFG1 : 1 ,
  PCFG2 : 1 ,
  PCFG3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PCFG : 4 ;
} ; 

} ADCON1bits@0xfc1  ;

#define _ADCS2 6
#define _ADFM 7

#define _PCFG0 0
#define _PCFG1 1
#define _PCFG2 2
#define _PCFG3 3

// The following are aliases ..  
#define __PCFG 0:4

// ------------------------------
//        ADCON0
// ------------------------------
unsigned int ADCON0@0xfc2 ;
union
{

struct 
{
  unsigned int 
  ADON : 1 ,
  : 1,
  GO_NOT_DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  DONE : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ,
  CHS2 : 1 ,
  ADCS0 : 1 ,
  ADCS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  GO_DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  GO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  NOT_DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 3,
  _CHS : 3 ,
  _ADCS : 2 ;
} ; 

} ADCON0bits@0xfc2  ;

#define _ADON 0
#define _GO_NOT_DONE 2

#define _DONE 2
#define _CHS0 3
#define _CHS1 4
#define _CHS2 5
#define _ADCS0 6
#define _ADCS1 7

#define _GO_DONE 2

#define _GO 2

#define _NOT_DONE 2

// The following are aliases ..  
#define __CHS 3:3
#define __ADCS 6:2

// ------------------------------
//        ADRES
// ------------------------------
unsigned int ADRES@0xfc3 ;
// ------------------------------
//        ADRESL
// ------------------------------
unsigned int ADRESL@0xfc3 ;
// ------------------------------
//        ADRESH
// ------------------------------
unsigned int ADRESH@0xfc4 ;
// ------------------------------
//        SSPCON2
// ------------------------------
unsigned int SSPCON2@0xfc5 ;
union
{

struct 
{
  unsigned int 
  SEN : 1 ,
  RSEN : 1 ,
  PEN : 1 ,
  RCEN : 1 ,
  ACKEN : 1 ,
  ACKDT : 1 ,
  ACKSTAT : 1 ,
  GCEN : 1 ;
} ; 

} SSPCON2bits@0xfc5  ;

#define _SEN 0
#define _RSEN 1
#define _PEN 2
#define _RCEN 3
#define _ACKEN 4
#define _ACKDT 5
#define _ACKSTAT 6
#define _GCEN 7

// ------------------------------
//        SSPCON1
// ------------------------------
unsigned int SSPCON1@0xfc6 ;
union
{

struct 
{
  unsigned int 
  : 4,
  CKP : 1 ,
  SSPEN : 1 ,
  SSPOV : 1 ,
  WCOL : 1 ;
} ; 

struct 
{
  unsigned int 
  SSPM0 : 1 ,
  SSPM1 : 1 ,
  SSPM2 : 1 ,
  SSPM3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SSPM : 4 ;
} ; 

} SSPCON1bits@0xfc6  ;

#define _CKP 4
#define _SSPEN 5
#define _SSPOV 6
#define _WCOL 7

#define _SSPM0 0
#define _SSPM1 1
#define _SSPM2 2
#define _SSPM3 3

// The following are aliases ..  
#define __SSPM 0:4

// ------------------------------
//        SSPSTAT
// ------------------------------
unsigned int SSPSTAT@0xfc7 ;
union
{

struct 
{
  unsigned int 
  BF : 1 ,
  UA : 1 ,
  R_NOT_W : 1 ,
  S : 1 ,
  P : 1 ,
  D_NOT_A : 1 ,
  CKE : 1 ,
  SMP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  I2C_READ : 1 ,
  I2C_START : 1 ,
  I2C_STOP : 1 ,
  I2C_DATA : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  R : 1 ,
  : 2,
  D : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  READ_WRITE : 1 ,
  : 2,
  DATA_ADDRESS : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  NOT_WRITE : 1 ,
  : 2,
  NOT_ADDRESS : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  NOT_W : 1 ,
  : 2,
  NOT_A : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  R_W : 1 ,
  : 2,
  D_A : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  I2C_DAT : 1 ;
} ; 

} SSPSTATbits@0xfc7  ;

#define _BF 0
#define _UA 1
#define _R_NOT_W 2
#define _S 3
#define _P 4
#define _D_NOT_A 5
#define _CKE 6
#define _SMP 7

#define _I2C_READ 2
#define _I2C_START 3
#define _I2C_STOP 4
#define _I2C_DATA 5

#define _R 2
#define _D 5

#define _READ_WRITE 2
#define _DATA_ADDRESS 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

#define _NOT_W 2
#define _NOT_A 5

#define _R_W 2
#define _D_A 5

#define _I2C_DAT 5

// ------------------------------
//        SSPADD
// ------------------------------
unsigned int SSPADD@0xfc8 ;
// ------------------------------
//        SSPBUF
// ------------------------------
unsigned int SSPBUF@0xfc9 ;
// ------------------------------
//        T2CON
// ------------------------------
unsigned int T2CON@0xfca ;
union
{

struct 
{
  unsigned int 
  : 2,
  TMR2ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T2CKPS0 : 1 ,
  T2CKPS1 : 1 ,
  : 1,
  TOUTPS0 : 1 ,
  TOUTPS1 : 1 ,
  TOUTPS2 : 1 ,
  TOUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T2CKPS : 2 ,
  : 1,
  _TOUTPS : 4 ;
} ; 

} T2CONbits@0xfca  ;

#define _TMR2ON 2

#define _T2CKPS0 0
#define _T2CKPS1 1
#define _TOUTPS0 3
#define _TOUTPS1 4
#define _TOUTPS2 5
#define _TOUTPS3 6

// The following are aliases ..  
#define __T2CKPS 0:2
#define __TOUTPS 3:4

// ------------------------------
//        PR2
// ------------------------------
unsigned int PR2@0xfcb ;
// ------------------------------
//        TMR2
// ------------------------------
unsigned int TMR2@0xfcc ;
// ------------------------------
//        T1CON
// ------------------------------
unsigned int T1CON@0xfcd ;
union
{

struct 
{
  unsigned int 
  TMR1ON : 1 ,
  TMR1CS : 1 ,
  NOT_T1SYNC : 1 ,
  T1OSCEN : 1 ,
  : 3,
  RD16 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1INSYNC : 1 ,
  : 1,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1SYNC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T1CKPS : 2 ;
} ; 

} T1CONbits@0xfcd  ;

#define _TMR1ON 0
#define _TMR1CS 1
#define _NOT_T1SYNC 2
#define _T1OSCEN 3
#define _RD16 7

#define _T1INSYNC 2
#define _T1CKPS0 4
#define _T1CKPS1 5

#define _T1SYNC 2

// The following are aliases ..  
#define __T1CKPS 4:2

// ------------------------------
//        TMR1
// ------------------------------
unsigned int TMR1@0xfce ;
// ------------------------------
//        TMR1L
// ------------------------------
unsigned int TMR1L@0xfce ;
// ------------------------------
//        TMR1H
// ------------------------------
unsigned int TMR1H@0xfcf ;
// ------------------------------
//        RCON
// ------------------------------
unsigned int RCON@0xfd0 ;
union
{

struct 
{
  unsigned int 
  NOT_BOR : 1 ,
  NOT_POR : 1 ,
  NOT_PD : 1 ,
  NOT_TO : 1 ,
  NOT_RI : 1 ,
  : 2,
  IPEN : 1 ;
} ; 

struct 
{
  unsigned int 
  BOR : 1 ,
  POR : 1 ,
  PD : 1 ,
  TO : 1 ,
  RI : 1 ,
  : 2,
  NOT_IPEN : 1 ;
} ; 

} RCONbits@0xfd0  ;

#define _NOT_BOR 0
#define _NOT_POR 1
#define _NOT_PD 2
#define _NOT_TO 3
#define _NOT_RI 4
#define _IPEN 7

#define _BOR 0
#define _POR 1
#define _PD 2
#define _TO 3
#define _RI 4
#define _NOT_IPEN 7

// ------------------------------
//        WDTCON
// ------------------------------
unsigned int WDTCON@0xfd1 ;
union
{

struct 
{
  unsigned int 
  SWDTEN : 1 ;
} ; 

struct 
{
  unsigned int 
  SWDTE : 1 ;
} ; 

} WDTCONbits@0xfd1  ;

#define _SWDTEN 0

#define _SWDTE 0

// ------------------------------
//        LVDCON
// ------------------------------
unsigned int LVDCON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  : 4,
  LVDEN : 1 ,
  IRVST : 1 ;
} ; 

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  LVDL2 : 1 ,
  LVDL3 : 1 ,
  : 1,
  IVRST : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LVDL : 4 ;
} ; 

} LVDCONbits@0xfd2  ;

#define _LVDEN 4
#define _IRVST 5

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL2 2
#define _LVDL3 3
#define _IVRST 5

// The following are aliases ..  
#define __LVDL 0:4

// ------------------------------
//        OSCCON
// ------------------------------
unsigned int OSCCON@0xfd3 ;
union
{

struct 
{
  unsigned int 
  SCS : 1 ;
} ; 

} OSCCONbits@0xfd3  ;

#define _SCS 0

// ------------------------------
//        T0CON
// ------------------------------
unsigned int T0CON@0xfd5 ;
union
{

struct 
{
  unsigned int 
  : 3,
  PSA : 1 ,
  T0SE : 1 ,
  T0CS : 1 ,
  T08BIT : 1 ,
  TMR0ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T0PS0 : 1 ,
  T0PS1 : 1 ,
  T0PS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T0PS : 3 ;
} ; 

} T0CONbits@0xfd5  ;

#define _PSA 3
#define _T0SE 4
#define _T0CS 5
#define _T08BIT 6
#define _TMR0ON 7

#define _T0PS0 0
#define _T0PS1 1
#define _T0PS2 2

// The following are aliases ..  
#define __T0PS 0:3

// ------------------------------
//        TMR0
// ------------------------------
unsigned int TMR0@0xfd6 ;
// ------------------------------
//        TMR0L
// ------------------------------
unsigned int TMR0L@0xfd6 ;
// ------------------------------
//        TMR0H
// ------------------------------
unsigned int TMR0H@0xfd7 ;
// ------------------------------
//        STATUS
// ------------------------------
unsigned int STATUS@0xfd8 ;
union
{

struct 
{
  unsigned int 
  C : 1 ,
  DC : 1 ,
  Z : 1 ,
  OV : 1 ,
  N : 1 ;
} ; 

} STATUSbits@0xfd8  ;

#define _C 0
#define _DC 1
#define _Z 2
#define _OV 3
#define _N 4

// ------------------------------
//        FSR2L
// ------------------------------
unsigned int FSR2L@0xfd9 ;
// ------------------------------
//        FSR2H
// ------------------------------
unsigned int FSR2H@0xfda ;
// ------------------------------
//        PLUSW2
// ------------------------------
unsigned int PLUSW2@0xfdb ;
// ------------------------------
//        PREINC2
// ------------------------------
unsigned int PREINC2@0xfdc ;
// ------------------------------
//        POSTDEC2
// ------------------------------
unsigned int POSTDEC2@0xfdd ;
// ------------------------------
//        POSTINC2
// ------------------------------
unsigned int POSTINC2@0xfde ;
// ------------------------------
//        INDF2
// ------------------------------
unsigned int INDF2@0xfdf ;
// ------------------------------
//        BSR
// ------------------------------
unsigned int BSR@0xfe0 ;
// ------------------------------
//        FSR1L
// ------------------------------
unsigned int FSR1L@0xfe1 ;
// ------------------------------
//        FSR1H
// ------------------------------
unsigned int FSR1H@0xfe2 ;
// ------------------------------
//        PLUSW1
// ------------------------------
unsigned int PLUSW1@0xfe3 ;
// ------------------------------
//        PREINC1
// ------------------------------
unsigned int PREINC1@0xfe4 ;
// ------------------------------
//        POSTDEC1
// ------------------------------
unsigned int POSTDEC1@0xfe5 ;
// ------------------------------
//        POSTINC1
// ------------------------------
unsigned int POSTINC1@0xfe6 ;
// ------------------------------
//        INDF1
// ------------------------------
unsigned int INDF1@0xfe7 ;
// ------------------------------
//        WREG
// ------------------------------
unsigned int WREG@0xfe8 ;
// ------------------------------
//        FSR0L
// ------------------------------
unsigned int FSR0L@0xfe9 ;
// ------------------------------
//        FSR0H
// ------------------------------
unsigned int FSR0H@0xfea ;
// ------------------------------
//        PLUSW0
// ------------------------------
unsigned int PLUSW0@0xfeb ;
// ------------------------------
//        PREINC0
// ------------------------------
unsigned int PREINC0@0xfec ;
// ------------------------------
//        POSTDEC0
// ------------------------------
unsigned int POSTDEC0@0xfed ;
// ------------------------------
//        POSTINC0
// ------------------------------
unsigned int POSTINC0@0xfee ;
// ------------------------------
//        INDF0
// ------------------------------
unsigned int INDF0@0xfef ;
// ------------------------------
//        INTCON3
// ------------------------------
unsigned int INTCON3@0xff0 ;
union
{

struct 
{
  unsigned int 
  INT1IF : 1 ,
  INT2IF : 1 ,
  : 1,
  INT1IE : 1 ,
  INT2IE : 1 ,
  : 1,
  INT1IP : 1 ,
  INT2IP : 1 ;
} ; 

struct 
{
  unsigned int 
  INT1F : 1 ,
  INT2F : 1 ,
  : 1,
  INT1E : 1 ,
  INT2E : 1 ,
  : 1,
  INT1P : 1 ,
  INT2P : 1 ;
} ; 

} INTCON3bits@0xff0  ;

#define _INT1IF 0
#define _INT2IF 1
#define _INT1IE 3
#define _INT2IE 4
#define _INT1IP 6
#define _INT2IP 7

#define _INT1F 0
#define _INT2F 1
#define _INT1E 3
#define _INT2E 4
#define _INT1P 6
#define _INT2P 7

// ------------------------------
//        INTCON2
// ------------------------------
unsigned int INTCON2@0xff1 ;
union
{

struct 
{
  unsigned int 
  RBIP : 1 ,
  : 1,
  TMR0IP : 1 ,
  : 1,
  INTEDG2 : 1 ,
  INTEDG1 : 1 ,
  INTEDG0 : 1 ,
  NOT_RBPU : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T0IP : 1 ,
  : 4,
  RBPU : 1 ;
} ; 

} INTCON2bits@0xff1  ;

#define _RBIP 0
#define _TMR0IP 2
#define _INTEDG2 4
#define _INTEDG1 5
#define _INTEDG0 6
#define _NOT_RBPU 7

#define _T0IP 2
#define _RBPU 7

// ------------------------------
//        INTCON
// ------------------------------
unsigned int INTCON@0xff2 ;
union
{

struct 
{
  unsigned int 
  RBIF : 1 ,
  INT0IF : 1 ,
  TMR0IF : 1 ,
  RBIE : 1 ,
  INT0IE : 1 ,
  TMR0IE : 1 ,
  PEIE_GIEL : 1 ,
  GIE_GIEH : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  INT0F : 1 ,
  T0IF : 1 ,
  : 1,
  INT0E : 1 ,
  T0IE : 1 ,
  PEIE : 1 ,
  GIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  GIEL : 1 ,
  GIEH : 1 ;
} ; 

} INTCONbits@0xff2  ;

#define _RBIF 0
#define _INT0IF 1
#define _TMR0IF 2
#define _RBIE 3
#define _INT0IE 4
#define _TMR0IE 5
#define _PEIE_GIEL 6
#define _GIE_GIEH 7

#define _INT0F 1
#define _T0IF 2
#define _INT0E 4
#define _T0IE 5
#define _PEIE 6
#define _GIE 7

#define _GIEL 6
#define _GIEH 7

// ------------------------------
//        INTCON1
// ------------------------------
unsigned int INTCON1@0xff2 ;
union
{

struct 
{
  unsigned int 
  RBIF : 1 ,
  INT0IF : 1 ,
  TMR0IF : 1 ,
  RBIE : 1 ,
  INT0IE : 1 ,
  TMR0IE : 1 ,
  PEIE_GIEL : 1 ,
  GIE_GIEH : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  INT0F : 1 ,
  T0IF : 1 ,
  : 1,
  INT0E : 1 ,
  T0IE : 1 ,
  PEIE : 1 ,
  GIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  GIEL : 1 ,
  GIEH : 1 ;
} ; 

} INTCON1bits@0xff2  ;

#define _RBIF 0
#define _INT0IF 1
#define _TMR0IF 2
#define _RBIE 3
#define _INT0IE 4
#define _TMR0IE 5
#define _PEIE_GIEL 6
#define _GIE_GIEH 7

#define _INT0F 1
#define _T0IF 2
#define _INT0E 4
#define _T0IE 5
#define _PEIE 6
#define _GIE 7

#define _GIEL 6
#define _GIEH 7

// ------------------------------
//        PROD
// ------------------------------
unsigned int PROD@0xff3 ;
// ------------------------------
//        PRODL
// ------------------------------
unsigned int PRODL@0xff3 ;
// ------------------------------
//        PRODH
// ------------------------------
unsigned int PRODH@0xff4 ;
// ------------------------------
//        TABLAT
// ------------------------------
unsigned int TABLAT@0xff5 ;
// ------------------------------
//        TBLPTR
// ------------------------------
unsigned int TBLPTR@0xff6 ;
// ------------------------------
//        TBLPTRL
// ------------------------------
unsigned int TBLPTRL@0xff6 ;
// ------------------------------
//        TBLPTRH
// ------------------------------
unsigned int TBLPTRH@0xff7 ;
// ------------------------------
//        TBLPTRU
// ------------------------------
unsigned int TBLPTRU@0xff8 ;
// ------------------------------
//        PC
// ------------------------------
unsigned int PC@0xff9 ;
// ------------------------------
//        PCL
// ------------------------------
unsigned int PCL@0xff9 ;
// ------------------------------
//        PCLATH
// ------------------------------
unsigned int PCLATH@0xffa ;
// ------------------------------
//        PCLATU
// ------------------------------
unsigned int PCLATU@0xffb ;
// ------------------------------
//        STKPTR
// ------------------------------
unsigned int STKPTR@0xffc ;
union
{

struct 
{
  unsigned int 
  : 6,
  STKUNF : 1 ,
  STKFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  STKPTR0 : 1 ,
  STKPTR1 : 1 ,
  STKPTR2 : 1 ,
  STKPTR3 : 1 ,
  STKPTR4 : 1 ,
  : 2,
  STKOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  SP0 : 1 ,
  SP1 : 1 ,
  SP2 : 1 ,
  SP3 : 1 ,
  SP4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _STKPTR : 5 ;
} ; 

struct 
{
  unsigned int 
  _SP : 5 ;
} ; 

} STKPTRbits@0xffc  ;

#define _STKUNF 6
#define _STKFUL 7

#define _STKPTR0 0
#define _STKPTR1 1
#define _STKPTR2 2
#define _STKPTR3 3
#define _STKPTR4 4
#define _STKOVF 7

#define _SP0 0
#define _SP1 1
#define _SP2 2
#define _SP3 3
#define _SP4 4

// The following are aliases ..  
#define __STKPTR 0:5

#define __SP 0:5

// ------------------------------
//        TOS
// ------------------------------
unsigned int TOS@0xffd ;
// ------------------------------
//        TOSL
// ------------------------------
unsigned int TOSL@0xffd ;
// ------------------------------
//        TOSH
// ------------------------------
unsigned int TOSH@0xffe ;
// ------------------------------
//        TOSU
// ------------------------------
unsigned int TOSU@0xfff ;
#endif
