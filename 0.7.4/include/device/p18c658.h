#ifndef DEVICE
#define DEVICE p18c658
#define p18c658

// ======================================
//         PROCESSOR : p18c658
// ======================================

// This file has been automatically generated from Microchip's "p18c658.inc" file.
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

struct 
{
  unsigned int 
  : 3,
  EXIDE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF0SIDLbits@0xf01  ;

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

struct 
{
  unsigned int 
  : 3,
  EXIDE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF1SIDLbits@0xf05  ;

// ------------------------------
//        RXF1EID8
// ------------------------------
unsigned int RXF1EID8@0xf06 ;
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

} RXF1EID8bits@0xf06  ;

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

// ------------------------------
//        RXF1EID0
// ------------------------------
unsigned int RXF1EID0@0xf07 ;
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

} RXF1EID0bits@0xf07  ;

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

struct 
{
  unsigned int 
  : 3,
  EXIDE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF2SIDLbits@0xf09  ;

// ------------------------------
//        RXF2EID8
// ------------------------------
unsigned int RXF2EID8@0xf0a ;
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

} RXF2EID8bits@0xf0a  ;

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

// ------------------------------
//        RXF2EID0
// ------------------------------
unsigned int RXF2EID0@0xf0b ;
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

} RXF2EID0bits@0xf0b  ;

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

struct 
{
  unsigned int 
  : 3,
  EXIDE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF3SIDLbits@0xf0d  ;

// ------------------------------
//        RXF3EID8
// ------------------------------
unsigned int RXF3EID8@0xf0e ;
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

} RXF3EID8bits@0xf0e  ;

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

// ------------------------------
//        RXF3EID0
// ------------------------------
unsigned int RXF3EID0@0xf0f ;
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

} RXF3EID0bits@0xf0f  ;

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

struct 
{
  unsigned int 
  : 3,
  EXIDE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF4SIDLbits@0xf11  ;

// ------------------------------
//        RXF4EID8
// ------------------------------
unsigned int RXF4EID8@0xf12 ;
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

} RXF4EID8bits@0xf12  ;

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

// ------------------------------
//        RXF4EID0
// ------------------------------
unsigned int RXF4EID0@0xf13 ;
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

} RXF4EID0bits@0xf13  ;

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

struct 
{
  unsigned int 
  : 3,
  EXIDE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} RXF5SIDLbits@0xf15  ;

// ------------------------------
//        RXF5EID8
// ------------------------------
unsigned int RXF5EID8@0xf16 ;
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

} RXF5EID8bits@0xf16  ;

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

// ------------------------------
//        RXF5EID0
// ------------------------------
unsigned int RXF5EID0@0xf17 ;
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

} RXF5EID0bits@0xf17  ;

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

// ------------------------------
//        RXM0EID8
// ------------------------------
unsigned int RXM0EID8@0xf1a ;
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

} RXM0EID8bits@0xf1a  ;

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

// ------------------------------
//        RXM0EID0
// ------------------------------
unsigned int RXM0EID0@0xf1b ;
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

} RXM0EID0bits@0xf1b  ;

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

// ------------------------------
//        RXM1EID8
// ------------------------------
unsigned int RXM1EID8@0xf1e ;
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

} RXM1EID8bits@0xf1e  ;

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

// ------------------------------
//        RXM1EID0
// ------------------------------
unsigned int RXM1EID0@0xf1f ;
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

} RXM1EID0bits@0xf1f  ;

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

struct 
{
  unsigned int 
  : 3,
  EXID : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} TXB2SIDLbits@0xf22  ;

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

struct 
{
  unsigned int 
  DCL0 : 1 ,
  : 5,
  RTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} TXB2DLCbits@0xf25  ;

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

// ------------------------------
//        CANSTATRO3
// ------------------------------
unsigned int CANSTATRO3@0xf2e ;
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

} CANSTATRO3bits@0xf2e  ;

// ------------------------------
//        CANSTAT_R04
// ------------------------------
unsigned int CANSTAT_R04@0xf2e ;
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

} CANSTAT_R04bits@0xf2e  ;

// ------------------------------
//        CANSTAT_RO4
// ------------------------------
unsigned int CANSTAT_RO4@0xf2e ;
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

} CANSTAT_RO4bits@0xf2e  ;

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

struct 
{
  unsigned int 
  : 3,
  EXID : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} TXB1SIDLbits@0xf32  ;

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

