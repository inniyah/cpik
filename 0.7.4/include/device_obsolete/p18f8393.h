#ifndef DEVICE
#define DEVICE p18f8393
#define p18f8393

// ======================================
//         PROCESSOR : p18f8393
// ======================================

// This file has been automatically generated from Microchip's "p18f8393.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xf58 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        LCDPS
// ------------------------------
unsigned int LCDPS@0xf58 ;
union
{

struct 
{
  unsigned int 
  : 4,
  WA : 1 ,
  LCDA : 1 ,
  BIASMD : 1 ,
  WFT : 1 ;
} ; 

struct 
{
  unsigned int 
  LP0 : 1 ,
  LP1 : 1 ,
  LP2 : 1 ,
  LP3 : 1 ;
} ; 

struct 
{
  unsigned int 
  LCDPS0 : 1 ,
  LCDPS1 : 1 ,
  LCDPS2 : 1 ,
  LCDPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LP : 4 ;
} ; 

struct 
{
  unsigned int 
  _LCDPS : 4 ;
} ; 

} LCDPSbits@0xf58  ;

#define _WA 4
#define _LCDA 5
#define _BIASMD 6
#define _WFT 7

#define _LP0 0
#define _LP1 1
#define _LP2 2
#define _LP3 3

#define _LCDPS0 0
#define _LCDPS1 1
#define _LCDPS2 2
#define _LCDPS3 3

// The following are aliases ..  
#define __LP 0:4

#define __LCDPS 0:4

// ------------------------------
//        LCDCON
// ------------------------------
unsigned int LCDCON@0xf59 ;
union
{

struct 
{
  unsigned int 
  : 5,
  WERR : 1 ,
  SLPEN : 1 ,
  LCDEN : 1 ;
} ; 

struct 
{
  unsigned int 
  LMUX0 : 1 ,
  LMUX1 : 1 ,
  CS0 : 1 ,
  CS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LCDCS0 : 1 ,
  LCDCS1 : 1 ,
  : 1,
  LCDWERR : 1 ,
  LCDSLPEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LMUX : 2 ,
  _CS : 2 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  _LCDCS : 2 ;
} ; 

} LCDCONbits@0xf59  ;

#define _WERR 5
#define _SLPEN 6
#define _LCDEN 7

#define _LMUX0 0
#define _LMUX1 1
#define _CS0 2
#define _CS1 3

#define _LCDCS0 2
#define _LCDCS1 3
#define _LCDWERR 5
#define _LCDSLPEN 6

// The following are aliases ..  
#define __LMUX 0:2
#define __CS 2:2

#define __LCDCS 2:2

// ------------------------------
//        LCDSE0
// ------------------------------
unsigned int LCDSE0@0xf5a ;
union
{

struct 
{
  unsigned int 
  SE0 : 1 ,
  SE1 : 1 ,
  SE2 : 1 ,
  SE3 : 1 ,
  SE4 : 1 ,
  SE5 : 1 ,
  SE6 : 1 ,
  SE7 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEGEN0 : 1 ,
  SEGEN1 : 1 ,
  SEGEN2 : 1 ,
  SEGEN3 : 1 ,
  SEGEN4 : 1 ,
  SEGEN5 : 1 ,
  SEGEN6 : 1 ,
  SEGEN7 : 1 ;
} ; 

} LCDSE0bits@0xf5a  ;

#define _SE0 0
#define _SE1 1
#define _SE2 2
#define _SE3 3
#define _SE4 4
#define _SE5 5
#define _SE6 6
#define _SE7 7

#define _SEGEN0 0
#define _SEGEN1 1
#define _SEGEN2 2
#define _SEGEN3 3
#define _SEGEN4 4
#define _SEGEN5 5
#define _SEGEN6 6
#define _SEGEN7 7

// ------------------------------
//        LCDSE1
// ------------------------------
unsigned int LCDSE1@0xf5b ;
union
{

struct 
{
  unsigned int 
  SE8 : 1 ,
  SE9 : 1 ,
  SE10 : 1 ,
  SE11 : 1 ,
  SE12 : 1 ,
  SE13 : 1 ,
  SE14 : 1 ,
  SE15 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEGEN8 : 1 ,
  SEGEN9 : 1 ,
  SEGEN10 : 1 ,
  SEGEN11 : 1 ,
  SEGEN12 : 1 ,
  SEGEN13 : 1 ,
  SEGEN14 : 1 ,
  SEGEN15 : 1 ;
} ; 

} LCDSE1bits@0xf5b  ;

#define _SE8 0
#define _SE9 1
#define _SE10 2
#define _SE11 3
#define _SE12 4
#define _SE13 5
#define _SE14 6
#define _SE15 7

#define _SEGEN8 0
#define _SEGEN9 1
#define _SEGEN10 2
#define _SEGEN11 3
#define _SEGEN12 4
#define _SEGEN13 5
#define _SEGEN14 6
#define _SEGEN15 7

// ------------------------------
//        LCDSE2
// ------------------------------
unsigned int LCDSE2@0xf5c ;
union
{

struct 
{
  unsigned int 
  SE16 : 1 ,
  SE17 : 1 ,
  SE18 : 1 ,
  SE19 : 1 ,
  SE20 : 1 ,
  SE21 : 1 ,
  SE22 : 1 ,
  SE23 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEGEN16 : 1 ,
  SEGEN17 : 1 ,
  SEGEN18 : 1 ,
  SEGEN19 : 1 ,
  SEGEN20 : 1 ,
  SEGEN21 : 1 ,
  SEGEN22 : 1 ,
  SEGEN23 : 1 ;
} ; 

} LCDSE2bits@0xf5c  ;

#define _SE16 0
#define _SE17 1
#define _SE18 2
#define _SE19 3
#define _SE20 4
#define _SE21 5
#define _SE22 6
#define _SE23 7

#define _SEGEN16 0
#define _SEGEN17 1
#define _SEGEN18 2
#define _SEGEN19 3
#define _SEGEN20 4
#define _SEGEN21 5
#define _SEGEN22 6
#define _SEGEN23 7

// ------------------------------
//        LCDSE3
// ------------------------------
unsigned int LCDSE3@0xf5d ;
union
{

struct 
{
  unsigned int 
  SE24 : 1 ,
  SE25 : 1 ,
  SE26 : 1 ,
  SE27 : 1 ,
  SE28 : 1 ,
  SE29 : 1 ,
  SE30 : 1 ,
  SE31 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEGEN24 : 1 ,
  SEGEN25 : 1 ,
  SEGEN26 : 1 ,
  SEGEN27 : 1 ,
  SEGEN28 : 1 ,
  SEGEN29 : 1 ,
  SEGEN30 : 1 ,
  SEGEN31 : 1 ;
} ; 

} LCDSE3bits@0xf5d  ;

#define _SE24 0
#define _SE25 1
#define _SE26 2
#define _SE27 3
#define _SE28 4
#define _SE29 5
#define _SE30 6
#define _SE31 7

#define _SEGEN24 0
#define _SEGEN25 1
#define _SEGEN26 2
#define _SEGEN27 3
#define _SEGEN28 4
#define _SEGEN29 5
#define _SEGEN30 6
#define _SEGEN31 7

// ------------------------------
//        LCDSE4
// ------------------------------
unsigned int LCDSE4@0xf5e ;
union
{

struct 
{
  unsigned int 
  SE32 : 1 ,
  SE33 : 1 ,
  SE34 : 1 ,
  SE35 : 1 ,
  SE36 : 1 ,
  SE37 : 1 ,
  SE38 : 1 ,
  SE39 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEGEN32 : 1 ,
  SEGEN33 : 1 ,
  SEGEN34 : 1 ,
  SEGEN35 : 1 ,
  SEGEN36 : 1 ,
  SEGEN37 : 1 ,
  SEGEN38 : 1 ,
  SEGEN39 : 1 ;
} ; 

} LCDSE4bits@0xf5e  ;

#define _SE32 0
#define _SE33 1
#define _SE34 2
#define _SE35 3
#define _SE36 4
#define _SE37 5
#define _SE38 6
#define _SE39 7

#define _SEGEN32 0
#define _SEGEN33 1
#define _SEGEN34 2
#define _SEGEN35 3
#define _SEGEN36 4
#define _SEGEN37 5
#define _SEGEN38 6
#define _SEGEN39 7

// ------------------------------
//        LCDSE5
// ------------------------------
unsigned int LCDSE5@0xf5f ;
union
{

struct 
{
  unsigned int 
  SE40 : 1 ,
  SE41 : 1 ,
  SE42 : 1 ,
  SE43 : 1 ,
  SE44 : 1 ,
  SE45 : 1 ,
  SE46 : 1 ,
  SE47 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEGEN40 : 1 ,
  SEGEN41 : 1 ,
  SEGEN42 : 1 ,
  SEGEN43 : 1 ,
  SEGEN44 : 1 ,
  SEGEN45 : 1 ,
  SEGEN46 : 1 ,
  SEGEN47 : 1 ;
} ; 

} LCDSE5bits@0xf5f  ;

#define _SE40 0
#define _SE41 1
#define _SE42 2
#define _SE43 3
#define _SE44 4
#define _SE45 5
#define _SE46 6
#define _SE47 7

#define _SEGEN40 0
#define _SEGEN41 1
#define _SEGEN42 2
#define _SEGEN43 3
#define _SEGEN44 4
#define _SEGEN45 5
#define _SEGEN46 6
#define _SEGEN47 7

