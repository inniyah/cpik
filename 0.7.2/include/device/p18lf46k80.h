#ifndef DEVICE
#define DEVICE p18lf46k80
#define p18lf46k80

// ======================================
//         PROCESSOR : p18lf46k80
// ======================================

// This file has been automatically generated from Microchip's "p18lf46k80.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xe41 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        RXERRCNT
// ------------------------------
unsigned int RXERRCNT@0xe41 ;
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

} RXERRCNTbits@0xe41  ;

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
unsigned int TXERRCNT@0xe42 ;
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

} TXERRCNTbits@0xe42  ;

#define _TEC0 0
#define _TEC1 1
#define _TEC2 2
#define _TEC3 3
#define _TEC4 4
#define _TEC5 5
#define _TEC6 6
#define _TEC7 7

// ------------------------------
//        BRGCON1
// ------------------------------
unsigned int BRGCON1@0xe43 ;
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

} BRGCON1bits@0xe43  ;

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
unsigned int BRGCON2@0xe44 ;
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

} BRGCON2bits@0xe44  ;

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
unsigned int BRGCON3@0xe45 ;
union
{

struct 
{
  unsigned int 
  SEG2PH0 : 1 ,
  SEG2PH1 : 1 ,
  SEG2PH2 : 1 ,
  : 3,
  WAKFIL : 1 ,
  WAKDIS : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SEG2PH : 3 ;
} ; 

} BRGCON3bits@0xe45  ;

#define _SEG2PH0 0
#define _SEG2PH1 1
#define _SEG2PH2 2
#define _WAKFIL 6
#define _WAKDIS 7

// The following are aliases ..  
#define __SEG2PH 0:3

// ------------------------------
//        RXFCON0
// ------------------------------
unsigned int RXFCON0@0xe46 ;
union
{

struct 
{
  unsigned int 
  RXF0EN : 1 ,
  RXF1EN : 1 ,
  RXF2EN : 1 ,
  RXF3EN : 1 ,
  RXF4EN : 1 ,
  RXF5EN : 1 ,
  RXF6EN : 1 ,
  RXF7EN : 1 ;
} ; 

} RXFCON0bits@0xe46  ;

#define _RXF0EN 0
#define _RXF1EN 1
#define _RXF2EN 2
#define _RXF3EN 3
#define _RXF4EN 4
#define _RXF5EN 5
#define _RXF6EN 6
#define _RXF7EN 7

// ------------------------------
//        RXFCON1
// ------------------------------
unsigned int RXFCON1@0xe47 ;
union
{

struct 
{
  unsigned int 
  RXF8EN : 1 ,
  RXF9EN : 1 ,
  RXF10EN : 1 ,
  RXF11EN : 1 ,
  RXF12EN : 1 ,
  RXF13EN : 1 ,
  RXF14EN : 1 ,
  RXF15EN : 1 ;
} ; 

} RXFCON1bits@0xe47  ;

#define _RXF8EN 0
#define _RXF9EN 1
#define _RXF10EN 2
#define _RXF11EN 3
#define _RXF12EN 4
#define _RXF13EN 5
#define _RXF14EN 6
#define _RXF15EN 7

// ------------------------------
//        RXF6SIDH
// ------------------------------
unsigned int RXF6SIDH@0xe48 ;
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

} RXF6SIDHbits@0xe48  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF6SIDL
// ------------------------------
unsigned int RXF6SIDL@0xe49 ;
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

} RXF6SIDLbits@0xe49  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF6EIDH
// ------------------------------
unsigned int RXF6EIDH@0xe4a ;
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

} RXF6EIDHbits@0xe4a  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF6EIDL
// ------------------------------
unsigned int RXF6EIDL@0xe4b ;
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

} RXF6EIDLbits@0xe4b  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF7SIDH
// ------------------------------
unsigned int RXF7SIDH@0xe4c ;
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

} RXF7SIDHbits@0xe4c  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF7SIDL
// ------------------------------
unsigned int RXF7SIDL@0xe4d ;
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

} RXF7SIDLbits@0xe4d  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF7EIDH
// ------------------------------
unsigned int RXF7EIDH@0xe4e ;
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

} RXF7EIDHbits@0xe4e  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF7EIDL
// ------------------------------
unsigned int RXF7EIDL@0xe4f ;
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

} RXF7EIDLbits@0xe4f  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF8SIDH
// ------------------------------
unsigned int RXF8SIDH@0xe50 ;
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

} RXF8SIDHbits@0xe50  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF8SIDL
// ------------------------------
unsigned int RXF8SIDL@0xe51 ;
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

} RXF8SIDLbits@0xe51  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF8EIDH
// ------------------------------
unsigned int RXF8EIDH@0xe52 ;
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

} RXF8EIDHbits@0xe52  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF8EIDL
// ------------------------------
unsigned int RXF8EIDL@0xe53 ;
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

} RXF8EIDLbits@0xe53  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF9SIDH
// ------------------------------
unsigned int RXF9SIDH@0xe54 ;
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

} RXF9SIDHbits@0xe54  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF9SIDL
// ------------------------------
unsigned int RXF9SIDL@0xe55 ;
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

} RXF9SIDLbits@0xe55  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF9EIDH
// ------------------------------
unsigned int RXF9EIDH@0xe56 ;
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

} RXF9EIDHbits@0xe56  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF9EIDL
// ------------------------------
unsigned int RXF9EIDL@0xe57 ;
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

} RXF9EIDLbits@0xe57  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF10SIDH
// ------------------------------
unsigned int RXF10SIDH@0xe58 ;
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

} RXF10SIDHbits@0xe58  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF10SIDL
// ------------------------------
unsigned int RXF10SIDL@0xe59 ;
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

} RXF10SIDLbits@0xe59  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF10EIDH
// ------------------------------
unsigned int RXF10EIDH@0xe5a ;
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

} RXF10EIDHbits@0xe5a  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF10EIDL
// ------------------------------
unsigned int RXF10EIDL@0xe5b ;
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

} RXF10EIDLbits@0xe5b  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF11SIDH
// ------------------------------
unsigned int RXF11SIDH@0xe5c ;
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

} RXF11SIDHbits@0xe5c  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF11SIDL
// ------------------------------
unsigned int RXF11SIDL@0xe5d ;
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

} RXF11SIDLbits@0xe5d  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF11EIDH
// ------------------------------
unsigned int RXF11EIDH@0xe5e ;
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

} RXF11EIDHbits@0xe5e  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF11EIDL
// ------------------------------
unsigned int RXF11EIDL@0xe5f ;
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

} RXF11EIDLbits@0xe5f  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF12SIDH
// ------------------------------
unsigned int RXF12SIDH@0xe60 ;
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

} RXF12SIDHbits@0xe60  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF12SIDL
// ------------------------------
unsigned int RXF12SIDL@0xe61 ;
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

} RXF12SIDLbits@0xe61  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF12EIDH
// ------------------------------
unsigned int RXF12EIDH@0xe62 ;
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

} RXF12EIDHbits@0xe62  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF12EIDL
// ------------------------------
unsigned int RXF12EIDL@0xe63 ;
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

} RXF12EIDLbits@0xe63  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF13SIDH
// ------------------------------
unsigned int RXF13SIDH@0xe64 ;
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

} RXF13SIDHbits@0xe64  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF13SIDL
// ------------------------------
unsigned int RXF13SIDL@0xe65 ;
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

} RXF13SIDLbits@0xe65  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF13EIDH
// ------------------------------
unsigned int RXF13EIDH@0xe66 ;
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

} RXF13EIDHbits@0xe66  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF13EIDL
// ------------------------------
unsigned int RXF13EIDL@0xe67 ;
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

} RXF13EIDLbits@0xe67  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF14SIDH
// ------------------------------
unsigned int RXF14SIDH@0xe68 ;
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

} RXF14SIDHbits@0xe68  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF14SIDL
// ------------------------------
unsigned int RXF14SIDL@0xe69 ;
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

} RXF14SIDLbits@0xe69  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF14EIDH
// ------------------------------
unsigned int RXF14EIDH@0xe6a ;
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

} RXF14EIDHbits@0xe6a  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF14EIDL
// ------------------------------
unsigned int RXF14EIDL@0xe6b ;
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

} RXF14EIDLbits@0xe6b  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        RXF15SIDH
// ------------------------------
unsigned int RXF15SIDH@0xe6c ;
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

} RXF15SIDHbits@0xe6c  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        RXF15SIDL
// ------------------------------
unsigned int RXF15SIDL@0xe6d ;
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

} RXF15SIDLbits@0xe6d  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXF15EIDH
// ------------------------------
unsigned int RXF15EIDH@0xe6e ;
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

} RXF15EIDHbits@0xe6e  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        RXF15EIDL
// ------------------------------
unsigned int RXF15EIDL@0xe6f ;
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

} RXF15EIDLbits@0xe6f  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        SDFLC
// ------------------------------
unsigned int SDFLC@0xe70 ;
union
{

struct 
{
  unsigned int 
  FLC0 : 1 ,
  FLC1 : 1 ,
  FLC2 : 1 ,
  FLC3 : 1 ,
  FLC4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FLC : 5 ;
} ; 

} SDFLCbits@0xe70  ;

#define _FLC0 0
#define _FLC1 1
#define _FLC2 2
#define _FLC3 3
#define _FLC4 4

// The following are aliases ..  
#define __FLC 0:5

// ------------------------------
//        RXFBCON0
// ------------------------------
unsigned int RXFBCON0@0xe71 ;
union
{

struct 
{
  unsigned int 
  F0BP_0 : 1 ,
  F0BP_1 : 1 ,
  F0BP_2 : 1 ,
  F0BP_3 : 1 ,
  F1BP_0 : 1 ,
  F1BP_1 : 1 ,
  F1BP_2 : 1 ,
  F1BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F0BP_ : 4 ,
  _F1BP_ : 4 ;
} ; 

} RXFBCON0bits@0xe71  ;

#define _F0BP_0 0
#define _F0BP_1 1
#define _F0BP_2 2
#define _F0BP_3 3
#define _F1BP_0 4
#define _F1BP_1 5
#define _F1BP_2 6
#define _F1BP_3 7

// The following are aliases ..  
#define __F0BP_ 0:4
#define __F1BP_ 4:4

// ------------------------------
//        RXFBCON1
// ------------------------------
unsigned int RXFBCON1@0xe72 ;
union
{

struct 
{
  unsigned int 
  F2BP_0 : 1 ,
  F2BP_1 : 1 ,
  F2BP_2 : 1 ,
  F2BP_3 : 1 ,
  F3BP_0 : 1 ,
  F3BP_1 : 1 ,
  F3BP_2 : 1 ,
  F3BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F2BP_ : 4 ,
  _F3BP_ : 4 ;
} ; 

} RXFBCON1bits@0xe72  ;

#define _F2BP_0 0
#define _F2BP_1 1
#define _F2BP_2 2
#define _F2BP_3 3
#define _F3BP_0 4
#define _F3BP_1 5
#define _F3BP_2 6
#define _F3BP_3 7

// The following are aliases ..  
#define __F2BP_ 0:4
#define __F3BP_ 4:4

// ------------------------------
//        RXFBCON2
// ------------------------------
unsigned int RXFBCON2@0xe73 ;
union
{

struct 
{
  unsigned int 
  F4BP_0 : 1 ,
  F4BP_1 : 1 ,
  F4BP_2 : 1 ,
  F4BP_3 : 1 ,
  F5BP_0 : 1 ,
  F5BP_1 : 1 ,
  F5BP_2 : 1 ,
  F5BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F4BP_ : 4 ,
  _F5BP_ : 4 ;
} ; 

} RXFBCON2bits@0xe73  ;

#define _F4BP_0 0
#define _F4BP_1 1
#define _F4BP_2 2
#define _F4BP_3 3
#define _F5BP_0 4
#define _F5BP_1 5
#define _F5BP_2 6
#define _F5BP_3 7

// The following are aliases ..  
#define __F4BP_ 0:4
#define __F5BP_ 4:4

// ------------------------------
//        RXFBCON3
// ------------------------------
unsigned int RXFBCON3@0xe74 ;
union
{

struct 
{
  unsigned int 
  F6BP_0 : 1 ,
  F6BP_1 : 1 ,
  F6BP_2 : 1 ,
  F6BP_3 : 1 ,
  F7BP_0 : 1 ,
  F7BP_1 : 1 ,
  F7BP_2 : 1 ,
  F7BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F6BP_ : 4 ,
  _F7BP_ : 4 ;
} ; 

} RXFBCON3bits@0xe74  ;

#define _F6BP_0 0
#define _F6BP_1 1
#define _F6BP_2 2
#define _F6BP_3 3
#define _F7BP_0 4
#define _F7BP_1 5
#define _F7BP_2 6
#define _F7BP_3 7

// The following are aliases ..  
#define __F6BP_ 0:4
#define __F7BP_ 4:4

// ------------------------------
//        RXFBCON4
// ------------------------------
unsigned int RXFBCON4@0xe75 ;
union
{

struct 
{
  unsigned int 
  F8BP_0 : 1 ,
  F8BP_1 : 1 ,
  F8BP_2 : 1 ,
  F8BP_3 : 1 ,
  F9BP_0 : 1 ,
  F9BP_1 : 1 ,
  F9BP_2 : 1 ,
  F9BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F8BP_ : 4 ,
  _F9BP_ : 4 ;
} ; 

} RXFBCON4bits@0xe75  ;

#define _F8BP_0 0
#define _F8BP_1 1
#define _F8BP_2 2
#define _F8BP_3 3
#define _F9BP_0 4
#define _F9BP_1 5
#define _F9BP_2 6
#define _F9BP_3 7

// The following are aliases ..  
#define __F8BP_ 0:4
#define __F9BP_ 4:4

// ------------------------------
//        RXFBCON5
// ------------------------------
unsigned int RXFBCON5@0xe76 ;
union
{

struct 
{
  unsigned int 
  F10BP_0 : 1 ,
  F10BP_1 : 1 ,
  F10BP_2 : 1 ,
  F10BP_3 : 1 ,
  F11BP_0 : 1 ,
  F11BP_1 : 1 ,
  F11BP_2 : 1 ,
  F11BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F10BP_ : 4 ,
  _F11BP_ : 4 ;
} ; 

} RXFBCON5bits@0xe76  ;

#define _F10BP_0 0
#define _F10BP_1 1
#define _F10BP_2 2
#define _F10BP_3 3
#define _F11BP_0 4
#define _F11BP_1 5
#define _F11BP_2 6
#define _F11BP_3 7

// The following are aliases ..  
#define __F10BP_ 0:4
#define __F11BP_ 4:4

// ------------------------------
//        RXFBCON6
// ------------------------------
unsigned int RXFBCON6@0xe77 ;
union
{

struct 
{
  unsigned int 
  F12BP_0 : 1 ,
  F12BP_1 : 1 ,
  F12BP_2 : 1 ,
  F12BP_3 : 1 ,
  F13BP_0 : 1 ,
  F13BP_1 : 1 ,
  F13BP_2 : 1 ,
  F13BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F12BP_ : 4 ,
  _F13BP_ : 4 ;
} ; 

} RXFBCON6bits@0xe77  ;

#define _F12BP_0 0
#define _F12BP_1 1
#define _F12BP_2 2
#define _F12BP_3 3
#define _F13BP_0 4
#define _F13BP_1 5
#define _F13BP_2 6
#define _F13BP_3 7

// The following are aliases ..  
#define __F12BP_ 0:4
#define __F13BP_ 4:4

// ------------------------------
//        RXFBCON7
// ------------------------------
unsigned int RXFBCON7@0xe78 ;
union
{

struct 
{
  unsigned int 
  F14BP_0 : 1 ,
  F14BP_1 : 1 ,
  F14BP_2 : 1 ,
  F14BP_3 : 1 ,
  F15BP_0 : 1 ,
  F15BP_1 : 1 ,
  F15BP_2 : 1 ,
  F15BP_3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _F14BP_ : 4 ,
  _F15BP_ : 4 ;
} ; 

} RXFBCON7bits@0xe78  ;

#define _F14BP_0 0
#define _F14BP_1 1
#define _F14BP_2 2
#define _F14BP_3 3
#define _F15BP_0 4
#define _F15BP_1 5
#define _F15BP_2 6
#define _F15BP_3 7

// The following are aliases ..  
#define __F14BP_ 0:4
#define __F15BP_ 4:4

// ------------------------------
//        MSEL0
// ------------------------------
unsigned int MSEL0@0xe79 ;
union
{

struct 
{
  unsigned int 
  FIL0_0 : 1 ,
  FIL0_1 : 1 ,
  FIL1_0 : 1 ,
  FIL1_1 : 1 ,
  FIL2_0 : 1 ,
  FIL2_1 : 1 ,
  FIL3_0 : 1 ,
  FIL3_1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FIL0_ : 2 ,
  _FIL1_ : 2 ,
  _FIL2_ : 2 ,
  _FIL3_ : 2 ;
} ; 

} MSEL0bits@0xe79  ;

#define _FIL0_0 0
#define _FIL0_1 1
#define _FIL1_0 2
#define _FIL1_1 3
#define _FIL2_0 4
#define _FIL2_1 5
#define _FIL3_0 6
#define _FIL3_1 7

// The following are aliases ..  
#define __FIL0_ 0:2
#define __FIL1_ 2:2
#define __FIL2_ 4:2
#define __FIL3_ 6:2

// ------------------------------
//        MSEL1
// ------------------------------
unsigned int MSEL1@0xe7a ;
union
{

struct 
{
  unsigned int 
  FIL4_0 : 1 ,
  FIL4_1 : 1 ,
  FIL5_0 : 1 ,
  FIL5_1 : 1 ,
  FIL6_0 : 1 ,
  FIL6_1 : 1 ,
  FIL7_0 : 1 ,
  FIL7_1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FIL4_ : 2 ,
  _FIL5_ : 2 ,
  _FIL6_ : 2 ,
  _FIL7_ : 2 ;
} ; 

} MSEL1bits@0xe7a  ;

#define _FIL4_0 0
#define _FIL4_1 1
#define _FIL5_0 2
#define _FIL5_1 3
#define _FIL6_0 4
#define _FIL6_1 5
#define _FIL7_0 6
#define _FIL7_1 7