struct 
{
  unsigned int 
  : 6,
  RTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} TXB1DLCbits@0xf35  ;

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

// ------------------------------
//        CANSTATRO2
// ------------------------------
unsigned int CANSTATRO2@0xf3e ;
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

} CANSTATRO2bits@0xf3e  ;

// ------------------------------
//        CANSTAT_R03
// ------------------------------
unsigned int CANSTAT_R03@0xf3e ;
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

} CANSTAT_R03bits@0xf3e  ;

// ------------------------------
//        CANSTAT_RO3
// ------------------------------
unsigned int CANSTAT_RO3@0xf3e ;
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

} CANSTAT_RO3bits@0xf3e  ;

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
  EXIDEN : 1 ,
  : 1,
  SID0 : 1 ,
  SID1 : 1 ,
  SID2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  EXID : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 5,
  _SID : 3 ;
} ; 

} TXB0SIDLbits@0xf42  ;

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

struct 
{
  unsigned int 
  : 6,
  RTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} TXB0DLCbits@0xf45  ;

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

// ------------------------------
//        CANSTATRO1
// ------------------------------
unsigned int CANSTATRO1@0xf4e ;
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

} CANSTATRO1bits@0xf4e  ;

// ------------------------------
//        CANSTAT_R02
// ------------------------------
unsigned int CANSTAT_R02@0xf4e ;
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

} CANSTAT_R02bits@0xf4e  ;

// ------------------------------
//        CANSTAT_RO2
// ------------------------------
unsigned int CANSTAT_RO2@0xf4e ;
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

} CANSTAT_RO2bits@0xf4e  ;

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
  RESB0 : 1 ,
  RESB1 : 1 ,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RESBO : 1 ,
  : 1,
  RTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ,
  _RESB : 2 ;
} ; 

} RXB1DLCbits@0xf55  ;

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

// ------------------------------
//        CANSTATRO0
// ------------------------------
unsigned int CANSTATRO0@0xf5e ;
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

} CANSTATRO0bits@0xf5e  ;

// ------------------------------
//        CANSTAT_R01
// ------------------------------
unsigned int CANSTAT_R01@0xf5e ;
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

} CANSTAT_R01bits@0xf5e  ;

// ------------------------------
//        CANSTAT_RO1
// ------------------------------
unsigned int CANSTAT_RO1@0xf5e ;
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

} CANSTAT_RO1bits@0xf5e  ;

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

struct 
{
  unsigned int 
  : 2,
  RX0DBEN : 1 ;
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
  RESB0 : 1 ,
  RESB1 : 1 ,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ,
  _RESB : 2 ;
} ; 

} RXB0DLCbits@0xf65  ;

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

struct 
{
  unsigned int 
  : 1,
  ICOED0 : 1 ;
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
  ENDRHI : 1 ,
  TX1EN : 1 ,
  TX1SRC : 1 ;
} ; 

} CIOCONbits@0xf73  ;

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
  RX1OVFL : 1 ,
  RX0OVFL : 1 ;
} ; 

} COMSTATbits@0xf74  ;

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
  : 2,
  VREFM : 1 ,
  VREFP : 1 ,
  T0CKI : 1 ,
  SS : 1 ,
  CLK0 : 1 ;
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

// ------------------------------
//        PORTB
// ------------------------------
unsigned int PORTB@0xf81 ;
union
{

struct 
{
  unsigned int 
  RB0 : 1 ,
  RB1 : 1 ,
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
  INT2 : 1 ,
  INT3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT : 4 ;
} ; 

} PORTBbits@0xf81  ;

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
  RE2 : 1 ,
  RE3 : 1 ,
  RE4 : 1 ,
  RE5 : 1 ,
  RE6 : 1 ,
  RE7 : 1 ;
} ; 

struct 
{
  unsigned int 
  NOT_RD : 1 ,
  NOT_WR : 1 ,
  NOT_CS : 1 ,
  : 4,
  CCP2 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN5 : 1 ;
} ; 

} PORTEbits@0xf84  ;

// ------------------------------
//        PORTF
// ------------------------------
unsigned int PORTF@0xf85 ;
union
{

struct 
{
  unsigned int 
  RF0 : 1 ,
  RF1 : 1 ,
  RF2 : 1 ,
  RF3 : 1 ,
  RF4 : 1 ,
  RF5 : 1 ,
  RF6 : 1 ,
  RF7 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN5 : 1 ,
  AN6 : 1 ,
  AN7 : 1 ,
  AN8 : 1 ,
  AN9 : 1 ,
  AN10 : 1 ,
  AN11 : 1 ;
} ; 

} PORTFbits@0xf85  ;