// ------------------------------
//        LCDDATA0
// ------------------------------
unsigned int LCDDATA0@0xf60 ;
union
{

struct 
{
  unsigned int 
  S0C0 : 1 ,
  S1C0 : 1 ,
  S2C0 : 1 ,
  S3C0 : 1 ,
  S4C0 : 1 ,
  S5C0 : 1 ,
  S6C0 : 1 ,
  S7C0 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG0COM0 : 1 ,
  SEG1COM0 : 1 ,
  SEG2COM0 : 1 ,
  SEG3COM0 : 1 ,
  SEG4COM0 : 1 ,
  SEG5COM0 : 1 ,
  SEG6COM0 : 1 ,
  SEG7COM0 : 1 ;
} ; 

struct 
{
  unsigned int 
  S00C0 : 1 ,
  S01C0 : 1 ,
  S02C0 : 1 ,
  S03C0 : 1 ,
  S04C0 : 1 ,
  S05C0 : 1 ,
  S06C0 : 1 ,
  S07C0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S0C : 1 ,
  _S1C : 1 ,
  _S2C : 1 ,
  _S3C : 1 ,
  _S4C : 1 ,
  _S5C : 1 ,
  _S6C : 1 ;
} ; 

struct 
{
  unsigned int 
  _SEG0COM : 1 ,
  _SEG1COM : 1 ,
  _SEG2COM : 1 ,
  _SEG3COM : 1 ,
  _SEG4COM : 1 ,
  _SEG5COM : 1 ,
  _SEG6COM : 1 ;
} ; 

struct 
{
  unsigned int 
  _S00C : 1 ,
  _S01C : 1 ,
  _S02C : 1 ,
  _S03C : 1 ,
  _S04C : 1 ,
  _S05C : 1 ,
  _S06C : 1 ;
} ; 

} LCDDATA0bits@0xf60  ;

#define _S0C0 0
#define _S1C0 1
#define _S2C0 2
#define _S3C0 3
#define _S4C0 4
#define _S5C0 5
#define _S6C0 6
#define _S7C0 7

#define _SEG0COM0 0
#define _SEG1COM0 1
#define _SEG2COM0 2
#define _SEG3COM0 3
#define _SEG4COM0 4
#define _SEG5COM0 5
#define _SEG6COM0 6
#define _SEG7COM0 7

#define _S00C0 0
#define _S01C0 1
#define _S02C0 2
#define _S03C0 3
#define _S04C0 4
#define _S05C0 5
#define _S06C0 6
#define _S07C0 7

// The following are aliases ..  
#define __S0C 0
#define __S1C 1
#define __S2C 2
#define __S3C 3
#define __S4C 4
#define __S5C 5
#define __S6C 6

#define __SEG0COM 0
#define __SEG1COM 1
#define __SEG2COM 2
#define __SEG3COM 3
#define __SEG4COM 4
#define __SEG5COM 5
#define __SEG6COM 6

#define __S00C 0
#define __S01C 1
#define __S02C 2
#define __S03C 3
#define __S04C 4
#define __S05C 5
#define __S06C 6

// ------------------------------
//        LCDDATA1
// ------------------------------
unsigned int LCDDATA1@0xf61 ;
union
{

struct 
{
  unsigned int 
  S8C0 : 1 ,
  S9C0 : 1 ,
  S10C0 : 1 ,
  S11C0 : 1 ,
  S12C0 : 1 ,
  S13C0 : 1 ,
  S14C0 : 1 ,
  S15C0 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG8COM0 : 1 ,
  SEG9COM0 : 1 ,
  SEG10COM0 : 1 ,
  SEG11COM0 : 1 ,
  SEG12COM0 : 1 ,
  SEG13COM0 : 1 ,
  SEG14COM0 : 1 ,
  SEG15COM0 : 1 ;
} ; 

struct 
{
  unsigned int 
  S08C0 : 1 ,
  S09C0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S8C : 1 ,
  _S9C : 1 ,
  _S10C : 1 ,
  _S11C : 1 ,
  _S12C : 1 ,
  _S13C : 1 ,
  _S14C : 1 ;
} ; 

struct 
{
  unsigned int 
  _SEG8COM : 1 ,
  _SEG9COM : 1 ,
  _SEG10COM : 1 ,
  _SEG11COM : 1 ,
  _SEG12COM : 1 ,
  _SEG13COM : 1 ,
  _SEG14COM : 1 ;
} ; 

struct 
{
  unsigned int 
  _S08C : 1 ;
} ; 

} LCDDATA1bits@0xf61  ;

#define _S8C0 0
#define _S9C0 1
#define _S10C0 2
#define _S11C0 3
#define _S12C0 4
#define _S13C0 5
#define _S14C0 6
#define _S15C0 7

#define _SEG8COM0 0
#define _SEG9COM0 1
#define _SEG10COM0 2
#define _SEG11COM0 3
#define _SEG12COM0 4
#define _SEG13COM0 5
#define _SEG14COM0 6
#define _SEG15COM0 7

#define _S08C0 0
#define _S09C0 1

// The following are aliases ..  
#define __S8C 0
#define __S9C 1
#define __S10C 2
#define __S11C 3
#define __S12C 4
#define __S13C 5
#define __S14C 6

#define __SEG8COM 0
#define __SEG9COM 1
#define __SEG10COM 2
#define __SEG11COM 3
#define __SEG12COM 4
#define __SEG13COM 5
#define __SEG14COM 6

#define __S08C 0

// ------------------------------
//        LCDDATA2
// ------------------------------
unsigned int LCDDATA2@0xf62 ;
union
{

struct 
{
  unsigned int 
  S16C0 : 1 ,
  S17C0 : 1 ,
  S18C0 : 1 ,
  S19C0 : 1 ,
  S20C0 : 1 ,
  S21C0 : 1 ,
  S22C0 : 1 ,
  S23C0 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG16COM0 : 1 ,
  SEG17COM0 : 1 ,
  SEG18COM0 : 1 ,
  SEG19COM0 : 1 ,
  SEG20COM0 : 1 ,
  SEG21COM0 : 1 ,
  SEG22COM0 : 1 ,
  SEG23COM0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S16C : 1 ,
  _S17C : 1 ,
  _S18C : 1 ,
  _S19C : 1 ,
  _S20C : 1 ,
  _S21C : 1 ,
  _S22C : 1 ;
} ; 

struct 
{
  unsigned int 
  _SEG16COM : 1 ,
  _SEG17COM : 1 ,
  _SEG18COM : 1 ,
  _SEG19COM : 1 ,
  _SEG20COM : 1 ,
  _SEG21COM : 1 ,
  _SEG22COM : 1 ;
} ; 

} LCDDATA2bits@0xf62  ;

#define _S16C0 0
#define _S17C0 1
#define _S18C0 2
#define _S19C0 3
#define _S20C0 4
#define _S21C0 5
#define _S22C0 6
#define _S23C0 7

#define _SEG16COM0 0
#define _SEG17COM0 1
#define _SEG18COM0 2
#define _SEG19COM0 3
#define _SEG20COM0 4
#define _SEG21COM0 5
#define _SEG22COM0 6
#define _SEG23COM0 7

// The following are aliases ..  
#define __S16C 0
#define __S17C 1
#define __S18C 2
#define __S19C 3
#define __S20C 4
#define __S21C 5
#define __S22C 6

#define __SEG16COM 0
#define __SEG17COM 1
#define __SEG18COM 2
#define __SEG19COM 3
#define __SEG20COM 4
#define __SEG21COM 5
#define __SEG22COM 6

// ------------------------------
//        LCDDATA3
// ------------------------------
unsigned int LCDDATA3@0xf63 ;
union
{

struct 
{
  unsigned int 
  S24C0 : 1 ,
  S25C0 : 1 ,
  S26C0 : 1 ,
  S27C0 : 1 ,
  S28C0 : 1 ,
  S29C0 : 1 ,
  S30C0 : 1 ,
  S31C0 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG24COM0 : 1 ,
  SEG25COM0 : 1 ,
  SEG26COM0 : 1 ,
  SEG27COM0 : 1 ,
  SEG28COM0 : 1 ,
  SEG29COM0 : 1 ,
  SEG30COM0 : 1 ,
  SEG31COM0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S24C : 1 ,
  _S25C : 1 ,
  _S26C : 1 ,
  _S27C : 1 ,
  _S28C : 1 ,
  _S29C : 1 ,
  _S30C : 1 ;
} ; 

struct 
{
  unsigned int 
  _SEG24COM : 1 ,
  _SEG25COM : 1 ,
  _SEG26COM : 1 ,
  _SEG27COM : 1 ,
  _SEG28COM : 1 ,
  _SEG29COM : 1 ,
  _SEG30COM : 1 ;
} ; 

} LCDDATA3bits@0xf63  ;

#define _S24C0 0
#define _S25C0 1
#define _S26C0 2
#define _S27C0 3
#define _S28C0 4
#define _S29C0 5
#define _S30C0 6
#define _S31C0 7

#define _SEG24COM0 0
#define _SEG25COM0 1
#define _SEG26COM0 2
#define _SEG27COM0 3
#define _SEG28COM0 4
#define _SEG29COM0 5
#define _SEG30COM0 6
#define _SEG31COM0 7

// The following are aliases ..  
#define __S24C 0
#define __S25C 1
#define __S26C 2
#define __S27C 3
#define __S28C 4
#define __S29C 5
#define __S30C 6

#define __SEG24COM 0
#define __SEG25COM 1
#define __SEG26COM 2
#define __SEG27COM 3
#define __SEG28COM 4
#define __SEG29COM 5
#define __SEG30COM 6

// ------------------------------
//        LCDDATA4
// ------------------------------
unsigned int LCDDATA4@0xf64 ;
union
{

struct 
{
  unsigned int 
  S32C0 : 1 ,
  S33C0 : 1 ,
  S34C0 : 1 ,
  S35C0 : 1 ,
  S36C0 : 1 ,
  S37C0 : 1 ,
  S38C0 : 1 ,
  S39C0 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32COM0 : 1 ,
  SEG33COM0 : 1 ,
  SEG34COM0 : 1 ,
  SEG35COM0 : 1 ,
  SEG36COM0 : 1 ,
  SEG37COM0 : 1 ,
  SEG38COM0 : 1 ,
  SEG39COM0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S32C : 1 ,
  _S33C : 1 ,
  _S34C : 1 ,
  _S35C : 1 ,
  _S36C : 1 ,
  _S37C : 1 ,
  _S38C : 1 ;
} ; 

struct 
{
  unsigned int 
  _SEG32COM : 1 ,
  _SEG33COM : 1 ,
  _SEG34COM : 1 ,
  _SEG35COM : 1 ,
  _SEG36COM : 1 ,
  _SEG37COM : 1 ,
  _SEG38COM : 1 ;
} ; 

} LCDDATA4bits@0xf64  ;