// The following are aliases ..  
#define __FIL4_ 0:2
#define __FIL5_ 2:2
#define __FIL6_ 4:2
#define __FIL7_ 6:2

// ------------------------------
//        MSEL2
// ------------------------------
unsigned int MSEL2@0xe7b ;
union
{

struct 
{
  unsigned int 
  FIL8_0 : 1 ,
  FIL8_1 : 1 ,
  FIL9_0 : 1 ,
  FIL9_1 : 1 ,
  FIL10_0 : 1 ,
  FIL10_1 : 1 ,
  FIL11_0 : 1 ,
  FIL11_1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FIL8_ : 2 ,
  _FIL9_ : 2 ,
  _FIL10_ : 2 ,
  _FIL11_ : 2 ;
} ; 

} MSEL2bits@0xe7b  ;

#define _FIL8_0 0
#define _FIL8_1 1
#define _FIL9_0 2
#define _FIL9_1 3
#define _FIL10_0 4
#define _FIL10_1 5
#define _FIL11_0 6
#define _FIL11_1 7

// The following are aliases ..  
#define __FIL8_ 0:2
#define __FIL9_ 2:2
#define __FIL10_ 4:2
#define __FIL11_ 6:2

// ------------------------------
//        MSEL3
// ------------------------------
unsigned int MSEL3@0xe7c ;
union
{

struct 
{
  unsigned int 
  FIL12_0 : 1 ,
  FIL12_1 : 1 ,
  FIL13_0 : 1 ,
  FIL13_1 : 1 ,
  FIL14_0 : 1 ,
  FIL14_1 : 1 ,
  FIL15_0 : 1 ,
  FIL15_1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FIL12_ : 2 ,
  _FIL13_ : 2 ,
  _FIL14_ : 2 ,
  _FIL15_ : 2 ;
} ; 

} MSEL3bits@0xe7c  ;

#define _FIL12_0 0
#define _FIL12_1 1
#define _FIL13_0 2
#define _FIL13_1 3
#define _FIL14_0 4
#define _FIL14_1 5
#define _FIL15_0 6
#define _FIL15_1 7

// The following are aliases ..  
#define __FIL12_ 0:2
#define __FIL13_ 2:2
#define __FIL14_ 4:2
#define __FIL15_ 6:2

// ------------------------------
//        BSEL0
// ------------------------------
unsigned int BSEL0@0xe7d ;
union
{

struct 
{
  unsigned int 
  : 2,
  B0TXEN : 1 ,
  B1TXEN : 1 ,
  B2TXEN : 1 ,
  B3TXEN : 1 ,
  B4TXEN : 1 ,
  B5TXEN : 1 ;
} ; 

} BSEL0bits@0xe7d  ;

#define _B0TXEN 2
#define _B1TXEN 3
#define _B2TXEN 4
#define _B3TXEN 5
#define _B4TXEN 6
#define _B5TXEN 7

// ------------------------------
//        BIE0
// ------------------------------
unsigned int BIE0@0xe7e ;
union
{

struct 
{
  unsigned int 
  RXB0IE : 1 ,
  RXB1IE : 1 ,
  B0IE : 1 ,
  B1IE : 1 ,
  B2IE : 1 ,
  B3IE : 1 ,
  B4IE : 1 ,
  B5IE : 1 ;
} ; 

} BIE0bits@0xe7e  ;

#define _RXB0IE 0
#define _RXB1IE 1
#define _B0IE 2
#define _B1IE 3
#define _B2IE 4
#define _B3IE 5
#define _B4IE 6
#define _B5IE 7

// ------------------------------
//        TXBIE
// ------------------------------
unsigned int TXBIE@0xe7f ;
union
{

struct 
{
  unsigned int 
  : 2,
  TXB0IE : 1 ,
  TXB1IE : 1 ,
  TXB2IE : 1 ;
} ; 

} TXBIEbits@0xe7f  ;

#define _TXB0IE 2
#define _TXB1IE 3
#define _TXB2IE 4

// ------------------------------
//        B0CON
// ------------------------------
unsigned int B0CON@0xe80 ;
union
{

struct 
{
  unsigned int 
  FILHIT0_TXPRI0 : 1 ,
  FILHIT1_TXPRI1 : 1 ,
  FILHIT2_RTREN : 1 ,
  FILHIT3_TXREQ : 1 ,
  FILHIT4_TXERR : 1 ,
  RXRTRRO_TXLARB : 1 ,
  RXM1_TXABT : 1 ,
  RXFUL_TXBIF : 1 ;
} ; 

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXRTRRO_B0CON : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  RTREN : 1 ,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 5 ;
} ; 

struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} B0CONbits@0xe80  ;

#define _FILHIT0_TXPRI0 0
#define _FILHIT1_TXPRI1 1
#define _FILHIT2_RTREN 2
#define _FILHIT3_TXREQ 3
#define _FILHIT4_TXERR 4
#define _RXRTRRO_TXLARB 5
#define _RXM1_TXABT 6
#define _RXFUL_TXBIF 7

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _FILHIT3 3
#define _FILHIT4 4
#define _RXRTRRO_B0CON 5
#define _RXM1 6
#define _RXFUL 7

#define _TXPRI0 0
#define _TXPRI1 1
#define _RTREN 2
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __FILHIT 0:5

#define __TXPRI 0:2

// ------------------------------
//        B0SIDH
// ------------------------------
unsigned int B0SIDH@0xe81 ;
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

} B0SIDHbits@0xe81  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        B0SIDL
// ------------------------------
unsigned int B0SIDL@0xe82 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} B0SIDLbits@0xe82  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        B0EIDH
// ------------------------------
unsigned int B0EIDH@0xe83 ;
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

} B0EIDHbits@0xe83  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        B0EIDL
// ------------------------------
unsigned int B0EIDL@0xe84 ;
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

} B0EIDLbits@0xe84  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        B0DLC
// ------------------------------
unsigned int B0DLC@0xe85 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_B0DLC : 1 ,
  RB1_B0DLC : 1 ,
  RXRTR_TXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} B0DLCbits@0xe85  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_B0DLC 4
#define _RB1_B0DLC 5
#define _RXRTR_TXRTR 6

#define _RXRTR 6

#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        B0D0
// ------------------------------
unsigned int B0D0@0xe86 ;
union
{

struct 
{
  unsigned int 
  B0D00 : 1 ,
  B0D01 : 1 ,
  B0D02 : 1 ,
  B0D03 : 1 ,
  B0D04 : 1 ,
  B0D05 : 1 ,
  B0D06 : 1 ,
  B0D07 : 1 ;
} ; 

} B0D0bits@0xe86  ;

#define _B0D00 0
#define _B0D01 1
#define _B0D02 2
#define _B0D03 3
#define _B0D04 4
#define _B0D05 5
#define _B0D06 6
#define _B0D07 7

// ------------------------------
//        B0D1
// ------------------------------
unsigned int B0D1@0xe87 ;
union
{

struct 
{
  unsigned int 
  B0D10 : 1 ,
  B0D11 : 1 ,
  B0D12 : 1 ,
  B0D13 : 1 ,
  B0D14 : 1 ,
  B0D15 : 1 ,
  B0D16 : 1 ,
  B0D17 : 1 ;
} ; 

} B0D1bits@0xe87  ;

#define _B0D10 0
#define _B0D11 1
#define _B0D12 2
#define _B0D13 3
#define _B0D14 4
#define _B0D15 5
#define _B0D16 6
#define _B0D17 7

// ------------------------------
//        B0D2
// ------------------------------
unsigned int B0D2@0xe88 ;
union
{

struct 
{
  unsigned int 
  B0D20 : 1 ,
  B0D21 : 1 ,
  B0D22 : 1 ,
  B0D23 : 1 ,
  B0D24 : 1 ,
  B0D25 : 1 ,
  B0D26 : 1 ,
  B0D27 : 1 ;
} ; 

} B0D2bits@0xe88  ;

#define _B0D20 0
#define _B0D21 1
#define _B0D22 2
#define _B0D23 3
#define _B0D24 4
#define _B0D25 5
#define _B0D26 6
#define _B0D27 7

// ------------------------------
//        B0D3
// ------------------------------
unsigned int B0D3@0xe89 ;
union
{

struct 
{
  unsigned int 
  B0D30 : 1 ,
  B0D31 : 1 ,
  B0D32 : 1 ,
  B0D33 : 1 ,
  B0D34 : 1 ,
  B0D35 : 1 ,
  B0D36 : 1 ,
  B0D37 : 1 ;
} ; 

} B0D3bits@0xe89  ;

#define _B0D30 0
#define _B0D31 1
#define _B0D32 2
#define _B0D33 3
#define _B0D34 4
#define _B0D35 5
#define _B0D36 6
#define _B0D37 7

// ------------------------------
//        B0D4
// ------------------------------
unsigned int B0D4@0xe8a ;
union
{

struct 
{
  unsigned int 
  B0D40 : 1 ,
  B0D41 : 1 ,
  B0D42 : 1 ,
  B0D43 : 1 ,
  B0D44 : 1 ,
  B0D45 : 1 ,
  B0D46 : 1 ,
  B0D47 : 1 ;
} ; 

} B0D4bits@0xe8a  ;

#define _B0D40 0
#define _B0D41 1
#define _B0D42 2
#define _B0D43 3
#define _B0D44 4
#define _B0D45 5
#define _B0D46 6
#define _B0D47 7

// ------------------------------
//        B0D5
// ------------------------------
unsigned int B0D5@0xe8b ;
union
{

struct 
{
  unsigned int 
  B0D50 : 1 ,
  B0D51 : 1 ,
  B0D52 : 1 ,
  B0D53 : 1 ,
  B0D54 : 1 ,
  B0D55 : 1 ,
  B0D56 : 1 ,
  B0D57 : 1 ;
} ; 

} B0D5bits@0xe8b  ;

#define _B0D50 0
#define _B0D51 1
#define _B0D52 2
#define _B0D53 3
#define _B0D54 4
#define _B0D55 5
#define _B0D56 6
#define _B0D57 7

// ------------------------------
//        B0D6
// ------------------------------
unsigned int B0D6@0xe8c ;
union
{

struct 
{
  unsigned int 
  B0D60 : 1 ,
  B0D61 : 1 ,
  B0D62 : 1 ,
  B0D63 : 1 ,
  B0D64 : 1 ,
  B0D65 : 1 ,
  B0D66 : 1 ,
  B0D67 : 1 ;
} ; 

} B0D6bits@0xe8c  ;

#define _B0D60 0
#define _B0D61 1
#define _B0D62 2
#define _B0D63 3
#define _B0D64 4
#define _B0D65 5
#define _B0D66 6
#define _B0D67 7

// ------------------------------
//        B0D7
// ------------------------------
unsigned int B0D7@0xe8d ;
union
{

struct 
{
  unsigned int 
  B0D70 : 1 ,
  B0D71 : 1 ,
  B0D72 : 1 ,
  B0D73 : 1 ,
  B0D74 : 1 ,
  B0D75 : 1 ,
  B0D76 : 1 ,
  B0D77 : 1 ;
} ; 

} B0D7bits@0xe8d  ;

#define _B0D70 0
#define _B0D71 1
#define _B0D72 2
#define _B0D73 3
#define _B0D74 4
#define _B0D75 5
#define _B0D76 6
#define _B0D77 7

// ------------------------------
//        CANSTAT_RO9
// ------------------------------
unsigned int CANSTAT_RO9@0xe8e ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO9bits@0xe8e  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO9
// ------------------------------
unsigned int CANCON_RO9@0xe8f ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO9bits@0xe8f  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        B1CON
// ------------------------------
unsigned int B1CON@0xe90 ;
union
{

struct 
{
  unsigned int 
  FILHIT0_TXPRI0 : 1 ,
  FILHIT1_TXPRI1 : 1 ,
  FILHIT2_RTREN : 1 ,
  FILHIT3_TXREQ : 1 ,
  FILHIT4_TXERR : 1 ,
  RXRTRRO_TXLARB : 1 ,
  RXM1_TXABT : 1 ,
  RXFUL_TXBIF : 1 ;
} ; 

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXRTRRO_B1CON : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  RTREN : 1 ,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 5 ;
} ; 

struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} B1CONbits@0xe90  ;

#define _FILHIT0_TXPRI0 0
#define _FILHIT1_TXPRI1 1
#define _FILHIT2_RTREN 2
#define _FILHIT3_TXREQ 3
#define _FILHIT4_TXERR 4
#define _RXRTRRO_TXLARB 5
#define _RXM1_TXABT 6
#define _RXFUL_TXBIF 7

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _FILHIT3 3
#define _FILHIT4 4
#define _RXRTRRO_B1CON 5
#define _RXM1 6
#define _RXFUL 7

#define _TXPRI0 0
#define _TXPRI1 1
#define _RTREN 2
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __FILHIT 0:5

#define __TXPRI 0:2

// ------------------------------
//        B1SIDH
// ------------------------------
unsigned int B1SIDH@0xe91 ;
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

} B1SIDHbits@0xe91  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        B1SIDL
// ------------------------------
unsigned int B1SIDL@0xe92 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} B1SIDLbits@0xe92  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        B1EIDH
// ------------------------------
unsigned int B1EIDH@0xe93 ;
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

} B1EIDHbits@0xe93  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        B1EIDL
// ------------------------------
unsigned int B1EIDL@0xe94 ;
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

} B1EIDLbits@0xe94  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        B1DLC
// ------------------------------
unsigned int B1DLC@0xe95 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_B1DLC : 1 ,
  RB1_B1DLC : 1 ,
  RXRTR_TXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} B1DLCbits@0xe95  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_B1DLC 4
#define _RB1_B1DLC 5
#define _RXRTR_TXRTR 6

#define _RXRTR 6

#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        B1D0
// ------------------------------
unsigned int B1D0@0xe96 ;
union
{

struct 
{
  unsigned int 
  B1D00 : 1 ,
  B1D01 : 1 ,
  B1D02 : 1 ,
  B1D03 : 1 ,
  B1D04 : 1 ,
  B1D05 : 1 ,
  B1D06 : 1 ,
  B1D07 : 1 ;
} ; 

} B1D0bits@0xe96  ;

#define _B1D00 0
#define _B1D01 1
#define _B1D02 2
#define _B1D03 3
#define _B1D04 4
#define _B1D05 5
#define _B1D06 6
#define _B1D07 7

// ------------------------------
//        B1D1
// ------------------------------
unsigned int B1D1@0xe97 ;
union
{

struct 
{
  unsigned int 
  B1D10 : 1 ,
  B1D11 : 1 ,
  B1D12 : 1 ,
  B1D13 : 1 ,
  B1D14 : 1 ,
  B1D15 : 1 ,
  B1D16 : 1 ,
  B1D17 : 1 ;
} ; 

} B1D1bits@0xe97  ;

#define _B1D10 0
#define _B1D11 1
#define _B1D12 2
#define _B1D13 3
#define _B1D14 4
#define _B1D15 5
#define _B1D16 6
#define _B1D17 7

// ------------------------------
//        B1D2
// ------------------------------
unsigned int B1D2@0xe98 ;
union
{

struct 
{
  unsigned int 
  B1D20 : 1 ,
  B1D21 : 1 ,
  B1D22 : 1 ,
  B1D23 : 1 ,
  B1D24 : 1 ,
  B1D25 : 1 ,
  B1D26 : 1 ,
  B1D27 : 1 ;
} ; 

} B1D2bits@0xe98  ;

#define _B1D20 0
#define _B1D21 1
#define _B1D22 2
#define _B1D23 3
#define _B1D24 4
#define _B1D25 5
#define _B1D26 6
#define _B1D27 7

// ------------------------------
//        B1D3
// ------------------------------
unsigned int B1D3@0xe99 ;
union
{

struct 
{
  unsigned int 
  B1D30 : 1 ,
  B1D31 : 1 ,
  B1D32 : 1 ,
  B1D33 : 1 ,
  B1D34 : 1 ,
  B1D35 : 1 ,
  B1D36 : 1 ,
  B1D37 : 1 ;
} ; 

} B1D3bits@0xe99  ;

#define _B1D30 0
#define _B1D31 1
#define _B1D32 2
#define _B1D33 3
#define _B1D34 4
#define _B1D35 5
#define _B1D36 6
#define _B1D37 7

// ------------------------------
//        B1D4
// ------------------------------
unsigned int B1D4@0xe9a ;
union
{

struct 
{
  unsigned int 
  B1D40 : 1 ,
  B1D41 : 1 ,
  B1D42 : 1 ,
  B1D43 : 1 ,
  B1D44 : 1 ,
  B1D45 : 1 ,
  B1D46 : 1 ,
  B1D47 : 1 ;
} ; 

} B1D4bits@0xe9a  ;

#define _B1D40 0
#define _B1D41 1
#define _B1D42 2
#define _B1D43 3
#define _B1D44 4
#define _B1D45 5
#define _B1D46 6
#define _B1D47 7

// ------------------------------
//        B1D5
// ------------------------------
unsigned int B1D5@0xe9b ;
union
{

struct 
{
  unsigned int 
  B1D50 : 1 ,
  B1D51 : 1 ,
  B1D52 : 1 ,
  B1D53 : 1 ,
  B1D54 : 1 ,
  B1D55 : 1 ,
  B1D56 : 1 ,
  B1D57 : 1 ;
} ; 

} B1D5bits@0xe9b  ;

#define _B1D50 0
#define _B1D51 1
#define _B1D52 2
#define _B1D53 3
#define _B1D54 4
#define _B1D55 5
#define _B1D56 6
#define _B1D57 7

// ------------------------------
//        B1D6
// ------------------------------
unsigned int B1D6@0xe9c ;
union
{

struct 
{
  unsigned int 
  B1D60 : 1 ,
  B1D61 : 1 ,
  B1D62 : 1 ,
  B1D63 : 1 ,
  B1D64 : 1 ,
  B1D65 : 1 ,
  B1D66 : 1 ,
  B1D67 : 1 ;
} ; 

} B1D6bits@0xe9c  ;

#define _B1D60 0
#define _B1D61 1
#define _B1D62 2
#define _B1D63 3
#define _B1D64 4
#define _B1D65 5
#define _B1D66 6
#define _B1D67 7