// ------------------------------
//        PORTG
// ------------------------------
unsigned int PORTG@0xf86 ;
union
{

struct 
{
  unsigned int 
  RG0 : 1 ,
  RG1 : 1 ,
  RG2 : 1 ,
  RG3 : 1 ,
  RG4 : 1 ;
} ; 

struct 
{
  unsigned int 
  CANTX1 : 1 ,
  CANTX2 : 1 ,
  CANRX : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RG : 5 ;
} ; 

} PORTGbits@0xf86  ;

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
  LATE2 : 1 ,
  LATE3 : 1 ,
  LATE4 : 1 ,
  LATE5 : 1 ,
  LATE6 : 1 ,
  LATE7 : 1 ;
} ; 

} LATEbits@0xf8d  ;

// ------------------------------
//        LATF
// ------------------------------
unsigned int LATF@0xf8e ;
union
{

struct 
{
  unsigned int 
  LATF0 : 1 ,
  LATF1 : 1 ,
  LATF2 : 1 ,
  LATF3 : 1 ,
  LATF4 : 1 ,
  LATF5 : 1 ,
  LATF6 : 1 ,
  LATF7 : 1 ;
} ; 

} LATFbits@0xf8e  ;

// ------------------------------
//        LATG
// ------------------------------
unsigned int LATG@0xf8f ;
union
{

struct 
{
  unsigned int 
  LATG0 : 1 ,
  LATG1 : 1 ,
  LATG2 : 1 ,
  LATG3 : 1 ,
  LATG4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATG : 5 ;
} ; 

} LATGbits@0xf8f  ;

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
  RB0 : 1 ,
  RB1 : 1 ,
  RB2 : 1 ,
  RB3 : 1 ,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

} DDRBbits@0xf93  ;

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
  RB0 : 1 ,
  RB1 : 1 ,
  RB2 : 1 ,
  RB3 : 1 ,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

} TRISBbits@0xf93  ;

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
  TRISE3 : 1 ,
  TRISE4 : 1 ,
  TRISE5 : 1 ,
  TRISE6 : 1 ,
  TRISE7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RE0 : 1 ,
  RE1 : 1 ,
  RE2 : 1 ,
  RE3 : 1 ,
  RE4 : 1 ,
  RE5 : 1 ,
  RE6 : 1 ,
  RE7 : 1 ;
} ; 

} DDREbits@0xf96  ;

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
  TRISE3 : 1 ,
  TRISE4 : 1 ,
  TRISE5 : 1 ,
  TRISE6 : 1 ,
  TRISE7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RE0 : 1 ,
  RE1 : 1 ,
  RE2 : 1 ,
  RE3 : 1 ,
  RE4 : 1 ,
  RE5 : 1 ,
  RE6 : 1 ,
  RE7 : 1 ;
} ; 

} TRISEbits@0xf96  ;

// ------------------------------
//        DDRF
// ------------------------------
unsigned int DDRF@0xf97 ;
union
{

struct 
{
  unsigned int 
  TRISF0 : 1 ,
  TRISF1 : 1 ,
  TRISF2 : 1 ,
  TRISF3 : 1 ,
  TRISF4 : 1 ,
  TRISF5 : 1 ,
  TRISF6 : 1 ,
  TRISF7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RF0 : 1 ,
  RF1 : 1 ,
  RF2 : 1 ,
  RF3 : 1 ,
  RF4 : 1 ,
  RF5 : 1 ,
  RF6 : 1 ,
  RF7 : 1 ;
} ; 

} DDRFbits@0xf97  ;

// ------------------------------
//        TRISF
// ------------------------------
unsigned int TRISF@0xf97 ;
union
{

struct 
{
  unsigned int 
  TRISF0 : 1 ,
  TRISF1 : 1 ,
  TRISF2 : 1 ,
  TRISF3 : 1 ,
  TRISF4 : 1 ,
  TRISF5 : 1 ,
  TRISF6 : 1 ,
  TRISF7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RF0 : 1 ,
  RF1 : 1 ,
  RF2 : 1 ,
  RF3 : 1 ,
  RF4 : 1 ,
  RF5 : 1 ,
  RF6 : 1 ,
  RF7 : 1 ;
} ; 

} TRISFbits@0xf97  ;