#define _S32C0 0
#define _S33C0 1
#define _S34C0 2
#define _S35C0 3
#define _S36C0 4
#define _S37C0 5
#define _S38C0 6
#define _S39C0 7

#define _SEG32COM0 0
#define _SEG33COM0 1
#define _SEG34COM0 2
#define _SEG35COM0 3
#define _SEG36COM0 4
#define _SEG37COM0 5
#define _SEG38COM0 6
#define _SEG39COM0 7

// The following are aliases ..  
#define __S32C 0
#define __S33C 1
#define __S34C 2
#define __S35C 3
#define __S36C 4
#define __S37C 5
#define __S38C 6

#define __SEG32COM 0
#define __SEG33COM 1
#define __SEG34COM 2
#define __SEG35COM 3
#define __SEG36COM 4
#define __SEG37COM 5
#define __SEG38COM 6

// ------------------------------
//        LCDDATA5
// ------------------------------
unsigned int LCDDATA5@0xf65 ;
union
{

struct 
{
  unsigned int 
  S40C0 : 1 ,
  S41C0 : 1 ,
  S42C0 : 1 ,
  S43C0 : 1 ,
  S44C0 : 1 ,
  S45C0 : 1 ,
  S46C0 : 1 ,
  S47C0 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG40COM0 : 1 ,
  SEG41COM0 : 1 ,
  SEG42COM0 : 1 ,
  SEG43COM0 : 1 ,
  SEG44COM0 : 1 ,
  SEG45COM0 : 1 ,
  SEG46COM0 : 1 ,
  SEG47COM0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S40C : 1 ,
  _S41C : 1 ,
  _S42C : 1 ,
  _S43C : 1 ,
  _S44C : 1 ,
  _S45C : 1 ,
  _S46C : 1 ;
} ; 

struct 
{
  unsigned int 
  _SEG40COM : 1 ,
  _SEG41COM : 1 ,
  _SEG42COM : 1 ,
  _SEG43COM : 1 ,
  _SEG44COM : 1 ,
  _SEG45COM : 1 ,
  _SEG46COM : 1 ;
} ; 

} LCDDATA5bits@0xf65  ;

#define _S40C0 0
#define _S41C0 1
#define _S42C0 2
#define _S43C0 3
#define _S44C0 4
#define _S45C0 5
#define _S46C0 6
#define _S47C0 7

#define _SEG40COM0 0
#define _SEG41COM0 1
#define _SEG42COM0 2
#define _SEG43COM0 3
#define _SEG44COM0 4
#define _SEG45COM0 5
#define _SEG46COM0 6
#define _SEG47COM0 7

// The following are aliases ..  
#define __S40C 0
#define __S41C 1
#define __S42C 2
#define __S43C 3
#define __S44C 4
#define __S45C 5
#define __S46C 6

#define __SEG40COM 0
#define __SEG41COM 1
#define __SEG42COM 2
#define __SEG43COM 3
#define __SEG44COM 4
#define __SEG45COM 5
#define __SEG46COM 6

// ------------------------------
//        LCDDATA6
// ------------------------------
unsigned int LCDDATA6@0xf66 ;
union
{

struct 
{
  unsigned int 
  S0C1 : 1 ,
  S1C1 : 1 ,
  S2C1 : 1 ,
  S3C1 : 1 ,
  S4C1 : 1 ,
  S5C1 : 1 ,
  S6C1 : 1 ,
  S7C1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG0COM1 : 1 ,
  SEG1COM1 : 1 ,
  SEG2COM1 : 1 ,
  SEG3COM1 : 1 ,
  SEG4COM1 : 1 ,
  SEG5COM1 : 1 ,
  SEG6COM1 : 1 ,
  SEG7COM1 : 1 ;
} ; 

struct 
{
  unsigned int 
  S00C1 : 1 ,
  S01C1 : 1 ,
  S02C1 : 1 ,
  S03C1 : 1 ,
  S04C1 : 1 ,
  S05C1 : 1 ,
  S06C1 : 1 ,
  S07C1 : 1 ;
} ; 

} LCDDATA6bits@0xf66  ;

#define _S0C1 0
#define _S1C1 1
#define _S2C1 2
#define _S3C1 3
#define _S4C1 4
#define _S5C1 5
#define _S6C1 6
#define _S7C1 7

#define _SEG0COM1 0
#define _SEG1COM1 1
#define _SEG2COM1 2
#define _SEG3COM1 3
#define _SEG4COM1 4
#define _SEG5COM1 5
#define _SEG6COM1 6
#define _SEG7COM1 7

#define _S00C1 0
#define _S01C1 1
#define _S02C1 2
#define _S03C1 3
#define _S04C1 4
#define _S05C1 5
#define _S06C1 6
#define _S07C1 7

// ------------------------------
//        LCDDATA7
// ------------------------------
unsigned int LCDDATA7@0xf67 ;
union
{

struct 
{
  unsigned int 
  S8C1 : 1 ,
  S9C1 : 1 ,
  S10C1 : 1 ,
  S11C1 : 1 ,
  S12C1 : 1 ,
  S13C1 : 1 ,
  S14C1 : 1 ,
  S15C1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG8COM1 : 1 ,
  SEG9COM1 : 1 ,
  SEG10COM1 : 1 ,
  SEG11COM1 : 1 ,
  SEG12COM1 : 1 ,
  SEG13COM1 : 1 ,
  SEG14COM1 : 1 ,
  SEG15COM1 : 1 ;
} ; 

struct 
{
  unsigned int 
  S08C1 : 1 ,
  S09C1 : 1 ;
} ; 

} LCDDATA7bits@0xf67  ;

#define _S8C1 0
#define _S9C1 1
#define _S10C1 2
#define _S11C1 3
#define _S12C1 4
#define _S13C1 5
#define _S14C1 6
#define _S15C1 7

#define _SEG8COM1 0
#define _SEG9COM1 1
#define _SEG10COM1 2
#define _SEG11COM1 3
#define _SEG12COM1 4
#define _SEG13COM1 5
#define _SEG14COM1 6
#define _SEG15COM1 7

#define _S08C1 0
#define _S09C1 1

// ------------------------------
//        LCDDATA8
// ------------------------------
unsigned int LCDDATA8@0xf68 ;
union
{

struct 
{
  unsigned int 
  S16C1 : 1 ,
  S17C1 : 1 ,
  S18C1 : 1 ,
  S19C1 : 1 ,
  S20C1 : 1 ,
  S21C1 : 1 ,
  S22C1 : 1 ,
  S23C1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG16COM1 : 1 ,
  SEG17COM1 : 1 ,
  SEG18COM1 : 1 ,
  SEG19COM1 : 1 ,
  SEG20COM1 : 1 ,
  SEG21COM1 : 1 ,
  SEG22COM1 : 1 ,
  SEG23COM1 : 1 ;
} ; 

} LCDDATA8bits@0xf68  ;

#define _S16C1 0
#define _S17C1 1
#define _S18C1 2
#define _S19C1 3
#define _S20C1 4
#define _S21C1 5
#define _S22C1 6
#define _S23C1 7

#define _SEG16COM1 0
#define _SEG17COM1 1
#define _SEG18COM1 2
#define _SEG19COM1 3
#define _SEG20COM1 4
#define _SEG21COM1 5
#define _SEG22COM1 6
#define _SEG23COM1 7

// ------------------------------
//        LCDDATA9
// ------------------------------
unsigned int LCDDATA9@0xf69 ;
union
{

struct 
{
  unsigned int 
  S24C1 : 1 ,
  S25C1 : 1 ,
  S26C1 : 1 ,
  S27C1 : 1 ,
  S28C1 : 1 ,
  S29C1 : 1 ,
  S30C1 : 1 ,
  S31C1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG24COM1 : 1 ,
  SEG25COM1 : 1 ,
  SEG26COM1 : 1 ,
  SEG27COM1 : 1 ,
  SEG28COM1 : 1 ,
  SEG29COM1 : 1 ,
  SEG30COM1 : 1 ,
  SEG31COM1 : 1 ;
} ; 

} LCDDATA9bits@0xf69  ;

#define _S24C1 0
#define _S25C1 1
#define _S26C1 2
#define _S27C1 3
#define _S28C1 4
#define _S29C1 5
#define _S30C1 6
#define _S31C1 7

#define _SEG24COM1 0
#define _SEG25COM1 1
#define _SEG26COM1 2
#define _SEG27COM1 3
#define _SEG28COM1 4
#define _SEG29COM1 5
#define _SEG30COM1 6
#define _SEG31COM1 7

// ------------------------------
//        LCDDATA10
// ------------------------------
unsigned int LCDDATA10@0xf6a ;
union
{

struct 
{
  unsigned int 
  S32C1 : 1 ,
  S33C1 : 1 ,
  S34C1 : 1 ,
  S35C1 : 1 ,
  S36C1 : 1 ,
  S37C1 : 1 ,
  S38C1 : 1 ,
  S39C1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32COM1 : 1 ,
  SEG33COM1 : 1 ,
  SEG34COM1 : 1 ,
  SEG35COM1 : 1 ,
  SEG36COM1 : 1 ,
  SEG37COM1 : 1 ,
  SEG38COM1 : 1 ,
  SEG39COM1 : 1 ;
} ; 

} LCDDATA10bits@0xf6a  ;

#define _S32C1 0
#define _S33C1 1
#define _S34C1 2
#define _S35C1 3
#define _S36C1 4
#define _S37C1 5
#define _S38C1 6
#define _S39C1 7

#define _SEG32COM1 0
#define _SEG33COM1 1
#define _SEG34COM1 2
#define _SEG35COM1 3
#define _SEG36COM1 4
#define _SEG37COM1 5
#define _SEG38COM1 6
#define _SEG39COM1 7

// ------------------------------
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf6b ;
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
  : 2,
  ADEN : 1 ,
  : 2,
  RC9 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
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
  RX9D2 : 1 ,
  OERR2 : 1 ,
  FERR2 : 1 ,
  ADDEN2 : 1 ,
  CREN2 : 1 ,
  SREN2 : 1 ,
  RX92 : 1 ,
  SPEN2 : 1 ;
} ; 

} RCSTA2bits@0xf6b  ;

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _RCD8 0
#define _ADEN 3
#define _RC9 6