// ------------------------------
//        B1D7
// ------------------------------
unsigned int B1D7@0xe9d ;
union
{

struct 
{
  unsigned int 
  B1D70 : 1 ,
  B1D71 : 1 ,
  B1D72 : 1 ,
  B1D73 : 1 ,
  B1D74 : 1 ,
  B1D75 : 1 ,
  B1D76 : 1 ,
  B1D77 : 1 ;
} ; 

} B1D7bits@0xe9d  ;

#define _B1D70 0
#define _B1D71 1
#define _B1D72 2
#define _B1D73 3
#define _B1D74 4
#define _B1D75 5
#define _B1D76 6
#define _B1D77 7

// ------------------------------
//        CANSTAT_RO8
// ------------------------------
unsigned int CANSTAT_RO8@0xe9e ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO8bits@0xe9e  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO8
// ------------------------------
unsigned int CANCON_RO8@0xe9f ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO8bits@0xe9f  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        B2CON
// ------------------------------
unsigned int B2CON@0xea0 ;
union
{

struct 
{
  unsigned int 
  FILHIT0_TXPRI0 : 1 ,
  FILHIT1_TXPRI1 : 1 ,
  FILHIT2_RTREN : 1 ,
  FILHIT3_TXREQ : 1 ,
  FILHIT4_TXERR : 1 ,
  RXRTRRO_TXLARB : 1 ,
  RXM1_TXABT : 1 ,
  RXFUL_TXBIF : 1 ;
} ; 

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXRTRRO_B2CON : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  RTREN : 1 ,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 5 ;
} ; 

struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} B2CONbits@0xea0  ;

#define _FILHIT0_TXPRI0 0
#define _FILHIT1_TXPRI1 1
#define _FILHIT2_RTREN 2
#define _FILHIT3_TXREQ 3
#define _FILHIT4_TXERR 4
#define _RXRTRRO_TXLARB 5
#define _RXM1_TXABT 6
#define _RXFUL_TXBIF 7

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _FILHIT3 3
#define _FILHIT4 4
#define _RXRTRRO_B2CON 5
#define _RXM1 6
#define _RXFUL 7

#define _TXPRI0 0
#define _TXPRI1 1
#define _RTREN 2
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __FILHIT 0:5

#define __TXPRI 0:2

// ------------------------------
//        B2SIDH
// ------------------------------
unsigned int B2SIDH@0xea1 ;
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

} B2SIDHbits@0xea1  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        B2SIDL
// ------------------------------
unsigned int B2SIDL@0xea2 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} B2SIDLbits@0xea2  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        B2EIDH
// ------------------------------
unsigned int B2EIDH@0xea3 ;
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

} B2EIDHbits@0xea3  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        B2EIDL
// ------------------------------
unsigned int B2EIDL@0xea4 ;
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

} B2EIDLbits@0xea4  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        B2DLC
// ------------------------------
unsigned int B2DLC@0xea5 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_B2DLC : 1 ,
  RB1_B2DLC : 1 ,
  RXRTR_TXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} B2DLCbits@0xea5  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_B2DLC 4
#define _RB1_B2DLC 5
#define _RXRTR_TXRTR 6

#define _RXRTR 6

#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        B2D0
// ------------------------------
unsigned int B2D0@0xea6 ;
union
{

struct 
{
  unsigned int 
  B2D00 : 1 ,
  B2D01 : 1 ,
  B2D02 : 1 ,
  B2D03 : 1 ,
  B2D04 : 1 ,
  B2D05 : 1 ,
  B2D06 : 1 ,
  B2D07 : 1 ;
} ; 

} B2D0bits@0xea6  ;

#define _B2D00 0
#define _B2D01 1
#define _B2D02 2
#define _B2D03 3
#define _B2D04 4
#define _B2D05 5
#define _B2D06 6
#define _B2D07 7

// ------------------------------
//        B2D1
// ------------------------------
unsigned int B2D1@0xea7 ;
union
{

struct 
{
  unsigned int 
  B2D10 : 1 ,
  B2D11 : 1 ,
  B2D12 : 1 ,
  B2D13 : 1 ,
  B2D14 : 1 ,
  B2D15 : 1 ,
  B2D16 : 1 ,
  B2D17 : 1 ;
} ; 

} B2D1bits@0xea7  ;

#define _B2D10 0
#define _B2D11 1
#define _B2D12 2
#define _B2D13 3
#define _B2D14 4
#define _B2D15 5
#define _B2D16 6
#define _B2D17 7

// ------------------------------
//        B2D2
// ------------------------------
unsigned int B2D2@0xea8 ;
union
{

struct 
{
  unsigned int 
  B2D20 : 1 ,
  B2D21 : 1 ,
  B2D22 : 1 ,
  B2D23 : 1 ,
  B2D24 : 1 ,
  B2D25 : 1 ,
  B2D26 : 1 ,
  B2D27 : 1 ;
} ; 

} B2D2bits@0xea8  ;

#define _B2D20 0
#define _B2D21 1
#define _B2D22 2
#define _B2D23 3
#define _B2D24 4
#define _B2D25 5
#define _B2D26 6
#define _B2D27 7

// ------------------------------
//        B2D3
// ------------------------------
unsigned int B2D3@0xea9 ;
union
{

struct 
{
  unsigned int 
  B2D30 : 1 ,
  B2D31 : 1 ,
  B2D32 : 1 ,
  B2D33 : 1 ,
  B2D34 : 1 ,
  B2D35 : 1 ,
  B2D36 : 1 ,
  B2D37 : 1 ;
} ; 

} B2D3bits@0xea9  ;

#define _B2D30 0
#define _B2D31 1
#define _B2D32 2
#define _B2D33 3
#define _B2D34 4
#define _B2D35 5
#define _B2D36 6
#define _B2D37 7

// ------------------------------
//        B2D4
// ------------------------------
unsigned int B2D4@0xeaa ;
union
{

struct 
{
  unsigned int 
  B2D40 : 1 ,
  B2D41 : 1 ,
  B2D42 : 1 ,
  B2D43 : 1 ,
  B2D44 : 1 ,
  B2D45 : 1 ,
  B2D46 : 1 ,
  B2D47 : 1 ;
} ; 

} B2D4bits@0xeaa  ;

#define _B2D40 0
#define _B2D41 1
#define _B2D42 2
#define _B2D43 3
#define _B2D44 4
#define _B2D45 5
#define _B2D46 6
#define _B2D47 7

// ------------------------------
//        B2D5
// ------------------------------
unsigned int B2D5@0xeab ;
union
{

struct 
{
  unsigned int 
  B2D50 : 1 ,
  B2D51 : 1 ,
  B2D52 : 1 ,
  B2D53 : 1 ,
  B2D54 : 1 ,
  B2D55 : 1 ,
  B2D56 : 1 ,
  B2D57 : 1 ;
} ; 

} B2D5bits@0xeab  ;

#define _B2D50 0
#define _B2D51 1
#define _B2D52 2
#define _B2D53 3
#define _B2D54 4
#define _B2D55 5
#define _B2D56 6
#define _B2D57 7

// ------------------------------
//        B2D6
// ------------------------------
unsigned int B2D6@0xeac ;
union
{

struct 
{
  unsigned int 
  B2D60 : 1 ,
  B2D61 : 1 ,
  B2D62 : 1 ,
  B2D63 : 1 ,
  B2D64 : 1 ,
  B2D65 : 1 ,
  B2D66 : 1 ,
  B2D67 : 1 ;
} ; 

} B2D6bits@0xeac  ;

#define _B2D60 0
#define _B2D61 1
#define _B2D62 2
#define _B2D63 3
#define _B2D64 4
#define _B2D65 5
#define _B2D66 6
#define _B2D67 7

// ------------------------------
//        B2D7
// ------------------------------
unsigned int B2D7@0xead ;
union
{

struct 
{
  unsigned int 
  B2D70 : 1 ,
  B2D71 : 1 ,
  B2D72 : 1 ,
  B2D73 : 1 ,
  B2D74 : 1 ,
  B2D75 : 1 ,
  B2D76 : 1 ,
  B2D77 : 1 ;
} ; 

} B2D7bits@0xead  ;

#define _B2D70 0
#define _B2D71 1
#define _B2D72 2
#define _B2D73 3
#define _B2D74 4
#define _B2D75 5
#define _B2D76 6
#define _B2D77 7

// ------------------------------
//        CANSTAT_RO7
// ------------------------------
unsigned int CANSTAT_RO7@0xeae ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO7bits@0xeae  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO7
// ------------------------------
unsigned int CANCON_RO7@0xeaf ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO7bits@0xeaf  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        B3CON
// ------------------------------
unsigned int B3CON@0xeb0 ;
union
{

struct 
{
  unsigned int 
  FILHIT0_TXPRI0 : 1 ,
  FILHIT1_TXPRI1 : 1 ,
  FILHIT2_RTREN : 1 ,
  FILHIT3_TXREQ : 1 ,
  FILHIT4_TXERR : 1 ,
  RXRTRRO_TXLARB : 1 ,
  RXM1_TXABT : 1 ,
  RXFUL_TXBIF : 1 ;
} ; 

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXRTRRO_B3CON : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  RTREN : 1 ,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 5 ;
} ; 

struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} B3CONbits@0xeb0  ;

#define _FILHIT0_TXPRI0 0
#define _FILHIT1_TXPRI1 1
#define _FILHIT2_RTREN 2
#define _FILHIT3_TXREQ 3
#define _FILHIT4_TXERR 4
#define _RXRTRRO_TXLARB 5
#define _RXM1_TXABT 6
#define _RXFUL_TXBIF 7

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _FILHIT3 3
#define _FILHIT4 4
#define _RXRTRRO_B3CON 5
#define _RXM1 6
#define _RXFUL 7

#define _TXPRI0 0
#define _TXPRI1 1
#define _RTREN 2
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __FILHIT 0:5

#define __TXPRI 0:2

// ------------------------------
//        B3SIDH
// ------------------------------
unsigned int B3SIDH@0xeb1 ;
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

} B3SIDHbits@0xeb1  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        B3SIDL
// ------------------------------
unsigned int B3SIDL@0xeb2 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} B3SIDLbits@0xeb2  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        B3EIDH
// ------------------------------
unsigned int B3EIDH@0xeb3 ;
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

} B3EIDHbits@0xeb3  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        B3EIDL
// ------------------------------
unsigned int B3EIDL@0xeb4 ;
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

} B3EIDLbits@0xeb4  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        B3DLC
// ------------------------------
unsigned int B3DLC@0xeb5 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_B3DLC : 1 ,
  RB1_B3DLC : 1 ,
  RXRTR_TXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} B3DLCbits@0xeb5  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_B3DLC 4
#define _RB1_B3DLC 5
#define _RXRTR_TXRTR 6

#define _RXRTR 6

#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        B3D0
// ------------------------------
unsigned int B3D0@0xeb6 ;
union
{

struct 
{
  unsigned int 
  B3D00 : 1 ,
  B3D01 : 1 ,
  B3D02 : 1 ,
  B3D03 : 1 ,
  B3D04 : 1 ,
  B3D05 : 1 ,
  B3D06 : 1 ,
  B3D07 : 1 ;
} ; 

} B3D0bits@0xeb6  ;

#define _B3D00 0
#define _B3D01 1
#define _B3D02 2
#define _B3D03 3
#define _B3D04 4
#define _B3D05 5
#define _B3D06 6
#define _B3D07 7

// ------------------------------
//        B3D1
// ------------------------------
unsigned int B3D1@0xeb7 ;
union
{

struct 
{
  unsigned int 
  B3D10 : 1 ,
  B3D11 : 1 ,
  B3D12 : 1 ,
  B3D13 : 1 ,
  B3D14 : 1 ,
  B3D15 : 1 ,
  B3D16 : 1 ,
  B3D17 : 1 ;
} ; 

} B3D1bits@0xeb7  ;

#define _B3D10 0
#define _B3D11 1
#define _B3D12 2
#define _B3D13 3
#define _B3D14 4
#define _B3D15 5
#define _B3D16 6
#define _B3D17 7

// ------------------------------
//        B3D2
// ------------------------------
unsigned int B3D2@0xeb8 ;
union
{

struct 
{
  unsigned int 
  B3D20 : 1 ,
  B3D21 : 1 ,
  B3D22 : 1 ,
  B3D23 : 1 ,
  B3D24 : 1 ,
  B3D25 : 1 ,
  B3D26 : 1 ,
  B3D27 : 1 ;
} ; 

} B3D2bits@0xeb8  ;

#define _B3D20 0
#define _B3D21 1
#define _B3D22 2
#define _B3D23 3
#define _B3D24 4
#define _B3D25 5
#define _B3D26 6
#define _B3D27 7

// ------------------------------
//        B3D3
// ------------------------------
unsigned int B3D3@0xeb9 ;
union
{

struct 
{
  unsigned int 
  B3D30 : 1 ,
  B3D31 : 1 ,
  B3D32 : 1 ,
  B3D33 : 1 ,
  B3D34 : 1 ,
  B3D35 : 1 ,
  B3D36 : 1 ,
  B3D37 : 1 ;
} ; 

} B3D3bits@0xeb9  ;

#define _B3D30 0
#define _B3D31 1
#define _B3D32 2
#define _B3D33 3
#define _B3D34 4
#define _B3D35 5
#define _B3D36 6
#define _B3D37 7

// ------------------------------
//        B3D4
// ------------------------------
unsigned int B3D4@0xeba ;
union
{

struct 
{
  unsigned int 
  B3D40 : 1 ,
  B3D41 : 1 ,
  B3D42 : 1 ,
  B3D43 : 1 ,
  B3D44 : 1 ,
  B3D45 : 1 ,
  B3D46 : 1 ,
  B3D47 : 1 ;
} ; 

} B3D4bits@0xeba  ;

#define _B3D40 0
#define _B3D41 1
#define _B3D42 2
#define _B3D43 3
#define _B3D44 4
#define _B3D45 5
#define _B3D46 6
#define _B3D47 7

// ------------------------------
//        B3D5
// ------------------------------
unsigned int B3D5@0xebb ;
union
{

struct 
{
  unsigned int 
  B3D50 : 1 ,
  B3D51 : 1 ,
  B3D52 : 1 ,
  B3D53 : 1 ,
  B3D54 : 1 ,
  B3D55 : 1 ,
  B3D56 : 1 ,
  B3D57 : 1 ;
} ; 

} B3D5bits@0xebb  ;

#define _B3D50 0
#define _B3D51 1
#define _B3D52 2
#define _B3D53 3
#define _B3D54 4
#define _B3D55 5
#define _B3D56 6
#define _B3D57 7

// ------------------------------
//        B3D6
// ------------------------------
unsigned int B3D6@0xebc ;
union
{

struct 
{
  unsigned int 
  B3D60 : 1 ,
  B3D61 : 1 ,
  B3D62 : 1 ,
  B3D63 : 1 ,
  B3D64 : 1 ,
  B3D65 : 1 ,
  B3D66 : 1 ,
  B3D67 : 1 ;
} ; 

} B3D6bits@0xebc  ;

#define _B3D60 0
#define _B3D61 1
#define _B3D62 2
#define _B3D63 3
#define _B3D64 4
#define _B3D65 5
#define _B3D66 6
#define _B3D67 7

// ------------------------------
//        B3D7
// ------------------------------
unsigned int B3D7@0xebd ;
union
{

struct 
{
  unsigned int 
  B3D70 : 1 ,
  B3D71 : 1 ,
  B3D72 : 1 ,
  B3D73 : 1 ,
  B3D74 : 1 ,
  B3D75 : 1 ,
  B3D76 : 1 ,
  B3D77 : 1 ;
} ; 

} B3D7bits@0xebd  ;

#define _B3D70 0
#define _B3D71 1
#define _B3D72 2
#define _B3D73 3
#define _B3D74 4
#define _B3D75 5
#define _B3D76 6
#define _B3D77 7

// ------------------------------
//        CANSTAT_RO6
// ------------------------------
unsigned int CANSTAT_RO6@0xebe ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO6bits@0xebe  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO6
// ------------------------------
unsigned int CANCON_RO6@0xebf ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO6bits@0xebf  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        B4CON
// ------------------------------
unsigned int B4CON@0xec0 ;
union
{

struct 
{
  unsigned int 
  FILHIT0_TXPRI0 : 1 ,
  FILHIT1_TXPRI1 : 1 ,
  FILHIT2_RTREN : 1 ,
  FILHIT3_TXREQ : 1 ,
  FILHIT4_TXERR : 1 ,
  RXRTRRO_TXLARB : 1 ,
  RXM1_TXABT : 1 ,
  RXFUL_TXBIF : 1 ;
} ; 

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXRTRRO_B4CON : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  RTREN : 1 ,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 5 ;
} ; 

struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} B4CONbits@0xec0  ;

#define _FILHIT0_TXPRI0 0
#define _FILHIT1_TXPRI1 1
#define _FILHIT2_RTREN 2
#define _FILHIT3_TXREQ 3
#define _FILHIT4_TXERR 4
#define _RXRTRRO_TXLARB 5
#define _RXM1_TXABT 6
#define _RXFUL_TXBIF 7

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _FILHIT3 3
#define _FILHIT4 4
#define _RXRTRRO_B4CON 5
#define _RXM1 6
#define _RXFUL 7

#define _TXPRI0 0
#define _TXPRI1 1
#define _RTREN 2
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __FILHIT 0:5

#define __TXPRI 0:2

// ------------------------------
//        B4SIDH
// ------------------------------
unsigned int B4SIDH@0xec1 ;
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

} B4SIDHbits@0xec1  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        B4SIDL
// ------------------------------
unsigned int B4SIDL@0xec2 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} B4SIDLbits@0xec2  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        B4EIDH
// ------------------------------
unsigned int B4EIDH@0xec3 ;
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

} B4EIDHbits@0xec3  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        B4EIDL
// ------------------------------
unsigned int B4EIDL@0xec4 ;
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

} B4EIDLbits@0xec4  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        B4DLC
// ------------------------------
unsigned int B4DLC@0xec5 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_B4DLC : 1 ,
  RB1_B4DLC : 1 ,
  RXRTR_TXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} B4DLCbits@0xec5  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_B4DLC 4
#define _RB1_B4DLC 5
#define _RXRTR_TXRTR 6

#define _RXRTR 6