// ------------------------------
//        DDRG
// ------------------------------
unsigned int DDRG@0xf98 ;
union
{

struct 
{
  unsigned int 
  TRISG0 : 1 ,
  TRISG1 : 1 ,
  TRISG2 : 1 ,
  TRISG3 : 1 ,
  TRISG4 : 1 ;
} ; 

struct 
{
  unsigned int 
  RG0 : 1 ,
  RG1 : 1 ,
  RG2 : 1 ,
  RG3 : 1 ,
  RG4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISG : 5 ;
} ; 

struct 
{
  unsigned int 
  _RG : 5 ;
} ; 

} DDRGbits@0xf98  ;

// ------------------------------
//        TRISG
// ------------------------------
unsigned int TRISG@0xf98 ;
union
{

struct 
{
  unsigned int 
  TRISG0 : 1 ,
  TRISG1 : 1 ,
  TRISG2 : 1 ,
  TRISG3 : 1 ,
  TRISG4 : 1 ;
} ; 

struct 
{
  unsigned int 
  RG0 : 1 ,
  RG1 : 1 ,
  RG2 : 1 ,
  RG3 : 1 ,
  RG4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISG : 5 ;
} ; 

struct 
{
  unsigned int 
  _RG : 5 ;
} ; 

} TRISGbits@0xf98  ;

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

// ------------------------------
//        PIE2
// ------------------------------
unsigned int PIE2@0xfa0 ;
union
{

struct 
{
  unsigned int 
  CCP2IE : 1 ,
  TMR3IE : 1 ,
  LVDIE : 1 ,
  BCLIE : 1 ,
  : 2,
  CMIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

// ------------------------------
//        PIR2
// ------------------------------
unsigned int PIR2@0xfa1 ;
union
{

struct 
{
  unsigned int 
  CCP2IF : 1 ,
  TMR3IF : 1 ,
  LVDIF : 1 ,
  BCLIF : 1 ,
  : 2,
  CMIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

// ------------------------------
//        IPR2
// ------------------------------
unsigned int IPR2@0xfa2 ;
union
{

struct 
{
  unsigned int 
  CCP2IP : 1 ,
  TMR3IP : 1 ,
  LVDIP : 1 ,
  BCLIP : 1 ,
  : 2,
  CMIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

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

} PIE3bits@0xfa3  ;

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

} PIR3bits@0xfa4  ;

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

} IPR3bits@0xfa5  ;

// ------------------------------
//        COM1CON
// ------------------------------
unsigned int COM1CON@0xfab ;
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
  : 3,
  ADEN : 1 ;
} ; 

} COM1CONbits@0xfab  ;

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
  : 3,
  ADEN : 1 ;
} ; 

} RCSTAbits@0xfab  ;

// ------------------------------
//        COM1STA
// ------------------------------
unsigned int COM1STA@0xfac ;
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

} COM1STAbits@0xfac  ;

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

} TXSTAbits@0xfac  ;

// ------------------------------
//        COM1TX
// ------------------------------
unsigned int COM1TX@0xfad ;
// ------------------------------
//        TXREG
// ------------------------------
unsigned int TXREG@0xfad ;
// ------------------------------
//        COM1REC
// ------------------------------
unsigned int COM1REC@0xfae ;
// ------------------------------
//        RCREG
// ------------------------------
unsigned int RCREG@0xfae ;
// ------------------------------
//        COM1BRG
// ------------------------------
unsigned int COM1BRG@0xfaf ;
// ------------------------------
//        SPBRG
// ------------------------------
unsigned int SPBRG@0xfaf ;
// ------------------------------
//        PSPCON
// ------------------------------
unsigned int PSPCON@0xfb0 ;
union
{

struct 
{
  unsigned int 
  : 4,
  PSPMODE : 1 ,
  IBOV : 1 ,
  OBF : 1 ,
  IBF : 1 ;
} ; 

} PSPCONbits@0xfb0  ;

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
  T3CCP2 : 1 ,
  RD16 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T3SYNC : 1 ,
  : 1,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T3INSYNC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T3CKPS : 2 ;
} ; 

} T3CONbits@0xfb1  ;

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
  VRSS : 1 ,
  VRR : 1 ,
  VROEN : 1 ,
  VREN : 1 ;
} ; 