#define _NOT_RC8 6

#define _RC8_9 6

#define _RX9D2 0
#define _OERR2 1
#define _FERR2 2
#define _ADDEN2 3
#define _CREN2 4
#define _SREN2 5
#define _RX92 6
#define _SPEN2 7

// ------------------------------
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xf6c ;
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

} TXSTA2bits@0xf6c  ;

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

#define _TX9D2 0
#define _TRMT2 1
#define _BRGH2 2
#define _SENDB2 3
#define _SYNC2 4
#define _TXEN2 5
#define _TX92 6
#define _CSRC2 7

// ------------------------------
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xf6d ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xf6e ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xf6f ;
// ------------------------------
//        LCDDATA11
// ------------------------------
unsigned int LCDDATA11@0xf70 ;
union
{

struct 
{
  unsigned int 
  S40C1 : 1 ,
  S41C1 : 1 ,
  S42C1 : 1 ,
  S43C1 : 1 ,
  S44C1 : 1 ,
  S45C1 : 1 ,
  S46C1 : 1 ,
  S47C1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG40COM1 : 1 ,
  SEG41COM1 : 1 ,
  SEG42COM1 : 1 ,
  SEG43COM1 : 1 ,
  SEG44COM1 : 1 ,
  SEG45COM1 : 1 ,
  SEG46COM1 : 1 ,
  SEG47COM1 : 1 ;
} ; 

} LCDDATA11bits@0xf70  ;

#define _S40C1 0
#define _S41C1 1
#define _S42C1 2
#define _S43C1 3
#define _S44C1 4
#define _S45C1 5
#define _S46C1 6
#define _S47C1 7

#define _SEG40COM1 0
#define _SEG41COM1 1
#define _SEG42COM1 2
#define _SEG43COM1 3
#define _SEG44COM1 4
#define _SEG45COM1 5
#define _SEG46COM1 6
#define _SEG47COM1 7

// ------------------------------
//        LCDDATA12
// ------------------------------
unsigned int LCDDATA12@0xf71 ;
union
{

struct 
{
  unsigned int 
  S0C2 : 1 ,
  S1C2 : 1 ,
  S2C2 : 1 ,
  S3C2 : 1 ,
  S4C2 : 1 ,
  S5C2 : 1 ,
  S6C2 : 1 ,
  S7C2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG0COM2 : 1 ,
  SEG1COM2 : 1 ,
  SEG2COM2 : 1 ,
  SEG3COM2 : 1 ,
  SEG4COM2 : 1 ,
  SEG5COM2 : 1 ,
  SEG6COM2 : 1 ,
  SEG7COM2 : 1 ;
} ; 

struct 
{
  unsigned int 
  S00C2 : 1 ,
  S01C2 : 1 ,
  S02C2 : 1 ,
  S03C2 : 1 ,
  S04C2 : 1 ,
  S05C2 : 1 ,
  S06C2 : 1 ,
  S07C2 : 1 ;
} ; 

} LCDDATA12bits@0xf71  ;

#define _S0C2 0
#define _S1C2 1
#define _S2C2 2
#define _S3C2 3
#define _S4C2 4
#define _S5C2 5
#define _S6C2 6
#define _S7C2 7

#define _SEG0COM2 0
#define _SEG1COM2 1
#define _SEG2COM2 2
#define _SEG3COM2 3
#define _SEG4COM2 4
#define _SEG5COM2 5
#define _SEG6COM2 6
#define _SEG7COM2 7

#define _S00C2 0
#define _S01C2 1
#define _S02C2 2
#define _S03C2 3
#define _S04C2 4
#define _S05C2 5
#define _S06C2 6
#define _S07C2 7

// ------------------------------
//        LCDDATA13
// ------------------------------
unsigned int LCDDATA13@0xf72 ;
union
{

struct 
{
  unsigned int 
  S8C2 : 1 ,
  S9C2 : 1 ,
  S10C2 : 1 ,
  S11C2 : 1 ,
  S12C2 : 1 ,
  S13C2 : 1 ,
  S14C2 : 1 ,
  S15C2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG8COM2 : 1 ,
  SEG9COM2 : 1 ,
  SEG10COM2 : 1 ,
  SEG11COM2 : 1 ,
  SEG12COM2 : 1 ,
  SEG13COM2 : 1 ,
  SEG14COM2 : 1 ,
  SEG15COM2 : 1 ;
} ; 

struct 
{
  unsigned int 
  S08C2 : 1 ,
  S09C2 : 1 ;
} ; 

} LCDDATA13bits@0xf72  ;

#define _S8C2 0
#define _S9C2 1
#define _S10C2 2
#define _S11C2 3
#define _S12C2 4
#define _S13C2 5
#define _S14C2 6
#define _S15C2 7

#define _SEG8COM2 0
#define _SEG9COM2 1
#define _SEG10COM2 2
#define _SEG11COM2 3
#define _SEG12COM2 4
#define _SEG13COM2 5
#define _SEG14COM2 6
#define _SEG15COM2 7

#define _S08C2 0
#define _S09C2 1

// ------------------------------
//        LCDDATA14
// ------------------------------
unsigned int LCDDATA14@0xf73 ;
union
{

struct 
{
  unsigned int 
  S16C2 : 1 ,
  S17C2 : 1 ,
  S18C2 : 1 ,
  S19C2 : 1 ,
  S20C2 : 1 ,
  S21C2 : 1 ,
  S22C2 : 1 ,
  S23C2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG16COM2 : 1 ,
  SEG17COM2 : 1 ,
  SEG18COM2 : 1 ,
  SEG19COM2 : 1 ,
  SEG20COM2 : 1 ,
  SEG21COM2 : 1 ,
  SEG22COM2 : 1 ,
  SEG23COM2 : 1 ;
} ; 

} LCDDATA14bits@0xf73  ;

#define _S16C2 0
#define _S17C2 1
#define _S18C2 2
#define _S19C2 3
#define _S20C2 4
#define _S21C2 5
#define _S22C2 6
#define _S23C2 7

#define _SEG16COM2 0
#define _SEG17COM2 1
#define _SEG18COM2 2
#define _SEG19COM2 3
#define _SEG20COM2 4
#define _SEG21COM2 5
#define _SEG22COM2 6
#define _SEG23COM2 7

// ------------------------------
//        LCDDATA15
// ------------------------------
unsigned int LCDDATA15@0xf74 ;
union
{

struct 
{
  unsigned int 
  S24C2 : 1 ,
  S25C2 : 1 ,
  S26C2 : 1 ,
  S27C2 : 1 ,
  S28C2 : 1 ,
  S29C2 : 1 ,
  S30C2 : 1 ,
  S31C2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG24COM2 : 1 ,
  SEG25COM2 : 1 ,
  SEG26COM2 : 1 ,
  SEG27COM2 : 1 ,
  SEG28COM2 : 1 ,
  SEG29COM2 : 1 ,
  SEG30COM2 : 1 ,
  SEG31COM2 : 1 ;
} ; 

} LCDDATA15bits@0xf74  ;

#define _S24C2 0
#define _S25C2 1
#define _S26C2 2
#define _S27C2 3
#define _S28C2 4
#define _S29C2 5
#define _S30C2 6
#define _S31C2 7

#define _SEG24COM2 0
#define _SEG25COM2 1
#define _SEG26COM2 2
#define _SEG27COM2 3
#define _SEG28COM2 4
#define _SEG29COM2 5
#define _SEG30COM2 6
#define _SEG31COM2 7

// ------------------------------
//        LCDDATA16
// ------------------------------
unsigned int LCDDATA16@0xf75 ;
union
{

struct 
{
  unsigned int 
  S32C2 : 1 ,
  S33C2 : 1 ,
  S34C2 : 1 ,
  S35C2 : 1 ,
  S36C2 : 1 ,
  S37C2 : 1 ,
  S38C2 : 1 ,
  S39C2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32COM2 : 1 ,
  SEG33COM2 : 1 ,
  SEG34COM2 : 1 ,
  SEG35COM2 : 1 ,
  SEG36COM2 : 1 ,
  SEG37COM2 : 1 ,
  SEG38COM2 : 1 ,
  SEG39COM2 : 1 ;
} ; 

} LCDDATA16bits@0xf75  ;

#define _S32C2 0
#define _S33C2 1
#define _S34C2 2
#define _S35C2 3
#define _S36C2 4
#define _S37C2 5
#define _S38C2 6
#define _S39C2 7

#define _SEG32COM2 0
#define _SEG33COM2 1
#define _SEG34COM2 2
#define _SEG35COM2 3
#define _SEG36COM2 4
#define _SEG37COM2 5
#define _SEG38COM2 6
#define _SEG39COM2 7

// ------------------------------
//        LCDDATA17
// ------------------------------
unsigned int LCDDATA17@0xf76 ;
union
{

struct 
{
  unsigned int 
  S40C2 : 1 ,
  S41C2 : 1 ,
  S42C2 : 1 ,
  S43C2 : 1 ,
  S44C2 : 1 ,
  S45C2 : 1 ,
  S46C2 : 1 ,
  S47C2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG40COM2 : 1 ,
  SEG41COM2 : 1 ,
  SEG42COM2 : 1 ,
  SEG43COM2 : 1 ,
  SEG44COM2 : 1 ,
  SEG45COM2 : 1 ,
  SEG46COM2 : 1 ,
  SEG47COM2 : 1 ;
} ; 

} LCDDATA17bits@0xf76  ;

#define _S40C2 0
#define _S41C2 1
#define _S42C2 2
#define _S43C2 3
#define _S44C2 4
#define _S45C2 5
#define _S46C2 6
#define _S47C2 7

#define _SEG40COM2 0
#define _SEG41COM2 1
#define _SEG42COM2 2
#define _SEG43COM2 3
#define _SEG44COM2 4
#define _SEG45COM2 5
#define _SEG46COM2 6
#define _SEG47COM2 7