#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        B4D0
// ------------------------------
unsigned int B4D0@0xec6 ;
union
{

struct 
{
  unsigned int 
  B4D00 : 1 ,
  B4D01 : 1 ,
  B4D02 : 1 ,
  B4D03 : 1 ,
  B4D04 : 1 ,
  B4D05 : 1 ,
  B4D06 : 1 ,
  B4D07 : 1 ;
} ; 

} B4D0bits@0xec6  ;

#define _B4D00 0
#define _B4D01 1
#define _B4D02 2
#define _B4D03 3
#define _B4D04 4
#define _B4D05 5
#define _B4D06 6
#define _B4D07 7

// ------------------------------
//        B4D1
// ------------------------------
unsigned int B4D1@0xec7 ;
union
{

struct 
{
  unsigned int 
  B4D10 : 1 ,
  B4D11 : 1 ,
  B4D12 : 1 ,
  B4D13 : 1 ,
  B4D14 : 1 ,
  B4D15 : 1 ,
  B4D16 : 1 ,
  B4D17 : 1 ;
} ; 

} B4D1bits@0xec7  ;

#define _B4D10 0
#define _B4D11 1
#define _B4D12 2
#define _B4D13 3
#define _B4D14 4
#define _B4D15 5
#define _B4D16 6
#define _B4D17 7

// ------------------------------
//        B4D2
// ------------------------------
unsigned int B4D2@0xec8 ;
union
{

struct 
{
  unsigned int 
  B4D20 : 1 ,
  B4D21 : 1 ,
  B4D22 : 1 ,
  B4D23 : 1 ,
  B4D24 : 1 ,
  B4D25 : 1 ,
  B4D26 : 1 ,
  B4D27 : 1 ;
} ; 

} B4D2bits@0xec8  ;

#define _B4D20 0
#define _B4D21 1
#define _B4D22 2
#define _B4D23 3
#define _B4D24 4
#define _B4D25 5
#define _B4D26 6
#define _B4D27 7

// ------------------------------
//        B4D3
// ------------------------------
unsigned int B4D3@0xec9 ;
union
{

struct 
{
  unsigned int 
  B4D30 : 1 ,
  B4D31 : 1 ,
  B4D32 : 1 ,
  B4D33 : 1 ,
  B4D34 : 1 ,
  B4D35 : 1 ,
  B4D36 : 1 ,
  B4D37 : 1 ;
} ; 

} B4D3bits@0xec9  ;

#define _B4D30 0
#define _B4D31 1
#define _B4D32 2
#define _B4D33 3
#define _B4D34 4
#define _B4D35 5
#define _B4D36 6
#define _B4D37 7

// ------------------------------
//        B4D4
// ------------------------------
unsigned int B4D4@0xeca ;
union
{

struct 
{
  unsigned int 
  B4D40 : 1 ,
  B4D41 : 1 ,
  B4D42 : 1 ,
  B4D43 : 1 ,
  B4D44 : 1 ,
  B4D45 : 1 ,
  B4D46 : 1 ,
  B4D47 : 1 ;
} ; 

} B4D4bits@0xeca  ;

#define _B4D40 0
#define _B4D41 1
#define _B4D42 2
#define _B4D43 3
#define _B4D44 4
#define _B4D45 5
#define _B4D46 6
#define _B4D47 7

// ------------------------------
//        B4D5
// ------------------------------
unsigned int B4D5@0xecb ;
union
{

struct 
{
  unsigned int 
  B4D50 : 1 ,
  B4D51 : 1 ,
  B4D52 : 1 ,
  B4D53 : 1 ,
  B4D54 : 1 ,
  B4D55 : 1 ,
  B4D56 : 1 ,
  B4D57 : 1 ;
} ; 

} B4D5bits@0xecb  ;

#define _B4D50 0
#define _B4D51 1
#define _B4D52 2
#define _B4D53 3
#define _B4D54 4
#define _B4D55 5
#define _B4D56 6
#define _B4D57 7

// ------------------------------
//        B4D6
// ------------------------------
unsigned int B4D6@0xecc ;
union
{

struct 
{
  unsigned int 
  B4D60 : 1 ,
  B4D61 : 1 ,
  B4D62 : 1 ,
  B4D63 : 1 ,
  B4D64 : 1 ,
  B4D65 : 1 ,
  B4D66 : 1 ,
  B4D67 : 1 ;
} ; 

} B4D6bits@0xecc  ;

#define _B4D60 0
#define _B4D61 1
#define _B4D62 2
#define _B4D63 3
#define _B4D64 4
#define _B4D65 5
#define _B4D66 6
#define _B4D67 7

// ------------------------------
//        B4D7
// ------------------------------
unsigned int B4D7@0xecd ;
union
{

struct 
{
  unsigned int 
  B4D70 : 1 ,
  B4D71 : 1 ,
  B4D72 : 1 ,
  B4D73 : 1 ,
  B4D74 : 1 ,
  B4D75 : 1 ,
  B4D76 : 1 ,
  B4D77 : 1 ;
} ; 

} B4D7bits@0xecd  ;

#define _B4D70 0
#define _B4D71 1
#define _B4D72 2
#define _B4D73 3
#define _B4D74 4
#define _B4D75 5
#define _B4D76 6
#define _B4D77 7

// ------------------------------
//        CANSTAT_RO5
// ------------------------------
unsigned int CANSTAT_RO5@0xece ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO5bits@0xece  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO5
// ------------------------------
unsigned int CANCON_RO5@0xecf ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO5bits@0xecf  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        B5CON
// ------------------------------
unsigned int B5CON@0xed0 ;
union
{

struct 
{
  unsigned int 
  FILHIT0_TXPRI0 : 1 ,
  FILHIT1_TXPRI1 : 1 ,
  FILHIT2_RTREN : 1 ,
  FILHIT3_TXREQ : 1 ,
  FILHIT4_TXERR : 1 ,
  RXRTRRO_TXLARB : 1 ,
  RXM1_TXABT : 1 ,
  RXFUL_TXBIF : 1 ;
} ; 

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXRTRRO_B5CON : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  TXPRI0 : 1 ,
  TXPRI1 : 1 ,
  RTREN : 1 ,
  TXREQ : 1 ,
  TXERR : 1 ,
  TXLARB : 1 ,
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 5 ;
} ; 

struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} B5CONbits@0xed0  ;

#define _FILHIT0_TXPRI0 0
#define _FILHIT1_TXPRI1 1
#define _FILHIT2_RTREN 2
#define _FILHIT3_TXREQ 3
#define _FILHIT4_TXERR 4
#define _RXRTRRO_TXLARB 5
#define _RXM1_TXABT 6
#define _RXFUL_TXBIF 7

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _FILHIT3 3
#define _FILHIT4 4
#define _RXRTRRO_B5CON 5
#define _RXM1 6
#define _RXFUL 7

#define _TXPRI0 0
#define _TXPRI1 1
#define _RTREN 2
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __FILHIT 0:5

#define __TXPRI 0:2

// ------------------------------
//        B5SIDH
// ------------------------------
unsigned int B5SIDH@0xed1 ;
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

} B5SIDHbits@0xed1  ;

#define _SID3 0
#define _SID4 1
#define _SID5 2
#define _SID6 3
#define _SID7 4
#define _SID8 5
#define _SID9 6
#define _SID10 7

// ------------------------------
//        B5SIDL
// ------------------------------
unsigned int B5SIDL@0xed2 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} B5SIDLbits@0xed2  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        B5EIDH
// ------------------------------
unsigned int B5EIDH@0xed3 ;
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

} B5EIDHbits@0xed3  ;

#define _EID8 0
#define _EID9 1
#define _EID10 2
#define _EID11 3
#define _EID12 4
#define _EID13 5
#define _EID14 6
#define _EID15 7

// ------------------------------
//        B5EIDL
// ------------------------------
unsigned int B5EIDL@0xed4 ;
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

} B5EIDLbits@0xed4  ;

#define _EID0 0
#define _EID1 1
#define _EID2 2
#define _EID3 3
#define _EID4 4
#define _EID5 5
#define _EID6 6
#define _EID7 7

// ------------------------------
//        B5DLC
// ------------------------------
unsigned int B5DLC@0xed5 ;
union
{

struct 
{
  unsigned int 
  DLC0 : 1 ,
  DLC1 : 1 ,
  DLC2 : 1 ,
  DLC3 : 1 ,
  RB0_B5DLC : 1 ,
  RB1_B5DLC : 1 ,
  RXRTR_TXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RXRTR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TXRTR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} B5DLCbits@0xed5  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_B5DLC 4
#define _RB1_B5DLC 5
#define _RXRTR_TXRTR 6

#define _RXRTR 6

#define _TXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        B5D0
// ------------------------------
unsigned int B5D0@0xed6 ;
union
{

struct 
{
  unsigned int 
  B5D00 : 1 ,
  B5D01 : 1 ,
  B5D02 : 1 ,
  B5D03 : 1 ,
  B5D04 : 1 ,
  B5D05 : 1 ,
  B5D06 : 1 ,
  B5D07 : 1 ;
} ; 

} B5D0bits@0xed6  ;

#define _B5D00 0
#define _B5D01 1
#define _B5D02 2
#define _B5D03 3
#define _B5D04 4
#define _B5D05 5
#define _B5D06 6
#define _B5D07 7

// ------------------------------
//        B5D1
// ------------------------------
unsigned int B5D1@0xed7 ;
union
{

struct 
{
  unsigned int 
  B5D10 : 1 ,
  B5D11 : 1 ,
  B5D12 : 1 ,
  B5D13 : 1 ,
  B5D14 : 1 ,
  B5D15 : 1 ,
  B5D16 : 1 ,
  B5D17 : 1 ;
} ; 

} B5D1bits@0xed7  ;

#define _B5D10 0
#define _B5D11 1
#define _B5D12 2
#define _B5D13 3
#define _B5D14 4
#define _B5D15 5
#define _B5D16 6
#define _B5D17 7

// ------------------------------
//        B5D2
// ------------------------------
unsigned int B5D2@0xed8 ;
union
{

struct 
{
  unsigned int 
  B5D20 : 1 ,
  B5D21 : 1 ,
  B5D22 : 1 ,
  B5D23 : 1 ,
  B5D24 : 1 ,
  B5D25 : 1 ,
  B5D26 : 1 ,
  B5D27 : 1 ;
} ; 

} B5D2bits@0xed8  ;

#define _B5D20 0
#define _B5D21 1
#define _B5D22 2
#define _B5D23 3
#define _B5D24 4
#define _B5D25 5
#define _B5D26 6
#define _B5D27 7

// ------------------------------
//        B5D3
// ------------------------------
unsigned int B5D3@0xed9 ;
union
{

struct 
{
  unsigned int 
  B5D30 : 1 ,
  B5D31 : 1 ,
  B5D32 : 1 ,
  B5D33 : 1 ,
  B5D34 : 1 ,
  B5D35 : 1 ,
  B5D36 : 1 ,
  B5D37 : 1 ;
} ; 

} B5D3bits@0xed9  ;

#define _B5D30 0
#define _B5D31 1
#define _B5D32 2
#define _B5D33 3
#define _B5D34 4
#define _B5D35 5
#define _B5D36 6
#define _B5D37 7

// ------------------------------
//        B5D4
// ------------------------------
unsigned int B5D4@0xeda ;
union
{

struct 
{
  unsigned int 
  B5D40 : 1 ,
  B5D41 : 1 ,
  B5D42 : 1 ,
  B5D43 : 1 ,
  B5D44 : 1 ,
  B5D45 : 1 ,
  B5D46 : 1 ,
  B5D47 : 1 ;
} ; 

} B5D4bits@0xeda  ;

#define _B5D40 0
#define _B5D41 1
#define _B5D42 2
#define _B5D43 3
#define _B5D44 4
#define _B5D45 5
#define _B5D46 6
#define _B5D47 7

// ------------------------------
//        B5D5
// ------------------------------
unsigned int B5D5@0xedb ;
union
{

struct 
{
  unsigned int 
  B5D50 : 1 ,
  B5D51 : 1 ,
  B5D52 : 1 ,
  B5D53 : 1 ,
  B5D54 : 1 ,
  B5D55 : 1 ,
  B5D56 : 1 ,
  B5D57 : 1 ;
} ; 

} B5D5bits@0xedb  ;

#define _B5D50 0
#define _B5D51 1
#define _B5D52 2
#define _B5D53 3
#define _B5D54 4
#define _B5D55 5
#define _B5D56 6
#define _B5D57 7

// ------------------------------
//        B5D6
// ------------------------------
unsigned int B5D6@0xedc ;
union
{

struct 
{
  unsigned int 
  B5D60 : 1 ,
  B5D61 : 1 ,
  B5D62 : 1 ,
  B5D63 : 1 ,
  B5D64 : 1 ,
  B5D65 : 1 ,
  B5D66 : 1 ,
  B5D67 : 1 ;
} ; 

} B5D6bits@0xedc  ;

#define _B5D60 0
#define _B5D61 1
#define _B5D62 2
#define _B5D63 3
#define _B5D64 4
#define _B5D65 5
#define _B5D66 6
#define _B5D67 7

// ------------------------------
//        B5D7
// ------------------------------
unsigned int B5D7@0xedd ;
union
{

struct 
{
  unsigned int 
  B5D70 : 1 ,
  B5D71 : 1 ,
  B5D72 : 1 ,
  B5D73 : 1 ,
  B5D74 : 1 ,
  B5D75 : 1 ,
  B5D76 : 1 ,
  B5D77 : 1 ;
} ; 

} B5D7bits@0xedd  ;

#define _B5D70 0
#define _B5D71 1
#define _B5D72 2
#define _B5D73 3
#define _B5D74 4
#define _B5D75 5
#define _B5D76 6
#define _B5D77 7

// ------------------------------
//        CANSTAT_RO4
// ------------------------------
unsigned int CANSTAT_RO4@0xede ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO4bits@0xede  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO4
// ------------------------------
unsigned int CANCON_RO4@0xedf ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO4bits@0xedf  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        RXF0SIDH
// ------------------------------
unsigned int RXF0SIDH@0xee0 ;
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

} RXF0SIDHbits@0xee0  ;

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
unsigned int RXF0SIDL@0xee1 ;
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

} RXF0SIDLbits@0xee1  ;

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
unsigned int RXF0EIDH@0xee2 ;
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

} RXF0EIDHbits@0xee2  ;

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
unsigned int RXF0EIDL@0xee3 ;
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

} RXF0EIDLbits@0xee3  ;

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
unsigned int RXF1SIDH@0xee4 ;
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

} RXF1SIDHbits@0xee4  ;

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
unsigned int RXF1SIDL@0xee5 ;
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

} RXF1SIDLbits@0xee5  ;

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
unsigned int RXF1EIDH@0xee6 ;
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

} RXF1EIDHbits@0xee6  ;

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
unsigned int RXF1EIDL@0xee7 ;
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

} RXF1EIDLbits@0xee7  ;

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
unsigned int RXF2SIDH@0xee8 ;
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

} RXF2SIDHbits@0xee8  ;

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
unsigned int RXF2SIDL@0xee9 ;
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

} RXF2SIDLbits@0xee9  ;

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
unsigned int RXF2EIDH@0xeea ;
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

} RXF2EIDHbits@0xeea  ;

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
unsigned int RXF2EIDL@0xeeb ;
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

} RXF2EIDLbits@0xeeb  ;

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
unsigned int RXF3SIDH@0xeec ;
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

} RXF3SIDHbits@0xeec  ;

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
unsigned int RXF3SIDL@0xeed ;
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

} RXF3SIDLbits@0xeed  ;

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
unsigned int RXF3EIDH@0xeee ;
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

} RXF3EIDHbits@0xeee  ;

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
unsigned int RXF3EIDL@0xeef ;
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

} RXF3EIDLbits@0xeef  ;

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
unsigned int RXF4SIDH@0xef0 ;
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

} RXF4SIDHbits@0xef0  ;

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
unsigned int RXF4SIDL@0xef1 ;
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

} RXF4SIDLbits@0xef1  ;

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
unsigned int RXF4EIDH@0xef2 ;
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

} RXF4EIDHbits@0xef2  ;

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
unsigned int RXF4EIDL@0xef3 ;
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

} RXF4EIDLbits@0xef3  ;

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
unsigned int RXF5SIDH@0xef4 ;
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

} RXF5SIDHbits@0xef4  ;

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
unsigned int RXF5SIDL@0xef5 ;
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

} RXF5SIDLbits@0xef5  ;

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
unsigned int RXF5EIDH@0xef6 ;
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

} RXF5EIDHbits@0xef6  ;

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
unsigned int RXF5EIDL@0xef7 ;
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

} RXF5EIDLbits@0xef7  ;

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
unsigned int RXM0SIDH@0xef8 ;
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

} RXM0SIDHbits@0xef8  ;

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
unsigned int RXM0SIDL@0xef9 ;
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

} RXM0SIDLbits@0xef9  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXM0EIDH
// ------------------------------
unsigned int RXM0EIDH@0xefa ;
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

} RXM0EIDHbits@0xefa  ;

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
unsigned int RXM0EIDL@0xefb ;
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

} RXM0EIDLbits@0xefb  ;

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
unsigned int RXM1SIDH@0xefc ;
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

} RXM1SIDHbits@0xefc  ;

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
unsigned int RXM1SIDL@0xefd ;
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

} RXM1SIDLbits@0xefd  ;

#define _EID16 0
#define _EID17 1
#define _EXIDEN 3
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        RXM1EIDH
// ------------------------------
unsigned int RXM1EIDH@0xefe ;
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

} RXM1EIDHbits@0xefe  ;

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
unsigned int RXM1EIDL@0xeff ;
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

} RXM1EIDLbits@0xeff  ;

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
unsigned int TXB2CON@0xf00 ;
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
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} TXB2CONbits@0xf00  ;

#define _TXPRI0 0
#define _TXPRI1 1
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __TXPRI 0:2