struct 
{
  unsigned int 
  VR0 : 1 ,
  VR1 : 1 ,
  VR2 : 1 ,
  VR3 : 1 ,
  : 1,
  CRR : 1 ,
  VROE : 1 ,
  CVREN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _VR : 4 ;
} ; 

} CVRCONbits@0xfb5  ;

// ------------------------------
//        VRCON
// ------------------------------
unsigned int VRCON@0xfb5 ;
union
{

struct 
{
  unsigned int 
  : 4,
  VRSS : 1 ,
  VRR : 1 ,
  VROEN : 1 ,
  VREN : 1 ;
} ; 

struct 
{
  unsigned int 
  VR0 : 1 ,
  VR1 : 1 ,
  VR2 : 1 ,
  VR3 : 1 ,
  : 1,
  CRR : 1 ,
  VROE : 1 ,
  CVREN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _VR : 4 ;
} ; 

} VRCONbits@0xfb5  ;

// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xfba ;
union
{

struct 
{
  unsigned int 
  CCP2M0 : 1 ,
  CCP2M1 : 1 ,
  CCP2M2 : 1 ,
  CCP2M3 : 1 ,
  DC2B0 : 1 ,
  DC2B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  CCPM3 : 1 ,
  CCP2Y : 1 ,
  CCP2X : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  DCCPX : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ,
  _DC2B : 2 ;
} ; 

} CCP2CONbits@0xfba  ;

// ------------------------------
//        CCPR2
// ------------------------------
unsigned int CCPR2@0xfbb ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xfbb ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xfbc ;
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
  : 3,
  CCPM3 : 1 ,
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
//        ADCON2
// ------------------------------
unsigned int ADCON2@0xfc0 ;
union
{

struct 
{
  unsigned int 
  : 7,
  ADFM : 1 ;
} ; 

struct 
{
  unsigned int 
  ADCS0 : 1 ,
  ADCS1 : 1 ,
  ADCS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADCS : 3 ;
} ; 

} ADCON2bits@0xfc0  ;

// ------------------------------
//        ADCON1
// ------------------------------
unsigned int ADCON1@0xfc1 ;
union
{

struct 
{
  unsigned int 
  PCFG0 : 1 ,
  PCFG1 : 1 ,
  PCFG2 : 1 ,
  PCFG3 : 1 ,
  VCFG0 : 1 ,
  VCFG1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PCFG : 4 ,
  _VCFG : 2 ;
} ; 

} ADCON1bits@0xfc1  ;

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
  GO_NOT_DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  GO : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ,
  CHS2 : 1 ,
  CHS3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  NOT_DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  GO_DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _CHS : 4 ;
} ; 

} ADCON0bits@0xfc2  ;

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
  T1SYNC : 1 ,
  : 1,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1INSYNC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T1CKPS : 2 ;
} ; 

} T1CONbits@0xfcd  ;

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
  : 1,
  LWRT : 1 ,
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
  : 1,
  NOT_LWRT : 1 ,
  NOT_IPEN : 1 ;
} ; 

} RCONbits@0xfd0  ;

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
  LVDL3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LVDL : 4 ;
} ; 

} LVDCONbits@0xfd2  ;

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
  T0PS2 : 1 ,
  T0PS3 : 1 ,
  : 2,
  T016BIT : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T0PS : 4 ;
} ; 

} T0CONbits@0xfd5  ;

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
  INT3IF : 1 ,
  INT1IE : 1 ,
  INT2IE : 1 ,
  INT3IE : 1 ,
  INT1IP : 1 ,
  INT2IP : 1 ;
} ; 

struct 
{
  unsigned int 
  INT1F : 1 ,
  INT2F : 1 ,
  INT3F : 1 ,
  INT1E : 1 ,
  INT2E : 1 ,
  INT3E : 1 ,
  INT1P : 1 ,
  INT2P : 1 ;
} ; 

} INTCON3bits@0xff0  ;

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
  INT3IP : 1 ,
  TMR0IP : 1 ,
  INTEDG3 : 1 ,
  INTEDG2 : 1 ,
  INTEDG1 : 1 ,
  INTEDG0 : 1 ,
  NOT_RBPU : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  INT3P : 1 ,
  T0IP : 1 ,
  : 4,
  RBPU : 1 ;
} ; 

} INTCON2bits@0xff1  ;

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