// ------------------------------
//        LCDDATA18
// ------------------------------
unsigned int LCDDATA18@0xf77 ;
union
{

struct 
{
  unsigned int 
  S0C3 : 1 ,
  S1C3 : 1 ,
  S2C3 : 1 ,
  S3C3 : 1 ,
  S4C3 : 1 ,
  S5C3 : 1 ,
  S6C3 : 1 ,
  S7C3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG0COM3 : 1 ,
  SEG1COM3 : 1 ,
  SEG2COM3 : 1 ,
  SEG3COM3 : 1 ,
  SEG4COM3 : 1 ,
  SEG5COM3 : 1 ,
  SEG6COM3 : 1 ,
  SEG7COM3 : 1 ;
} ; 

struct 
{
  unsigned int 
  S00C3 : 1 ,
  S01C3 : 1 ,
  S02C3 : 1 ,
  S03C3 : 1 ,
  S04C3 : 1 ,
  S05C3 : 1 ,
  S06C3 : 1 ,
  S07C3 : 1 ;
} ; 

} LCDDATA18bits@0xf77  ;

#define _S0C3 0
#define _S1C3 1
#define _S2C3 2
#define _S3C3 3
#define _S4C3 4
#define _S5C3 5
#define _S6C3 6
#define _S7C3 7

#define _SEG0COM3 0
#define _SEG1COM3 1
#define _SEG2COM3 2
#define _SEG3COM3 3
#define _SEG4COM3 4
#define _SEG5COM3 5
#define _SEG6COM3 6
#define _SEG7COM3 7

#define _S00C3 0
#define _S01C3 1
#define _S02C3 2
#define _S03C3 3
#define _S04C3 4
#define _S05C3 5
#define _S06C3 6
#define _S07C3 7

// ------------------------------
//        LCDDATA19
// ------------------------------
unsigned int LCDDATA19@0xf78 ;
union
{

struct 
{
  unsigned int 
  S8C3 : 1 ,
  S9C3 : 1 ,
  S10C3 : 1 ,
  S11C3 : 1 ,
  S12C3 : 1 ,
  S13C3 : 1 ,
  S14C3 : 1 ,
  S15C3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG8COM3 : 1 ,
  SEG9COM3 : 1 ,
  SEG10COM3 : 1 ,
  SEG11COM3 : 1 ,
  SEG12COM3 : 1 ,
  SEG13COM3 : 1 ,
  SEG14COM3 : 1 ,
  SEG15COM3 : 1 ;
} ; 

struct 
{
  unsigned int 
  S08C3 : 1 ,
  S09C3 : 1 ;
} ; 

} LCDDATA19bits@0xf78  ;

#define _S8C3 0
#define _S9C3 1
#define _S10C3 2
#define _S11C3 3
#define _S12C3 4
#define _S13C3 5
#define _S14C3 6
#define _S15C3 7

#define _SEG8COM3 0
#define _SEG9COM3 1
#define _SEG10COM3 2
#define _SEG11COM3 3
#define _SEG12COM3 4
#define _SEG13COM3 5
#define _SEG14COM3 6
#define _SEG15COM3 7

#define _S08C3 0
#define _S09C3 1

// ------------------------------
//        LCDDATA20
// ------------------------------
unsigned int LCDDATA20@0xf79 ;
union
{

struct 
{
  unsigned int 
  S16C3 : 1 ,
  S17C3 : 1 ,
  S18C3 : 1 ,
  S19C3 : 1 ,
  S20C3 : 1 ,
  S21C3 : 1 ,
  S22C3 : 1 ,
  S23C3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG16COM3 : 1 ,
  SEG17COM3 : 1 ,
  SEG18COM3 : 1 ,
  SEG19COM3 : 1 ,
  SEG20COM3 : 1 ,
  SEG21COM3 : 1 ,
  SEG22COM3 : 1 ,
  SEG23COM3 : 1 ;
} ; 

} LCDDATA20bits@0xf79  ;

#define _S16C3 0
#define _S17C3 1
#define _S18C3 2
#define _S19C3 3
#define _S20C3 4
#define _S21C3 5
#define _S22C3 6
#define _S23C3 7

#define _SEG16COM3 0
#define _SEG17COM3 1
#define _SEG18COM3 2
#define _SEG19COM3 3
#define _SEG20COM3 4
#define _SEG21COM3 5
#define _SEG22COM3 6
#define _SEG23COM3 7

// ------------------------------
//        LCDDATA21
// ------------------------------
unsigned int LCDDATA21@0xf7a ;
union
{

struct 
{
  unsigned int 
  S24C3 : 1 ,
  S25C3 : 1 ,
  S26C3 : 1 ,
  S27C3 : 1 ,
  S28C3 : 1 ,
  S29C3 : 1 ,
  S30C3 : 1 ,
  S31C3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG24COM3 : 1 ,
  SEG25COM3 : 1 ,
  SEG26COM3 : 1 ,
  SEG27COM3 : 1 ,
  SEG28COM3 : 1 ,
  SEG29COM3 : 1 ,
  SEG30COM3 : 1 ,
  SEG31COM3 : 1 ;
} ; 

} LCDDATA21bits@0xf7a  ;

#define _S24C3 0
#define _S25C3 1
#define _S26C3 2
#define _S27C3 3
#define _S28C3 4
#define _S29C3 5
#define _S30C3 6
#define _S31C3 7

#define _SEG24COM3 0
#define _SEG25COM3 1
#define _SEG26COM3 2
#define _SEG27COM3 3
#define _SEG28COM3 4
#define _SEG29COM3 5
#define _SEG30COM3 6
#define _SEG31COM3 7

// ------------------------------
//        LCDDATA22
// ------------------------------
unsigned int LCDDATA22@0xf7b ;
union
{

struct 
{
  unsigned int 
  S32C3 : 1 ,
  S33C3 : 1 ,
  S34C3 : 1 ,
  S35C3 : 1 ,
  S36C3 : 1 ,
  S37C3 : 1 ,
  S38C3 : 1 ,
  S39C3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32COM3 : 1 ,
  SEG33COM3 : 1 ,
  SEG34COM3 : 1 ,
  SEG35COM3 : 1 ,
  SEG36COM3 : 1 ,
  SEG37COM3 : 1 ,
  SEG38COM3 : 1 ,
  SEG39COM3 : 1 ;
} ; 

} LCDDATA22bits@0xf7b  ;

#define _S32C3 0
#define _S33C3 1
#define _S34C3 2
#define _S35C3 3
#define _S36C3 4
#define _S37C3 5
#define _S38C3 6
#define _S39C3 7

#define _SEG32COM3 0
#define _SEG33COM3 1
#define _SEG34COM3 2
#define _SEG35COM3 3
#define _SEG36COM3 4
#define _SEG37COM3 5
#define _SEG38COM3 6
#define _SEG39COM3 7

// ------------------------------
//        LCDDATA23
// ------------------------------
unsigned int LCDDATA23@0xf7c ;
union
{

struct 
{
  unsigned int 
  S40C3 : 1 ,
  S41C3 : 1 ,
  S42C3 : 1 ,
  S43C3 : 1 ,
  S44C3 : 1 ,
  S45C3 : 1 ,
  S46C3 : 1 ,
  S47C3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG40COM3 : 1 ,
  SEG41COM3 : 1 ,
  SEG42COM3 : 1 ,
  SEG43COM3 : 1 ,
  SEG44COM3 : 1 ,
  SEG45COM3 : 1 ,
  SEG46COM3 : 1 ,
  SEG47COM3 : 1 ;
} ; 

} LCDDATA23bits@0xf7c  ;

#define _S40C3 0
#define _S41C3 1
#define _S42C3 2
#define _S43C3 3
#define _S44C3 4
#define _S45C3 5
#define _S46C3 6
#define _S47C3 7

#define _SEG40COM3 0
#define _SEG41COM3 1
#define _SEG42COM3 2
#define _SEG43COM3 3
#define _SEG44COM3 4
#define _SEG45COM3 5
#define _SEG46COM3 6
#define _SEG47COM3 7

// ------------------------------
//        BAUDCON1
// ------------------------------
unsigned int BAUDCON1@0xf7e ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  SCKP : 1 ,
  : 1,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RCMT : 1 ;
} ; 

} BAUDCON1bits@0xf7e  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _SCKP 4
#define _RCIDL 6
#define _ABDOVF 7

#define _RCMT 6

// ------------------------------
//        BAUDCTL1
// ------------------------------
unsigned int BAUDCTL1@0xf7e ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  SCKP : 1 ,
  : 1,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RCMT : 1 ;
} ; 

} BAUDCTL1bits@0xf7e  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _SCKP 4
#define _RCIDL 6
#define _ABDOVF 7

#define _RCMT 6

// ------------------------------
//        SPBRGH1
// ------------------------------
unsigned int SPBRGH1@0xf7f ;
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
  RA6 : 1 ,
  RA7 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN0 : 1 ,
  AN1 : 1 ,
  AN2 : 1 ,
  AN3 : 1 ,
  T0CKI : 1 ,
  AN4 : 1 ,
  OSC2 : 1 ,
  OSC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  VREFM : 1 ,
  VREFP : 1 ,
  : 1,
  LVDIN : 1 ,
  CLKO : 1 ,
  CLKI : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  SEG16 : 1 ,
  SEG17 : 1 ,
  SEG14 : 1 ,
  SEG15 : 1 ;
} ; 

// The following are aliases ..  
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
#define _RA7 7

#define _AN0 0
#define _AN1 1
#define _AN2 2
#define _AN3 3
#define _T0CKI 4
#define _AN4 5
#define _OSC2 6
#define _OSC1 7

#define _VREFM 2
#define _VREFP 3
#define _LVDIN 5
#define _CLKO 6
#define _CLKI 7

#define _SEG16 2
#define _SEG17 3
#define _SEG14 4
#define _SEG15 5

// The following are aliases ..  
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
  INT3 : 1 ,
  KBI0 : 1 ,
  KBI1 : 1 ,
  KBI2 : 1 ,
  KBI3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  SEG8 : 1 ,
  SEG9 : 1 ,
  SEG10 : 1 ,
  SEG11 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  CCP2B : 1 ,
  : 1,
  PGM : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT : 4 ,
  _KBI : 4 ;
} ; 

} PORTBbits@0xf81  ;