// ------------------------------
//        TXB2SIDH
// ------------------------------
unsigned int TXB2SIDH@0xf01 ;
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

} TXB2SIDHbits@0xf01  ;

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
unsigned int TXB2SIDL@0xf02 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} TXB2SIDLbits@0xf02  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        TXB2EIDH
// ------------------------------
unsigned int TXB2EIDH@0xf03 ;
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

} TXB2EIDHbits@0xf03  ;

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
unsigned int TXB2EIDL@0xf04 ;
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

} TXB2EIDLbits@0xf04  ;

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
unsigned int TXB2DLC@0xf05 ;
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

} TXB2DLCbits@0xf05  ;

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
unsigned int TXB2D0@0xf06 ;
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

} TXB2D0bits@0xf06  ;

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
unsigned int TXB2D1@0xf07 ;
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

} TXB2D1bits@0xf07  ;

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
unsigned int TXB2D2@0xf08 ;
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

} TXB2D2bits@0xf08  ;

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
unsigned int TXB2D3@0xf09 ;
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

} TXB2D3bits@0xf09  ;

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
unsigned int TXB2D4@0xf0a ;
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

} TXB2D4bits@0xf0a  ;

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
unsigned int TXB2D5@0xf0b ;
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

} TXB2D5bits@0xf0b  ;

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
unsigned int TXB2D6@0xf0c ;
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

} TXB2D6bits@0xf0c  ;

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
unsigned int TXB2D7@0xf0d ;
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

} TXB2D7bits@0xf0d  ;

#define _TXB2D70 0
#define _TXB2D71 1
#define _TXB2D72 2
#define _TXB2D73 3
#define _TXB2D74 4
#define _TXB2D75 5
#define _TXB2D76 6
#define _TXB2D77 7

// ------------------------------
//        CANSTAT_RO3
// ------------------------------
unsigned int CANSTAT_RO3@0xf0e ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO3bits@0xf0e  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO3
// ------------------------------
unsigned int CANCON_RO3@0xf0f ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO3bits@0xf0f  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        TXB1CON
// ------------------------------
unsigned int TXB1CON@0xf10 ;
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
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} TXB1CONbits@0xf10  ;

#define _TXPRI0 0
#define _TXPRI1 1
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __TXPRI 0:2

// ------------------------------
//        TXB1SIDH
// ------------------------------
unsigned int TXB1SIDH@0xf11 ;
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

} TXB1SIDHbits@0xf11  ;

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
unsigned int TXB1SIDL@0xf12 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} TXB1SIDLbits@0xf12  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        TXB1EIDH
// ------------------------------
unsigned int TXB1EIDH@0xf13 ;
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

} TXB1EIDHbits@0xf13  ;

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
unsigned int TXB1EIDL@0xf14 ;
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

} TXB1EIDLbits@0xf14  ;

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
unsigned int TXB1DLC@0xf15 ;
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

} TXB1DLCbits@0xf15  ;

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
unsigned int TXB1D0@0xf16 ;
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

} TXB1D0bits@0xf16  ;

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
unsigned int TXB1D1@0xf17 ;
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

} TXB1D1bits@0xf17  ;

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
unsigned int TXB1D2@0xf18 ;
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

} TXB1D2bits@0xf18  ;

#define _TXB1D20 0
#define _TXB1D21 1
#define _TXB1D22 2
#define _TXB1D23 3
#define _TXB1D24 4
#define _TXB1D25 5
#define _TXB1D26 6
#define _TXB1D27 7

// ------------------------------
//        TXB1D3
// ------------------------------
unsigned int TXB1D3@0xf19 ;
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

} TXB1D3bits@0xf19  ;

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
unsigned int TXB1D4@0xf1a ;
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

} TXB1D4bits@0xf1a  ;

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
unsigned int TXB1D5@0xf1b ;
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

} TXB1D5bits@0xf1b  ;

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
unsigned int TXB1D6@0xf1c ;
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

} TXB1D6bits@0xf1c  ;

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
unsigned int TXB1D7@0xf1d ;
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

} TXB1D7bits@0xf1d  ;

#define _TXB1D70 0
#define _TXB1D71 1
#define _TXB1D72 2
#define _TXB1D73 3
#define _TXB1D74 4
#define _TXB1D75 5
#define _TXB1D76 6
#define _TXB1D77 7

// ------------------------------
//        CANSTAT_RO2
// ------------------------------
unsigned int CANSTAT_RO2@0xf1e ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE20 : 1 ,
  ICODE21 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

} CANSTAT_RO2bits@0xf1e  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE20 1
#define _ICODE21 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

// ------------------------------
//        CANCON_RO2
// ------------------------------
unsigned int CANCON_RO2@0xf1f ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO2bits@0xf1f  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        TXB0CON
// ------------------------------
unsigned int TXB0CON@0xf20 ;
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
  TXABT : 1 ,
  TXBIF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TXPRI : 2 ;
} ; 

} TXB0CONbits@0xf20  ;

#define _TXPRI0 0
#define _TXPRI1 1
#define _TXREQ 3
#define _TXERR 4
#define _TXLARB 5
#define _TXABT 6
#define _TXBIF 7

// The following are aliases ..  
#define __TXPRI 0:2

// ------------------------------
//        TXB0SIDH
// ------------------------------
unsigned int TXB0SIDH@0xf21 ;
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

} TXB0SIDHbits@0xf21  ;

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
unsigned int TXB0SIDL@0xf22 ;
union
{

struct 
{
  unsigned int 
  EID16 : 1 ,
  EID17 : 1 ,
  : 1,
  EXIDE : 1 ,
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

} TXB0SIDLbits@0xf22  ;

#define _EID16 0
#define _EID17 1
#define _EXIDE 3
#define _SRR 4
#define _SID0 5
#define _SID1 6
#define _SID2 7

// The following are aliases ..  
#define __SID 5:3

// ------------------------------
//        TXB0EIDH
// ------------------------------
unsigned int TXB0EIDH@0xf23 ;
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

} TXB0EIDHbits@0xf23  ;

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
unsigned int TXB0EIDL@0xf24 ;
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

} TXB0EIDLbits@0xf24  ;

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
unsigned int TXB0DLC@0xf25 ;
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

} TXB0DLCbits@0xf25  ;

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
unsigned int TXB0D0@0xf26 ;
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

} TXB0D0bits@0xf26  ;

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
unsigned int TXB0D1@0xf27 ;
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

} TXB0D1bits@0xf27  ;

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
unsigned int TXB0D2@0xf28 ;
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

} TXB0D2bits@0xf28  ;

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
unsigned int TXB0D3@0xf29 ;
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

} TXB0D3bits@0xf29  ;

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
unsigned int TXB0D4@0xf2a ;
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

} TXB0D4bits@0xf2a  ;

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
unsigned int TXB0D5@0xf2b ;
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

} TXB0D5bits@0xf2b  ;

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
unsigned int TXB0D6@0xf2c ;
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

} TXB0D6bits@0xf2c  ;

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
unsigned int TXB0D7@0xf2d ;
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

} TXB0D7bits@0xf2d  ;

#define _TXB0D70 0
#define _TXB0D71 1
#define _TXB0D72 2
#define _TXB0D73 3
#define _TXB0D74 4
#define _TXB0D75 5
#define _TXB0D76 6
#define _TXB0D77 7

// ------------------------------
//        CANSTAT_RO1
// ------------------------------
unsigned int CANSTAT_RO1@0xf2e ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO1bits@0xf2e  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO1
// ------------------------------
unsigned int CANCON_RO1@0xf2f ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO1bits@0xf2f  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        RXB1CON
// ------------------------------
unsigned int RXB1CON@0xf30 ;
union
{

struct 
{
  unsigned int 
  FILHIT0 : 1 ,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  RXRTRRO_FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXM0_RTRRO : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  RXRTRRO_RXB1CON : 1 ,
  : 1,
  RXM0 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  FILHIT3 : 1 ,
  : 1,
  RTRRO : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FILHIT : 3 ;
} ; 

} RXB1CONbits@0xf30  ;

#define _FILHIT0 0
#define _FILHIT1 1
#define _FILHIT2 2
#define _RXRTRRO_FILHIT3 3
#define _FILHIT4 4
#define _RXM0_RTRRO 5
#define _RXM1 6
#define _RXFUL 7

#define _RXRTRRO_RXB1CON 3
#define _RXM0 5

#define _FILHIT3 3
#define _RTRRO 5

// The following are aliases ..  
#define __FILHIT 0:3

// ------------------------------
//        RXB1SIDH
// ------------------------------
unsigned int RXB1SIDH@0xf31 ;
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

} RXB1SIDHbits@0xf31  ;

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
unsigned int RXB1SIDL@0xf32 ;
union
{

struct 
{
  unsigned int 
  EDI16 : 1 ,
  EDI17 : 1 ,
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

} RXB1SIDLbits@0xf32  ;

#define _EDI16 0
#define _EDI17 1
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
unsigned int RXB1EIDH@0xf33 ;
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

} RXB1EIDHbits@0xf33  ;

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
unsigned int RXB1EIDL@0xf34 ;
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

} RXB1EIDLbits@0xf34  ;

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
unsigned int RXB1DLC@0xf35 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} RXB1DLCbits@0xf35  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_RXB1DLC 4
#define _RB1_RXB1DLC 5
#define _RXRTR 6

// The following are aliases ..  
#define __DLC 0:4

// ------------------------------
//        RXB1D0
// ------------------------------
unsigned int RXB1D0@0xf36 ;
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

} RXB1D0bits@0xf36  ;

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
unsigned int RXB1D1@0xf37 ;
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

} RXB1D1bits@0xf37  ;

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
unsigned int RXB1D2@0xf38 ;
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

} RXB1D2bits@0xf38  ;

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
unsigned int RXB1D3@0xf39 ;
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

} RXB1D3bits@0xf39  ;

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
unsigned int RXB1D4@0xf3a ;
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

} RXB1D4bits@0xf3a  ;

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
unsigned int RXB1D5@0xf3b ;
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

} RXB1D5bits@0xf3b  ;

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
unsigned int RXB1D6@0xf3c ;
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

} RXB1D6bits@0xf3c  ;

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
unsigned int RXB1D7@0xf3d ;
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

} RXB1D7bits@0xf3d  ;

#define _RXB1D70 0
#define _RXB1D71 1
#define _RXB1D72 2
#define _RXB1D73 3
#define _RXB1D74 4
#define _RXB1D75 5
#define _RXB1D76 6
#define _RXB1D77 7

// ------------------------------
//        CANSTAT_RO0
// ------------------------------
unsigned int CANSTAT_RO0@0xf3e ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTAT_RO0bits@0xf3e  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON_RO0
// ------------------------------
unsigned int CANCON_RO0@0xf3f ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCON_RO0bits@0xf3f  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        PSPCON
// ------------------------------
unsigned int PSPCON@0xf46 ;
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

} PSPCONbits@0xf46  ;

#define _PSPMODE 4
#define _IBOV 5
#define _OBF 6
#define _IBF 7

// ------------------------------
//        CCP5CON
// ------------------------------
unsigned int CCP5CON@0xf47 ;
union
{

struct 
{
  unsigned int 
  CCP5M0 : 1 ,
  CCP5M1 : 1 ,
  CCP5M2 : 1 ,
  CCP5M3 : 1 ,
  DC5B0 : 1 ,
  DC5B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP5Y : 1 ,
  CCP5X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP5M : 4 ,
  _DC5B : 2 ;
} ; 

} CCP5CONbits@0xf47  ;

#define _CCP5M0 0
#define _CCP5M1 1
#define _CCP5M2 2
#define _CCP5M3 3
#define _DC5B0 4
#define _DC5B1 5

#define _CCP5Y 4
#define _CCP5X 5

// The following are aliases ..  
#define __CCP5M 0:4
#define __DC5B 4:2

// ------------------------------
//        CCPR5
// ------------------------------
unsigned int CCPR5@0xf48 ;
// ------------------------------
//        CCPR5L
// ------------------------------
unsigned int CCPR5L@0xf48 ;
// ------------------------------
//        CCPR5H
// ------------------------------
unsigned int CCPR5H@0xf49 ;
// ------------------------------
//        CCP4CON
// ------------------------------
unsigned int CCP4CON@0xf4a ;
union
{

struct 
{
  unsigned int 
  CCP4M0 : 1 ,
  CCP4M1 : 1 ,
  CCP4M2 : 1 ,
  CCP4M3 : 1 ,
  DC4B0 : 1 ,
  DC4B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP4Y : 1 ,
  CCP4X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP4M : 4 ,
  _DC4B : 2 ;
} ; 

} CCP4CONbits@0xf4a  ;

#define _CCP4M0 0
#define _CCP4M1 1
#define _CCP4M2 2
#define _CCP4M3 3
#define _DC4B0 4
#define _DC4B1 5

#define _CCP4Y 4
#define _CCP4X 5

// The following are aliases ..  
#define __CCP4M 0:4
#define __DC4B 4:2

// ------------------------------
//        CCPR4
// ------------------------------
unsigned int CCPR4@0xf4b ;
// ------------------------------
//        CCPR4L
// ------------------------------
unsigned int CCPR4L@0xf4b ;
// ------------------------------
//        CCPR4H
// ------------------------------
unsigned int CCPR4H@0xf4c ;
// ------------------------------
//        CCP3CON
// ------------------------------
unsigned int CCP3CON@0xf4d ;
union
{

struct 
{
  unsigned int 
  CCP3M0 : 1 ,
  CCP3M1 : 1 ,
  CCP3M2 : 1 ,
  CCP3M3 : 1 ,
  DC3B0 : 1 ,
  DC3B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP3Y : 1 ,
  CCP3X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP3M : 4 ,
  _DC3B : 2 ;
} ; 

} CCP3CONbits@0xf4d  ;

#define _CCP3M0 0
#define _CCP3M1 1
#define _CCP3M2 2
#define _CCP3M3 3
#define _DC3B0 4
#define _DC3B1 5

#define _CCP3Y 4
#define _CCP3X 5

// The following are aliases ..  
#define __CCP3M 0:4
#define __DC3B 4:2

// ------------------------------
//        CCPR3
// ------------------------------
unsigned int CCPR3@0xf4e ;
// ------------------------------
//        CCPR3L
// ------------------------------
unsigned int CCPR3L@0xf4e ;
// ------------------------------
//        CCPR3H
// ------------------------------
unsigned int CCPR3H@0xf4f ;
// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xf50 ;
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
  : 4,
  CCP2Y : 1 ,
  CCP2X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ,
  _DC2B : 2 ;
} ; 

} CCP2CONbits@0xf50  ;

#define _CCP2M0 0
#define _CCP2M1 1
#define _CCP2M2 2
#define _CCP2M3 3
#define _DC2B0 4
#define _DC2B1 5

#define _CCP2Y 4
#define _CCP2X 5

// The following are aliases ..  
#define __CCP2M 0:4
#define __DC2B 4:2

// ------------------------------
//        ECCP2CON
// ------------------------------
unsigned int ECCP2CON@0xf50 ;
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
  : 4,
  CCP2Y : 1 ,
  CCP2X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ,
  _DC2B : 2 ;
} ; 

} ECCP2CONbits@0xf50  ;

#define _CCP2M0 0
#define _CCP2M1 1
#define _CCP2M2 2
#define _CCP2M3 3
#define _DC2B0 4
#define _DC2B1 5

#define _CCP2Y 4
#define _CCP2X 5

// The following are aliases ..  
#define __CCP2M 0:4
#define __DC2B 4:2

// ------------------------------
//        CCPR2
// ------------------------------
unsigned int CCPR2@0xf51 ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xf51 ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xf52 ;
// ------------------------------
//        CTMUICON
// ------------------------------
unsigned int CTMUICON@0xf53 ;
union
{

struct 
{
  unsigned int 
  IRNG0 : 1 ,
  IRNG1 : 1 ,
  ITRIM0 : 1 ,
  ITRIM1 : 1 ,
  ITRIM2 : 1 ,
  ITRIM3 : 1 ,
  ITRIM4 : 1 ,
  ITRIM5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IRNG : 2 ,
  _ITRIM : 6 ;
} ; 

} CTMUICONbits@0xf53  ;

#define _IRNG0 0
#define _IRNG1 1
#define _ITRIM0 2
#define _ITRIM1 3
#define _ITRIM2 4
#define _ITRIM3 5
#define _ITRIM4 6
#define _ITRIM5 7

// The following are aliases ..  
#define __IRNG 0:2
#define __ITRIM 2:6

// ------------------------------
//        CTMUCONL
// ------------------------------
unsigned int CTMUCONL@0xf54 ;
union
{

struct 
{
  unsigned int 
  EDG1STAT : 1 ,
  EDG2STAT : 1 ,
  EDG1SEL0 : 1 ,
  EDG1SEL1 : 1 ,
  EDG1POL : 1 ,
  EDG2SEL0 : 1 ,
  EDG2SEL1 : 1 ,
  EDG2POL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _EDG1SEL : 2 ,
  : 1,
  _EDG2SEL : 2 ;
} ; 

} CTMUCONLbits@0xf54  ;

#define _EDG1STAT 0
#define _EDG2STAT 1
#define _EDG1SEL0 2
#define _EDG1SEL1 3
#define _EDG1POL 4
#define _EDG2SEL0 5
#define _EDG2SEL1 6
#define _EDG2POL 7

// The following are aliases ..  
#define __EDG1SEL 2:2
#define __EDG2SEL 5:2

// ------------------------------
//        CTMUCONH
// ------------------------------
unsigned int CTMUCONH@0xf55 ;
union
{

struct 
{
  unsigned int 
  CTTRIG : 1 ,
  IDISSEN : 1 ,
  EDGSEQEN : 1 ,
  EDGEN : 1 ,
  TGEN : 1 ,
  CTMUSIDL : 1 ,
  : 1,
  CTMUEN : 1 ;
} ; 

} CTMUCONHbits@0xf55  ;

#define _CTTRIG 0
#define _IDISSEN 1
#define _EDGSEQEN 2
#define _EDGEN 3
#define _TGEN 4
#define _CTMUSIDL 5
#define _CTMUEN 7

// ------------------------------
//        PADCFG1
// ------------------------------
unsigned int PADCFG1@0xf56 ;
union
{

struct 
{
  unsigned int 
  CTMUDS : 1 ,
  : 5,
  REPU : 1 ,
  RDPU : 1 ;
} ; 

} PADCFG1bits@0xf56  ;

#define _CTMUDS 0
#define _REPU 6
#define _RDPU 7

// ------------------------------
//        PMD2
// ------------------------------
unsigned int PMD2@0xf57 ;
union
{

struct 
{
  unsigned int 
  CMP1MD : 1 ,
  CMP2MD : 1 ,
  ECANMD : 1 ;
} ; 

} PMD2bits@0xf57  ;