#define _RB0 0
#define _RB1 1
#define _RB2 2
#define _RB3 3
#define _RB4 4
#define _RB5 5
#define _RB6 6
#define _RB7 7

#define _INT0 0
#define _INT1 1
#define _INT2 2
#define _INT3 3
#define _KBI0 4
#define _KBI1 5
#define _KBI2 6
#define _KBI3 7

#define _SEG8 1
#define _SEG9 2
#define _SEG10 3
#define _SEG11 4

#define _CCP2B 3
#define _PGM 5
#define _PGC 6
#define _PGD 7

// The following are aliases ..  
#define __INT 0:4
#define __KBI 4:4

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
  CCP1 : 1 ,
  SCK : 1 ,
  SDI : 1 ,
  SDO : 1 ,
  TX : 1 ,
  RX : 1 ;
} ; 

struct 
{
  unsigned int 
  T13CKI : 1 ,
  CCP2C : 1 ,
  : 1,
  SCL : 1 ,
  SDA : 1 ,
  : 1,
  CK : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  SEG13 : 1 ,
  SEG12 : 1 ;
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
#define _CCP1 2
#define _SCK 3
#define _SDI 4
#define _SDO 5
#define _TX 6
#define _RX 7

#define _T13CKI 0
#define _CCP2C 1
#define _SCL 3
#define _SDA 4
#define _CK 6

#define _SEG13 2
#define _SEG12 3

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
  SEG0 : 1 ,
  SEG1 : 1 ,
  SEG2 : 1 ,
  SEG3 : 1 ,
  SEG4 : 1 ,
  SEG5 : 1 ,
  SEG6 : 1 ,
  SEG7 : 1 ;
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

#define _SEG0 0
#define _SEG1 1
#define _SEG2 2
#define _SEG3 3
#define _SEG4 4
#define _SEG5 5
#define _SEG6 6
#define _SEG7 7

// ------------------------------
//        PORTE
// ------------------------------
unsigned int PORTE@0xf84 ;
union
{

struct 
{
  unsigned int 
  : 4,
  RE4 : 1 ,
  RE5 : 1 ,
  RE6 : 1 ,
  RE7 : 1 ;
} ; 

struct 
{
  unsigned int 
  LCDBIAS1 : 1 ,
  LCDBIAS2 : 1 ,
  LCDBIAS3 : 1 ,
  COM0 : 1 ,
  COM1 : 1 ,
  COM2 : 1 ,
  COM3 : 1 ,
  SEG31 : 1 ;
} ; 

struct 
{
  unsigned int 
  BIAS1 : 1 ,
  BIAS2 : 1 ,
  BIAS3 : 1 ,
  : 4,
  CCP2E : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 3,
  _COM : 4 ;
} ; 

} PORTEbits@0xf84  ;

#define _RE4 4
#define _RE5 5
#define _RE6 6
#define _RE7 7

#define _LCDBIAS1 0
#define _LCDBIAS2 1
#define _LCDBIAS3 2
#define _COM0 3
#define _COM1 4
#define _COM2 5
#define _COM3 6
#define _SEG31 7

#define _BIAS1 0
#define _BIAS2 1
#define _BIAS3 2
#define _CCP2E 7

// The following are aliases ..  
#define __COM 3:4

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
  AN11 : 1 ,
  SS : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG18 : 1 ,
  SEG19 : 1 ,
  SEG20 : 1 ,
  SEG21 : 1 ,
  SEG22 : 1 ,
  SEG23 : 1 ,
  SEG24 : 1 ,
  SEG25 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  C2OUTF : 1 ,
  C1OUTF : 1 ,
  : 2,
  CVREFF : 1 ;
} ; 

} PORTFbits@0xf85  ;

#define _RF0 0
#define _RF1 1
#define _RF2 2
#define _RF3 3
#define _RF4 4
#define _RF5 5
#define _RF6 6
#define _RF7 7

#define _AN5 0
#define _AN6 1
#define _AN7 2
#define _AN8 3
#define _AN9 4
#define _AN10 5
#define _AN11 6
#define _SS 7

#define _SEG18 0
#define _SEG19 1
#define _SEG20 2
#define _SEG21 3
#define _SEG22 4
#define _SEG23 5
#define _SEG24 6
#define _SEG25 7

#define _C2OUTF 1
#define _C1OUTF 2
#define _CVREFF 5

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
  RG4 : 1 ,
  RG5 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  TX2 : 1 ,
  RX2 : 1 ,
  : 2,
  MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  CK2 : 1 ,
  DT2 : 1 ,
  : 2,
  VPP : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG30 : 1 ,
  SEG29 : 1 ,
  SEG28 : 1 ,
  SEG27 : 1 ,
  SEG26 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RG : 6 ;
} ; 

} PORTGbits@0xf86  ;

#define _RG0 0
#define _RG1 1
#define _RG2 2
#define _RG3 3
#define _RG4 4
#define _RG5 5

#define _TX2 1
#define _RX2 2
#define _MCLR 5

#define _CK2 1
#define _DT2 2
#define _VPP 5

#define _SEG30 0
#define _SEG29 1
#define _SEG28 2
#define _SEG27 3
#define _SEG26 4

// The following are aliases ..  
#define __RG 0:6

// ------------------------------
//        PORTH
// ------------------------------
unsigned int PORTH@0xf87 ;
union
{

struct 
{
  unsigned int 
  RH0 : 1 ,
  RH1 : 1 ,
  RH2 : 1 ,
  RH3 : 1 ,
  RH4 : 1 ,
  RH5 : 1 ,
  RH6 : 1 ,
  RH7 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG47 : 1 ,
  SEG46 : 1 ,
  SEG45 : 1 ,
  SEG44 : 1 ,
  SEG40 : 1 ,
  SEG41 : 1 ,
  SEG42 : 1 ,
  SEG43 : 1 ;
} ; 

} PORTHbits@0xf87  ;

#define _RH0 0
#define _RH1 1
#define _RH2 2
#define _RH3 3
#define _RH4 4
#define _RH5 5
#define _RH6 6
#define _RH7 7

#define _SEG47 0
#define _SEG46 1
#define _SEG45 2
#define _SEG44 3
#define _SEG40 4
#define _SEG41 5
#define _SEG42 6
#define _SEG43 7

// ------------------------------
//        PORTJ
// ------------------------------
unsigned int PORTJ@0xf88 ;
union
{

struct 
{
  unsigned int 
  RJ0 : 1 ,
  RJ1 : 1 ,
  RJ2 : 1 ,
  RJ3 : 1 ,
  RJ4 : 1 ,
  RJ5 : 1 ,
  RJ6 : 1 ,
  RJ7 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32 : 1 ,
  SEG33 : 1 ,
  SEG34 : 1 ,
  SEG35 : 1 ,
  SEG39 : 1 ,
  SEG38 : 1 ,
  SEG37 : 1 ,
  SEG36 : 1 ;
} ; 

} PORTJbits@0xf88  ;

#define _RJ0 0
#define _RJ1 1
#define _RJ2 2
#define _RJ3 3
#define _RJ4 4
#define _RJ5 5
#define _RJ6 6
#define _RJ7 7

#define _SEG32 0
#define _SEG33 1
#define _SEG34 2
#define _SEG35 3
#define _SEG39 4
#define _SEG38 5
#define _SEG37 6
#define _SEG36 7

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
  LATA6 : 1 ,
  LATA7 : 1 ;
} ; 

} LATAbits@0xf89  ;

#define _LATA0 0
#define _LATA1 1
#define _LATA2 2
#define _LATA3 3
#define _LATA4 4
#define _LATA5 5
#define _LATA6 6
#define _LATA7 7

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
  : 4,
  LATE4 : 1 ,
  LATE5 : 1 ,
  LATE6 : 1 ,
  LATE7 : 1 ;
} ; 

} LATEbits@0xf8d  ;

#define _LATE4 4
#define _LATE5 5
#define _LATE6 6
#define _LATE7 7

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

#define _LATF0 0
#define _LATF1 1
#define _LATF2 2
#define _LATF3 3
#define _LATF4 4
#define _LATF5 5
#define _LATF6 6
#define _LATF7 7

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

#define _LATG0 0
#define _LATG1 1
#define _LATG2 2
#define _LATG3 3
#define _LATG4 4

// The following are aliases ..  
#define __LATG 0:5

// ------------------------------
//        LATH
// ------------------------------
unsigned int LATH@0xf90 ;
union
{

struct 
{
  unsigned int 
  LATH0 : 1 ,
  LATH1 : 1 ,
  LATH2 : 1 ,
  LATH3 : 1 ,
  LATH4 : 1 ,
  LATH5 : 1 ,
  LATH6 : 1 ,
  LATH7 : 1 ;
} ; 

} LATHbits@0xf90  ;

#define _LATH0 0
#define _LATH1 1
#define _LATH2 2
#define _LATH3 3
#define _LATH4 4
#define _LATH5 5
#define _LATH6 6
#define _LATH7 7

// ------------------------------
//        LATJ
// ------------------------------
unsigned int LATJ@0xf91 ;
union
{

struct 
{
  unsigned int 
  LATJ0 : 1 ,
  LATJ1 : 1 ,
  LATJ2 : 1 ,
  LATJ3 : 1 ,
  LATJ4 : 1 ,
  LATJ5 : 1 ,
  LATJ6 : 1 ,
  LATJ7 : 1 ;
} ; 

} LATJbits@0xf91  ;

#define _LATJ0 0
#define _LATJ1 1
#define _LATJ2 2
#define _LATJ3 3
#define _LATJ4 4
#define _LATJ5 5
#define _LATJ6 6
#define _LATJ7 7

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
  TRISA6 : 1 ,
  TRISA7 : 1 ;
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
  RA6 : 1 ,
  RA7 : 1 ;
} ; 

} DDRAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA4 4
#define _TRISA5 5
#define _TRISA6 6
#define _TRISA7 7

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5
#define _RA6 6
#define _RA7 7

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
  TRISA6 : 1 ,
  TRISA7 : 1 ;
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
  RA6 : 1 ,
  RA7 : 1 ;
} ; 

} TRISAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA4 4
#define _TRISA5 5
#define _TRISA6 6
#define _TRISA7 7

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5
#define _RA6 6
#define _RA7 7

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