#define _CMP1MD 0
#define _CMP2MD 1
#define _ECANMD 2

// ------------------------------
//        PMD1
// ------------------------------
unsigned int PMD1@0xf58 ;
union
{

struct 
{
  unsigned int 
  TMR0MD : 1 ,
  TMR1MD : 1 ,
  TMR2MD : 1 ,
  TMR3MD : 1 ,
  TMR4MD : 1 ,
  ADCMD : 1 ,
  CTMUMD : 1 ,
  PSPMD : 1 ;
} ; 

} PMD1bits@0xf58  ;

#define _TMR0MD 0
#define _TMR1MD 1
#define _TMR2MD 2
#define _TMR3MD 3
#define _TMR4MD 4
#define _ADCMD 5
#define _CTMUMD 6
#define _PSPMD 7

// ------------------------------
//        PMD0
// ------------------------------
unsigned int PMD0@0xf59 ;
union
{

struct 
{
  unsigned int 
  SSPMD : 1 ,
  UART1MD : 1 ,
  UART2MD : 1 ,
  CCP1MD : 1 ,
  CCP2MD : 1 ,
  CCP3MD : 1 ,
  CCP4MD : 1 ,
  CCP5MD : 1 ;
} ; 

} PMD0bits@0xf59  ;

#define _SSPMD 0
#define _UART1MD 1
#define _UART2MD 2
#define _CCP1MD 3
#define _CCP2MD 4
#define _CCP3MD 5
#define _CCP4MD 6
#define _CCP5MD 7

// ------------------------------
//        IOCB
// ------------------------------
unsigned int IOCB@0xf5a ;
union
{

struct 
{
  unsigned int 
  : 4,
  IOCB4 : 1 ,
  IOCB5 : 1 ,
  IOCB6 : 1 ,
  IOCB7 : 1 ;
} ; 

} IOCBbits@0xf5a  ;

#define _IOCB4 4
#define _IOCB5 5
#define _IOCB6 6
#define _IOCB7 7

// ------------------------------
//        WPUB
// ------------------------------
unsigned int WPUB@0xf5b ;
union
{

struct 
{
  unsigned int 
  WPUB0 : 1 ,
  WPUB1 : 1 ,
  WPUB2 : 1 ,
  WPUB3 : 1 ,
  WPUB4 : 1 ,
  WPUB5 : 1 ,
  WPUB6 : 1 ,
  WPUB7 : 1 ;
} ; 

} WPUBbits@0xf5b  ;

#define _WPUB0 0
#define _WPUB1 1
#define _WPUB2 2
#define _WPUB3 3
#define _WPUB4 4
#define _WPUB5 5
#define _WPUB6 6
#define _WPUB7 7

// ------------------------------
//        ANCON1
// ------------------------------
unsigned int ANCON1@0xf5c ;
union
{

struct 
{
  unsigned int 
  ANSEL8 : 1 ,
  ANSEL9 : 1 ,
  ANSEL10 : 1 ,
  ANSEL11 : 1 ,
  ANSEL12 : 1 ,
  ANSEL13 : 1 ,
  ANSEL14 : 1 ;
} ; 

} ANCON1bits@0xf5c  ;

#define _ANSEL8 0
#define _ANSEL9 1
#define _ANSEL10 2
#define _ANSEL11 3
#define _ANSEL12 4
#define _ANSEL13 5
#define _ANSEL14 6

// ------------------------------
//        ANCON0
// ------------------------------
unsigned int ANCON0@0xf5d ;
union
{

struct 
{
  unsigned int 
  ANSEL0 : 1 ,
  ANSEL1 : 1 ,
  ANSEL2 : 1 ,
  ANSEL3 : 1 ,
  ANSEL4 : 1 ,
  ANSEL5 : 1 ,
  ANSEL6 : 1 ,
  ANSEL7 : 1 ;
} ; 

} ANCON0bits@0xf5d  ;

#define _ANSEL0 0
#define _ANSEL1 1
#define _ANSEL2 2
#define _ANSEL3 3
#define _ANSEL4 4
#define _ANSEL5 5
#define _ANSEL6 6
#define _ANSEL7 7

// ------------------------------
//        CM2CON
// ------------------------------
unsigned int CM2CON@0xf5e ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM2CONbits@0xf5e  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

// ------------------------------
//        CM2CON1
// ------------------------------
unsigned int CM2CON1@0xf5e ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM2CON1bits@0xf5e  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

// ------------------------------
//        CM1CON
// ------------------------------
unsigned int CM1CON@0xf5f ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM1CONbits@0xf5f  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

// ------------------------------
//        CM1CON1
// ------------------------------
unsigned int CM1CON1@0xf5f ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM1CON1bits@0xf5f  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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
  JTOFF_FILHIT1 : 1 ,
  RB0DBEN_FILHIT2 : 1 ,
  RXRTRRO_FILHIT3 : 1 ,
  FILHIT4 : 1 ,
  RXM0_RTRRO : 1 ,
  RXM1 : 1 ,
  RXFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  JTOFF : 1 ,
  RB0DBEN : 1 ,
  RXRTRRO_RXB0CON : 1 ,
  : 1,
  RTRRO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FILHIT1 : 1 ,
  FILHIT2 : 1 ,
  FILHIT3 : 1 ,
  : 1,
  RXM0 : 1 ;
} ; 

} RXB0CONbits@0xf60  ;

#define _FILHIT0 0
#define _JTOFF_FILHIT1 1
#define _RB0DBEN_FILHIT2 2
#define _RXRTRRO_FILHIT3 3
#define _FILHIT4 4
#define _RXM0_RTRRO 5
#define _RXM1 6
#define _RXFUL 7

#define _JTOFF 1
#define _RB0DBEN 2
#define _RXRTRRO_RXB0CON 3
#define _RTRRO 5

#define _FILHIT1 1
#define _FILHIT2 2
#define _FILHIT3 3
#define _RXM0 5

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

// The following are aliases ..  
struct 
{
  unsigned int 
  _DLC : 4 ;
} ; 

} RXB0DLCbits@0xf65  ;

#define _DLC0 0
#define _DLC1 1
#define _DLC2 2
#define _DLC3 3
#define _RB0_RXB0DLC 4
#define _RB1_RXB0DLC 5
#define _RXRTR 6

// The following are aliases ..  
#define __DLC 0:4

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

} RXB0D0bits@0xf66  ;

#define _RXB0D00 0
#define _RXB0D01 1
#define _RXB0D02 2
#define _RXB0D03 3
#define _RXB0D04 4
#define _RXB0D05 5
#define _RXB0D06 6
#define _RXB0D07 7

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

} RXB0D1bits@0xf67  ;

#define _RXB0D10 0
#define _RXB0D11 1
#define _RXB0D12 2
#define _RXB0D13 3
#define _RXB0D14 4
#define _RXB0D15 5
#define _RXB0D16 6
#define _RXB0D17 7

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

} RXB0D2bits@0xf68  ;

#define _RXB0D20 0
#define _RXB0D21 1
#define _RXB0D22 2
#define _RXB0D23 3
#define _RXB0D24 4
#define _RXB0D25 5
#define _RXB0D26 6
#define _RXB0D27 7

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

} RXB0D3bits@0xf69  ;

#define _RXB0D30 0
#define _RXB0D31 1
#define _RXB0D32 2
#define _RXB0D33 3
#define _RXB0D34 4
#define _RXB0D35 5
#define _RXB0D36 6
#define _RXB0D37 7

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

} RXB0D4bits@0xf6a  ;

#define _RXB0D40 0
#define _RXB0D41 1
#define _RXB0D42 2
#define _RXB0D43 3
#define _RXB0D44 4
#define _RXB0D45 5
#define _RXB0D46 6
#define _RXB0D47 7

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

} RXB0D5bits@0xf6b  ;

#define _RXB0D50 0
#define _RXB0D51 1
#define _RXB0D52 2
#define _RXB0D53 3
#define _RXB0D54 4
#define _RXB0D55 5
#define _RXB0D56 6
#define _RXB0D57 7

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

} RXB0D6bits@0xf6c  ;

#define _RXB0D60 0
#define _RXB0D61 1
#define _RXB0D62 2
#define _RXB0D63 3
#define _RXB0D64 4
#define _RXB0D65 5
#define _RXB0D66 6
#define _RXB0D67 7

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

} RXB0D7bits@0xf6d  ;

#define _RXB0D70 0
#define _RXB0D71 1
#define _RXB0D72 2
#define _RXB0D73 3
#define _RXB0D74 4
#define _RXB0D75 5
#define _RXB0D76 6
#define _RXB0D77 7

// ------------------------------
//        CANSTAT
// ------------------------------
unsigned int CANSTAT@0xf6e ;
union
{

struct 
{
  unsigned int 
  EICODE0 : 1 ,
  EICODE1_ICODE0 : 1 ,
  EICODE2_ICODE1 : 1 ,
  EICODE3_ICODE2 : 1 ,
  EICODE4 : 1 ,
  OPMODE0 : 1 ,
  OPMODE1 : 1 ,
  OPMODE2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  EICODE1 : 1 ,
  EICODE2 : 1 ,
  EICODE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ICODE0 : 1 ,
  ICODE1 : 1 ,
  ICODE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EICODE : 1 ,
  _EICODE1_ICODE : 1 ,
  : 3,
  _OPMODE : 3 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  _ICODE : 3 ;
} ; 

} CANSTATbits@0xf6e  ;

#define _EICODE0 0
#define _EICODE1_ICODE0 1
#define _EICODE2_ICODE1 2
#define _EICODE3_ICODE2 3
#define _EICODE4 4
#define _OPMODE0 5
#define _OPMODE1 6
#define _OPMODE2 7

#define _EICODE1 1
#define _EICODE2 2
#define _EICODE3 3

#define _ICODE0 1
#define _ICODE1 2
#define _ICODE2 3

// The following are aliases ..  
#define __EICODE 0
#define __EICODE1_ICODE 1
#define __OPMODE 5:3

#define __ICODE 1:3

// ------------------------------
//        CANCON
// ------------------------------
unsigned int CANCON@0xf6f ;
union
{

struct 
{
  unsigned int 
  FP0 : 1 ,
  WIN0_FP1 : 1 ,
  WIN1_FP2 : 1 ,
  WIN2_FP3 : 1 ,
  ABAT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  WIN0 : 1 ,
  WIN1 : 1 ,
  WIN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FP1 : 1 ,
  FP2 : 1 ,
  FP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _WIN : 3 ;
} ; 

} CANCONbits@0xf6f  ;

#define _FP0 0
#define _WIN0_FP1 1
#define _WIN1_FP2 2
#define _WIN2_FP3 3
#define _ABAT 4

#define _WIN0 1
#define _WIN1 2
#define _WIN2 3

#define _FP1 1
#define _FP2 2
#define _FP3 3

// The following are aliases ..  
#define __WIN 1:3

// ------------------------------
//        CIOCON
// ------------------------------
unsigned int CIOCON@0xf70 ;
union
{

struct 
{
  unsigned int 
  CLKSEL : 1 ,
  : 3,
  CANCAP : 1 ,
  ENDRHI : 1 ,
  TX2EN : 1 ,
  TX2SRC : 1 ;
} ; 

} CIOCONbits@0xf70  ;

#define _CLKSEL 0
#define _CANCAP 4
#define _ENDRHI 5
#define _TX2EN 6
#define _TX2SRC 7

// ------------------------------
//        COMSTAT
// ------------------------------
unsigned int COMSTAT@0xf71 ;
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
  : 7,
  NOT_FIFOEMPTY : 1 ;
} ; 

} COMSTATbits@0xf71  ;

#define _EWARN 0
#define _RXWARN 1
#define _TXWARN 2
#define _RXBP 3
#define _TXBP 4
#define _TXBO 5
#define _RXB1OVFL 6
#define _RXB0OVFL 7

#define _NOT_FIFOEMPTY 7

// ------------------------------
//        ECANCON
// ------------------------------
unsigned int ECANCON@0xf72 ;
union
{

struct 
{
  unsigned int 
  EWIN0 : 1 ,
  EWIN1 : 1 ,
  EWIN2 : 1 ,
  EWIN3 : 1 ,
  EWIN4 : 1 ,
  FIFOWM : 1 ,
  MDSEL0 : 1 ,
  MDSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _EWIN : 5 ,
  : 1,
  _MDSEL : 2 ;
} ; 

} ECANCONbits@0xf72  ;

#define _EWIN0 0
#define _EWIN1 1
#define _EWIN2 2
#define _EWIN3 3
#define _EWIN4 4
#define _FIFOWM 5
#define _MDSEL0 6
#define _MDSEL1 7

// The following are aliases ..  
#define __EWIN 0:5
#define __MDSEL 6:2

// ------------------------------
//        EEDATA
// ------------------------------
unsigned int EEDATA@0xf73 ;
// ------------------------------
//        EEADR
// ------------------------------
unsigned int EEADR@0xf74 ;
// ------------------------------
//        EEADRH
// ------------------------------
unsigned int EEADRH@0xf75 ;
// ------------------------------
//        PIE5
// ------------------------------
unsigned int PIE5@0xf76 ;
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
  FIFOWMIE : 1 ,
  RXBnIE : 1 ,
  : 2,
  TXBnIE : 1 ;
} ; 

} PIE5bits@0xf76  ;

#define _RXB0IE 0
#define _RXB1IE 1
#define _TXB0IE 2
#define _TXB1IE 3
#define _TXB2IE 4
#define _ERRIE 5
#define _WAKIE 6
#define _IRXIE 7

#define _FIFOWMIE 0
#define _RXBnIE 1
#define _TXBnIE 4

// ------------------------------
//        PIR5
// ------------------------------
unsigned int PIR5@0xf77 ;
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
  FIFOWMIF : 1 ,
  RXBnIF : 1 ,
  : 2,
  TXBnIF : 1 ;
} ; 

} PIR5bits@0xf77  ;

#define _RXB0IF 0
#define _RXB1IF 1
#define _TXB0IF 2
#define _TXB1IF 3
#define _TXB2IF 4
#define _ERRIF 5
#define _WAKIF 6
#define _IRXIF 7

#define _FIFOWMIF 0
#define _RXBnIF 1
#define _TXBnIF 4

// ------------------------------
//        IPR5
// ------------------------------
unsigned int IPR5@0xf78 ;
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
  FIFOWMIP : 1 ,
  RXBnIP : 1 ,
  : 2,
  TXBnIP : 1 ;
} ; 

} IPR5bits@0xf78  ;

#define _RXB0IP 0
#define _RXB1IP 1
#define _TXB0IP 2
#define _TXB1IP 3
#define _TXB2IP 4
#define _ERRIP 5
#define _WAKIP 6
#define _IRXIP 7

#define _FIFOWMIP 0
#define _RXBnIP 1
#define _TXBnIP 4

// ------------------------------
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xf79 ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xf7a ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xf7b ;
// ------------------------------
//        SPBRGH2
// ------------------------------
unsigned int SPBRGH2@0xf7c ;
// ------------------------------
//        SPBRGH1
// ------------------------------
unsigned int SPBRGH1@0xf7d ;
// ------------------------------
//        EECON2
// ------------------------------
unsigned int EECON2@0xf7e ;
// ------------------------------
//        EECON1
// ------------------------------
unsigned int EECON1@0xf7f ;
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

} EECON1bits@0xf7f  ;

#define _RD 0
#define _WR 1
#define _WREN 2
#define _WRERR 3
#define _FREE 4
#define _CFGS 6
#define _EEPGD 7

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
  : 1,
  RA5 : 1 ,
  RA6 : 1 ,
  RA7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RA : 4 ;
} ; 

} PORTAbits@0xf80  ;

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA5 5
#define _RA6 6
#define _RA7 7

// The following are aliases ..  
#define __RA 0:4

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

} PORTBbits@0xf81  ;

#define _RB0_PORTB 0
#define _RB1_PORTB 1
#define _RB2 2
#define _RB3 3
#define _RB4 4
#define _RB5 5
#define _RB6 6
#define _RB7 7

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

} PORTCbits@0xf82  ;

#define _RC0 0
#define _RC1 1
#define _RC2 2
#define _RC3 3
#define _RC4 4
#define _RC5 5
#define _RC6 6
#define _RC7 7

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

} PORTDbits@0xf83  ;

#define _RD0 0
#define _RD1 1
#define _RD2 2
#define _RD3 3
#define _RD4 4
#define _RD5 5
#define _RD6 6
#define _RD7 7

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
  RE3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RE : 4 ;
} ; 

} PORTEbits@0xf84  ;

#define _RE0 0
#define _RE1 1
#define _RE2 2
#define _RE3 3

// The following are aliases ..  
#define __RE 0:4

// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf87 ;
// ------------------------------
//        T4CON
// ------------------------------
unsigned int T4CON@0xf88 ;
union
{

struct 
{
  unsigned int 
  T4CKPS0 : 1 ,
  T4CKPS1 : 1 ,
  TMR4ON : 1 ,
  T4OUTPS0 : 1 ,
  T4OUTPS1 : 1 ,
  T4OUTPS2 : 1 ,
  T4OUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T4CKPS : 2 ,
  : 1,
  _T4OUTPS : 4 ;
} ; 

} T4CONbits@0xf88  ;

#define _T4CKPS0 0
#define _T4CKPS1 1
#define _TMR4ON 2
#define _T4OUTPS0 3
#define _T4OUTPS1 4
#define _T4OUTPS2 5
#define _T4OUTPS3 6

// The following are aliases ..  
#define __T4CKPS 0:2
#define __T4OUTPS 3:4

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
  : 1,
  LATA5 : 1 ,
  LATA6 : 1 ,
  LATA7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATA : 4 ;
} ; 

} LATAbits@0xf89  ;

#define _LATA0 0
#define _LATA1 1
#define _LATA2 2
#define _LATA3 3
#define _LATA5 5
#define _LATA6 6
#define _LATA7 7

// The following are aliases ..  
#define __LATA 0:4

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
//        SLRCON
// ------------------------------
unsigned int SLRCON@0xf90 ;
union
{

struct 
{
  unsigned int 
  SLRA : 1 ,
  SLRB : 1 ,
  SLRC : 1 ,
  SLRD : 1 ,
  SLRE : 1 ;
} ; 

} SLRCONbits@0xf90  ;