#define _TRISB0 0
#define _TRISB1 1
#define _TRISB2 2
#define _TRISB3 3
#define _TRISB4 4
#define _TRISB5 5
#define _TRISB6 6
#define _TRISB7 7

#define _RB0 0
#define _RB1 1
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

#define _TRISB0 0
#define _TRISB1 1
#define _TRISB2 2
#define _TRISB3 3
#define _TRISB4 4
#define _TRISB5 5
#define _TRISB6 6
#define _TRISB7 7

#define _RB0 0
#define _RB1 1
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
  : 4,
  TRISE4 : 1 ,
  TRISE5 : 1 ,
  TRISE6 : 1 ,
  TRISE7 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RE4 : 1 ,
  RE5 : 1 ,
  RE6 : 1 ,
  RE7 : 1 ;
} ; 

} DDREbits@0xf96  ;

#define _TRISE4 4
#define _TRISE5 5
#define _TRISE6 6
#define _TRISE7 7

#define _RE4 4
#define _RE5 5
#define _RE6 6
#define _RE7 7

// ------------------------------
//        TRISE
// ------------------------------
unsigned int TRISE@0xf96 ;
union
{

struct 
{
  unsigned int 
  : 4,
  TRISE4 : 1 ,
  TRISE5 : 1 ,
  TRISE6 : 1 ,
  TRISE7 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RE4 : 1 ,
  RE5 : 1 ,
  RE6 : 1 ,
  RE7 : 1 ;
} ; 

} TRISEbits@0xf96  ;

#define _TRISE4 4
#define _TRISE5 5
#define _TRISE6 6
#define _TRISE7 7

#define _RE4 4
#define _RE5 5
#define _RE6 6
#define _RE7 7

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

#define _TRISF0 0
#define _TRISF1 1
#define _TRISF2 2
#define _TRISF3 3
#define _TRISF4 4
#define _TRISF5 5
#define _TRISF6 6
#define _TRISF7 7

#define _RF0 0
#define _RF1 1
#define _RF2 2
#define _RF3 3
#define _RF4 4
#define _RF5 5
#define _RF6 6
#define _RF7 7

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

#define _TRISF0 0
#define _TRISF1 1
#define _TRISF2 2
#define _TRISF3 3
#define _TRISF4 4
#define _TRISF5 5
#define _TRISF6 6
#define _TRISF7 7

#define _RF0 0
#define _RF1 1
#define _RF2 2
#define _RF3 3
#define _RF4 4
#define _RF5 5
#define _RF6 6
#define _RF7 7

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

#define _TRISG0 0
#define _TRISG1 1
#define _TRISG2 2
#define _TRISG3 3
#define _TRISG4 4

#define _RG0 0
#define _RG1 1
#define _RG2 2
#define _RG3 3
#define _RG4 4

// The following are aliases ..  
#define __TRISG 0:5

#define __RG 0:5

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

#define _TRISG0 0
#define _TRISG1 1
#define _TRISG2 2
#define _TRISG3 3
#define _TRISG4 4

#define _RG0 0
#define _RG1 1
#define _RG2 2
#define _RG3 3
#define _RG4 4

// The following are aliases ..  
#define __TRISG 0:5

#define __RG 0:5

// ------------------------------
//        DDRH
// ------------------------------
unsigned int DDRH@0xf99 ;
union
{

struct 
{
  unsigned int 
  TRISH0 : 1 ,
  TRISH1 : 1 ,
  TRISH2 : 1 ,
  TRISH3 : 1 ,
  TRISH4 : 1 ,
  TRISH5 : 1 ,
  TRISH6 : 1 ,
  TRISH7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RH0 : 1 ,
  RH1 : 1 ,
  RH2 : 1 ,
  RH3 : 1 ,
  RH4 : 1 ,
  RH5 : 1 ,
  RH6 : 1 ,
  RH7 : 1 ;
} ; 

} DDRHbits@0xf99  ;

#define _TRISH0 0
#define _TRISH1 1
#define _TRISH2 2
#define _TRISH3 3
#define _TRISH4 4
#define _TRISH5 5
#define _TRISH6 6
#define _TRISH7 7

#define _RH0 0
#define _RH1 1
#define _RH2 2
#define _RH3 3
#define _RH4 4
#define _RH5 5
#define _RH6 6
#define _RH7 7

// ------------------------------
//        TRISH
// ------------------------------
unsigned int TRISH@0xf99 ;
union
{

struct 
{
  unsigned int 
  TRISH0 : 1 ,
  TRISH1 : 1 ,
  TRISH2 : 1 ,
  TRISH3 : 1 ,
  TRISH4 : 1 ,
  TRISH5 : 1 ,
  TRISH6 : 1 ,
  TRISH7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RH0 : 1 ,
  RH1 : 1 ,
  RH2 : 1 ,
  RH3 : 1 ,
  RH4 : 1 ,
  RH5 : 1 ,
  RH6 : 1 ,
  RH7 : 1 ;
} ; 

} TRISHbits@0xf99  ;

#define _TRISH0 0
#define _TRISH1 1
#define _TRISH2 2
#define _TRISH3 3
#define _TRISH4 4
#define _TRISH5 5
#define _TRISH6 6
#define _TRISH7 7

#define _RH0 0
#define _RH1 1
#define _RH2 2
#define _RH3 3
#define _RH4 4
#define _RH5 5
#define _RH6 6
#define _RH7 7

// ------------------------------
//        DDRJ
// ------------------------------
unsigned int DDRJ@0xf9a ;
union
{

struct 
{
  unsigned int 
  TRISJ0 : 1 ,
  TRISJ1 : 1 ,
  TRISJ2 : 1 ,
  TRISJ3 : 1 ,
  TRISJ4 : 1 ,
  TRISJ5 : 1 ,
  TRISJ6 : 1 ,
  TRISJ7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RJ0 : 1 ,
  RJ1 : 1 ,
  RJ2 : 1 ,
  RJ3 : 1 ,
  RJ4 : 1 ,
  RJ5 : 1 ,
  RJ6 : 1 ,
  RJ7 : 1 ;
} ; 

} DDRJbits@0xf9a  ;

#define _TRISJ0 0
#define _TRISJ1 1
#define _TRISJ2 2
#define _TRISJ3 3
#define _TRISJ4 4
#define _TRISJ5 5
#define _TRISJ6 6
#define _TRISJ7 7

#define _RJ0 0
#define _RJ1 1
#define _RJ2 2
#define _RJ3 3
#define _RJ4 4
#define _RJ5 5
#define _RJ6 6
#define _RJ7 7

// ------------------------------
//        TRISJ
// ------------------------------
unsigned int TRISJ@0xf9a ;
union
{

struct 
{
  unsigned int 
  TRISJ0 : 1 ,
  TRISJ1 : 1 ,
  TRISJ2 : 1 ,
  TRISJ3 : 1 ,
  TRISJ4 : 1 ,
  TRISJ5 : 1 ,
  TRISJ6 : 1 ,
  TRISJ7 : 1 ;
} ; 

struct 
{
  unsigned int 
  RJ0 : 1 ,
  RJ1 : 1 ,
  RJ2 : 1 ,
  RJ3 : 1 ,
  RJ4 : 1 ,
  RJ5 : 1 ,
  RJ6 : 1 ,
  RJ7 : 1 ;
} ; 

} TRISJbits@0xf9a  ;

#define _TRISJ0 0
#define _TRISJ1 1
#define _TRISJ2 2
#define _TRISJ3 3
#define _TRISJ4 4
#define _TRISJ5 5
#define _TRISJ6 6
#define _TRISJ7 7

#define _RJ0 0
#define _RJ1 1
#define _RJ2 2
#define _RJ3 3
#define _RJ4 4
#define _RJ5 5
#define _RJ6 6
#define _RJ7 7

// ------------------------------
//        OSCTUNE
// ------------------------------
unsigned int OSCTUNE@0xf9b ;
union
{

struct 
{
  unsigned int 
  : 6,
  PLLEN : 1 ,
  INTSRC : 1 ;
} ; 

struct 
{
  unsigned int 
  TUN0 : 1 ,
  TUN1 : 1 ,
  TUN2 : 1 ,
  TUN3 : 1 ,
  TUN4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TUN : 5 ;
} ; 

} OSCTUNEbits@0xf9b  ;

#define _PLLEN 6
#define _INTSRC 7

#define _TUN0 0
#define _TUN1 1
#define _TUN2 2
#define _TUN3 3
#define _TUN4 4

// The following are aliases ..  
#define __TUN 0:5

// ------------------------------
//        MEMCON
// ------------------------------
unsigned int MEMCON@0xf9c ;
union
{

struct 
{
  unsigned int 
  : 7,
  EBDIS : 1 ;
} ; 

} MEMCONbits@0xf9c  ;

#define _EBDIS 7

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
  ADIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  TX1IE : 1 ,
  RC1IE : 1 ;
} ; 

} PIE1bits@0xf9d  ;

#define _TMR1IE 0
#define _TMR2IE 1
#define _CCP1IE 2
#define _SSPIE 3
#define _TXIE 4
#define _RCIE 5
#define _ADIE 6

#define _TX1IE 4
#define _RC1IE 5

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
  ADIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  TX1IF : 1 ,
  RC1IF : 1 ;
} ; 

} PIR1bits@0xf9e  ;

#define _TMR1IF 0
#define _TMR2IF 1
#define _CCP1IF 2
#define _SSPIF 3
#define _TXIF 4
#define _RCIF 5
#define _ADIF 6

#define _TX1IF 4
#define _RC1IF 5

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
  ADIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  TX1IP : 1 ,
  RC1IP : 1 ;
} ; 

} IPR1bits@0xf9f  ;

#define _TMR1IP 0
#define _TMR2IP 1
#define _CCP1IP 2
#define _SSPIP 3
#define _TXIP 4
#define _RCIP 5
#define _ADIP 6

#define _TX1IP 4
#define _RC1IP 5

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
  HLVDIE : 1 ,
  BCLIE : 1 ,
  : 2,
  CMIE : 1 ,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _CCP2IE 0
#define _TMR3IE 1
#define _HLVDIE 2
#define _BCLIE 3
#define _CMIE 6
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
  CCP2IF : 1 ,
  TMR3IF : 1 ,
  HLVDIF : 1 ,
  BCLIF : 1 ,
  : 2,
  CMIF : 1 ,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _CCP2IF 0
#define _TMR3IF 1
#define _HLVDIF 2
#define _BCLIF 3
#define _CMIF 6
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
  CCP2IP : 1 ,
  TMR3IP : 1 ,
  HLVDIP : 1 ,
  BCLIP : 1 ,
  : 2,
  CMIP : 1 ,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _CCP2IP 0
#define _TMR3IP 1
#define _HLVDIP 2
#define _BCLIP 3
#define _CMIP 6
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
  : 4,
  TX2IE : 1 ,
  RC2IE : 1 ,
  LCDIE : 1 ;
} ; 

} PIE3bits@0xfa3  ;

#define _TX2IE 4
#define _RC2IE 5
#define _LCDIE 6

// ------------------------------
//        PIR3
// ------------------------------
unsigned int PIR3@0xfa4 ;
union
{

struct 
{
  unsigned int 
  : 4,
  TX2IF : 1 ,
  RC2IF : 1 ,
  LCDIF : 1 ;
} ; 

} PIR3bits@0xfa4  ;

#define _TX2IF 4
#define _RC2IF 5
#define _LCDIF 6

// ------------------------------
//        IPR3
// ------------------------------
unsigned int IPR3@0xfa5 ;
union
{

struct 
{
  unsigned int 
  : 4,
  TX2IP : 1 ,
  RC2IP : 1 ,
  LCDIP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

#define _TX2IP 4
#define _RC2IP 5
#define _LCDIP 6

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

struct 
{
  unsigned int 
  RX9D1 : 1 ,
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADDEN1 : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RX91 : 1 ,
  SPEN1 : 1 ;
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

#define _ADEN 3

#define _RX9D1 0
#define _OERR1 1
#define _FERR1 2
#define _ADDEN1 3
#define _CREN1 4
#define _SREN1 5
#define _RX91 6
#define _SPEN1 7

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
  : 3,
  ADEN : 1 ;
} ; 

struct 
{
  unsigned int 
  RX9D1 : 1 ,
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADDEN1 : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RX91 : 1 ,
  SPEN1 : 1 ;
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

#define _ADEN 3

#define _RX9D1 0
#define _OERR1 1
#define _FERR1 2
#define _ADDEN1 3
#define _CREN1 4
#define _SREN1 5
#define _RX91 6
#define _SPEN1 7

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
  TX9D1 : 1 ,
  TRMT1 : 1 ,
  BRGH1 : 1 ,
  SENDB1 : 1 ,
  SYNC1 : 1 ,
  TXEN1 : 1 ,
  TX91 : 1 ,
  CSRC1 : 1 ;
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

#define _TX9D1 0
#define _TRMT1 1
#define _BRGH1 2
#define _SENDB1 3
#define _SYNC1 4
#define _TXEN1 5
#define _TX91 6
#define _CSRC1 7

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
  TX9D1 : 1 ,
  TRMT1 : 1 ,
  BRGH1 : 1 ,
  SENDB1 : 1 ,
  SYNC1 : 1 ,
  TXEN1 : 1 ,
  TX91 : 1 ,
  CSRC1 : 1 ;
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

#define _TX9D1 0
#define _TRMT1 1
#define _BRGH1 2
#define _SENDB1 3
#define _SYNC1 4
#define _TXEN1 5
#define _TX91 6
#define _CSRC1 7

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
  : 4,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T3SYNC : 1 ;
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

#define _TMR3ON 0
#define _TMR3CS 1
#define _NOT_T3SYNC 2
#define _T3CCP1 3
#define _T3CCP2 6
#define _RD16 7

#define _T3CKPS0 4
#define _T3CKPS1 5

#define _T3SYNC 2

#define _T3INSYNC 2

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
  CVR3 : 1 ,
  CVREF : 1 ;
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
#define _CVREF 4

// The following are aliases ..  
#define __CVR 0:4

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
  DCCP2Y : 1 ,
  DCCP2X : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP2Y : 1 ,
  CCP2X : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  DC2B0 : 1 ,
  DC2B1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  _DC2B : 2 ;
} ; 

} CCP2CONbits@0xfba  ;

#define _CCP2M0 0
#define _CCP2M1 1
#define _CCP2M2 2
#define _CCP2M3 3
#define _DCCP2Y 4
#define _DCCP2X 5

#define _CCP2Y 4
#define _CCP2X 5

#define _DC2B0 4
#define _DC2B1 5

// The following are aliases ..  
#define __CCP2M 0:4

#define __DC2B 4:2

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
  DCCP1Y : 1 ,
  DCCP1X : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP1Y : 1 ,
  CCP1X : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  DC1B0 : 1 ,
  DC1B1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP1M : 4 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  _DC1B : 2 ;
} ; 

} CCP1CONbits@0xfbd  ;

#define _CCP1M0 0
#define _CCP1M1 1
#define _CCP1M2 2
#define _CCP1M3 3
#define _DCCP1Y 4
#define _DCCP1X 5

#define _CCP1Y 4
#define _CCP1X 5

#define _DC1B0 4
#define _DC1B1 5

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
  ADCS2 : 1 ,
  ACQT0 : 1 ,
  ACQT1 : 1 ,
  ACQT2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADCS : 3 ,
  _ACQT : 3 ;
} ; 

} ADCON2bits@0xfc0  ;

#define _ADFM 7

#define _ADCS0 0
#define _ADCS1 1
#define _ADCS2 2
#define _ACQT0 3
#define _ACQT1 4
#define _ACQT2 5

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

#define _PCFG0 0
#define _PCFG1 1
#define _PCFG2 2
#define _PCFG3 3
#define _VCFG0 4
#define _VCFG1 5

// The following are aliases ..  
#define __PCFG 0:4
#define __VCFG 4:2

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
  GO_DONE : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ,
  CHS2 : 1 ,
  CHS3 : 1 ;
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
  _CHS : 4 ;
} ; 

} ADCON0bits@0xfc2  ;

#define _ADON 0
#define _GO_NOT_DONE 1

#define _GO_DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5

#define _DONE 1

#define _GO 1

#define _NOT_DONE 1

// The following are aliases ..  
#define __CHS 2:4

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
  R_W : 1 ,
  : 2,
  D_A : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  I2C_READ : 1 ,
  I2C_START : 1 ,
  I2C_STOP : 1 ,
  I2C_DAT : 1 ;
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
  R : 1 ,
  : 2,
  D : 1 ;
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
#define _D_A 5

#define _I2C_READ 2
#define _I2C_START 3
#define _I2C_STOP 4
#define _I2C_DAT 5

#define _NOT_W 2
#define _NOT_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

#define _READ_WRITE 2
#define _DATA_ADDRESS 5

#define _R 2
#define _D 5

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

#define _TMR2ON 2

#define _T2CKPS0 0
#define _T2CKPS1 1
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
  TMR1CS : 1 ,
  NOT_T1SYNC : 1 ,
  T1OSCEN : 1 ,
  : 2,
  T1RUN : 1 ,
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
#define _T1RUN 6
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
  : 1,
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
  RI : 1 ;
} ; 

} RCONbits@0xfd0  ;

#define _NOT_BOR 0
#define _NOT_POR 1
#define _NOT_PD 2
#define _NOT_TO 3
#define _NOT_RI 4
#define _SBOREN 6
#define _IPEN 7

#define _BOR 0
#define _POR 1
#define _PD 2
#define _TO 3
#define _RI 4

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
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  : 4,
  HLVDEN : 1 ,
  IRVST : 1 ,
  : 1,
  VDIRMAG : 1 ;
} ; 

struct 
{
  unsigned int 
  HLVDL0 : 1 ,
  HLVDL1 : 1 ,
  HLVDL2 : 1 ,
  HLVDL3 : 1 ;
} ; 

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  LVDL2 : 1 ,
  LVDL3 : 1 ,
  LVDEN : 1 ;
} ; 

struct 
{
  unsigned int 
  LVV0 : 1 ,
  LVV1 : 1 ,
  LVV2 : 1 ,
  LVV3 : 1 ,
  : 1,
  BGST : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _HLVDL : 4 ;
} ; 

struct 
{
  unsigned int 
  _LVDL : 4 ;
} ; 

struct 
{
  unsigned int 
  _LVV : 4 ;
} ; 

} HLVDCONbits@0xfd2  ;

#define _HLVDEN 4
#define _IRVST 5
#define _VDIRMAG 7

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL2 2
#define _LVDL3 3
#define _LVDEN 4

#define _LVV0 0
#define _LVV1 1
#define _LVV2 2
#define _LVV3 3
#define _BGST 5

// The following are aliases ..  
#define __HLVDL 0:4

#define __LVDL 0:4

#define __LVV 0:4

// ------------------------------
//        OSCCON
// ------------------------------
unsigned int OSCCON@0xfd3 ;
union
{

struct 
{
  unsigned int 
  : 2,
  IOFS : 1 ,
  OSTS : 1 ,
  : 3,
  IDLEN : 1 ;
} ; 

struct 
{
  unsigned int 
  SCS0 : 1 ,
  SCS1 : 1 ,
  FLTS : 1 ,
  : 1,
  IRCF0 : 1 ,
  IRCF1 : 1 ,
  IRCF2 : 1 ;
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

#define _IOFS 2
#define _OSTS 3
#define _IDLEN 7

#define _SCS0 0
#define _SCS1 1
#define _FLTS 2
#define _IRCF0 4
#define _IRCF1 5
#define _IRCF2 6

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

// The following are aliases ..  
struct 
{
  unsigned int 
  _STKPTR : 5 ;
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

// The following are aliases ..  
#define __STKPTR 0:5

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