#define _SLRA 0
#define _SLRB 1
#define _SLRC 2
#define _SLRD 3
#define _SLRE 4

// ------------------------------
//        ODCON
// ------------------------------
unsigned int ODCON@0xf91 ;
union
{

struct 
{
  unsigned int 
  U1OD : 1 ,
  U2OD : 1 ,
  CCP1OD : 1 ,
  CCP2OD : 1 ,
  CCP3OD : 1 ,
  CCP4OD : 1 ,
  CCP5OD : 1 ,
  SSPOD : 1 ;
} ; 

} ODCONbits@0xf91  ;

#define _U1OD 0
#define _U2OD 1
#define _CCP1OD 2
#define _CCP2OD 3
#define _CCP3OD 4
#define _CCP4OD 5
#define _CCP5OD 6
#define _SSPOD 7

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
  : 1,
  TRISA5 : 1 ,
  TRISA6 : 1 ,
  TRISA7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISA : 4 ;
} ; 

} TRISAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA5 5
#define _TRISA6 6
#define _TRISA7 7

// The following are aliases ..  
#define __TRISA 0:4

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

} TRISBbits@0xf93  ;

#define _TRISB0 0
#define _TRISB1 1
#define _TRISB2 2
#define _TRISB3 3
#define _TRISB4 4
#define _TRISB5 5
#define _TRISB6 6
#define _TRISB7 7

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

} TRISCbits@0xf94  ;

#define _TRISC0 0
#define _TRISC1 1
#define _TRISC2 2
#define _TRISC3 3
#define _TRISC4 4
#define _TRISC5 5
#define _TRISC6 6
#define _TRISC7 7

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

} TRISDbits@0xf95  ;

#define _TRISD0 0
#define _TRISD1 1
#define _TRISD2 2
#define _TRISD3 3
#define _TRISD4 4
#define _TRISD5 5
#define _TRISD6 6
#define _TRISD7 7

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
  TRISE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISE : 3 ;
} ; 

} TRISEbits@0xf96  ;

#define _TRISE0 0
#define _TRISE1 1
#define _TRISE2 2

// The following are aliases ..  
#define __TRISE 0:3

// ------------------------------
//        CCPTMRS
// ------------------------------
unsigned int CCPTMRS@0xf99 ;
union
{

struct 
{
  unsigned int 
  C1TSEL : 1 ,
  C2TSEL : 1 ,
  C3TSEL : 1 ,
  C4TSEL : 1 ,
  C5TSEL : 1 ;
} ; 

} CCPTMRSbits@0xf99  ;

#define _C1TSEL 0
#define _C2TSEL 1
#define _C3TSEL 2
#define _C4TSEL 3
#define _C5TSEL 4

// ------------------------------
//        REFOCON
// ------------------------------
unsigned int REFOCON@0xf9a ;
union
{

struct 
{
  unsigned int 
  RODIV0 : 1 ,
  RODIV1 : 1 ,
  RODIV2 : 1 ,
  RODIV3 : 1 ,
  ROSEL : 1 ,
  ROSSLP : 1 ,
  : 1,
  ROON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RODIV : 4 ;
} ; 

} REFOCONbits@0xf9a  ;

#define _RODIV0 0
#define _RODIV1 1
#define _RODIV2 2
#define _RODIV3 3
#define _ROSEL 4
#define _ROSSLP 5
#define _ROON 7

// The following are aliases ..  
#define __RODIV 0:4

// ------------------------------
//        OSCTUNE
// ------------------------------
unsigned int OSCTUNE@0xf9b ;
union
{

struct 
{
  unsigned int 
  TUN0 : 1 ,
  TUN1 : 1 ,
  TUN2 : 1 ,
  TUN3 : 1 ,
  TUN4 : 1 ,
  TUN5 : 1 ,
  PLLEN : 1 ,
  INTSRC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TUN : 6 ;
} ; 

} OSCTUNEbits@0xf9b  ;

#define _TUN0 0
#define _TUN1 1
#define _TUN2 2
#define _TUN3 3
#define _TUN4 4
#define _TUN5 5
#define _PLLEN 6
#define _INTSRC 7

// The following are aliases ..  
#define __TUN 0:6

// ------------------------------
//        PSTR1CON
// ------------------------------
unsigned int PSTR1CON@0xf9c ;
union
{

struct 
{
  unsigned int 
  STRA : 1 ,
  STRB : 1 ,
  STRC : 1 ,
  STRD : 1 ,
  STRSYNC : 1 ,
  : 1,
  CMPL0 : 1 ,
  CMPL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 6,
  _CMPL : 2 ;
} ; 

} PSTR1CONbits@0xf9c  ;

#define _STRA 0
#define _STRB 1
#define _STRC 2
#define _STRD 3
#define _STRSYNC 4
#define _CMPL0 6
#define _CMPL1 7

// The following are aliases ..  
#define __CMPL 6:2

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
  TMR1GIE : 1 ,
  SSPIE : 1 ,
  TX1IE : 1 ,
  RC1IE : 1 ,
  ADIE : 1 ,
  PSPIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  TXIE : 1 ,
  RCIE : 1 ;
} ; 

} PIE1bits@0xf9d  ;

#define _TMR1IE 0
#define _TMR2IE 1
#define _TMR1GIE 2
#define _SSPIE 3
#define _TX1IE 4
#define _RC1IE 5
#define _ADIE 6
#define _PSPIE 7

#define _TXIE 4
#define _RCIE 5

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
  TMR1GIF : 1 ,
  SSPIF : 1 ,
  TX1IF : 1 ,
  RC1IF : 1 ,
  ADIF : 1 ,
  PSPIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  TXIF : 1 ,
  RCIF : 1 ;
} ; 

} PIR1bits@0xf9e  ;

#define _TMR1IF 0
#define _TMR2IF 1
#define _TMR1GIF 2
#define _SSPIF 3
#define _TX1IF 4
#define _RC1IF 5
#define _ADIF 6
#define _PSPIF 7

#define _TXIF 4
#define _RCIF 5

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
  TMR1GIP : 1 ,
  SSPIP : 1 ,
  TX1IP : 1 ,
  RC1IP : 1 ,
  ADIP : 1 ,
  PSPIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  TXIP : 1 ,
  RCIP : 1 ;
} ; 

} IPR1bits@0xf9f  ;

#define _TMR1IP 0
#define _TMR2IP 1
#define _TMR1GIP 2
#define _SSPIP 3
#define _TX1IP 4
#define _RC1IP 5
#define _ADIP 6
#define _PSPIP 7

#define _TXIP 4
#define _RCIP 5

// ------------------------------
//        PIE2
// ------------------------------
unsigned int PIE2@0xfa0 ;
union
{

struct 
{
  unsigned int 
  TMR3GIE : 1 ,
  TMR3IE : 1 ,
  HLVDIE : 1 ,
  BCLIE : 1 ,
  : 3,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _TMR3GIE 0
#define _TMR3IE 1
#define _HLVDIE 2
#define _BCLIE 3
#define _OSCFIE 7

#define _LVDIE 2

// ------------------------------
//        PIR2
// ------------------------------
unsigned int PIR2@0xfa1 ;
union
{

struct 
{
  unsigned int 
  TMR3GIF : 1 ,
  TMR3IF : 1 ,
  HLVDIF : 1 ,
  BCLIF : 1 ,
  : 3,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _TMR3GIF 0
#define _TMR3IF 1
#define _HLVDIF 2
#define _BCLIF 3
#define _OSCFIF 7

#define _LVDIF 2

// ------------------------------
//        IPR2
// ------------------------------
unsigned int IPR2@0xfa2 ;
union
{

struct 
{
  unsigned int 
  TMR3GIP : 1 ,
  TMR3IP : 1 ,
  HLVDIP : 1 ,
  BCLIP : 1 ,
  : 3,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _TMR3GIP 0
#define _TMR3IP 1
#define _HLVDIP 2
#define _BCLIP 3
#define _OSCFIP 7

#define _LVDIP 2

// ------------------------------
//        PIE3
// ------------------------------
unsigned int PIE3@0xfa3 ;
union
{

struct 
{
  unsigned int 
  : 1,
  CCP1IE : 1 ,
  CCP2IE : 1 ,
  CTMUIE : 1 ,
  TX2IE : 1 ,
  RC2IE : 1 ;
} ; 

} PIE3bits@0xfa3  ;

#define _CCP1IE 1
#define _CCP2IE 2
#define _CTMUIE 3
#define _TX2IE 4
#define _RC2IE 5

// ------------------------------
//        PIR3
// ------------------------------
unsigned int PIR3@0xfa4 ;
union
{

struct 
{
  unsigned int 
  : 1,
  CCP1IF : 1 ,
  CCP2IF : 1 ,
  CTMUIF : 1 ,
  TX2IF : 1 ,
  RC2IF : 1 ;
} ; 

} PIR3bits@0xfa4  ;

#define _CCP1IF 1
#define _CCP2IF 2
#define _CTMUIF 3
#define _TX2IF 4
#define _RC2IF 5

// ------------------------------
//        IPR3
// ------------------------------
unsigned int IPR3@0xfa5 ;
union
{

struct 
{
  unsigned int 
  : 1,
  CCP1IP : 1 ,
  CCP2IP : 1 ,
  CTMUIP : 1 ,
  TX2IP : 1 ,
  RC2IP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

#define _CCP1IP 1
#define _CCP2IP 2
#define _CTMUIP 3
#define _TX2IP 4
#define _RC2IP 5

// ------------------------------
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xfa6 ;
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
  RX9D2 : 1 ,
  OERR2 : 1 ,
  FERR2 : 1 ,
  ADDEN2 : 1 ,
  CREN2 : 1 ,
  SREN2 : 1 ,
  RX92 : 1 ,
  SPEN2 : 1 ;
} ; 

} RCSTA2bits@0xfa6  ;

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _RX9D2 0
#define _OERR2 1
#define _FERR2 2
#define _ADDEN2 3
#define _CREN2 4
#define _SREN2 5
#define _RX92 6
#define _SPEN2 7

// ------------------------------
//        BAUDCON1
// ------------------------------
unsigned int BAUDCON1@0xfa7 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RCMT : 1 ;
} ; 

} BAUDCON1bits@0xfa7  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _RCMT 6

// ------------------------------
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xfa8 ;
union
{

struct 
{
  unsigned int 
  HLVDL0 : 1 ,
  HLVDL1 : 1 ,
  HLVDL2 : 1 ,
  HLVDL3 : 1 ,
  HLVDEN : 1 ,
  IRVST : 1 ,
  BGVST : 1 ,
  VDIRMAG : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _HLVDL : 4 ;
} ; 

} HLVDCONbits@0xfa8  ;

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3
#define _HLVDEN 4
#define _IRVST 5
#define _BGVST 6
#define _VDIRMAG 7

// The following are aliases ..  
#define __HLVDL 0:4

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xfa9 ;
// ------------------------------
//        T1GCON
// ------------------------------
unsigned int T1GCON@0xfaa ;
union
{

struct 
{
  unsigned int 
  T1GSS0 : 1 ,
  T1GSS1 : 1 ,
  T1GVAL : 1 ,
  T1GGO_NOT_T1DONE : 1 ,
  T1GSPM : 1 ,
  T1GTM : 1 ,
  T1GPOL : 1 ,
  TMR1GE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T1GGO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  NOT_T1DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T1GSS : 2 ;
} ; 

} T1GCONbits@0xfaa  ;

#define _T1GSS0 0
#define _T1GSS1 1
#define _T1GVAL 2
#define _T1GGO_NOT_T1DONE 3
#define _T1GSPM 4
#define _T1GTM 5
#define _T1GPOL 6
#define _TMR1GE 7

#define _T1GGO 3

#define _NOT_T1DONE 3

// The following are aliases ..  
#define __T1GSS 0:2

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
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADEN : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RC9 : 1 ,
  SPEN1 : 1 ;
} ; 

struct 
{
  unsigned int 
  RX9D1 : 1 ,
  : 2,
  ADDEN1 : 1 ,
  : 2,
  NOT_RC8 : 1 ;
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
  RX91 : 1 ;
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
#define _OERR1 1
#define _FERR1 2
#define _ADEN 3
#define _CREN1 4
#define _SREN1 5
#define _RC9 6
#define _SPEN1 7

#define _RX9D1 0
#define _ADDEN1 3
#define _NOT_RC8 6

#define _RC8_9 6

#define _RX91 6

// ------------------------------
//        RCSTA1
// ------------------------------
unsigned int RCSTA1@0xfab ;
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
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADEN : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RC9 : 1 ,
  SPEN1 : 1 ;
} ; 

struct 
{
  unsigned int 
  RX9D1 : 1 ,
  : 2,
  ADDEN1 : 1 ,
  : 2,
  NOT_RC8 : 1 ;
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
  RX91 : 1 ;
} ; 

} RCSTA1bits@0xfab  ;

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _RCD8 0
#define _OERR1 1
#define _FERR1 2
#define _ADEN 3
#define _CREN1 4
#define _SREN1 5
#define _RC9 6
#define _SPEN1 7

#define _RX9D1 0
#define _ADDEN1 3
#define _NOT_RC8 6

#define _RC8_9 6

#define _RX91 6

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
  SENDB : 1 ,
  SYNC : 1 ,
  TXEN : 1 ,
  TX9 : 1 ,
  CSRC : 1 ;
} ; 

struct 
{
  unsigned int 
  TXD8 : 1 ,
  TRMT1 : 1 ,
  BRGH1 : 1 ,
  SENDB1 : 1 ,
  SYNC1 : 1 ,
  TXEN1 : 1 ,
  TX8_9 : 1 ,
  CSRC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  TX9D1 : 1 ,
  : 5,
  NOT_TX8 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TX91 : 1 ;
} ; 

} TXSTAbits@0xfac  ;

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SENDB 3
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

#define _TXD8 0
#define _TRMT1 1
#define _BRGH1 2
#define _SENDB1 3
#define _SYNC1 4
#define _TXEN1 5
#define _TX8_9 6
#define _CSRC1 7

#define _TX9D1 0
#define _NOT_TX8 6

#define _TX91 6

// ------------------------------
//        TXSTA1
// ------------------------------
unsigned int TXSTA1@0xfac ;
union
{

struct 
{
  unsigned int 
  TX9D : 1 ,
  TRMT : 1 ,
  BRGH : 1 ,
  SENDB : 1 ,
  SYNC : 1 ,
  TXEN : 1 ,
  TX9 : 1 ,
  CSRC : 1 ;
} ; 

struct 
{
  unsigned int 
  TXD8 : 1 ,
  TRMT1 : 1 ,
  BRGH1 : 1 ,
  SENDB1 : 1 ,
  SYNC1 : 1 ,
  TXEN1 : 1 ,
  TX8_9 : 1 ,
  CSRC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  TX9D1 : 1 ,
  : 5,
  NOT_TX8 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TX91 : 1 ;
} ; 

} TXSTA1bits@0xfac  ;

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SENDB 3
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

#define _TXD8 0
#define _TRMT1 1
#define _BRGH1 2
#define _SENDB1 3
#define _SYNC1 4
#define _TXEN1 5
#define _TX8_9 6
#define _CSRC1 7

#define _TX9D1 0
#define _NOT_TX8 6

#define _TX91 6

// ------------------------------
//        TXREG
// ------------------------------
unsigned int TXREG@0xfad ;
// ------------------------------
//        TXREG1
// ------------------------------
unsigned int TXREG1@0xfad ;
// ------------------------------
//        RCREG
// ------------------------------
unsigned int RCREG@0xfae ;
// ------------------------------
//        RCREG1
// ------------------------------
unsigned int RCREG1@0xfae ;
// ------------------------------
//        SPBRG
// ------------------------------
unsigned int SPBRG@0xfaf ;
// ------------------------------
//        SPBRG1
// ------------------------------
unsigned int SPBRG1@0xfaf ;
// ------------------------------
//        T3GCON
// ------------------------------
unsigned int T3GCON@0xfb0 ;
union
{

struct 
{
  unsigned int 
  T3GSS0 : 1 ,
  T3GSS1 : 1 ,
  T3GVAL : 1 ,
  T3GGO_NOT_T3DONE : 1 ,
  T3GSPM : 1 ,
  T3GTM : 1 ,
  T3GPOL : 1 ,
  TMR3GE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T3GGO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  NOT_T3DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T3GSS : 2 ;
} ; 

} T3GCONbits@0xfb0  ;

#define _T3GSS0 0
#define _T3GSS1 1
#define _T3GVAL 2
#define _T3GGO_NOT_T3DONE 3
#define _T3GSPM 4
#define _T3GTM 5
#define _T3GPOL 6
#define _TMR3GE 7

#define _T3GGO 3

#define _NOT_T3DONE 3

// The following are aliases ..  
#define __T3GSS 0:2

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
  RD16 : 1 ,
  NOT_T3SYNC : 1 ,
  SOSCEN : 1 ,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ,
  TMR3CS0 : 1 ,
  TMR3CS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T3CKPS : 2 ,
  _TMR3CS : 2 ;
} ; 

} T3CONbits@0xfb1  ;

#define _TMR3ON 0
#define _RD16 1
#define _NOT_T3SYNC 2
#define _SOSCEN 3
#define _T3CKPS0 4
#define _T3CKPS1 5
#define _TMR3CS0 6
#define _TMR3CS1 7

// The following are aliases ..  
#define __T3CKPS 4:2
#define __TMR3CS 6:2

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
//        CMSTAT
// ------------------------------
unsigned int CMSTAT@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 6,
  CMP1OUT : 1 ,
  CMP2OUT : 1 ;
} ; 

} CMSTATbits@0xfb4  ;

#define _CMP1OUT 6
#define _CMP2OUT 7

// ------------------------------
//        CMSTATUS
// ------------------------------
unsigned int CMSTATUS@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 6,
  CMP1OUT : 1 ,
  CMP2OUT : 1 ;
} ; 

} CMSTATUSbits@0xfb4  ;

#define _CMP1OUT 6
#define _CMP2OUT 7

// ------------------------------
//        CVRCON
// ------------------------------
unsigned int CVRCON@0xfb5 ;
union
{

struct 
{
  unsigned int 
  CVR0 : 1 ,
  CVR1 : 1 ,
  CVR2 : 1 ,
  CVR3 : 1 ,
  CVR4 : 1 ,
  CVRSS : 1 ,
  CVROE : 1 ,
  CVREN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CVR : 5 ;
} ; 

} CVRCONbits@0xfb5  ;

#define _CVR0 0
#define _CVR1 1
#define _CVR2 2
#define _CVR3 3
#define _CVR4 4
#define _CVRSS 5
#define _CVROE 6
#define _CVREN 7

// The following are aliases ..  
#define __CVR 0:5

// ------------------------------
//        PIE4
// ------------------------------
unsigned int PIE4@0xfb6 ;
union
{

struct 
{
  unsigned int 
  CCP3IE : 1 ,
  CCP4IE : 1 ,
  CCP5IE : 1 ,
  : 1,
  CMP1IE : 1 ,
  CMP2IE : 1 ,
  EEIE : 1 ,
  TMR4IE : 1 ;
} ; 

} PIE4bits@0xfb6  ;

#define _CCP3IE 0
#define _CCP4IE 1
#define _CCP5IE 2
#define _CMP1IE 4
#define _CMP2IE 5
#define _EEIE 6
#define _TMR4IE 7

// ------------------------------
//        PIR4
// ------------------------------
unsigned int PIR4@0xfb7 ;
union
{

struct 
{
  unsigned int 
  CCP3IF : 1 ,
  CCP4IF : 1 ,
  CCP5IF : 1 ,
  : 1,
  CMP1IF : 1 ,
  CMP2IF : 1 ,
  EEIF : 1 ,
  TMR4IF : 1 ;
} ; 

} PIR4bits@0xfb7  ;

#define _CCP3IF 0
#define _CCP4IF 1
#define _CCP5IF 2
#define _CMP1IF 4
#define _CMP2IF 5
#define _EEIF 6
#define _TMR4IF 7

// ------------------------------
//        IPR4
// ------------------------------
unsigned int IPR4@0xfb8 ;
union
{

struct 
{
  unsigned int 
  CCP3IP : 1 ,
  CCP4IP : 1 ,
  CCP5IP : 1 ,
  : 1,
  CMP1IP : 1 ,
  CMP2IP : 1 ,
  EEIP : 1 ,
  TMR4IP : 1 ;
} ; 

} IPR4bits@0xfb8  ;

#define _CCP3IP 0
#define _CCP4IP 1
#define _CCP5IP 2
#define _CMP1IP 4
#define _CMP2IP 5
#define _EEIP 6
#define _TMR4IP 7

// ------------------------------
//        BAUDCON2
// ------------------------------
unsigned int BAUDCON2@0xfb9 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RCMT : 1 ;
} ; 

} BAUDCON2bits@0xfb9  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _RCMT 6

// ------------------------------
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xfba ;
union
{

struct 
{
  unsigned int 
  TX9D : 1 ,
  TRMT : 1 ,
  BRGH : 1 ,
  SENDB : 1 ,
  SYNC : 1 ,
  TXEN : 1 ,
  TX9 : 1 ,
  CSRC : 1 ;
} ; 

struct 
{
  unsigned int 
  TX9D2 : 1 ,
  TRMT2 : 1 ,
  BRGH2 : 1 ,
  SENDB2 : 1 ,
  SYNC2 : 1 ,
  TXEN2 : 1 ,
  TX92 : 1 ,
  CSRC2 : 1 ;
} ; 

} TXSTA2bits@0xfba  ;

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SENDB 3
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

#define _TX9D2 0
#define _TRMT2 1
#define _BRGH2 2
#define _SENDB2 3
#define _SYNC2 4
#define _TXEN2 5
#define _TX92 6
#define _CSRC2 7

// ------------------------------
//        CCP1CON
// ------------------------------
unsigned int CCP1CON@0xfbb ;
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
  DC1B1 : 1 ,
  P1M0 : 1 ,
  P1M1 : 1 ;
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
  _DC1B : 2 ,
  _P1M : 2 ;
} ; 

} CCP1CONbits@0xfbb  ;

#define _CCP1M0 0
#define _CCP1M1 1
#define _CCP1M2 2
#define _CCP1M3 3
#define _DC1B0 4
#define _DC1B1 5
#define _P1M0 6
#define _P1M1 7

#define _CCP1Y 4
#define _CCP1X 5

// The following are aliases ..  
#define __CCP1M 0:4
#define __DC1B 4:2
#define __P1M 6:2

// ------------------------------
//        ECCP1CON
// ------------------------------
unsigned int ECCP1CON@0xfbb ;
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
  DC1B1 : 1 ,
  P1M0 : 1 ,
  P1M1 : 1 ;
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
  _DC1B : 2 ,
  _P1M : 2 ;
} ; 

} ECCP1CONbits@0xfbb  ;

#define _CCP1M0 0
#define _CCP1M1 1
#define _CCP1M2 2
#define _CCP1M3 3
#define _DC1B0 4
#define _DC1B1 5
#define _P1M0 6
#define _P1M1 7

#define _CCP1Y 4
#define _CCP1X 5

// The following are aliases ..  
#define __CCP1M 0:4
#define __DC1B 4:2
#define __P1M 6:2

// ------------------------------
//        CCPR1
// ------------------------------
unsigned int CCPR1@0xfbc ;
// ------------------------------
//        CCPR1L
// ------------------------------
unsigned int CCPR1L@0xfbc ;
// ------------------------------
//        CCPR1H
// ------------------------------
unsigned int CCPR1H@0xfbd ;
// ------------------------------
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xfbe ;
union
{

struct 
{
  unsigned int 
  P1DC0 : 1 ,
  P1DC1 : 1 ,
  P1DC2 : 1 ,
  P1DC3 : 1 ,
  P1DC4 : 1 ,
  P1DC5 : 1 ,
  P1DC6 : 1 ,
  P1RSEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P1DC : 7 ;
} ; 

} ECCP1DELbits@0xfbe  ;

#define _P1DC0 0
#define _P1DC1 1
#define _P1DC2 2
#define _P1DC3 3
#define _P1DC4 4
#define _P1DC5 5
#define _P1DC6 6
#define _P1RSEN 7

// The following are aliases ..  
#define __P1DC 0:7

// ------------------------------
//        PWM1CON
// ------------------------------
unsigned int PWM1CON@0xfbe ;
union
{

struct 
{
  unsigned int 
  P1DC0 : 1 ,
  P1DC1 : 1 ,
  P1DC2 : 1 ,
  P1DC3 : 1 ,
  P1DC4 : 1 ,
  P1DC5 : 1 ,
  P1DC6 : 1 ,
  P1RSEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P1DC : 7 ;
} ; 

} PWM1CONbits@0xfbe  ;

#define _P1DC0 0
#define _P1DC1 1
#define _P1DC2 2
#define _P1DC3 3
#define _P1DC4 4
#define _P1DC5 5
#define _P1DC6 6
#define _P1RSEN 7

// The following are aliases ..  
#define __P1DC 0:7

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfbf ;
union
{

struct 
{
  unsigned int 
  PSS1BD0 : 1 ,
  PSS1BD1 : 1 ,
  PSS1AC0 : 1 ,
  PSS1AC1 : 1 ,
  ECCP1AS0 : 1 ,
  ECCP1AS1 : 1 ,
  ECCP1AS2 : 1 ,
  ECCP1ASE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSS1BD : 2 ,
  _PSS1AC : 2 ,
  _ECCP1AS : 3 ;
} ; 

} ECCP1ASbits@0xfbf  ;

#define _PSS1BD0 0
#define _PSS1BD1 1
#define _PSS1AC0 2
#define _PSS1AC1 3
#define _ECCP1AS0 4
#define _ECCP1AS1 5
#define _ECCP1AS2 6
#define _ECCP1ASE 7

// The following are aliases ..  
#define __PSS1BD 0:2
#define __PSS1AC 2:2
#define __ECCP1AS 4:3

// ------------------------------
//        ADCON2
// ------------------------------
unsigned int ADCON2@0xfc0 ;
union
{

struct 
{
  unsigned int 
  ADCS0 : 1 ,
  ADCS1 : 1 ,
  ADCS2 : 1 ,
  ACQT0 : 1 ,
  ACQT1 : 1 ,
  ACQT2 : 1 ,
  : 1,
  ADFM : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADCS : 3 ,
  _ACQT : 3 ;
} ; 

} ADCON2bits@0xfc0  ;

#define _ADCS0 0
#define _ADCS1 1
#define _ADCS2 2
#define _ACQT0 3
#define _ACQT1 4
#define _ACQT2 5
#define _ADFM 7

// The following are aliases ..  
#define __ADCS 0:3
#define __ACQT 3:3

// ------------------------------
//        ADCON1
// ------------------------------
unsigned int ADCON1@0xfc1 ;
union
{

struct 
{
  unsigned int 
  CHSN0 : 1 ,
  CHSN1 : 1 ,
  CHSN2 : 1 ,
  VNCFG : 1 ,
  VCFG0 : 1 ,
  VCFG1 : 1 ,
  TRIGSEL0 : 1 ,
  TRIGSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CHSN : 3 ,
  : 1,
  _VCFG : 2 ,
  _TRIGSEL : 2 ;
} ; 

} ADCON1bits@0xfc1  ;

#define _CHSN0 0
#define _CHSN1 1
#define _CHSN2 2
#define _VNCFG 3
#define _VCFG0 4
#define _VCFG1 5
#define _TRIGSEL0 6
#define _TRIGSEL1 7

// The following are aliases ..  
#define __CHSN 0:3
#define __VCFG 4:2
#define __TRIGSEL 6:2

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
  GO_NOT_DONE : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ,
  CHS2 : 1 ,
  CHS3 : 1 ,
  CHS4 : 1 ;
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
  GO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  NOT_DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _CHS : 5 ;
} ; 

} ADCON0bits@0xfc2  ;

#define _ADON 0
#define _GO_NOT_DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5
#define _CHS4 6

#define _DONE 1

#define _GO 1

#define _NOT_DONE 1

// The following are aliases ..  
#define __CHS 2:5

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

struct 
{
  unsigned int 
  : 1,
  ADMSK1 : 1 ,
  ADMSK2 : 1 ,
  ADMSK3 : 1 ,
  ADMSK4 : 1 ,
  ADMSK5 : 1 ;
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

#define _ADMSK1 1
#define _ADMSK2 2
#define _ADMSK3 3
#define _ADMSK4 4
#define _ADMSK5 5

// ------------------------------
//        SSPCON1
// ------------------------------
unsigned int SSPCON1@0xfc6 ;
union
{

struct 
{
  unsigned int 
  SSPM0 : 1 ,
  SSPM1 : 1 ,
  SSPM2 : 1 ,
  SSPM3 : 1 ,
  CKP : 1 ,
  SSPEN : 1 ,
  SSPOV : 1 ,
  WCOL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SSPM : 4 ;
} ; 

} SSPCON1bits@0xfc6  ;

#define _SSPM0 0
#define _SSPM1 1
#define _SSPM2 2
#define _SSPM3 3
#define _CKP 4
#define _SSPEN 5
#define _SSPOV 6
#define _WCOL 7

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
  R_W : 1 ,
  I2C_START : 1 ,
  I2C_STOP : 1 ,
  D_A : 1 ;
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
  NOT_WRITE : 1 ,
  : 2,
  NOT_ADDRESS : 1 ;
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
  I2C_READ : 1 ,
  : 2,
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

#define _R_W 2
#define _I2C_START 3
#define _I2C_STOP 4
#define _D_A 5

#define _NOT_W 2
#define _NOT_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

#define _READ_WRITE 2
#define _DATA_ADDRESS 5

#define _I2C_READ 2
#define _I2C_DAT 5

// ------------------------------
//        SSPADD
// ------------------------------
unsigned int SSPADD@0xfc8 ;
union
{

struct 
{
  unsigned int 
  MSK0 : 1 ,
  MSK1 : 1 ,
  MSK2 : 1 ,
  MSK3 : 1 ,
  MSK4 : 1 ,
  MSK5 : 1 ,
  MSK6 : 1 ,
  MSK7 : 1 ;
} ; 

} SSPADDbits@0xfc8  ;

#define _MSK0 0
#define _MSK1 1
#define _MSK2 2
#define _MSK3 3
#define _MSK4 4
#define _MSK5 5
#define _MSK6 6
#define _MSK7 7

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
  T2CKPS0 : 1 ,
  T2CKPS1 : 1 ,
  TMR2ON : 1 ,
  T2OUTPS0 : 1 ,
  T2OUTPS1 : 1 ,
  T2OUTPS2 : 1 ,
  T2OUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T2CKPS : 2 ,
  : 1,
  _T2OUTPS : 4 ;
} ; 

} T2CONbits@0xfca  ;

#define _T2CKPS0 0
#define _T2CKPS1 1
#define _TMR2ON 2
#define _T2OUTPS0 3
#define _T2OUTPS1 4
#define _T2OUTPS2 5
#define _T2OUTPS3 6

// The following are aliases ..  
#define __T2CKPS 0:2
#define __T2OUTPS 3:4

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
  RD16 : 1 ,
  NOT_T1SYNC : 1 ,
  SOSCEN : 1 ,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ,
  TMR1CS0 : 1 ,
  TMR1CS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T1CKPS : 2 ,
  _TMR1CS : 2 ;
} ; 

} T1CONbits@0xfcd  ;

#define _TMR1ON 0
#define _RD16 1
#define _NOT_T1SYNC 2
#define _SOSCEN 3
#define _T1CKPS0 4
#define _T1CKPS1 5
#define _TMR1CS0 6
#define _TMR1CS1 7

// The following are aliases ..  
#define __T1CKPS 4:2
#define __TMR1CS 6:2

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
  NOT_CM : 1 ,
  SBOREN : 1 ,
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
  CM : 1 ;
} ; 

} RCONbits@0xfd0  ;

#define _NOT_BOR 0
#define _NOT_POR 1
#define _NOT_PD 2
#define _NOT_TO 3
#define _NOT_RI 4
#define _NOT_CM 5
#define _SBOREN 6
#define _IPEN 7

#define _BOR 0
#define _POR 1
#define _PD 2
#define _TO 3
#define _RI 4
#define _CM 5

// ------------------------------
//        WDTCON
// ------------------------------
unsigned int WDTCON@0xfd1 ;
union
{

struct 
{
  unsigned int 
  SWDTEN : 1 ,
  ULPSINK : 1 ,
  ULPEN : 1 ,
  : 1,
  SRETEN : 1 ,
  ULPLVL : 1 ,
  : 1,
  REGSLP : 1 ;
} ; 

struct 
{
  unsigned int 
  SWDTE : 1 ;
} ; 

} WDTCONbits@0xfd1  ;

#define _SWDTEN 0
#define _ULPSINK 1
#define _ULPEN 2
#define _SRETEN 4
#define _ULPLVL 5
#define _REGSLP 7

#define _SWDTE 0

// ------------------------------
//        OSCCON2
// ------------------------------
unsigned int OSCCON2@0xfd2 ;
union
{

struct 
{
  unsigned int 
  MFIOSEL : 1 ,
  MFIOFS : 1 ,
  LVDL2 : 1 ,
  SOSCGO : 1 ,
  SOSCDRV : 1 ,
  : 1,
  SOSCRUN : 1 ;
} ; 

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  : 1,
  LVDL3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LVDL : 2 ;
} ; 

} OSCCON2bits@0xfd2  ;

#define _MFIOSEL 0
#define _MFIOFS 1
#define _LVDL2 2
#define _SOSCGO 3
#define _SOSCDRV 4
#define _SOSCRUN 6

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL3 3

// The following are aliases ..  
#define __LVDL 0:2

// ------------------------------
//        OSCCON
// ------------------------------
unsigned int OSCCON@0xfd3 ;
union
{

struct 
{
  unsigned int 
  SCS0 : 1 ,
  SCS1 : 1 ,
  HFIOFS : 1 ,
  OSTS : 1 ,
  IRCF0 : 1 ,
  IRCF1 : 1 ,
  IRCF2 : 1 ,
  IDLEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SCS : 2 ,
  : 2,
  _IRCF : 3 ;
} ; 

} OSCCONbits@0xfd3  ;

#define _SCS0 0
#define _SCS1 1
#define _HFIOFS 2
#define _OSTS 3
#define _IRCF0 4
#define _IRCF1 5
#define _IRCF2 6
#define _IDLEN 7

// The following are aliases ..  
#define __SCS 0:2
#define __IRCF 4:3

// ------------------------------
//        T0CON
// ------------------------------
unsigned int T0CON@0xfd5 ;
union
{

struct 
{
  unsigned int 
  T0PS0 : 1 ,
  T0PS1 : 1 ,
  T0PS2 : 1 ,
  PSA : 1 ,
  T0SE : 1 ,
  T0CS : 1 ,
  T08BIT : 1 ,
  TMR0ON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T0PS : 3 ;
} ; 

} T0CONbits@0xfd5  ;

#define _T0PS0 0
#define _T0PS1 1
#define _T0PS2 2
#define _PSA 3
#define _T0SE 4
#define _T0CS 5
#define _T08BIT 6
#define _TMR0ON 7

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

#define _INT1IF 0
#define _INT2IF 1
#define _INT3IF 2
#define _INT1IE 3
#define _INT2IE 4
#define _INT3IE 5
#define _INT1IP 6
#define _INT2IP 7

#define _INT1F 0
#define _INT2F 1
#define _INT3F 2
#define _INT1E 3
#define _INT2E 4
#define _INT3E 5
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

#define _RBIP 0
#define _INT3IP 1
#define _TMR0IP 2
#define _INTEDG3 3
#define _INTEDG2 4
#define _INTEDG1 5
#define _INTEDG0 6
#define _NOT_RBPU 7

#define _INT3P 1
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
  SP0 : 1 ,
  SP1 : 1 ,
  SP2 : 1 ,
  SP3 : 1 ,
  SP4 : 1 ,
  : 1,
  STKUNF : 1 ,
  STKFUL : 1 ;
} ; 

struct 
{
  unsigned int 
  : 7,
  STKOVF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SP : 5 ;
} ; 

} STKPTRbits@0xffc  ;

#define _SP0 0
#define _SP1 1
#define _SP2 2
#define _SP3 3
#define _SP4 4
#define _STKUNF 6
#define _STKFUL 7

#define _STKOVF 7

// The following are aliases ..  
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
