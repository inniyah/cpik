#ifndef DEVICE
#define DEVICE p18f86j94
#define p18f86j94

// ======================================
//         PROCESSOR : p18f86j94
// ======================================

// This file has been automatically generated from Microchip's "p18f86j94.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xdff to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        UEP0
// ------------------------------
unsigned int UEP0@0xdff ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP0bits@0xdff  ;

// ------------------------------
//        UEP1
// ------------------------------
unsigned int UEP1@0xe00 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP1bits@0xe00  ;

// ------------------------------
//        UEP2
// ------------------------------
unsigned int UEP2@0xe01 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP2bits@0xe01  ;

// ------------------------------
//        UEP3
// ------------------------------
unsigned int UEP3@0xe02 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP3bits@0xe02  ;

// ------------------------------
//        UEP4
// ------------------------------
unsigned int UEP4@0xe03 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP4bits@0xe03  ;

// ------------------------------
//        UEP5
// ------------------------------
unsigned int UEP5@0xe04 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP5bits@0xe04  ;

// ------------------------------
//        UEP6
// ------------------------------
unsigned int UEP6@0xe05 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP6bits@0xe05  ;

// ------------------------------
//        UEP7
// ------------------------------
unsigned int UEP7@0xe06 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP7bits@0xe06  ;

// ------------------------------
//        UEP8
// ------------------------------
unsigned int UEP8@0xe07 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP8bits@0xe07  ;

// ------------------------------
//        UEP9
// ------------------------------
unsigned int UEP9@0xe08 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP9bits@0xe08  ;

// ------------------------------
//        UEP10
// ------------------------------
unsigned int UEP10@0xe09 ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP10bits@0xe09  ;

// ------------------------------
//        UEP11
// ------------------------------
unsigned int UEP11@0xe0a ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP11bits@0xe0a  ;

// ------------------------------
//        UEP12
// ------------------------------
unsigned int UEP12@0xe0b ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP12bits@0xe0b  ;

// ------------------------------
//        UEP13
// ------------------------------
unsigned int UEP13@0xe0c ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP13bits@0xe0c  ;

// ------------------------------
//        UEP14
// ------------------------------
unsigned int UEP14@0xe0d ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP14bits@0xe0d  ;

// ------------------------------
//        UEP15
// ------------------------------
unsigned int UEP15@0xe0e ;
union
{

struct 
{
  unsigned int 
  EPSTALL : 1 ,
  EPINEN : 1 ,
  EPOUTEN : 1 ,
  EPCONDIS : 1 ,
  EPHSHK : 1 ;
} ; 

} UEP15bits@0xe0e  ;

// ------------------------------
//        UEIE
// ------------------------------
unsigned int UEIE@0xe0f ;
union
{

struct 
{
  unsigned int 
  PIDEE : 1 ,
  CRC5EE : 1 ,
  CRC16EE : 1 ,
  DFN8EE : 1 ,
  BTOEE : 1 ,
  : 2,
  BTSEE : 1 ;
} ; 

} UEIEbits@0xe0f  ;

// ------------------------------
//        UIE
// ------------------------------
unsigned int UIE@0xe10 ;
union
{

struct 
{
  unsigned int 
  URSTIE : 1 ,
  UERRIE : 1 ,
  ACTVIE : 1 ,
  TRNIE : 1 ,
  IDLEIE : 1 ,
  STALLIE : 1 ,
  SOFIE : 1 ;
} ; 

} UIEbits@0xe10  ;

// ------------------------------
//        UCFG
// ------------------------------
unsigned int UCFG@0xe11 ;
union
{

struct 
{
  unsigned int 
  PPB0 : 1 ,
  PPB1 : 1 ,
  FSEN : 1 ,
  UTRDIS : 1 ,
  UPUEN : 1 ,
  : 1,
  UOEMON : 1 ,
  UTEYE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PPB : 2 ;
} ; 

} UCFGbits@0xe11  ;

// ------------------------------
//        RPOR0_1
// ------------------------------
unsigned int RPOR0_1@0xe12 ;
union
{

struct 
{
  unsigned int 
  RPO0R0 : 1 ,
  RPO0R1 : 1 ,
  RPO0R2 : 1 ,
  RPO0R3 : 1 ,
  RPO1R0 : 1 ,
  RPO1R1 : 1 ,
  RPO1R2 : 1 ,
  RPO1R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO0R : 4 ,
  _RPO1R : 4 ;
} ; 

} RPOR0_1bits@0xe12  ;

// ------------------------------
//        RPOR2_3
// ------------------------------
unsigned int RPOR2_3@0xe13 ;
union
{

struct 
{
  unsigned int 
  RPO2R0 : 1 ,
  RPO2R1 : 1 ,
  RPO2R2 : 1 ,
  RPO2R3 : 1 ,
  RPO3R0 : 1 ,
  RPO3R1 : 1 ,
  RPO3R2 : 1 ,
  RPO3R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO2R : 4 ,
  _RPO3R : 4 ;
} ; 

} RPOR2_3bits@0xe13  ;

// ------------------------------
//        RPOR4_5
// ------------------------------
unsigned int RPOR4_5@0xe14 ;
union
{

struct 
{
  unsigned int 
  RPO4R0 : 1 ,
  RPO4R1 : 1 ,
  RPO4R2 : 1 ,
  RPO4R3 : 1 ,
  RPO5R0 : 1 ,
  RPO5R1 : 1 ,
  RPO5R2 : 1 ,
  RPO5R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO4R : 4 ,
  _RPO5R : 4 ;
} ; 

} RPOR4_5bits@0xe14  ;

// ------------------------------
//        RPOR6_7
// ------------------------------
unsigned int RPOR6_7@0xe15 ;
union
{

struct 
{
  unsigned int 
  RPO6R0 : 1 ,
  RPO6R1 : 1 ,
  RPO6R2 : 1 ,
  RPO6R3 : 1 ,
  RPO7R0 : 1 ,
  RPO7R1 : 1 ,
  RPO7R2 : 1 ,
  RPO7R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO6R : 4 ,
  _RPO7R : 4 ;
} ; 

} RPOR6_7bits@0xe15  ;

// ------------------------------
//        RPOR8_9
// ------------------------------
unsigned int RPOR8_9@0xe16 ;
union
{

struct 
{
  unsigned int 
  RPO8R0 : 1 ,
  RPO8R1 : 1 ,
  RPO8R2 : 1 ,
  RPO8R3 : 1 ,
  RPO9R0 : 1 ,
  RPO9R1 : 1 ,
  RPO9R2 : 1 ,
  RPO9R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO8R : 4 ,
  _RPO9R : 4 ;
} ; 

} RPOR8_9bits@0xe16  ;

// ------------------------------
//        RPOR10_11
// ------------------------------
unsigned int RPOR10_11@0xe17 ;
union
{

struct 
{
  unsigned int 
  RPO10R0 : 1 ,
  RPO10R1 : 1 ,
  RPO10R2 : 1 ,
  RPO10R3 : 1 ,
  RPO11R0 : 1 ,
  RPO11R1 : 1 ,
  RPO11R2 : 1 ,
  RPO11R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO10R : 4 ,
  _RPO11R : 4 ;
} ; 

} RPOR10_11bits@0xe17  ;

// ------------------------------
//        RPOR12_13
// ------------------------------
unsigned int RPOR12_13@0xe18 ;
union
{

struct 
{
  unsigned int 
  RPO12R0 : 1 ,
  RPO12R1 : 1 ,
  RPO12R2 : 1 ,
  RPO12R3 : 1 ,
  RPO13R0 : 1 ,
  RPO13R1 : 1 ,
  RPO13R2 : 1 ,
  RPO13R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO12R : 4 ,
  _RPO13R : 4 ;
} ; 

} RPOR12_13bits@0xe18  ;

// ------------------------------
//        RPOR14_15
// ------------------------------
unsigned int RPOR14_15@0xe19 ;
union
{

struct 
{
  unsigned int 
  RPO14R0 : 1 ,
  RPO14R1 : 1 ,
  RPO14R2 : 1 ,
  RPO14R3 : 1 ,
  RPO15R0 : 1 ,
  RPO15R1 : 1 ,
  RPO15R2 : 1 ,
  RPO15R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO14R : 4 ,
  _RPO15R : 4 ;
} ; 

} RPOR14_15bits@0xe19  ;

// ------------------------------
//        RPOR16_17
// ------------------------------
unsigned int RPOR16_17@0xe1a ;
union
{

struct 
{
  unsigned int 
  RPO16R0 : 1 ,
  RPO16R1 : 1 ,
  RPO16R2 : 1 ,
  RPO16R3 : 1 ,
  RPO17R0 : 1 ,
  RPO17R1 : 1 ,
  RPO17R2 : 1 ,
  RPO17R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO16R : 4 ,
  _RPO17R : 4 ;
} ; 

} RPOR16_17bits@0xe1a  ;

// ------------------------------
//        RPOR18_19
// ------------------------------
unsigned int RPOR18_19@0xe1b ;
union
{

struct 
{
  unsigned int 
  RPO18R0 : 1 ,
  RPO18R1 : 1 ,
  RPO18R2 : 1 ,
  RPO18R3 : 1 ,
  RPO19R0 : 1 ,
  RPO19R1 : 1 ,
  RPO19R2 : 1 ,
  RPO19R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO18R : 4 ,
  _RPO19R : 4 ;
} ; 

} RPOR18_19bits@0xe1b  ;

// ------------------------------
//        RPOR20_21
// ------------------------------
unsigned int RPOR20_21@0xe1c ;
union
{

struct 
{
  unsigned int 
  RPO20R0 : 1 ,
  RPO20R1 : 1 ,
  RPO20R2 : 1 ,
  RPO20R3 : 1 ,
  RPO21R0 : 1 ,
  RPO21R1 : 1 ,
  RPO21R2 : 1 ,
  RPO21R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO20R : 4 ,
  _RPO21R : 4 ;
} ; 

} RPOR20_21bits@0xe1c  ;

// ------------------------------
//        RPOR22_23
// ------------------------------
unsigned int RPOR22_23@0xe1d ;
union
{

struct 
{
  unsigned int 
  RPO22R0 : 1 ,
  RPO22R1 : 1 ,
  RPO22R2 : 1 ,
  RPO22R3 : 1 ,
  RPO23R0 : 1 ,
  RPO23R1 : 1 ,
  RPO23R2 : 1 ,
  RPO23R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO22R : 4 ,
  _RPO23R : 4 ;
} ; 

} RPOR22_23bits@0xe1d  ;

// ------------------------------
//        RPOR24_25
// ------------------------------
unsigned int RPOR24_25@0xe1e ;
union
{

struct 
{
  unsigned int 
  RPO24R0 : 1 ,
  RPO24R1 : 1 ,
  RPO24R2 : 1 ,
  RPO24R3 : 1 ,
  RPO25R0 : 1 ,
  RPO25R1 : 1 ,
  RPO25R2 : 1 ,
  RPO25R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO24R : 4 ,
  _RPO25R : 4 ;
} ; 

} RPOR24_25bits@0xe1e  ;

// ------------------------------
//        RPOR26_27
// ------------------------------
unsigned int RPOR26_27@0xe1f ;
union
{

struct 
{
  unsigned int 
  RPO26R0 : 1 ,
  RPO26R1 : 1 ,
  RPO26R2 : 1 ,
  RPO26R3 : 1 ,
  RPO27R0 : 1 ,
  RPO27R1 : 1 ,
  RPO27R2 : 1 ,
  RPO27R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO26R : 4 ,
  _RPO27R : 4 ;
} ; 

} RPOR26_27bits@0xe1f  ;

// ------------------------------
//        RPOR28_29
// ------------------------------
unsigned int RPOR28_29@0xe20 ;
union
{

struct 
{
  unsigned int 
  RPO28R0 : 1 ,
  RPO28R1 : 1 ,
  RPO28R2 : 1 ,
  RPO28R3 : 1 ,
  RPO29R0 : 1 ,
  RPO29R1 : 1 ,
  RPO29R2 : 1 ,
  RPO29R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO28R : 4 ,
  _RPO29R : 4 ;
} ; 

} RPOR28_29bits@0xe20  ;

// ------------------------------
//        RPOR30_31
// ------------------------------
unsigned int RPOR30_31@0xe21 ;
union
{

struct 
{
  unsigned int 
  RPO30R0 : 1 ,
  RPO30R1 : 1 ,
  RPO30R2 : 1 ,
  RPO30R3 : 1 ,
  RPO31R0 : 1 ,
  RPO31R1 : 1 ,
  RPO31R2 : 1 ,
  RPO31R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO30R : 4 ,
  _RPO31R : 4 ;
} ; 

} RPOR30_31bits@0xe21  ;

// ------------------------------
//        RPOR32_33
// ------------------------------
unsigned int RPOR32_33@0xe22 ;
union
{

struct 
{
  unsigned int 
  RPO32R0 : 1 ,
  RPO32R1 : 1 ,
  RPO32R2 : 1 ,
  RPO32R3 : 1 ,
  RPO33R0 : 1 ,
  RPO33R1 : 1 ,
  RPO33R2 : 1 ,
  RPO33R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO32R : 4 ,
  _RPO33R : 4 ;
} ; 

} RPOR32_33bits@0xe22  ;

// ------------------------------
//        RPOR34_35
// ------------------------------
unsigned int RPOR34_35@0xe23 ;
union
{

struct 
{
  unsigned int 
  RPO34R0 : 1 ,
  RPO34R1 : 1 ,
  RPO34R2 : 1 ,
  RPO34R3 : 1 ,
  RPO35R0 : 1 ,
  RPO35R1 : 1 ,
  RPO35R2 : 1 ,
  RPO35R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO34R : 4 ,
  _RPO35R : 4 ;
} ; 

} RPOR34_35bits@0xe23  ;

// ------------------------------
//        RPOR36_37
// ------------------------------
unsigned int RPOR36_37@0xe24 ;
union
{

struct 
{
  unsigned int 
  RPO36R0 : 1 ,
  RPO36R1 : 1 ,
  RPO36R2 : 1 ,
  RPO36R3 : 1 ,
  RPO37R0 : 1 ,
  RPO37R1 : 1 ,
  RPO37R2 : 1 ,
  RPO37R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO36R : 4 ,
  _RPO37R : 4 ;
} ; 

} RPOR36_37bits@0xe24  ;

// ------------------------------
//        RPOR38_39
// ------------------------------
unsigned int RPOR38_39@0xe25 ;
union
{

struct 
{
  unsigned int 
  RPO38R0 : 1 ,
  RPO38R1 : 1 ,
  RPO38R2 : 1 ,
  RPO38R3 : 1 ,
  RPO39R0 : 1 ,
  RPO39R1 : 1 ,
  RPO39R2 : 1 ,
  RPO39R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO38R : 4 ,
  _RPO39R : 4 ;
} ; 

} RPOR38_39bits@0xe25  ;

// ------------------------------
//        RPOR40_41
// ------------------------------
unsigned int RPOR40_41@0xe26 ;
union
{

struct 
{
  unsigned int 
  RPO40R0 : 1 ,
  RPO40R1 : 1 ,
  RPO40R2 : 1 ,
  RPO40R3 : 1 ,
  RPO41R0 : 1 ,
  RPO41R1 : 1 ,
  RPO41R2 : 1 ,
  RPO41R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO40R : 4 ,
  _RPO41R : 4 ;
} ; 

} RPOR40_41bits@0xe26  ;

// ------------------------------
//        RPOR42_43
// ------------------------------
unsigned int RPOR42_43@0xe27 ;
union
{

struct 
{
  unsigned int 
  RPO42R0 : 1 ,
  RPO42R1 : 1 ,
  RPO42R2 : 1 ,
  RPO42R3 : 1 ,
  RPO43R0 : 1 ,
  RPO43R1 : 1 ,
  RPO43R2 : 1 ,
  RPO43R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO42R : 4 ,
  _RPO43R : 4 ;
} ; 

} RPOR42_43bits@0xe27  ;

// ------------------------------
//        RPOR44_45
// ------------------------------
unsigned int RPOR44_45@0xe28 ;
union
{

struct 
{
  unsigned int 
  RPO44R0 : 1 ,
  RPO44R1 : 1 ,
  RPO44R2 : 1 ,
  RPO44R3 : 1 ,
  RPO45R0 : 1 ,
  RPO45R1 : 1 ,
  RPO45R2 : 1 ,
  RPO45R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO44R : 4 ,
  _RPO45R : 4 ;
} ; 

} RPOR44_45bits@0xe28  ;

// ------------------------------
//        RPOR46
// ------------------------------
unsigned int RPOR46@0xe29 ;
union
{

struct 
{
  unsigned int 
  RPO46R0 : 1 ,
  RPO46R1 : 1 ,
  RPO46R2 : 1 ,
  RPO46R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RPO46R : 4 ;
} ; 

} RPOR46bits@0xe29  ;

// ------------------------------
//        RPINR0_1
// ------------------------------
unsigned int RPINR0_1@0xe2a ;
union
{

struct 
{
  unsigned int 
  U1RXR0 : 1 ,
  U1RXR1 : 1 ,
  U1RXR2 : 1 ,
  U1RXR3 : 1 ,
  U1TXR0 : 1 ,
  U1TXR1 : 1 ,
  U1TXR2 : 1 ,
  U1TXR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _U1RXR : 4 ,
  _U1TXR : 4 ;
} ; 

} RPINR0_1bits@0xe2a  ;

// ------------------------------
//        RPINR2_3
// ------------------------------
unsigned int RPINR2_3@0xe2b ;
union
{

struct 
{
  unsigned int 
  U2RXR0 : 1 ,
  U2RXR1 : 1 ,
  U2RXR2 : 1 ,
  U2RXR3 : 1 ,
  U2TXR0 : 1 ,
  U2TXR1 : 1 ,
  U2TXR2 : 1 ,
  U2TXR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _U2RXR : 4 ,
  _U2TXR : 4 ;
} ; 

} RPINR2_3bits@0xe2b  ;

// ------------------------------
//        RPINR4_5
// ------------------------------
unsigned int RPINR4_5@0xe2c ;
union
{

struct 
{
  unsigned int 
  U3RXR0 : 1 ,
  U3RXR1 : 1 ,
  U3RXR2 : 1 ,
  U3RXR3 : 1 ,
  U3TXR0 : 1 ,
  U3TXR1 : 1 ,
  U3TXR2 : 1 ,
  U3TXR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _U3RXR : 4 ,
  _U3TXR : 4 ;
} ; 

} RPINR4_5bits@0xe2c  ;

// ------------------------------
//        RPINR6_7
// ------------------------------
unsigned int RPINR6_7@0xe2d ;
union
{

struct 
{
  unsigned int 
  U4RXR0 : 1 ,
  U4RXR1 : 1 ,
  U4RXR2 : 1 ,
  U4RXR3 : 1 ,
  U4TXR0 : 1 ,
  U4TXR1 : 1 ,
  U4TXR2 : 1 ,
  U4TXR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _U4RXR : 4 ,
  _U4TXR : 4 ;
} ; 

} RPINR6_7bits@0xe2d  ;

// ------------------------------
//        RPINR8_9
// ------------------------------
unsigned int RPINR8_9@0xe2e ;
union
{

struct 
{
  unsigned int 
  SCK1R0 : 1 ,
  SCK1R1 : 1 ,
  SCK1R2 : 1 ,
  SCK1R3 : 1 ,
  SDI1R0 : 1 ,
  SDI1R1 : 1 ,
  SDI1R2 : 1 ,
  SDI1R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SCK1R : 4 ,
  _SDI1R : 4 ;
} ; 

} RPINR8_9bits@0xe2e  ;

// ------------------------------
//        RPINR10_11
// ------------------------------
unsigned int RPINR10_11@0xe2f ;
union
{

struct 
{
  unsigned int 
  SS1R0 : 1 ,
  SS1R1 : 1 ,
  SS1R2 : 1 ,
  SS1R3 : 1 ,
  SCK2R0 : 1 ,
  SCK2R1 : 1 ,
  SCK2R2 : 1 ,
  SCK2R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SS1R : 4 ,
  _SCK2R : 4 ;
} ; 

} RPINR10_11bits@0xe2f  ;

// ------------------------------
//        RPINR12_13
// ------------------------------
unsigned int RPINR12_13@0xe30 ;
union
{

struct 
{
  unsigned int 
  SDI2R0 : 1 ,
  SDI2R1 : 1 ,
  SDI2R2 : 1 ,
  SDI2R3 : 1 ,
  SS2R0 : 1 ,
  SS2R1 : 1 ,
  SS2R2 : 1 ,
  SS2R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SDI2R : 4 ,
  _SS2R : 4 ;
} ; 

} RPINR12_13bits@0xe30  ;

// ------------------------------
//        RPINR14_15
// ------------------------------
unsigned int RPINR14_15@0xe31 ;
union
{

struct 
{
  unsigned int 
  FLT0R0 : 1 ,
  FLT0R1 : 1 ,
  FLT0R2 : 1 ,
  FLT0R3 : 1 ,
  ECCP1R0 : 1 ,
  ECCP1R1 : 1 ,
  ECCP1R2 : 1 ,
  ECCP1R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FLT0R : 4 ,
  _ECCP1R : 4 ;
} ; 

} RPINR14_15bits@0xe31  ;

// ------------------------------
//        RPINR16_17
// ------------------------------
unsigned int RPINR16_17@0xe32 ;
union
{

struct 
{
  unsigned int 
  ECCP2R0 : 1 ,
  ECCP2R1 : 1 ,
  ECCP2R2 : 1 ,
  ECCP2R3 : 1 ,
  ECCP3R0 : 1 ,
  ECCP3R1 : 1 ,
  ECCP3R2 : 1 ,
  ECCP3R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ECCP2R : 4 ,
  _ECCP3R : 4 ;
} ; 

} RPINR16_17bits@0xe32  ;

// ------------------------------
//        RPINR18_19
// ------------------------------
unsigned int RPINR18_19@0xe33 ;
union
{

struct 
{
  unsigned int 
  IOC0R0 : 1 ,
  IOC0R1 : 1 ,
  IOC0R2 : 1 ,
  IOC0R3 : 1 ,
  IOC1R0 : 1 ,
  IOC1R1 : 1 ,
  IOC1R2 : 1 ,
  IOC1R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IOC0R : 4 ,
  _IOC1R : 4 ;
} ; 

} RPINR18_19bits@0xe33  ;

// ------------------------------
//        RPINR20_21
// ------------------------------
unsigned int RPINR20_21@0xe34 ;
union
{

struct 
{
  unsigned int 
  IOC2R0 : 1 ,
  IOC2R1 : 1 ,
  IOC2R2 : 1 ,
  IOC2R3 : 1 ,
  IOC3R0 : 1 ,
  IOC3R1 : 1 ,
  IOC3R2 : 1 ,
  IOC3R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IOC2R : 4 ,
  _IOC3R : 4 ;
} ; 

} RPINR20_21bits@0xe34  ;

// ------------------------------
//        RPINR22_23
// ------------------------------
unsigned int RPINR22_23@0xe35 ;
union
{

struct 
{
  unsigned int 
  IOC4R0 : 1 ,
  IOC4R1 : 1 ,
  IOC4R2 : 1 ,
  IOC4R3 : 1 ,
  IOC5R0 : 1 ,
  IOC5R1 : 1 ,
  IOC5R2 : 1 ,
  IOC5R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IOC4R : 4 ,
  _IOC5R : 4 ;
} ; 

} RPINR22_23bits@0xe35  ;

// ------------------------------
//        RPINR24_25
// ------------------------------
unsigned int RPINR24_25@0xe36 ;
union
{

struct 
{
  unsigned int 
  IOC6R0 : 1 ,
  IOC6R1 : 1 ,
  IOC6R2 : 1 ,
  IOC6R3 : 1 ,
  IOC7R0 : 1 ,
  IOC7R1 : 1 ,
  IOC7R2 : 1 ,
  IOC7R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IOC6R : 4 ,
  _IOC7R : 4 ;
} ; 

} RPINR24_25bits@0xe36  ;

// ------------------------------
//        RPINR26_27
// ------------------------------
unsigned int RPINR26_27@0xe37 ;
union
{

struct 
{
  unsigned int 
  INT1R0 : 1 ,
  INT1R1 : 1 ,
  INT1R2 : 1 ,
  INT1R3 : 1 ,
  INT2R0 : 1 ,
  INT2R1 : 1 ,
  INT2R2 : 1 ,
  INT2R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT1R : 4 ,
  _INT2R : 4 ;
} ; 

} RPINR26_27bits@0xe37  ;

// ------------------------------
//        RPINR28_29
// ------------------------------
unsigned int RPINR28_29@0xe38 ;
union
{

struct 
{
  unsigned int 
  INT3R0 : 1 ,
  INT3R1 : 1 ,
  INT3R2 : 1 ,
  INT3R3 : 1 ,
  MDMINR0 : 1 ,
  MDMINR1 : 1 ,
  MDMINR2 : 1 ,
  MDMINR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT3R : 4 ,
  _MDMINR : 4 ;
} ; 

} RPINR28_29bits@0xe38  ;

// ------------------------------
//        RPINR30_31
// ------------------------------
unsigned int RPINR30_31@0xe39 ;
union
{

struct 
{
  unsigned int 
  MDCIN1R0 : 1 ,
  MDCIN1R1 : 1 ,
  MDCIN1R2 : 1 ,
  MDCIN1R3 : 1 ,
  MDCIN2R0 : 1 ,
  MDCIN2R1 : 1 ,
  MDCIN2R2 : 1 ,
  MDCIN2R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _MDCIN1R : 4 ,
  _MDCIN2R : 4 ;
} ; 

} RPINR30_31bits@0xe39  ;

// ------------------------------
//        RPINR32_33
// ------------------------------
unsigned int RPINR32_33@0xe3a ;
union
{

struct 
{
  unsigned int 
  CCP4R0 : 1 ,
  CCP4R1 : 1 ,
  CCP4R2 : 1 ,
  CCP4R3 : 1 ,
  CCP5R0 : 1 ,
  CCP5R1 : 1 ,
  CCP5R2 : 1 ,
  CCP5R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP4R : 4 ,
  _CCP5R : 4 ;
} ; 

} RPINR32_33bits@0xe3a  ;

// ------------------------------
//        RPINR34_35
// ------------------------------
unsigned int RPINR34_35@0xe3b ;
union
{

struct 
{
  unsigned int 
  CCP6R0 : 1 ,
  CCP6R1 : 1 ,
  CCP6R2 : 1 ,
  CCP6R3 : 1 ,
  CCP7R0 : 1 ,
  CCP7R1 : 1 ,
  CCP7R2 : 1 ,
  CCP7R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP6R : 4 ,
  _CCP7R : 4 ;
} ; 

} RPINR34_35bits@0xe3b  ;

// ------------------------------
//        RPINR36_37
// ------------------------------
unsigned int RPINR36_37@0xe3c ;
union
{

struct 
{
  unsigned int 
  CCP8R0 : 1 ,
  CCP8R1 : 1 ,
  CCP8R2 : 1 ,
  CCP8R3 : 1 ,
  CCP9R0 : 1 ,
  CCP9R1 : 1 ,
  CCP9R2 : 1 ,
  CCP9R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP8R : 4 ,
  _CCP9R : 4 ;
} ; 

} RPINR36_37bits@0xe3c  ;

// ------------------------------
//        RPINR38_39
// ------------------------------
unsigned int RPINR38_39@0xe3d ;
union
{

struct 
{
  unsigned int 
  CCP10R0 : 1 ,
  CCP10R1 : 1 ,
  CCP10R2 : 1 ,
  CCP10R3 : 1 ,
  T0CKIR0 : 1 ,
  T0CKIR1 : 1 ,
  T0CKIR2 : 1 ,
  T0CKIR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP10R : 4 ,
  _T0CKIR : 4 ;
} ; 

} RPINR38_39bits@0xe3d  ;

// ------------------------------
//        RPINR40_41
// ------------------------------
unsigned int RPINR40_41@0xe3e ;
union
{

struct 
{
  unsigned int 
  T1GR0 : 1 ,
  T1GR1 : 1 ,
  T1GR2 : 1 ,
  T1GR3 : 1 ,
  T1CKIR0 : 1 ,
  T1CKIR1 : 1 ,
  T1CKIR2 : 1 ,
  T1CKIR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T1GR : 4 ,
  _T1CKIR : 4 ;
} ; 

} RPINR40_41bits@0xe3e  ;

// ------------------------------
//        RPINR42_43
// ------------------------------
unsigned int RPINR42_43@0xe3f ;
union
{

struct 
{
  unsigned int 
  T3GR0 : 1 ,
  T3GR1 : 1 ,
  T3GR2 : 1 ,
  T3GR3 : 1 ,
  T3CKIR0 : 1 ,
  T3CKIR1 : 1 ,
  T3CKIR2 : 1 ,
  T3CKIR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T3GR : 4 ,
  _T3CKIR : 4 ;
} ; 

} RPINR42_43bits@0xe3f  ;

// ------------------------------
//        RPINR44_45
// ------------------------------
unsigned int RPINR44_45@0xe40 ;
union
{

struct 
{
  unsigned int 
  T5GR0 : 1 ,
  T5GR1 : 1 ,
  T5GR2 : 1 ,
  T5GR3 : 1 ,
  T5CKIR0 : 1 ,
  T5CKIR1 : 1 ,
  T5CKIR2 : 1 ,
  T5CKIR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T5GR : 4 ,
  _T5CKIR : 4 ;
} ; 

} RPINR44_45bits@0xe40  ;

// ------------------------------
//        RPINR46_47
// ------------------------------
unsigned int RPINR46_47@0xe41 ;
union
{

struct 
{
  unsigned int 
  PBIO0R0 : 1 ,
  PBIO0R1 : 1 ,
  PBIO0R2 : 1 ,
  PBIO0R3 : 1 ,
  PBIO1R0 : 1 ,
  PBIO1R1 : 1 ,
  PBIO1R2 : 1 ,
  PBIO1R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PBIO0R : 4 ,
  _PBIO1R : 4 ;
} ; 

} RPINR46_47bits@0xe41  ;

// ------------------------------
//        RPINR48_49
// ------------------------------
unsigned int RPINR48_49@0xe42 ;
union
{

struct 
{
  unsigned int 
  PBIO2R0 : 1 ,
  PBIO2R1 : 1 ,
  PBIO2R2 : 1 ,
  PBIO2R3 : 1 ,
  PBIO3R0 : 1 ,
  PBIO3R1 : 1 ,
  PBIO3R2 : 1 ,
  PBIO3R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PBIO2R : 4 ,
  _PBIO3R : 4 ;
} ; 

} RPINR48_49bits@0xe42  ;

// ------------------------------
//        RPINR50_51
// ------------------------------
unsigned int RPINR50_51@0xe43 ;
union
{

struct 
{
  unsigned int 
  PBIO4R0 : 1 ,
  PBIO4R1 : 1 ,
  PBIO4R2 : 1 ,
  PBIO4R3 : 1 ,
  PBIO5R0 : 1 ,
  PBIO5R1 : 1 ,
  PBIO5R2 : 1 ,
  PBIO5R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PBIO4R : 4 ,
  _PBIO5R : 4 ;
} ; 

} RPINR50_51bits@0xe43  ;

// ------------------------------
//        RPINR52_53
// ------------------------------
unsigned int RPINR52_53@0xe44 ;
union
{

struct 
{
  unsigned int 
  PBIO6R0 : 1 ,
  PBIO6R1 : 1 ,
  PBIO6R2 : 1 ,
  PBIO6R3 : 1 ,
  PBIO7R0 : 1 ,
  PBIO7R1 : 1 ,
  PBIO7R2 : 1 ,
  PBIO7R3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PBIO6R : 4 ,
  _PBIO7R : 4 ;
} ; 

} RPINR52_53bits@0xe44  ;

// ------------------------------
//        ANCON3
// ------------------------------
unsigned int ANCON3@0xe45 ;
union
{

struct 
{
  unsigned int 
  ANSEL16 : 1 ,
  ANSEL17 : 1 ,
  ANSEL18 : 1 ,
  ANSEL19 : 1 ,
  ANSEL20 : 1 ,
  ANSEL21 : 1 ,
  ANSEL22 : 1 ,
  ANSEL23 : 1 ;
} ; 

} ANCON3bits@0xe45  ;

// ------------------------------
//        ANCON2
// ------------------------------
unsigned int ANCON2@0xe46 ;
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
  ANSEL14 : 1 ,
  ANSEL15 : 1 ;
} ; 

} ANCON2bits@0xe46  ;

// ------------------------------
//        ANCON1
// ------------------------------
unsigned int ANCON1@0xe47 ;
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

} ANCON1bits@0xe47  ;

// ------------------------------
//        ADCBUF1
// ------------------------------
unsigned int ADCBUF1@0xe48 ;
// ------------------------------
//        ADCBUF1L
// ------------------------------
unsigned int ADCBUF1L@0xe48 ;
// ------------------------------
//        ADCBUF1H
// ------------------------------
unsigned int ADCBUF1H@0xe49 ;
// ------------------------------
//        ADCBUF2
// ------------------------------
unsigned int ADCBUF2@0xe4a ;
// ------------------------------
//        ADCBUF2L
// ------------------------------
unsigned int ADCBUF2L@0xe4a ;
// ------------------------------
//        ADCBUF2H
// ------------------------------
unsigned int ADCBUF2H@0xe4b ;
// ------------------------------
//        ADCBUF3
// ------------------------------
unsigned int ADCBUF3@0xe4c ;
// ------------------------------
//        ADCBUF3L
// ------------------------------
unsigned int ADCBUF3L@0xe4c ;
// ------------------------------
//        ADCBUF3H
// ------------------------------
unsigned int ADCBUF3H@0xe4d ;
// ------------------------------
//        ADCBUF4
// ------------------------------
unsigned int ADCBUF4@0xe4e ;
// ------------------------------
//        ADCBUF4L
// ------------------------------
unsigned int ADCBUF4L@0xe4e ;
// ------------------------------
//        ADCBUF4H
// ------------------------------
unsigned int ADCBUF4H@0xe4f ;
// ------------------------------
//        ADCBUF5
// ------------------------------
unsigned int ADCBUF5@0xe50 ;
// ------------------------------
//        ADCBUF5L
// ------------------------------
unsigned int ADCBUF5L@0xe50 ;
// ------------------------------
//        ADCBUF5H
// ------------------------------
unsigned int ADCBUF5H@0xe51 ;
// ------------------------------
//        ADCBUF6
// ------------------------------
unsigned int ADCBUF6@0xe52 ;
// ------------------------------
//        ADCBUF6L
// ------------------------------
unsigned int ADCBUF6L@0xe52 ;
// ------------------------------
//        ADCBUF6H
// ------------------------------
unsigned int ADCBUF6H@0xe53 ;
// ------------------------------
//        ADCBUF7
// ------------------------------
unsigned int ADCBUF7@0xe54 ;
// ------------------------------
//        ADCBUF7L
// ------------------------------
unsigned int ADCBUF7L@0xe54 ;
// ------------------------------
//        ADCBUF7H
// ------------------------------
unsigned int ADCBUF7H@0xe55 ;
// ------------------------------
//        ADCBUF8
// ------------------------------
unsigned int ADCBUF8@0xe56 ;
// ------------------------------
//        ADCBUF8L
// ------------------------------
unsigned int ADCBUF8L@0xe56 ;
// ------------------------------
//        ADCBUF8H
// ------------------------------
unsigned int ADCBUF8H@0xe57 ;
// ------------------------------
//        ADCBUF9
// ------------------------------
unsigned int ADCBUF9@0xe58 ;
// ------------------------------
//        ADCBUF9L
// ------------------------------
unsigned int ADCBUF9L@0xe58 ;
// ------------------------------
//        ADCBUF9H
// ------------------------------
unsigned int ADCBUF9H@0xe59 ;
// ------------------------------
//        ADCBUF10
// ------------------------------
unsigned int ADCBUF10@0xe5a ;
// ------------------------------
//        ADCBUF10L
// ------------------------------
unsigned int ADCBUF10L@0xe5a ;
// ------------------------------
//        ADCBUF10H
// ------------------------------
unsigned int ADCBUF10H@0xe5b ;
// ------------------------------
//        ADCBUF11
// ------------------------------
unsigned int ADCBUF11@0xe5c ;
// ------------------------------
//        ADCBUF11L
// ------------------------------
unsigned int ADCBUF11L@0xe5c ;
// ------------------------------
//        ADCBUF11H
// ------------------------------
unsigned int ADCBUF11H@0xe5d ;
// ------------------------------
//        ADCBUF12
// ------------------------------
unsigned int ADCBUF12@0xe5e ;
// ------------------------------
//        ADCBUF12L
// ------------------------------
unsigned int ADCBUF12L@0xe5e ;
// ------------------------------
//        ADCBUF12H
// ------------------------------
unsigned int ADCBUF12H@0xe5f ;
// ------------------------------
//        ADCBUF13
// ------------------------------
unsigned int ADCBUF13@0xe60 ;
// ------------------------------
//        ADCBUF13L
// ------------------------------
unsigned int ADCBUF13L@0xe60 ;
// ------------------------------
//        ADCBUF13H
// ------------------------------
unsigned int ADCBUF13H@0xe61 ;
// ------------------------------
//        ADCBUF14
// ------------------------------
unsigned int ADCBUF14@0xe62 ;
// ------------------------------
//        ADCBUF14L
// ------------------------------
unsigned int ADCBUF14L@0xe62 ;
// ------------------------------
//        ADCBUF14H
// ------------------------------
unsigned int ADCBUF14H@0xe63 ;
// ------------------------------
//        ADCBUF15
// ------------------------------
unsigned int ADCBUF15@0xe64 ;
// ------------------------------
//        ADCBUF15L
// ------------------------------
unsigned int ADCBUF15L@0xe64 ;
// ------------------------------
//        ADCBUF15H
// ------------------------------
unsigned int ADCBUF15H@0xe65 ;
// ------------------------------
//        ADCBUF16
// ------------------------------
unsigned int ADCBUF16@0xe66 ;
// ------------------------------
//        ADCBUF16L
// ------------------------------
unsigned int ADCBUF16L@0xe66 ;
// ------------------------------
//        ADCBUF16H
// ------------------------------
unsigned int ADCBUF16H@0xe67 ;
// ------------------------------
//        ADCBUF17
// ------------------------------
unsigned int ADCBUF17@0xe68 ;
// ------------------------------
//        ADCBUF17L
// ------------------------------
unsigned int ADCBUF17L@0xe68 ;
// ------------------------------
//        ADCBUF17H
// ------------------------------
unsigned int ADCBUF17H@0xe69 ;
// ------------------------------
//        ADCBUF18
// ------------------------------
unsigned int ADCBUF18@0xe6a ;
// ------------------------------
//        ADCBUF18L
// ------------------------------
unsigned int ADCBUF18L@0xe6a ;
// ------------------------------
//        ADCBUF18H
// ------------------------------
unsigned int ADCBUF18H@0xe6b ;
// ------------------------------
//        ADCBUF19
// ------------------------------
unsigned int ADCBUF19@0xe6c ;
// ------------------------------
//        ADCBUF19L
// ------------------------------
unsigned int ADCBUF19L@0xe6c ;
// ------------------------------
//        ADCBUF19H
// ------------------------------
unsigned int ADCBUF19H@0xe6d ;
// ------------------------------
//        ADCBUF20
// ------------------------------
unsigned int ADCBUF20@0xe6e ;
// ------------------------------
//        ADCBUF20L
// ------------------------------
unsigned int ADCBUF20L@0xe6e ;
// ------------------------------
//        ADCBUF20H
// ------------------------------
unsigned int ADCBUF20H@0xe6f ;
// ------------------------------
//        ADCBUF21
// ------------------------------
unsigned int ADCBUF21@0xe70 ;
// ------------------------------
//        ADCBUF21L
// ------------------------------
unsigned int ADCBUF21L@0xe70 ;
// ------------------------------
//        ADCBUF21H
// ------------------------------
unsigned int ADCBUF21H@0xe71 ;
// ------------------------------
//        ADCBUF22
// ------------------------------
unsigned int ADCBUF22@0xe72 ;
// ------------------------------
//        ADCBUF22L
// ------------------------------
unsigned int ADCBUF22L@0xe72 ;
// ------------------------------
//        ADCBUF22H
// ------------------------------
unsigned int ADCBUF22H@0xe73 ;
// ------------------------------
//        ADCBUF23
// ------------------------------
unsigned int ADCBUF23@0xe74 ;
// ------------------------------
//        ADCBUF23L
// ------------------------------
unsigned int ADCBUF23L@0xe74 ;
// ------------------------------
//        ADCBUF23H
// ------------------------------
unsigned int ADCBUF23H@0xe75 ;
// ------------------------------
//        ADCBUF24
// ------------------------------
unsigned int ADCBUF24@0xe76 ;
// ------------------------------
//        ADCBUF24L
// ------------------------------
unsigned int ADCBUF24L@0xe76 ;
// ------------------------------
//        ADCBUF24H
// ------------------------------
unsigned int ADCBUF24H@0xe77 ;
// ------------------------------
//        ADCBUF25
// ------------------------------
unsigned int ADCBUF25@0xe78 ;
// ------------------------------
//        ADCBUF25L
// ------------------------------
unsigned int ADCBUF25L@0xe78 ;
// ------------------------------
//        ADCBUF25H
// ------------------------------
unsigned int ADCBUF25H@0xe79 ;
// ------------------------------
//        ADCTMUEN0L
// ------------------------------
unsigned int ADCTMUEN0L@0xe7a ;
union
{

struct 
{
  unsigned int 
  CTMUEN0 : 1 ,
  CTMUEN1 : 1 ,
  CTMUEN2 : 1 ,
  CTMUEN3 : 1 ,
  CTMUEN4 : 1 ,
  CTMUEN5 : 1 ,
  CTMUEN6 : 1 ,
  CTMUEN7 : 1 ;
} ; 

} ADCTMUEN0Lbits@0xe7a  ;

// ------------------------------
//        ADCTMUEN0H
// ------------------------------
unsigned int ADCTMUEN0H@0xe7b ;
union
{

struct 
{
  unsigned int 
  CTMUEN8 : 1 ,
  CTMUEN9 : 1 ,
  CTMUEN10 : 1 ,
  CTMUEN11 : 1 ,
  CTMUEN12 : 1 ,
  CTMUEN13 : 1 ,
  CTMUEN14 : 1 ,
  CTMUEN15 : 1 ;
} ; 

} ADCTMUEN0Hbits@0xe7b  ;

// ------------------------------
//        ADCTMUEN1L
// ------------------------------
unsigned int ADCTMUEN1L@0xe7c ;
union
{

struct 
{
  unsigned int 
  CTUMEN16 : 1 ,
  CTUMEN17 : 1 ,
  CTUMEN18 : 1 ,
  CTUMEN19 : 1 ,
  CTMUEN20 : 1 ,
  CTMUEN21 : 1 ,
  CTMUEN22 : 1 ,
  CTMUEN23 : 1 ;
} ; 

} ADCTMUEN1Lbits@0xe7c  ;

// ------------------------------
//        ADCTMUEN1H
// ------------------------------
unsigned int ADCTMUEN1H@0xe7d ;
union
{

struct 
{
  unsigned int 
  CTUMEN24 : 1 ,
  CTUMEN25 : 1 ,
  CTUMEN26 : 1 ,
  CTUMEN27 : 1 ,
  CTUMEN28 : 1 ,
  CTUMEN29 : 1 ,
  CTMUEN30 : 1 ;
} ; 

} ADCTMUEN1Hbits@0xe7d  ;

// ------------------------------
//        ADCHIT0L
// ------------------------------
unsigned int ADCHIT0L@0xe7e ;
union
{

struct 
{
  unsigned int 
  CHH0 : 1 ,
  CHH1 : 1 ,
  CHH2 : 1 ,
  CHH3 : 1 ,
  CHH4 : 1 ,
  CHH5 : 1 ,
  CHH6 : 1 ,
  CHH7 : 1 ;
} ; 

} ADCHIT0Lbits@0xe7e  ;

// ------------------------------
//        ADCHIT0H
// ------------------------------
unsigned int ADCHIT0H@0xe7f ;
union
{

struct 
{
  unsigned int 
  CHH8 : 1 ,
  CHH9 : 1 ,
  CHH10 : 1 ,
  CHH11 : 1 ,
  CHH12 : 1 ,
  CHH13 : 1 ,
  CHH14 : 1 ,
  CHH15 : 1 ;
} ; 

} ADCHIT0Hbits@0xe7f  ;

// ------------------------------
//        ADCHIT1L
// ------------------------------
unsigned int ADCHIT1L@0xe80 ;
union
{

struct 
{
  unsigned int 
  CHH16 : 1 ,
  CHH17 : 1 ,
  CHH18 : 1 ,
  CHH19 : 1 ,
  CHH20 : 1 ,
  CHH21 : 1 ,
  CHH22 : 1 ,
  CHH23 : 1 ;
} ; 

} ADCHIT1Lbits@0xe80  ;

// ------------------------------
//        ADCHIT1H
// ------------------------------
unsigned int ADCHIT1H@0xe81 ;
union
{

struct 
{
  unsigned int 
  CHH24 : 1 ,
  CHH25 : 1 ,
  CHH26 : 1 ,
  CHH27 : 1 ,
  CHH28 : 1 ,
  CHH29 : 1 ,
  CHH30 : 1 ;
} ; 

} ADCHIT1Hbits@0xe81  ;

// ------------------------------
//        ADCSS0L
// ------------------------------
unsigned int ADCSS0L@0xe82 ;
union
{

struct 
{
  unsigned int 
  CSS0 : 1 ,
  CSS1 : 1 ,
  CSS2 : 1 ,
  CSS3 : 1 ,
  CSS4 : 1 ,
  CSS5 : 1 ,
  CSS6 : 1 ,
  CSS7 : 1 ;
} ; 

} ADCSS0Lbits@0xe82  ;

// ------------------------------
//        ADCSS0H
// ------------------------------
unsigned int ADCSS0H@0xe83 ;
union
{

struct 
{
  unsigned int 
  CSS8 : 1 ,
  CSS9 : 1 ,
  CSS10 : 1 ,
  CSS11 : 1 ,
  CSS12 : 1 ,
  CSS13 : 1 ,
  CSS14 : 1 ,
  CSS15 : 1 ;
} ; 

} ADCSS0Hbits@0xe83  ;

// ------------------------------
//        ADCSS1L
// ------------------------------
unsigned int ADCSS1L@0xe84 ;
union
{

struct 
{
  unsigned int 
  CSS16 : 1 ,
  CSS17 : 1 ,
  CSS18 : 1 ,
  CSS19 : 1 ,
  CSS20 : 1 ,
  CSS21 : 1 ,
  CSS22 : 1 ,
  CSS23 : 1 ;
} ; 

} ADCSS1Lbits@0xe84  ;

// ------------------------------
//        ADCSS1H
// ------------------------------
unsigned int ADCSS1H@0xe85 ;
union
{

struct 
{
  unsigned int 
  CSS24 : 1 ,
  CSS25 : 1 ,
  CSS26 : 1 ,
  CSS27 : 1 ,
  CSS28 : 1 ,
  CSS29 : 1 ,
  CSS30 : 1 ;
} ; 

} ADCSS1Hbits@0xe85  ;

// ------------------------------
//        ADCHS0L
// ------------------------------
unsigned int ADCHS0L@0xe86 ;
union
{

struct 
{
  unsigned int 
  CH0SA0 : 1 ,
  CH0SA1 : 1 ,
  CH0SA2 : 1 ,
  CH0SA3 : 1 ,
  CH0SA4 : 1 ,
  CH0NA0 : 1 ,
  CH0NA1 : 1 ,
  CH0NA2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CH0SA : 5 ,
  _CH0NA : 3 ;
} ; 

} ADCHS0Lbits@0xe86  ;

// ------------------------------
//        ADCHS0H
// ------------------------------
unsigned int ADCHS0H@0xe87 ;
union
{

struct 
{
  unsigned int 
  CH0SB0 : 1 ,
  CH0SB1 : 1 ,
  CH0SB2 : 1 ,
  CH0SB3 : 1 ,
  CH0SB4 : 1 ,
  CH0NB0 : 1 ,
  CH0NB1 : 1 ,
  CH0NB2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CH0SB : 5 ,
  _CH0NB : 3 ;
} ; 

} ADCHS0Hbits@0xe87  ;

// ------------------------------
//        ADCON5L
// ------------------------------
unsigned int ADCON5L@0xe88 ;
union
{

struct 
{
  unsigned int 
  CM0 : 1 ,
  CM1 : 1 ,
  WM0_ADCON5L : 1 ,
  WM1_ADCON5L : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CM : 2 ;
} ; 

} ADCON5Lbits@0xe88  ;

// ------------------------------
//        ADCON5H
// ------------------------------
unsigned int ADCON5H@0xe89 ;
union
{

struct 
{
  unsigned int 
  : 5,
  CTMUREQ : 1 ,
  LPENA : 1 ,
  ASENA : 1 ;
} ; 

struct 
{
  unsigned int 
  ASINTMD0 : 1 ,
  ASINTMD1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ASINTMD : 2 ;
} ; 

} ADCON5Hbits@0xe89  ;

// ------------------------------
//        ADCON3L
// ------------------------------
unsigned int ADCON3L@0xe8a ;
union
{

struct 
{
  unsigned int 
  ADCS0 : 1 ,
  ADCS1 : 1 ,
  ADCS2 : 1 ,
  ADCS3 : 1 ,
  ADCS4 : 1 ,
  ADCS5 : 1 ,
  ADCS6 : 1 ,
  ADCS7 : 1 ;
} ; 

} ADCON3Lbits@0xe8a  ;

// ------------------------------
//        ADCON3H
// ------------------------------
unsigned int ADCON3H@0xe8b ;
union
{

struct 
{
  unsigned int 
  : 5,
  PUMPEN : 1 ,
  EXTSAM : 1 ,
  ADRC : 1 ;
} ; 

struct 
{
  unsigned int 
  SAMC0 : 1 ,
  SAMC1 : 1 ,
  SAMC2 : 1 ,
  SAMC3 : 1 ,
  SAMC4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SAMC : 5 ;
} ; 

} ADCON3Hbits@0xe8b  ;

// ------------------------------
//        ADCON2L
// ------------------------------
unsigned int ADCON2L@0xe8c ;
union
{

struct 
{
  unsigned int 
  ALTS : 1 ,
  BUFM : 1 ,
  : 5,
  BUFS : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  SMPI0 : 1 ,
  SMPI1 : 1 ,
  SMPI2 : 1 ,
  SMPI3 : 1 ,
  SMPI4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _SMPI : 5 ;
} ; 

} ADCON2Lbits@0xe8c  ;

// ------------------------------
//        ADCON2H
// ------------------------------
unsigned int ADCON2H@0xe8d ;
union
{

struct 
{
  unsigned int 
  : 2,
  CSCNA : 1 ,
  BUFREGEN : 1 ,
  OFFCAL : 1 ,
  NVCFG0 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  PVCFG0 : 1 ,
  PVCFG1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 6,
  _PVCFG : 2 ;
} ; 

} ADCON2Hbits@0xe8d  ;

// ------------------------------
//        LCDDATA0
// ------------------------------
unsigned int LCDDATA0@0xe8e ;
union
{

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
  _S00C : 1 ,
  _S01C : 1 ,
  _S02C : 1 ,
  _S03C : 1 ,
  _S04C : 1 ,
  _S05C : 1 ,
  _S06C : 1 ;
} ; 

} LCDDATA0bits@0xe8e  ;

// ------------------------------
//        LCDDATA1
// ------------------------------
unsigned int LCDDATA1@0xe8f ;
union
{

struct 
{
  unsigned int 
  S08C0 : 1 ,
  S09C0 : 1 ,
  S10C0 : 1 ,
  S11C0 : 1 ,
  S12C0 : 1 ,
  S13C0 : 1 ,
  S14C0 : 1 ,
  S15C0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S08C : 1 ,
  _S09C : 1 ,
  _S10C : 1 ,
  _S11C : 1 ,
  _S12C : 1 ,
  _S13C : 1 ,
  _S14C : 1 ;
} ; 

} LCDDATA1bits@0xe8f  ;

// ------------------------------
//        LCDDATA2
// ------------------------------
unsigned int LCDDATA2@0xe90 ;
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

} LCDDATA2bits@0xe90  ;

// ------------------------------
//        LCDDATA3
// ------------------------------
unsigned int LCDDATA3@0xe91 ;
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

} LCDDATA3bits@0xe91  ;

// ------------------------------
//        LCDDATA4
// ------------------------------
unsigned int LCDDATA4@0xe92 ;
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

} LCDDATA4bits@0xe92  ;

// ------------------------------
//        LCDDATA5
// ------------------------------
unsigned int LCDDATA5@0xe93 ;
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

} LCDDATA5bits@0xe93  ;

// ------------------------------
//        LCDDATA6
// ------------------------------
unsigned int LCDDATA6@0xe94 ;
union
{

struct 
{
  unsigned int 
  S48C0 : 1 ,
  S49C0 : 1 ,
  S50C0 : 1 ,
  S51C0 : 1 ,
  S52C0 : 1 ,
  S53C0 : 1 ,
  S54C0 : 1 ,
  S55C0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S48C : 1 ,
  _S49C : 1 ,
  _S50C : 1 ,
  _S51C : 1 ,
  _S52C : 1 ,
  _S53C : 1 ,
  _S54C : 1 ;
} ; 

} LCDDATA6bits@0xe94  ;

// ------------------------------
//        LCDDATA7
// ------------------------------
unsigned int LCDDATA7@0xe95 ;
union
{

struct 
{
  unsigned int 
  S56C0 : 1 ,
  S57C0 : 1 ,
  S58C0 : 1 ,
  S59C0 : 1 ,
  S60C0 : 1 ,
  S61C0 : 1 ,
  S62C0 : 1 ,
  S63C0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _S56C : 1 ,
  _S57C : 1 ,
  _S58C : 1 ,
  _S59C : 1 ,
  _S60C : 1 ,
  _S61C : 1 ,
  _S62C : 1 ;
} ; 

} LCDDATA7bits@0xe95  ;

// ------------------------------
//        LCDDATA8
// ------------------------------
unsigned int LCDDATA8@0xe96 ;
union
{

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

} LCDDATA8bits@0xe96  ;

// ------------------------------
//        LCDDATA9
// ------------------------------
unsigned int LCDDATA9@0xe97 ;
union
{

struct 
{
  unsigned int 
  S08C1 : 1 ,
  S09C1 : 1 ,
  S10C1 : 1 ,
  S11C1 : 1 ,
  S12C1 : 1 ,
  S13C1 : 1 ,
  S14C1 : 1 ,
  S15C1 : 1 ;
} ; 

} LCDDATA9bits@0xe97  ;

// ------------------------------
//        LCDDATA10
// ------------------------------
unsigned int LCDDATA10@0xe98 ;
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

} LCDDATA10bits@0xe98  ;

// ------------------------------
//        LCDDATA11
// ------------------------------
unsigned int LCDDATA11@0xe99 ;
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

} LCDDATA11bits@0xe99  ;

// ------------------------------
//        LCDDATA12
// ------------------------------
unsigned int LCDDATA12@0xe9a ;
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

} LCDDATA12bits@0xe9a  ;

// ------------------------------
//        LCDDATA13
// ------------------------------
unsigned int LCDDATA13@0xe9b ;
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

} LCDDATA13bits@0xe9b  ;

// ------------------------------
//        LCDDATA14
// ------------------------------
unsigned int LCDDATA14@0xe9c ;
union
{

struct 
{
  unsigned int 
  S48C1 : 1 ,
  S49C1 : 1 ,
  S50C1 : 1 ,
  S51C1 : 1 ,
  S52C1 : 1 ,
  S53C1 : 1 ,
  S54C1 : 1 ,
  S55C1 : 1 ;
} ; 

} LCDDATA14bits@0xe9c  ;

// ------------------------------
//        LCDDATA15
// ------------------------------
unsigned int LCDDATA15@0xe9d ;
union
{

struct 
{
  unsigned int 
  S56C1 : 1 ,
  S57C1 : 1 ,
  S58C1 : 1 ,
  S59C1 : 1 ,
  S60C1 : 1 ,
  S61C1 : 1 ,
  S62C1 : 1 ,
  S63C1 : 1 ;
} ; 

} LCDDATA15bits@0xe9d  ;

// ------------------------------
//        LCDDATA16
// ------------------------------
unsigned int LCDDATA16@0xe9e ;
union
{

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

} LCDDATA16bits@0xe9e  ;

// ------------------------------
//        LCDDATA17
// ------------------------------
unsigned int LCDDATA17@0xe9f ;
union
{

struct 
{
  unsigned int 
  S08C2 : 1 ,
  S09C2 : 1 ,
  S10C2 : 1 ,
  S11C2 : 1 ,
  S12C2 : 1 ,
  S13C2 : 1 ,
  S14C2 : 1 ,
  S15C2 : 1 ;
} ; 

} LCDDATA17bits@0xe9f  ;

// ------------------------------
//        LCDDATA18
// ------------------------------
unsigned int LCDDATA18@0xea0 ;
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

} LCDDATA18bits@0xea0  ;

// ------------------------------
//        LCDDATA19
// ------------------------------
unsigned int LCDDATA19@0xea1 ;
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

} LCDDATA19bits@0xea1  ;

// ------------------------------
//        LCDDATA20
// ------------------------------
unsigned int LCDDATA20@0xea2 ;
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

} LCDDATA20bits@0xea2  ;

// ------------------------------
//        LCDDATA21
// ------------------------------
unsigned int LCDDATA21@0xea3 ;
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

} LCDDATA21bits@0xea3  ;

// ------------------------------
//        LCDDATA22
// ------------------------------
unsigned int LCDDATA22@0xea4 ;
union
{

struct 
{
  unsigned int 
  S48C2 : 1 ,
  S49C2 : 1 ,
  S50C2 : 1 ,
  S51C2 : 1 ,
  S52C2 : 1 ,
  S53C2 : 1 ,
  S54C2 : 1 ,
  S55C2 : 1 ;
} ; 

} LCDDATA22bits@0xea4  ;

// ------------------------------
//        LCDDATA23
// ------------------------------
unsigned int LCDDATA23@0xea5 ;
union
{

struct 
{
  unsigned int 
  S56C2 : 1 ,
  S57C2 : 1 ,
  S58C2 : 1 ,
  S59C2 : 1 ,
  S60C2 : 1 ,
  S61C2 : 1 ,
  S62C2 : 1 ,
  S63C2 : 1 ;
} ; 

} LCDDATA23bits@0xea5  ;

// ------------------------------
//        LCDDATA24
// ------------------------------
unsigned int LCDDATA24@0xea6 ;
union
{

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

} LCDDATA24bits@0xea6  ;

// ------------------------------
//        LCDDATA25
// ------------------------------
unsigned int LCDDATA25@0xea7 ;
union
{

struct 
{
  unsigned int 
  S08C3 : 1 ,
  S09C3 : 1 ,
  S10C3 : 1 ,
  S11C3 : 1 ,
  S12C3 : 1 ,
  S13C3 : 1 ,
  S14C3 : 1 ,
  S15C3 : 1 ;
} ; 

} LCDDATA25bits@0xea7  ;

// ------------------------------
//        LCDDATA26
// ------------------------------
unsigned int LCDDATA26@0xea8 ;
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

} LCDDATA26bits@0xea8  ;

// ------------------------------
//        LCDDATA27
// ------------------------------
unsigned int LCDDATA27@0xea9 ;
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

} LCDDATA27bits@0xea9  ;

// ------------------------------
//        LCDDATA28
// ------------------------------
unsigned int LCDDATA28@0xeaa ;
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

} LCDDATA28bits@0xeaa  ;

// ------------------------------
//        LCDDATA29
// ------------------------------
unsigned int LCDDATA29@0xeab ;
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

} LCDDATA29bits@0xeab  ;

// ------------------------------
//        LCDDATA30
// ------------------------------
unsigned int LCDDATA30@0xeac ;
union
{

struct 
{
  unsigned int 
  S48C3 : 1 ,
  S49C3 : 1 ,
  S50C3 : 1 ,
  S51C3 : 1 ,
  S52C3 : 1 ,
  S53C3 : 1 ,
  S54C3 : 1 ,
  S55C3 : 1 ;
} ; 

} LCDDATA30bits@0xeac  ;

// ------------------------------
//        LCDDATA31
// ------------------------------
unsigned int LCDDATA31@0xead ;
union
{

struct 
{
  unsigned int 
  S56C3 : 1 ,
  S57C3 : 1 ,
  S58C3 : 1 ,
  S59C3 : 1 ,
  S60C3 : 1 ,
  S61C3 : 1 ,
  S62C3 : 1 ,
  S63C3 : 1 ;
} ; 

} LCDDATA31bits@0xead  ;

// ------------------------------
//        LCDDATA32
// ------------------------------
unsigned int LCDDATA32@0xeae ;
union
{

struct 
{
  unsigned int 
  S00C4 : 1 ,
  S01C4 : 1 ,
  S02C4 : 1 ,
  S03C4 : 1 ,
  S04C4 : 1 ,
  S05C4 : 1 ,
  S06C4 : 1 ,
  S07C4 : 1 ;
} ; 

} LCDDATA32bits@0xeae  ;

// ------------------------------
//        LCDDATA33
// ------------------------------
unsigned int LCDDATA33@0xeaf ;
union
{

struct 
{
  unsigned int 
  S08C4 : 1 ,
  S09C4 : 1 ,
  S10C4 : 1 ,
  S11C4 : 1 ,
  S12C4 : 1 ,
  S13C4 : 1 ,
  S14C4 : 1 ,
  S15C4 : 1 ;
} ; 

} LCDDATA33bits@0xeaf  ;

// ------------------------------
//        LCDDATA34
// ------------------------------
unsigned int LCDDATA34@0xeb0 ;
union
{

struct 
{
  unsigned int 
  S16C4 : 1 ,
  S17C4 : 1 ,
  S18C4 : 1 ,
  S19C4 : 1 ,
  S20C4 : 1 ,
  S21C4 : 1 ,
  S22C4 : 1 ,
  S23C4 : 1 ;
} ; 

} LCDDATA34bits@0xeb0  ;

// ------------------------------
//        LCDDATA35
// ------------------------------
unsigned int LCDDATA35@0xeb1 ;
union
{

struct 
{
  unsigned int 
  S24C4 : 1 ,
  S25C4 : 1 ,
  S26C4 : 1 ,
  S27C4 : 1 ,
  S28C4 : 1 ,
  S29C4 : 1 ,
  S30C4 : 1 ,
  S31C4 : 1 ;
} ; 

} LCDDATA35bits@0xeb1  ;

// ------------------------------
//        LCDDATA36
// ------------------------------
unsigned int LCDDATA36@0xeb2 ;
union
{

struct 
{
  unsigned int 
  S32C4 : 1 ,
  S33C4 : 1 ,
  S34C4 : 1 ,
  S35C4 : 1 ,
  S36C4 : 1 ,
  S37C4 : 1 ,
  S38C4 : 1 ,
  S39C4 : 1 ;
} ; 

} LCDDATA36bits@0xeb2  ;

// ------------------------------
//        LCDDATA37
// ------------------------------
unsigned int LCDDATA37@0xeb3 ;
union
{

struct 
{
  unsigned int 
  S40C4 : 1 ,
  S41C4 : 1 ,
  S42C4 : 1 ,
  S43C4 : 1 ,
  S44C4 : 1 ,
  S45C4 : 1 ,
  S46C4 : 1 ,
  S47C4 : 1 ;
} ; 

} LCDDATA37bits@0xeb3  ;

// ------------------------------
//        LCDDATA38
// ------------------------------
unsigned int LCDDATA38@0xeb4 ;
union
{

struct 
{
  unsigned int 
  S48C4 : 1 ,
  S49C4 : 1 ,
  S50C4 : 1 ,
  S51C4 : 1 ,
  S52C4 : 1 ,
  S53C4 : 1 ,
  S54C4 : 1 ,
  S55C4 : 1 ;
} ; 

} LCDDATA38bits@0xeb4  ;

// ------------------------------
//        LCDDATA39
// ------------------------------
unsigned int LCDDATA39@0xeb5 ;
union
{

struct 
{
  unsigned int 
  S56C4 : 1 ,
  S57C4 : 1 ,
  S58C4 : 1 ,
  S59C4 : 1 ,
  S60C4 : 1 ,
  S61C4 : 1 ,
  S62C4 : 1 ,
  S63C4 : 1 ;
} ; 

} LCDDATA39bits@0xeb5  ;

// ------------------------------
//        LCDDATA40
// ------------------------------
unsigned int LCDDATA40@0xeb6 ;
union
{

struct 
{
  unsigned int 
  S00C5 : 1 ,
  S01C5 : 1 ,
  S02C5 : 1 ,
  S03C5 : 1 ,
  S04C5 : 1 ,
  S05C5 : 1 ,
  S06C5 : 1 ,
  S07C5 : 1 ;
} ; 

} LCDDATA40bits@0xeb6  ;

// ------------------------------
//        LCDDATA41
// ------------------------------
unsigned int LCDDATA41@0xeb7 ;
union
{

struct 
{
  unsigned int 
  S08C5 : 1 ,
  S09C5 : 1 ,
  S10C5 : 1 ,
  S11C5 : 1 ,
  S12C5 : 1 ,
  S13C5 : 1 ,
  S14C5 : 1 ,
  S15C5 : 1 ;
} ; 

} LCDDATA41bits@0xeb7  ;

// ------------------------------
//        LCDDATA42
// ------------------------------
unsigned int LCDDATA42@0xeb8 ;
union
{

struct 
{
  unsigned int 
  S16C5 : 1 ,
  S17C5 : 1 ,
  S18C5 : 1 ,
  S19C5 : 1 ,
  S20C5 : 1 ,
  S21C5 : 1 ,
  S22C5 : 1 ,
  S23C5 : 1 ;
} ; 

} LCDDATA42bits@0xeb8  ;

// ------------------------------
//        LCDDATA43
// ------------------------------
unsigned int LCDDATA43@0xeb9 ;
union
{

struct 
{
  unsigned int 
  S24C5 : 1 ,
  S25C5 : 1 ,
  S26C5 : 1 ,
  S27C5 : 1 ,
  S28C5 : 1 ,
  S29C5 : 1 ,
  S30C5 : 1 ,
  S31C5 : 1 ;
} ; 

} LCDDATA43bits@0xeb9  ;

// ------------------------------
//        LCDDATA44
// ------------------------------
unsigned int LCDDATA44@0xeba ;
union
{

struct 
{
  unsigned int 
  S32C5 : 1 ,
  S33C5 : 1 ,
  S34C5 : 1 ,
  S35C5 : 1 ,
  S36C5 : 1 ,
  S37C5 : 1 ,
  S38C5 : 1 ,
  S39C5 : 1 ;
} ; 

} LCDDATA44bits@0xeba  ;

// ------------------------------
//        LCDDATA45
// ------------------------------
unsigned int LCDDATA45@0xebb ;
union
{

struct 
{
  unsigned int 
  S40C5 : 1 ,
  S41C5 : 1 ,
  S42C5 : 1 ,
  S43C5 : 1 ,
  S44C5 : 1 ,
  S45C5 : 1 ,
  S46C5 : 1 ,
  S47C5 : 1 ;
} ; 

} LCDDATA45bits@0xebb  ;

// ------------------------------
//        LCDDATA46
// ------------------------------
unsigned int LCDDATA46@0xebc ;
union
{

struct 
{
  unsigned int 
  S48C5 : 1 ,
  S49C5 : 1 ,
  S50C5 : 1 ,
  S51C5 : 1 ,
  S52C5 : 1 ,
  S53C5 : 1 ,
  S54C5 : 1 ,
  S55C5 : 1 ;
} ; 

} LCDDATA46bits@0xebc  ;

// ------------------------------
//        LCDDATA47
// ------------------------------
unsigned int LCDDATA47@0xebd ;
union
{

struct 
{
  unsigned int 
  S56C5 : 1 ,
  S57C5 : 1 ,
  S58C5 : 1 ,
  S59C5 : 1 ,
  S60C5 : 1 ,
  S61C5 : 1 ,
  S62C5 : 1 ,
  S63C5 : 1 ;
} ; 

} LCDDATA47bits@0xebd  ;

// ------------------------------
//        LCDDATA48
// ------------------------------
unsigned int LCDDATA48@0xebe ;
union
{

struct 
{
  unsigned int 
  S00C6 : 1 ,
  S01C6 : 1 ,
  S02C6 : 1 ,
  S03C6 : 1 ,
  S04C6 : 1 ,
  S05C6 : 1 ,
  S06C6 : 1 ,
  S07C6 : 1 ;
} ; 

} LCDDATA48bits@0xebe  ;

// ------------------------------
//        LCDDATA49
// ------------------------------
unsigned int LCDDATA49@0xebf ;
union
{

struct 
{
  unsigned int 
  S08C6 : 1 ,
  S09C6 : 1 ,
  S10C6 : 1 ,
  S11C6 : 1 ,
  S12C6 : 1 ,
  S13C6 : 1 ,
  S14C6 : 1 ,
  S15C6 : 1 ;
} ; 

} LCDDATA49bits@0xebf  ;

// ------------------------------
//        LCDDATA50
// ------------------------------
unsigned int LCDDATA50@0xec0 ;
union
{

struct 
{
  unsigned int 
  S16C6 : 1 ,
  S17C6 : 1 ,
  S18C6 : 1 ,
  S19C6 : 1 ,
  S20C6 : 1 ,
  S21C6 : 1 ,
  S22C6 : 1 ,
  S23C6 : 1 ;
} ; 

} LCDDATA50bits@0xec0  ;

// ------------------------------
//        LCDDATA51
// ------------------------------
unsigned int LCDDATA51@0xec1 ;
union
{

struct 
{
  unsigned int 
  S24C6 : 1 ,
  S25C6 : 1 ,
  S26C6 : 1 ,
  S27C6 : 1 ,
  S28C6 : 1 ,
  S29C6 : 1 ,
  S30C6 : 1 ,
  S31C6 : 1 ;
} ; 

} LCDDATA51bits@0xec1  ;

// ------------------------------
//        LCDDATA52
// ------------------------------
unsigned int LCDDATA52@0xec2 ;
union
{

struct 
{
  unsigned int 
  S32C6 : 1 ,
  S33C6 : 1 ,
  S34C6 : 1 ,
  S35C6 : 1 ,
  S36C6 : 1 ,
  S37C6 : 1 ,
  S38C6 : 1 ,
  S39C6 : 1 ;
} ; 

} LCDDATA52bits@0xec2  ;

// ------------------------------
//        LCDDATA53
// ------------------------------
unsigned int LCDDATA53@0xec3 ;
union
{

struct 
{
  unsigned int 
  S40C6 : 1 ,
  S41C6 : 1 ,
  S42C6 : 1 ,
  S43C6 : 1 ,
  S44C6 : 1 ,
  S45C6 : 1 ,
  S46C6 : 1 ,
  S47C6 : 1 ;
} ; 

} LCDDATA53bits@0xec3  ;

// ------------------------------
//        LCDDATA54
// ------------------------------
unsigned int LCDDATA54@0xec4 ;
union
{

struct 
{
  unsigned int 
  S48C6 : 1 ,
  S49C6 : 1 ,
  S50C6 : 1 ,
  S51C6 : 1 ,
  S52C6 : 1 ,
  S53C6 : 1 ,
  S54C6 : 1 ,
  S55C6 : 1 ;
} ; 

} LCDDATA54bits@0xec4  ;

// ------------------------------
//        LCDDATA55
// ------------------------------
unsigned int LCDDATA55@0xec5 ;
union
{

struct 
{
  unsigned int 
  S56C6 : 1 ,
  S57C6 : 1 ,
  S58C6 : 1 ,
  S59C6 : 1 ,
  S60C6 : 1 ,
  S61C6 : 1 ,
  S62C6 : 1 ,
  S63C6 : 1 ;
} ; 

} LCDDATA55bits@0xec5  ;

// ------------------------------
//        LCDDATA56
// ------------------------------
unsigned int LCDDATA56@0xec6 ;
union
{

struct 
{
  unsigned int 
  S00C7 : 1 ,
  S01C7 : 1 ,
  S02C7 : 1 ,
  S03C7 : 1 ,
  S04C7 : 1 ,
  S05C7 : 1 ,
  S06C7 : 1 ,
  S07C7 : 1 ;
} ; 

} LCDDATA56bits@0xec6  ;

// ------------------------------
//        LCDDATA57
// ------------------------------
unsigned int LCDDATA57@0xec7 ;
union
{

struct 
{
  unsigned int 
  S08C7 : 1 ,
  S09C7 : 1 ,
  S10C7 : 1 ,
  S11C7 : 1 ,
  S12C7 : 1 ,
  S13C7 : 1 ,
  S14C7 : 1 ,
  S15C7 : 1 ;
} ; 

} LCDDATA57bits@0xec7  ;

// ------------------------------
//        LCDDATA58
// ------------------------------
unsigned int LCDDATA58@0xec8 ;
union
{

struct 
{
  unsigned int 
  S16C7 : 1 ,
  S17C7 : 1 ,
  S18C7 : 1 ,
  S19C7 : 1 ,
  S20C7 : 1 ,
  S21C7 : 1 ,
  S22C7 : 1 ,
  S23C7 : 1 ;
} ; 

} LCDDATA58bits@0xec8  ;

// ------------------------------
//        LCDDATA59
// ------------------------------
unsigned int LCDDATA59@0xec9 ;
union
{

struct 
{
  unsigned int 
  S24C7 : 1 ,
  S25C7 : 1 ,
  S26C7 : 1 ,
  S27C7 : 1 ,
  S28C7 : 1 ,
  S29C7 : 1 ,
  S30C7 : 1 ,
  S31C7 : 1 ;
} ; 

} LCDDATA59bits@0xec9  ;

// ------------------------------
//        LCDDATA60
// ------------------------------
unsigned int LCDDATA60@0xeca ;
union
{

struct 
{
  unsigned int 
  S32C7 : 1 ,
  S33C7 : 1 ,
  S34C7 : 1 ,
  S35C7 : 1 ,
  S36C7 : 1 ,
  S37C7 : 1 ,
  S38C7 : 1 ,
  S39C7 : 1 ;
} ; 

} LCDDATA60bits@0xeca  ;

// ------------------------------
//        LCDDATA61
// ------------------------------
unsigned int LCDDATA61@0xecb ;
union
{

struct 
{
  unsigned int 
  S40C7 : 1 ,
  S41C7 : 1 ,
  S42C7 : 1 ,
  S43C7 : 1 ,
  S44C7 : 1 ,
  S45C7 : 1 ,
  S46C7 : 1 ,
  S47C7 : 1 ;
} ; 

} LCDDATA61bits@0xecb  ;

// ------------------------------
//        LCDDATA62
// ------------------------------
unsigned int LCDDATA62@0xecc ;
union
{

struct 
{
  unsigned int 
  S48C7 : 1 ,
  S49C7 : 1 ,
  S50C7 : 1 ,
  S51C7 : 1 ,
  S52C7 : 1 ,
  S53C7 : 1 ,
  S54C7 : 1 ,
  S55C7 : 1 ;
} ; 

} LCDDATA62bits@0xecc  ;

// ------------------------------
//        LCDDATA63
// ------------------------------
unsigned int LCDDATA63@0xecd ;
union
{

struct 
{
  unsigned int 
  S56C7 : 1 ,
  S57C7 : 1 ,
  S58C7 : 1 ,
  S59C7 : 1 ,
  S60C7 : 1 ,
  S61C7 : 1 ,
  S62C7 : 1 ,
  S63C7 : 1 ;
} ; 

} LCDDATA63bits@0xecd  ;

// ------------------------------
//        LCDSE0
// ------------------------------
unsigned int LCDSE0@0xece ;
union
{

struct 
{
  unsigned int 
  SE00 : 1 ,
  SE01 : 1 ,
  SE02 : 1 ,
  SE03 : 1 ,
  SE04 : 1 ,
  SE05 : 1 ,
  SE06 : 1 ,
  SE07 : 1 ;
} ; 

} LCDSE0bits@0xece  ;

// ------------------------------
//        LCDSE1
// ------------------------------
unsigned int LCDSE1@0xecf ;
union
{

struct 
{
  unsigned int 
  SE08 : 1 ,
  SE09 : 1 ,
  SE10 : 1 ,
  SE11 : 1 ,
  SE12 : 1 ,
  SE13 : 1 ,
  SE14 : 1 ,
  SE15 : 1 ;
} ; 

} LCDSE1bits@0xecf  ;

// ------------------------------
//        LCDSE2
// ------------------------------
unsigned int LCDSE2@0xed0 ;
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

} LCDSE2bits@0xed0  ;

// ------------------------------
//        LCDSE3
// ------------------------------
unsigned int LCDSE3@0xed1 ;
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

} LCDSE3bits@0xed1  ;

// ------------------------------
//        LCDSE4
// ------------------------------
unsigned int LCDSE4@0xed2 ;
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

} LCDSE4bits@0xed2  ;

// ------------------------------
//        LCDSE5
// ------------------------------
unsigned int LCDSE5@0xed3 ;
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

} LCDSE5bits@0xed3  ;

// ------------------------------
//        LCDSE6
// ------------------------------
unsigned int LCDSE6@0xed4 ;
union
{

struct 
{
  unsigned int 
  SE48 : 1 ,
  SE49 : 1 ,
  SE50 : 1 ,
  SE51 : 1 ,
  SE52 : 1 ,
  SE53 : 1 ,
  SE54 : 1 ,
  SE55 : 1 ;
} ; 

} LCDSE6bits@0xed4  ;

// ------------------------------
//        LCDSE7
// ------------------------------
unsigned int LCDSE7@0xed5 ;
union
{

struct 
{
  unsigned int 
  SE56 : 1 ,
  SE57 : 1 ,
  SE58 : 1 ,
  SE59 : 1 ,
  SE60 : 1 ,
  SE61 : 1 ,
  SE62 : 1 ,
  SE63 : 1 ;
} ; 

} LCDSE7bits@0xed5  ;

// ------------------------------
//        LCDRL
// ------------------------------
unsigned int LCDRL@0xed6 ;
union
{

struct 
{
  unsigned int 
  LRLAT0 : 1 ,
  LRLAT1 : 1 ,
  LRLAT2 : 1 ,
  : 1,
  LRLBP0 : 1 ,
  LRLBP1 : 1 ,
  LRLAP0 : 1 ,
  LRLAP1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LRLAT : 3 ,
  : 1,
  _LRLBP : 2 ,
  _LRLAP : 2 ;
} ; 

} LCDRLbits@0xed6  ;

// ------------------------------
//        LCDREF
// ------------------------------
unsigned int LCDREF@0xed7 ;
union
{

struct 
{
  unsigned int 
  VLCD1PE : 1 ,
  VLCD2PE : 1 ,
  VLCD3PE : 1 ,
  : 4,
  LCDIRE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  LCDCST0 : 1 ,
  LCDCST1 : 1 ,
  LCDCST2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 3,
  _LCDCST : 3 ;
} ; 

} LCDREFbits@0xed7  ;

// ------------------------------
//        LCDREG
// ------------------------------
unsigned int LCDREG@0xed8 ;
union
{

struct 
{
  unsigned int 
  : 2,
  MODE13 : 1 ,
  : 4,
  CPEN : 1 ;
} ; 

struct 
{
  unsigned int 
  CLKSEL0 : 1 ,
  CLKSEL1 : 1 ,
  : 1,
  BIAS0 : 1 ,
  BIAS1 : 1 ,
  BIAS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CLKSEL : 2 ,
  : 1,
  _BIAS : 3 ;
} ; 

} LCDREGbits@0xed8  ;

// ------------------------------
//        LCDCON
// ------------------------------
unsigned int LCDCON@0xed9 ;
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
  LMUX2 : 1 ,
  CS0 : 1 ,
  CS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LMUX : 3 ,
  _CS : 2 ;
} ; 

} LCDCONbits@0xed9  ;

// ------------------------------
//        LCDPS
// ------------------------------
unsigned int LCDPS@0xeda ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _LP : 4 ;
} ; 

} LCDPSbits@0xeda  ;

// ------------------------------
//        REFO2CON3
// ------------------------------
unsigned int REFO2CON3@0xedb ;
union
{

struct 
{
  unsigned int 
  RODIV8 : 1 ,
  RODIV9 : 1 ,
  RODIV10 : 1 ,
  RODIV11 : 1 ,
  RODIV12 : 1 ,
  RODIV13 : 1 ,
  RODIV14 : 1 ;
} ; 

} REFO2CON3bits@0xedb  ;

// ------------------------------
//        REFO2CON2
// ------------------------------
unsigned int REFO2CON2@0xedc ;
union
{

struct 
{
  unsigned int 
  RODIV0 : 1 ,
  RODIV1 : 1 ,
  RODIV2 : 1 ,
  RODIV3 : 1 ,
  RODIV4 : 1 ,
  RODIV5 : 1 ,
  RODIV6 : 1 ,
  RODIV7 : 1 ;
} ; 

} REFO2CON2bits@0xedc  ;

// ------------------------------
//        REFO2CON1
// ------------------------------
unsigned int REFO2CON1@0xedd ;
union
{

struct 
{
  unsigned int 
  ROSEL0 : 1 ,
  ROSEL1 : 1 ,
  ROSEL2 : 1 ,
  ROSEL3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ROSEL : 4 ;
} ; 

} REFO2CON1bits@0xedd  ;

// ------------------------------
//        REFO2CON
// ------------------------------
unsigned int REFO2CON@0xede ;
union
{

struct 
{
  unsigned int 
  ACTIVE : 1 ,
  DIVSWEN : 1 ,
  : 1,
  ROSSLP : 1 ,
  ROOE : 1 ,
  ROSIDL : 1 ,
  : 1,
  ROON : 1 ;
} ; 

} REFO2CONbits@0xede  ;

// ------------------------------
//        REFO1CON3
// ------------------------------
unsigned int REFO1CON3@0xedf ;
union
{

struct 
{
  unsigned int 
  RODIV8 : 1 ,
  RODIV9 : 1 ,
  RODIV10 : 1 ,
  RODIV11 : 1 ,
  RODIV12 : 1 ,
  RODIV13 : 1 ,
  RODIV14 : 1 ;
} ; 

} REFO1CON3bits@0xedf  ;

// ------------------------------
//        REFO1CON2
// ------------------------------
unsigned int REFO1CON2@0xee0 ;
union
{

struct 
{
  unsigned int 
  RODIV0 : 1 ,
  RODIV1 : 1 ,
  RODIV2 : 1 ,
  RODIV3 : 1 ,
  RODIV4 : 1 ,
  RODIV5 : 1 ,
  RODIV6 : 1 ,
  RODIV7 : 1 ;
} ; 

} REFO1CON2bits@0xee0  ;

// ------------------------------
//        REFO1CON1
// ------------------------------
unsigned int REFO1CON1@0xee1 ;
union
{

struct 
{
  unsigned int 
  ROSEL0 : 1 ,
  ROSEL1 : 1 ,
  ROSEL2 : 1 ,
  ROSEL3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ROSEL : 4 ;
} ; 

} REFO1CON1bits@0xee1  ;

// ------------------------------
//        REFO1CON
// ------------------------------
unsigned int REFO1CON@0xee2 ;
union
{

struct 
{
  unsigned int 
  ACTIVE : 1 ,
  DIVSWEN : 1 ,
  : 1,
  ROSSLP : 1 ,
  ROOE : 1 ,
  ROSIDL : 1 ,
  : 1,
  ROON : 1 ;
} ; 

} REFO1CONbits@0xee2  ;

// ------------------------------
//        MEMCON
// ------------------------------
unsigned int MEMCON@0xee3 ;
union
{

struct 
{
  unsigned int 
  : 7,
  EBDIS : 1 ;
} ; 

struct 
{
  unsigned int 
  WM0_MEMCON : 1 ,
  WM1_MEMCON : 1 ,
  : 2,
  WAIT0 : 1 ,
  WAIT1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _WAIT : 2 ;
} ; 

} MEMCONbits@0xee3  ;

// ------------------------------
//        ODCON2
// ------------------------------
unsigned int ODCON2@0xeea ;
union
{

struct 
{
  unsigned int 
  ECCP3OD : 1 ,
  CCP4OD : 1 ,
  CCP5OD : 1 ,
  CCP6OD : 1 ,
  CCP7OD : 1 ,
  CCP8OD : 1 ,
  CCP9OD : 1 ,
  CCP10OD : 1 ;
} ; 

} ODCON2bits@0xeea  ;

// ------------------------------
//        ODCON1
// ------------------------------
unsigned int ODCON1@0xeeb ;
union
{

struct 
{
  unsigned int 
  SSP1OD : 1 ,
  SSP2OD : 1 ,
  USART1OD : 1 ,
  USART2OD : 1 ,
  USART3OD : 1 ,
  USART4OD : 1 ,
  ECCP1OD : 1 ,
  ECCP2OD : 1 ;
} ; 

} ODCON1bits@0xeeb  ;

// ------------------------------
//        MDCARL
// ------------------------------
unsigned int MDCARL@0xeec ;
union
{

struct 
{
  unsigned int 
  : 5,
  MDCLSYNC : 1 ,
  MDCLPOL : 1 ,
  MDCLODIS : 1 ;
} ; 

struct 
{
  unsigned int 
  MDCL0 : 1 ,
  MDCL1 : 1 ,
  MDCL2 : 1 ,
  MDCL3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _MDCL : 4 ;
} ; 

} MDCARLbits@0xeec  ;

// ------------------------------
//        MDCARH
// ------------------------------
unsigned int MDCARH@0xeed ;
union
{

struct 
{
  unsigned int 
  : 5,
  MDCHSYNC : 1 ,
  MDCHPOL : 1 ,
  MDCHODIS : 1 ;
} ; 

struct 
{
  unsigned int 
  MDCH0 : 1 ,
  MDCH1 : 1 ,
  MDCH2 : 1 ,
  MDCH3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _MDCH : 4 ;
} ; 

} MDCARHbits@0xeed  ;

// ------------------------------
//        MDSRC
// ------------------------------
unsigned int MDSRC@0xeee ;
union
{

struct 
{
  unsigned int 
  : 7,
  MDSODIS : 1 ;
} ; 

struct 
{
  unsigned int 
  MDSRC0 : 1 ,
  MDSRC1 : 1 ,
  MDSRC2 : 1 ,
  MDSRC3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _MDSRC : 4 ;
} ; 

} MDSRCbits@0xeee  ;

// ------------------------------
//        MDCON
// ------------------------------
unsigned int MDCON@0xeef ;
union
{

struct 
{
  unsigned int 
  MDBIT : 1 ,
  : 2,
  MDO : 1 ,
  MDOPOL : 1 ,
  MDSLR : 1 ,
  MDOE : 1 ,
  MDEN : 1 ;
} ; 

} MDCONbits@0xeef  ;

// ------------------------------
//        PMD4
// ------------------------------
unsigned int PMD4@0xef0 ;
union
{

struct 
{
  unsigned int 
  EMBMD : 1 ,
  : 1,
  LVDMD : 1 ,
  IOCMD : 1 ,
  USBMD : 1 ,
  CMP3MD : 1 ,
  CMP2MD : 1 ,
  CMP1MD : 1 ;
} ; 

} PMD4bits@0xef0  ;

// ------------------------------
//        PMD3
// ------------------------------
unsigned int PMD3@0xef1 ;
union
{

struct 
{
  unsigned int 
  REFO2MD : 1 ,
  REFO1MD : 1 ,
  PSPMD : 1 ,
  LCDMD : 1 ,
  RTCCMD : 1 ,
  ADCMD : 1 ,
  CTMUMD : 1 ,
  MODMD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 7,
  TXMMD : 1 ;
} ; 

} PMD3bits@0xef1  ;

// ------------------------------
//        PMD2
// ------------------------------
unsigned int PMD2@0xef2 ;
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
  TMR5MD : 1 ,
  TMR6MD : 1 ,
  TMR8MD : 1 ;
} ; 

} PMD2bits@0xef2  ;

// ------------------------------
//        PMD1
// ------------------------------
unsigned int PMD1@0xef3 ;
union
{

struct 
{
  unsigned int 
  SSP1MD : 1 ,
  SSP2MD : 1 ,
  UART1MD : 1 ,
  UART2MD : 1 ,
  UART3MD : 1 ,
  UART4MD : 1 ,
  ECCP1MD : 1 ,
  ECCP2MD : 1 ;
} ; 

} PMD1bits@0xef3  ;

// ------------------------------
//        PMD0
// ------------------------------
unsigned int PMD0@0xef4 ;
union
{

struct 
{
  unsigned int 
  ECCP3MD : 1 ,
  CCP4MD : 1 ,
  CCP5MD : 1 ,
  CCP6MD : 1 ,
  CCP7MD : 1 ,
  CCP8MD : 1 ,
  CCP9MD : 1 ,
  CCP10MD : 1 ;
} ; 

} PMD0bits@0xef4  ;

// ------------------------------
//        CTMUCON4
// ------------------------------
unsigned int CTMUCON4@0xef5 ;
union
{

struct 
{
  unsigned int 
  EDG1STAT : 1 ,
  EDG2STAT : 1 ,
  : 4,
  EDG1POL : 1 ,
  EDG1EN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  EDG1SEL0 : 1 ,
  EDG1SEL1 : 1 ,
  EDG1SEL2 : 1 ,
  EDG1SEL3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _EDG1SEL : 4 ;
} ; 

} CTMUCON4bits@0xef5  ;

// ------------------------------
//        CTMUCON3
// ------------------------------
unsigned int CTMUCON3@0xef6 ;
union
{

struct 
{
  unsigned int 
  : 6,
  EDG2POL : 1 ,
  EDG2EN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  EDG2SEL0 : 1 ,
  EDG2SEL1 : 1 ,
  EDG2SEL2 : 1 ,
  EDG2SEL3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _EDG2SEL : 4 ;
} ; 

} CTMUCON3bits@0xef6  ;

// ------------------------------
//        CTMUCON2
// ------------------------------
unsigned int CTMUCON2@0xef7 ;
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

} CTMUCON2bits@0xef7  ;

// ------------------------------
//        CTMUCON1
// ------------------------------
unsigned int CTMUCON1@0xef8 ;
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

} CTMUCON1bits@0xef8  ;

// ------------------------------
//        TXREG4
// ------------------------------
unsigned int TXREG4@0xef9 ;
// ------------------------------
//        RCREG4
// ------------------------------
unsigned int RCREG4@0xefa ;
// ------------------------------
//        SPBRG4
// ------------------------------
unsigned int SPBRG4@0xefb ;
union
{

struct 
{
  unsigned int 
  BRG0 : 1 ,
  BRG1 : 1 ,
  BRG2 : 1 ,
  BRG3 : 1 ,
  BRG4 : 1 ,
  BRG5 : 1 ,
  BRG6 : 1 ,
  BRG7 : 1 ;
} ; 

} SPBRG4bits@0xefb  ;

// ------------------------------
//        SPBRGH4
// ------------------------------
unsigned int SPBRGH4@0xefc ;
union
{

struct 
{
  unsigned int 
  BRG8 : 1 ,
  BRG9 : 1 ,
  BRG10 : 1 ,
  BRG11 : 1 ,
  BRG12 : 1 ,
  BRG13 : 1 ,
  BRG14 : 1 ,
  BRG15 : 1 ;
} ; 

} SPBRGH4bits@0xefc  ;

// ------------------------------
//        BAUDCON4
// ------------------------------
unsigned int BAUDCON4@0xefd ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  IREN : 1 ,
  BRG16 : 1 ,
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

} BAUDCON4bits@0xefd  ;

// ------------------------------
//        TXSTA4
// ------------------------------
unsigned int TXSTA4@0xefe ;
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

} TXSTA4bits@0xefe  ;

// ------------------------------
//        RCSTA4
// ------------------------------
unsigned int RCSTA4@0xeff ;
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

} RCSTA4bits@0xeff  ;

// ------------------------------
//        DMACON2
// ------------------------------
unsigned int DMACON2@0xf00 ;
union
{

struct 
{
  unsigned int 
  INTLVL0 : 1 ,
  INTLVL1 : 1 ,
  INTLVL2 : 1 ,
  INTLVL3 : 1 ,
  DLYCYC0 : 1 ,
  DLYCYC1 : 1 ,
  DLYCYC2 : 1 ,
  DLYCYC3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INTLVL : 4 ,
  _DLYCYC : 4 ;
} ; 

} DMACON2bits@0xf00  ;

// ------------------------------
//        ANCFG
// ------------------------------
unsigned int ANCFG@0xf01 ;
union
{

struct 
{
  unsigned int 
  VBGEN : 1 ,
  VBG2EN : 1 ,
  VBG6EN : 1 ;
} ; 

} ANCFGbits@0xf01  ;

// ------------------------------
//        SSP2ADD
// ------------------------------
unsigned int SSP2ADD@0xf02 ;
// ------------------------------
//        SSP2BUF
// ------------------------------
unsigned int SSP2BUF@0xf03 ;
// ------------------------------
//        T4CON
// ------------------------------
unsigned int T4CON@0xf04 ;
union
{

struct 
{
  unsigned int 
  : 2,
  TMR4ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T4CKPS0 : 1 ,
  T4CKPS1 : 1 ,
  : 1,
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

} T4CONbits@0xf04  ;

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xf05 ;
// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf06 ;
// ------------------------------
//        CCP7CON
// ------------------------------
unsigned int CCP7CON@0xf07 ;
union
{

struct 
{
  unsigned int 
  CCP7M0 : 1 ,
  CCP7M1 : 1 ,
  CCP7M2 : 1 ,
  CCP7M3 : 1 ,
  DC7B0 : 1 ,
  DC7B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP7Y : 1 ,
  CCP7X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP7M : 4 ,
  _DC7B : 2 ;
} ; 

} CCP7CONbits@0xf07  ;

// ------------------------------
//        CCPR7
// ------------------------------
unsigned int CCPR7@0xf08 ;
// ------------------------------
//        CCPR7L
// ------------------------------
unsigned int CCPR7L@0xf08 ;
// ------------------------------
//        CCPR7H
// ------------------------------
unsigned int CCPR7H@0xf09 ;
// ------------------------------
//        CCP6CON
// ------------------------------
unsigned int CCP6CON@0xf0a ;
union
{

struct 
{
  unsigned int 
  CCP6M0 : 1 ,
  CCP6M1 : 1 ,
  CCP6M2 : 1 ,
  CCP6M3 : 1 ,
  DC6B0 : 1 ,
  DC6B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP6Y : 1 ,
  CCP6X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP6M : 4 ,
  _DC6B : 2 ;
} ; 

} CCP6CONbits@0xf0a  ;

// ------------------------------
//        CCPR6
// ------------------------------
unsigned int CCPR6@0xf0b ;
// ------------------------------
//        CCPR6L
// ------------------------------
unsigned int CCPR6L@0xf0b ;
// ------------------------------
//        CCPR6H
// ------------------------------
unsigned int CCPR6H@0xf0c ;
// ------------------------------
//        CCP5CON
// ------------------------------
unsigned int CCP5CON@0xf0d ;
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

} CCP5CONbits@0xf0d  ;

// ------------------------------
//        CCPR5
// ------------------------------
unsigned int CCPR5@0xf0e ;
// ------------------------------
//        CCPR5L
// ------------------------------
unsigned int CCPR5L@0xf0e ;
// ------------------------------
//        CCPR5H
// ------------------------------
unsigned int CCPR5H@0xf0f ;
// ------------------------------
//        CCP4CON
// ------------------------------
unsigned int CCP4CON@0xf10 ;
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

} CCP4CONbits@0xf10  ;

// ------------------------------
//        CCPR4
// ------------------------------
unsigned int CCPR4@0xf11 ;
// ------------------------------
//        CCPR4L
// ------------------------------
unsigned int CCPR4L@0xf11 ;
// ------------------------------
//        CCPR4H
// ------------------------------
unsigned int CCPR4H@0xf12 ;
// ------------------------------
//        T5GCON
// ------------------------------
unsigned int T5GCON@0xf13 ;
union
{

struct 
{
  unsigned int 
  : 2,
  T5GVAL : 1 ,
  T5GGO_NOT_T5DONE : 1 ,
  T5GSPM : 1 ,
  T5GTM : 1 ,
  T5GPOL : 1 ,
  TMR5GE : 1 ;
} ; 

struct 
{
  unsigned int 
  T5GSS0 : 1 ,
  T5GSS1 : 1 ,
  : 1,
  T5GGO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  NOT_T5DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T5GSS : 2 ;
} ; 

} T5GCONbits@0xf13  ;

// ------------------------------
//        T5CON
// ------------------------------
unsigned int T5CON@0xf14 ;
union
{

struct 
{
  unsigned int 
  TMR5ON : 1 ,
  RD16 : 1 ,
  NOT_T5SYNC : 1 ,
  SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  T5CKPS0 : 1 ,
  T5CKPS1 : 1 ,
  TMR5CS0 : 1 ,
  TMR5CS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T5CKPS : 2 ,
  _TMR5CS : 2 ;
} ; 

} T5CONbits@0xf14  ;

// ------------------------------
//        TMR5
// ------------------------------
unsigned int TMR5@0xf15 ;
// ------------------------------
//        TMR5L
// ------------------------------
unsigned int TMR5L@0xf15 ;
// ------------------------------
//        TMR5H
// ------------------------------
unsigned int TMR5H@0xf16 ;
// ------------------------------
//        SSP2MSK
// ------------------------------
unsigned int SSP2MSK@0xf17 ;
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

} SSP2MSKbits@0xf17  ;

// ------------------------------
//        SSP2CON2
// ------------------------------
unsigned int SSP2CON2@0xf18 ;
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

} SSP2CON2bits@0xf18  ;

// ------------------------------
//        SSP2CON1
// ------------------------------
unsigned int SSP2CON1@0xf19 ;
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

} SSP2CON1bits@0xf19  ;

// ------------------------------
//        SSP2STAT
// ------------------------------
unsigned int SSP2STAT@0xf1a ;
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
  I2C_START : 1 ,
  I2C_STOP : 1 ,
  I2C_DAT : 1 ;
} ; 

} SSP2STATbits@0xf1a  ;

// ------------------------------
//        PSTR3CON
// ------------------------------
unsigned int PSTR3CON@0xf1b ;
union
{

struct 
{
  unsigned int 
  STRA : 1 ,
  STRB : 1 ,
  STRC : 1 ,
  STRD : 1 ,
  STRSYNC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
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

} PSTR3CONbits@0xf1b  ;

// ------------------------------
//        PSTR2CON
// ------------------------------
unsigned int PSTR2CON@0xf1c ;
union
{

struct 
{
  unsigned int 
  STRA : 1 ,
  STRB : 1 ,
  STRC : 1 ,
  STRD : 1 ,
  STRSYNC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
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

} PSTR2CONbits@0xf1c  ;

// ------------------------------
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xf1d ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xf1e ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xf1f ;
union
{

struct 
{
  unsigned int 
  BRG0 : 1 ,
  BRG1 : 1 ,
  BRG2 : 1 ,
  BRG3 : 1 ,
  BRG4 : 1 ,
  BRG5 : 1 ,
  BRG6 : 1 ,
  BRG7 : 1 ;
} ; 

} SPBRG2bits@0xf1f  ;

// ------------------------------
//        SPBRGH2
// ------------------------------
unsigned int SPBRGH2@0xf20 ;
union
{

struct 
{
  unsigned int 
  BRG8 : 1 ,
  BRG9 : 1 ,
  BRG10 : 1 ,
  BRG11 : 1 ,
  BRG12 : 1 ,
  BRG13 : 1 ,
  BRG14 : 1 ,
  BRG15 : 1 ;
} ; 

} SPBRGH2bits@0xf20  ;

// ------------------------------
//        DSGPR3
// ------------------------------
unsigned int DSGPR3@0xf21 ;
// ------------------------------
//        DSGPR2
// ------------------------------
unsigned int DSGPR2@0xf22 ;
// ------------------------------
//        DSGPR1
// ------------------------------
unsigned int DSGPR1@0xf23 ;
// ------------------------------
//        DSGPR0
// ------------------------------
unsigned int DSGPR0@0xf24 ;
// ------------------------------
//        DSWAKEH
// ------------------------------
unsigned int DSWAKEH@0xf25 ;
union
{

struct 
{
  unsigned int 
  DSINT0 : 1 ;
} ; 

} DSWAKEHbits@0xf25  ;

// ------------------------------
//        DSWAKEL
// ------------------------------
unsigned int DSWAKEL@0xf26 ;
union
{

struct 
{
  unsigned int 
  DSPOR : 1 ,
  DSICD : 1 ,
  DSMCLR : 1 ,
  DSRTC : 1 ,
  DSWDT : 1 ,
  DSULP : 1 ,
  BOR_DSWAKEL : 1 ,
  DSFLT : 1 ;
} ; 

} DSWAKELbits@0xf26  ;

// ------------------------------
//        DSCONH
// ------------------------------
unsigned int DSCONH@0xf27 ;
union
{

struct 
{
  unsigned int 
  RTCWDIS : 1 ,
  : 6,
  DSEN : 1 ;
} ; 

} DSCONHbits@0xf27  ;

// ------------------------------
//        DSCONL
// ------------------------------
unsigned int DSCONL@0xf28 ;
union
{

struct 
{
  unsigned int 
  RELEASE : 1 ,
  DSBOR : 1 ,
  ULPWDIS : 1 ;
} ; 

} DSCONLbits@0xf28  ;

// ------------------------------
//        TXREG3
// ------------------------------
unsigned int TXREG3@0xf29 ;
// ------------------------------
//        RCREG3
// ------------------------------
unsigned int RCREG3@0xf2a ;
// ------------------------------
//        SPBRG3
// ------------------------------
unsigned int SPBRG3@0xf2b ;
union
{

struct 
{
  unsigned int 
  BRG0 : 1 ,
  BRG1 : 1 ,
  BRG2 : 1 ,
  BRG3 : 1 ,
  BRG4 : 1 ,
  BRG5 : 1 ,
  BRG6 : 1 ,
  BRG7 : 1 ;
} ; 

} SPBRG3bits@0xf2b  ;

// ------------------------------
//        SPBRGH3
// ------------------------------
unsigned int SPBRGH3@0xf2c ;
union
{

struct 
{
  unsigned int 
  BRG8 : 1 ,
  BRG9 : 1 ,
  BRG10 : 1 ,
  BRG11 : 1 ,
  BRG12 : 1 ,
  BRG13 : 1 ,
  BRG14 : 1 ,
  BRG15 : 1 ;
} ; 

} SPBRGH3bits@0xf2c  ;

// ------------------------------
//        BAUDCON3
// ------------------------------
unsigned int BAUDCON3@0xf2d ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  IREN : 1 ,
  BRG16 : 1 ,
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

} BAUDCON3bits@0xf2d  ;

// ------------------------------
//        TXSTA3
// ------------------------------
unsigned int TXSTA3@0xf2e ;
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

} TXSTA3bits@0xf2e  ;

// ------------------------------
//        RCSTA3
// ------------------------------
unsigned int RCSTA3@0xf2f ;
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

} RCSTA3bits@0xf2f  ;

// ------------------------------
//        SPBRGH
// ------------------------------
unsigned int SPBRGH@0xf30 ;
union
{

struct 
{
  unsigned int 
  BRG8 : 1 ,
  BRG9 : 1 ,
  BRG10 : 1 ,
  BRG11 : 1 ,
  BRG12 : 1 ,
  BRG13 : 1 ,
  BRG14 : 1 ,
  BRG15 : 1 ;
} ; 

} SPBRGHbits@0xf30  ;

// ------------------------------
//        SPBRGH1
// ------------------------------
unsigned int SPBRGH1@0xf30 ;
union
{

struct 
{
  unsigned int 
  BRG8 : 1 ,
  BRG9 : 1 ,
  BRG10 : 1 ,
  BRG11 : 1 ,
  BRG12 : 1 ,
  BRG13 : 1 ,
  BRG14 : 1 ,
  BRG15 : 1 ;
} ; 

} SPBRGH1bits@0xf30  ;

// ------------------------------
//        BAUDCON2
// ------------------------------
unsigned int BAUDCON2@0xf31 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  IREN : 1 ,
  BRG16 : 1 ,
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

} BAUDCON2bits@0xf31  ;

// ------------------------------
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xf32 ;
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

} TXSTA2bits@0xf32  ;

// ------------------------------
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf33 ;
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

} RCSTA2bits@0xf33  ;

// ------------------------------
//        CCPTMRS2
// ------------------------------
unsigned int CCPTMRS2@0xf34 ;
union
{

struct 
{
  unsigned int 
  : 2,
  C9TSEL : 1 ,
  : 1,
  C10TSEL : 1 ;
} ; 

struct 
{
  unsigned int 
  C8TSEL0 : 1 ,
  C8TSEL1 : 1 ,
  C9TSEL0 : 1 ,
  : 1,
  C10TSEL0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C8TSEL : 2 ,
  _C9TSEL : 1 ;
} ; 

} CCPTMRS2bits@0xf34  ;

// ------------------------------
//        CCPTMRS1
// ------------------------------
unsigned int CCPTMRS1@0xf35 ;
union
{

struct 
{
  unsigned int 
  : 2,
  C5TSEL : 1 ,
  : 1,
  C6TSEL : 1 ;
} ; 

struct 
{
  unsigned int 
  C4TSEL0 : 1 ,
  C4TSEL1 : 1 ,
  C5TSEL0 : 1 ,
  : 1,
  C6TSEL0 : 1 ,
  : 1,
  C7TSEL0 : 1 ,
  C7TSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C4TSEL : 2 ,
  _C5TSEL : 1 ,
  : 1,
  _C6TSEL : 1 ,
  : 1,
  _C7TSEL : 2 ;
} ; 

} CCPTMRS1bits@0xf35  ;

// ------------------------------
//        CCPTMRS0
// ------------------------------
unsigned int CCPTMRS0@0xf36 ;
union
{

struct 
{
  unsigned int 
  C1TSEL0 : 1 ,
  C1TSEL1 : 1 ,
  C1TSEL2 : 1 ,
  C2TSEL0 : 1 ,
  C2TSEL1 : 1 ,
  C2TSEL2 : 1 ,
  C3TSEL0 : 1 ,
  C3TSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C1TSEL : 3 ,
  _C2TSEL : 3 ,
  _C3TSEL : 2 ;
} ; 

} CCPTMRS0bits@0xf36  ;

// ------------------------------
//        CM3CON
// ------------------------------
unsigned int CM3CON@0xf37 ;
union
{

struct 
{
  unsigned int 
  : 2,
  CREF : 1 ,
  : 2,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  : 1,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM3CONbits@0xf37  ;

// ------------------------------
//        CM2CON
// ------------------------------
unsigned int CM2CON@0xf38 ;
union
{

struct 
{
  unsigned int 
  : 2,
  CREF : 1 ,
  : 2,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  : 1,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM2CONbits@0xf38  ;

// ------------------------------
//        SSP2CON3
// ------------------------------
unsigned int SSP2CON3@0xf39 ;
union
{

struct 
{
  unsigned int 
  DHEN : 1 ,
  AHEN : 1 ,
  SBCDE : 1 ,
  SDAHT : 1 ,
  BOEN : 1 ,
  SCIE : 1 ,
  PCIE : 1 ,
  ACKTIM : 1 ;
} ; 

} SSP2CON3bits@0xf39  ;

// ------------------------------
//        T8CON
// ------------------------------
unsigned int T8CON@0xf3a ;
union
{

struct 
{
  unsigned int 
  : 2,
  TMR8ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T8CKPS0 : 1 ,
  T8CKPS1 : 1 ,
  : 1,
  T8OUTPS0 : 1 ,
  T8OUTPS1 : 1 ,
  T8OUTPS2 : 1 ,
  T8OUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T8CKPS : 2 ,
  : 1,
  _T8OUTPS : 4 ;
} ; 

} T8CONbits@0xf3a  ;

// ------------------------------
//        PR8
// ------------------------------
unsigned int PR8@0xf3b ;
// ------------------------------
//        TMR8
// ------------------------------
unsigned int TMR8@0xf3c ;
// ------------------------------
//        T6CON
// ------------------------------
unsigned int T6CON@0xf3d ;
union
{

struct 
{
  unsigned int 
  : 2,
  TMR6ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T6CKPS0 : 1 ,
  T6CKPS1 : 1 ,
  : 1,
  T6OUTPS0 : 1 ,
  T6OUTPS1 : 1 ,
  T6OUTPS2 : 1 ,
  T6OUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T6CKPS : 2 ,
  : 1,
  _T6OUTPS : 4 ;
} ; 

} T6CONbits@0xf3d  ;

// ------------------------------
//        PR6
// ------------------------------
unsigned int PR6@0xf3e ;
// ------------------------------
//        TMR6
// ------------------------------
unsigned int TMR6@0xf3f ;
// ------------------------------
//        CCP10CON
// ------------------------------
unsigned int CCP10CON@0xf40 ;
union
{

struct 
{
  unsigned int 
  CCP10M0 : 1 ,
  CCP10M1 : 1 ,
  CCP10M2 : 1 ,
  CCP10M3 : 1 ,
  DC10B0 : 1 ,
  DC10B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP10Y : 1 ,
  CCP10X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP10M : 4 ,
  _DC10B : 2 ;
} ; 

} CCP10CONbits@0xf40  ;

// ------------------------------
//        CCPR10
// ------------------------------
unsigned int CCPR10@0xf41 ;
// ------------------------------
//        CCPR10L
// ------------------------------
unsigned int CCPR10L@0xf41 ;
// ------------------------------
//        CCPR10H
// ------------------------------
unsigned int CCPR10H@0xf42 ;
// ------------------------------
//        CCP9CON
// ------------------------------
unsigned int CCP9CON@0xf43 ;
union
{

struct 
{
  unsigned int 
  CCP9M0 : 1 ,
  CCP9M1 : 1 ,
  CCP9M2 : 1 ,
  CCP9M3 : 1 ,
  DC9B0 : 1 ,
  DC9B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP9Y : 1 ,
  CCP9X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP9M : 4 ,
  _DC9B : 2 ;
} ; 

} CCP9CONbits@0xf43  ;

// ------------------------------
//        CCPR9
// ------------------------------
unsigned int CCPR9@0xf44 ;
// ------------------------------
//        CCPR9L
// ------------------------------
unsigned int CCPR9L@0xf44 ;
// ------------------------------
//        CCPR9H
// ------------------------------
unsigned int CCPR9H@0xf45 ;
// ------------------------------
//        CCP8CON
// ------------------------------
unsigned int CCP8CON@0xf46 ;
union
{

struct 
{
  unsigned int 
  CCP8M0 : 1 ,
  CCP8M1 : 1 ,
  CCP8M2 : 1 ,
  CCP8M3 : 1 ,
  DC8B0 : 1 ,
  DC8B1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CCP8Y : 1 ,
  CCP8X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP8M : 4 ,
  _DC8B : 2 ;
} ; 

} CCP8CONbits@0xf46  ;

// ------------------------------
//        CCPR8
// ------------------------------
unsigned int CCPR8@0xf47 ;
// ------------------------------
//        CCPR8L
// ------------------------------
unsigned int CCPR8L@0xf47 ;
// ------------------------------
//        CCPR8H
// ------------------------------
unsigned int CCPR8H@0xf48 ;
// ------------------------------
//        CCP3CON
// ------------------------------
unsigned int CCP3CON@0xf49 ;
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
  DC3B1 : 1 ,
  P3M0 : 1 ,
  P3M1 : 1 ;
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
  _DC3B : 2 ,
  _P3M : 2 ;
} ; 

} CCP3CONbits@0xf49  ;

// ------------------------------
//        CCPR3
// ------------------------------
unsigned int CCPR3@0xf4a ;
// ------------------------------
//        CCPR3L
// ------------------------------
unsigned int CCPR3L@0xf4a ;
// ------------------------------
//        CCPR3H
// ------------------------------
unsigned int CCPR3H@0xf4b ;
// ------------------------------
//        ECCP3DEL
// ------------------------------
unsigned int ECCP3DEL@0xf4c ;
union
{

struct 
{
  unsigned int 
  : 7,
  P3RSEN : 1 ;
} ; 

struct 
{
  unsigned int 
  P3DC0 : 1 ,
  P3DC1 : 1 ,
  P3DC2 : 1 ,
  P3DC3 : 1 ,
  P3DC4 : 1 ,
  P3DC5 : 1 ,
  P3DC6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P3DC : 7 ;
} ; 

} ECCP3DELbits@0xf4c  ;

// ------------------------------
//        ECCP3AS
// ------------------------------
unsigned int ECCP3AS@0xf4d ;
union
{

struct 
{
  unsigned int 
  : 7,
  ECCP3ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS3BD0 : 1 ,
  PSS3BD1 : 1 ,
  PSS3AC0 : 1 ,
  PSS3AC1 : 1 ,
  ECCP3AS0 : 1 ,
  ECCP3AS1 : 1 ,
  ECCP3AS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSS3BD : 2 ,
  _PSS3AC : 2 ,
  _ECCP3AS : 3 ;
} ; 

} ECCP3ASbits@0xf4d  ;

// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xf4e ;
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
  DC2B1 : 1 ,
  P2M0 : 1 ,
  P2M1 : 1 ;
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
  _DC2B : 2 ,
  _P2M : 2 ;
} ; 

} CCP2CONbits@0xf4e  ;

// ------------------------------
//        CCPR2
// ------------------------------
unsigned int CCPR2@0xf4f ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xf4f ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xf50 ;
// ------------------------------
//        ECCP2DEL
// ------------------------------
unsigned int ECCP2DEL@0xf51 ;
union
{

struct 
{
  unsigned int 
  : 7,
  P2RSEN : 1 ;
} ; 

struct 
{
  unsigned int 
  P2DC0 : 1 ,
  P2DC1 : 1 ,
  P2DC2 : 1 ,
  P2DC3 : 1 ,
  P2DC4 : 1 ,
  P2DC5 : 1 ,
  P2DC6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P2DC : 7 ;
} ; 

} ECCP2DELbits@0xf51  ;

// ------------------------------
//        ECCP2AS
// ------------------------------
unsigned int ECCP2AS@0xf52 ;
union
{

struct 
{
  unsigned int 
  : 7,
  ECCP2ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS2BD0 : 1 ,
  PSS2BD1 : 1 ,
  PSS2AC0 : 1 ,
  PSS2AC1 : 1 ,
  ECCP2AS0 : 1 ,
  ECCP2AS1 : 1 ,
  ECCP2AS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSS2BD : 2 ,
  _PSS2AC : 2 ,
  _ECCP2AS : 3 ;
} ; 

} ECCP2ASbits@0xf52  ;

// ------------------------------
//        CM1CON
// ------------------------------
unsigned int CM1CON@0xf53 ;
union
{

struct 
{
  unsigned int 
  : 2,
  CREF : 1 ,
  : 2,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  : 1,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM1CONbits@0xf53  ;

// ------------------------------
//        PADCFG1
// ------------------------------
unsigned int PADCFG1@0xf54 ;
union
{

struct 
{
  unsigned int 
  RLPU : 1 ,
  RKPU : 1 ,
  RJPU : 1 ,
  RHPU : 1 ,
  RGPU : 1 ,
  RFPU : 1 ,
  REPU : 1 ,
  RDPU : 1 ;
} ; 

} PADCFG1bits@0xf54  ;

// ------------------------------
//        IOCN
// ------------------------------
unsigned int IOCN@0xf55 ;
union
{

struct 
{
  unsigned int 
  IOCN0 : 1 ,
  IOCN1 : 1 ,
  IOCN2 : 1 ,
  IOCN3 : 1 ,
  IOCN4 : 1 ,
  IOCN5 : 1 ,
  IOCN6 : 1 ,
  IOCN7 : 1 ;
} ; 

} IOCNbits@0xf55  ;

// ------------------------------
//        IOCP
// ------------------------------
unsigned int IOCP@0xf56 ;
union
{

struct 
{
  unsigned int 
  IOCP0 : 1 ,
  IOCP1 : 1 ,
  IOCP2 : 1 ,
  IOCP3 : 1 ,
  IOCP4 : 1 ,
  IOCP5 : 1 ,
  IOCP6 : 1 ,
  IOCP7 : 1 ;
} ; 

} IOCPbits@0xf56  ;

// ------------------------------
//        RTCCON2
// ------------------------------
unsigned int RTCCON2@0xf57 ;
union
{

struct 
{
  unsigned int 
  : 4,
  PWCSPRE : 1 ,
  PWCCPRE : 1 ,
  PWCPOL : 1 ,
  PWCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  RTCSECSEL0 : 1 ,
  RTCSECSEL1 : 1 ,
  RTCCLKSEL0 : 1 ,
  RTCCLKSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RTCSECSEL : 2 ,
  _RTCCLKSEL : 2 ;
} ; 

} RTCCON2bits@0xf57  ;

// ------------------------------
//        ALRMVALL
// ------------------------------
unsigned int ALRMVALL@0xf58 ;
// ------------------------------
//        ALRMVALH
// ------------------------------
unsigned int ALRMVALH@0xf59 ;
// ------------------------------
//        ALRMRPT
// ------------------------------
unsigned int ALRMRPT@0xf5a ;
union
{

struct 
{
  unsigned int 
  ARPT0 : 1 ,
  ARPT1 : 1 ,
  ARPT2 : 1 ,
  ARPT3 : 1 ,
  ARPT4 : 1 ,
  ARPT5 : 1 ,
  ARPT6 : 1 ,
  ARPT7 : 1 ;
} ; 

} ALRMRPTbits@0xf5a  ;

// ------------------------------
//        ALRMCFG
// ------------------------------
unsigned int ALRMCFG@0xf5b ;
union
{

struct 
{
  unsigned int 
  : 6,
  CHIME : 1 ,
  ALRMEN : 1 ;
} ; 

struct 
{
  unsigned int 
  ALRMPTR0 : 1 ,
  ALRMPTR1 : 1 ,
  AMASK0 : 1 ,
  AMASK1 : 1 ,
  AMASK2 : 1 ,
  AMASK3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ALRMPTR : 2 ,
  _AMASK : 4 ;
} ; 

} ALRMCFGbits@0xf5b  ;

// ------------------------------
//        RTCVALL
// ------------------------------
unsigned int RTCVALL@0xf5c ;
// ------------------------------
//        RTCVALH
// ------------------------------
unsigned int RTCVALH@0xf5d ;
// ------------------------------
//        RTCCAL
// ------------------------------
unsigned int RTCCAL@0xf5e ;
union
{

struct 
{
  unsigned int 
  CAL0 : 1 ,
  CAL1 : 1 ,
  CAL2 : 1 ,
  CAL3 : 1 ,
  CAL4 : 1 ,
  CAL5 : 1 ,
  CAL6 : 1 ,
  CAL7 : 1 ;
} ; 

} RTCCALbits@0xf5e  ;

// ------------------------------
//        RTCCON1
// ------------------------------
unsigned int RTCCON1@0xf5f ;
union
{

struct 
{
  unsigned int 
  : 2,
  RTCOE : 1 ,
  HALFSEC : 1 ,
  RTCSYNC : 1 ,
  RTCWREN : 1 ,
  : 1,
  RTCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  RTCPTR0 : 1 ,
  RTCPTR1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RTCPTR : 2 ;
} ; 

} RTCCON1bits@0xf5f  ;

// ------------------------------
//        DMACON1
// ------------------------------
unsigned int DMACON1@0xf60 ;
union
{

struct 
{
  unsigned int 
  DMAEN : 1 ,
  DLYINTEN : 1 ,
  : 2,
  RXINC : 1 ,
  TXINC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  DUPLEX0 : 1 ,
  DUPLEX1 : 1 ,
  : 2,
  SSCON0 : 1 ,
  SSCON1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _DUPLEX : 2 ,
  : 2,
  _SSCON : 2 ;
} ; 

} DMACON1bits@0xf60  ;

// ------------------------------
//        PIE6
// ------------------------------
unsigned int PIE6@0xf61 ;
union
{

struct 
{
  unsigned int 
  CMP1IE : 1 ,
  CMP2IE : 1 ,
  CMP3IE : 1 ,
  : 1,
  TX3IE : 1 ,
  RC3IE : 1 ,
  TX4IE : 1 ,
  RC4IE : 1 ;
} ; 

} PIE6bits@0xf61  ;

// ------------------------------
//        WPUB
// ------------------------------
unsigned int WPUB@0xf62 ;
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

} WPUBbits@0xf62  ;

// ------------------------------
//        ACTCON
// ------------------------------
unsigned int ACTCON@0xf63 ;
union
{

struct 
{
  unsigned int 
  ACTORSPOL : 1 ,
  ACTORS : 1 ,
  ACTLOCKPOL : 1 ,
  ACTLOCK : 1 ,
  ACTSRC : 1 ,
  ACTSIDL : 1 ,
  : 1,
  ACTEN : 1 ;
} ; 

} ACTCONbits@0xf63  ;

// ------------------------------
//        OSCCON4
// ------------------------------
unsigned int OSCCON4@0xf64 ;
union
{

struct 
{
  unsigned int 
  : 5,
  PLLEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  CPDIV0 : 1 ,
  CPDIV1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 6,
  _CPDIV : 2 ;
} ; 

} OSCCON4bits@0xf64  ;

// ------------------------------
//        OSCCON3
// ------------------------------
unsigned int OSCCON3@0xf65 ;
union
{

struct 
{
  unsigned int 
  IRCF0 : 1 ,
  IRCF1 : 1 ,
  IRCF2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IRCF : 3 ;
} ; 

} OSCCON3bits@0xf65  ;

// ------------------------------
//        OSCCON2
// ------------------------------
unsigned int OSCCON2@0xf66 ;
union
{

struct 
{
  unsigned int 
  : 1,
  SOSCGO : 1 ,
  POSCEN : 1 ,
  CF : 1 ,
  : 1,
  LOCK : 1 ,
  IOLOCK : 1 ,
  CLKLOCK : 1 ;
} ; 

} OSCCON2bits@0xf66  ;

// ------------------------------
//        BAUDCON
// ------------------------------
unsigned int BAUDCON@0xf67 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  IREN : 1 ,
  BRG16 : 1 ,
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CKTXP : 1 ,
  DTRXP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ,
  : 1,
  RCMT : 1 ;
} ; 

} BAUDCONbits@0xf67  ;

// ------------------------------
//        BAUDCON1
// ------------------------------
unsigned int BAUDCON1@0xf67 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  IREN : 1 ,
  BRG16 : 1 ,
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CKTXP : 1 ,
  DTRXP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ,
  : 1,
  RCMT : 1 ;
} ; 

} BAUDCON1bits@0xf67  ;

// ------------------------------
//        SSP1MSK
// ------------------------------
unsigned int SSP1MSK@0xf68 ;
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

} SSP1MSKbits@0xf68  ;

// ------------------------------
//        SSP1CON3
// ------------------------------
unsigned int SSP1CON3@0xf69 ;
union
{

struct 
{
  unsigned int 
  DHEN : 1 ,
  AHEN : 1 ,
  SBCDE : 1 ,
  SDAHT : 1 ,
  BOEN : 1 ,
  SCIE : 1 ,
  PCIE : 1 ,
  ACKTIM : 1 ;
} ; 

} SSP1CON3bits@0xf69  ;

// ------------------------------
//        TXBUF
// ------------------------------
unsigned int TXBUF@0xf6a ;
union
{

struct 
{
  unsigned int 
  TXBUF0 : 1 ,
  TXBUF1 : 1 ,
  TXBUF2 : 1 ,
  TXBUF3 : 1 ,
  TXBUF4 : 1 ,
  TXBUF5 : 1 ,
  TXBUF6 : 1 ,
  TXBUF7 : 1 ;
} ; 

} TXBUFbits@0xf6a  ;

// ------------------------------
//        DMABCH
// ------------------------------
unsigned int DMABCH@0xf6b ;
union
{

struct 
{
  unsigned int 
  BC8 : 1 ,
  BC9 : 1 ;
} ; 

} DMABCHbits@0xf6b  ;

// ------------------------------
//        DMABCL
// ------------------------------
unsigned int DMABCL@0xf6c ;
union
{

struct 
{
  unsigned int 
  BC0 : 1 ,
  BC1 : 1 ,
  BC2 : 1 ,
  BC3 : 1 ,
  BC4 : 1 ,
  BC5 : 1 ,
  BC6 : 1 ,
  BC7 : 1 ;
} ; 

} DMABCLbits@0xf6c  ;

// ------------------------------
//        RXADDRH
// ------------------------------
unsigned int RXADDRH@0xf6d ;
union
{

struct 
{
  unsigned int 
  RXADDR8 : 1 ,
  RXADDR9 : 1 ,
  RXADDR10 : 1 ,
  RXADDR11 : 1 ;
} ; 

} RXADDRHbits@0xf6d  ;

// ------------------------------
//        RXADDRL
// ------------------------------
unsigned int RXADDRL@0xf6e ;
union
{

struct 
{
  unsigned int 
  RXADDR0 : 1 ,
  RXADDR1 : 1 ,
  RXADDR2 : 1 ,
  RXADDR3 : 1 ,
  RXADDR4 : 1 ,
  RXADDR5 : 1 ,
  RXADDR6 : 1 ,
  RXADDR7 : 1 ;
} ; 

} RXADDRLbits@0xf6e  ;

// ------------------------------
//        TXADDRH
// ------------------------------
unsigned int TXADDRH@0xf6f ;
union
{

struct 
{
  unsigned int 
  TXADDR8 : 1 ,
  TXADDR9 : 1 ,
  TXADDR10 : 1 ,
  TXADDR11 : 1 ;
} ; 

} TXADDRHbits@0xf6f  ;

// ------------------------------
//        TXADDRL
// ------------------------------
unsigned int TXADDRL@0xf70 ;
union
{

struct 
{
  unsigned int 
  TXADDR0 : 1 ,
  TXADDR1 : 1 ,
  TXADDR2 : 1 ,
  TXADDR3 : 1 ,
  TXADDR4 : 1 ,
  TXADDR5 : 1 ,
  TXADDR6 : 1 ,
  TXADDR7 : 1 ;
} ; 

} TXADDRLbits@0xf70  ;

// ------------------------------
//        PORTVP
// ------------------------------
unsigned int PORTVP@0xf71 ;
union
{

struct 
{
  unsigned int 
  RVP0 : 1 ,
  RVP1 : 1 ,
  RVP2 : 1 ,
  RVP3 : 1 ,
  RVP4 : 1 ,
  RVP5 : 1 ,
  RVP6 : 1 ,
  RVP7 : 1 ;
} ; 

} PORTVPbits@0xf71  ;

// ------------------------------
//        LATVP
// ------------------------------
unsigned int LATVP@0xf72 ;
union
{

struct 
{
  unsigned int 
  LATVP0 : 1 ,
  LATVP1 : 1 ,
  LATVP2 : 1 ,
  LATVP3 : 1 ,
  LATVP4 : 1 ,
  LATVP5 : 1 ,
  LATVP6 : 1 ,
  LATVP7 : 1 ;
} ; 

} LATVPbits@0xf72  ;

// ------------------------------
//        TRISVP
// ------------------------------
unsigned int TRISVP@0xf73 ;
union
{

struct 
{
  unsigned int 
  TRISVP0 : 1 ,
  TRISVP1 : 1 ,
  TRISVP2 : 1 ,
  TRISVP3 : 1 ,
  TRISVP4 : 1 ,
  TRISVP5 : 1 ,
  TRISVP6 : 1 ,
  TRISVP7 : 1 ;
} ; 

} TRISVPbits@0xf73  ;

// ------------------------------
//        UADDR
// ------------------------------
unsigned int UADDR@0xf74 ;
union
{

struct 
{
  unsigned int 
  ADDR0 : 1 ,
  ADDR1 : 1 ,
  ADDR2 : 1 ,
  ADDR3 : 1 ,
  ADDR4 : 1 ,
  ADDR5 : 1 ,
  ADDR6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADDR : 7 ;
} ; 

} UADDRbits@0xf74  ;

// ------------------------------
//        UCON
// ------------------------------
unsigned int UCON@0xf75 ;
union
{

struct 
{
  unsigned int 
  : 1,
  SUSPND : 1 ,
  RESUME : 1 ,
  USBEN : 1 ,
  PKTDIS : 1 ,
  SE0 : 1 ,
  PPBRST : 1 ;
} ; 

} UCONbits@0xf75  ;

// ------------------------------
//        USTAT
// ------------------------------
unsigned int USTAT@0xf76 ;
union
{

struct 
{
  unsigned int 
  : 1,
  PPBI : 1 ,
  DIR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  ENDP0 : 1 ,
  ENDP1 : 1 ,
  ENDP2 : 1 ,
  ENDP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 3,
  _ENDP : 4 ;
} ; 

} USTATbits@0xf76  ;

// ------------------------------
//        UEIR
// ------------------------------
unsigned int UEIR@0xf77 ;
union
{

struct 
{
  unsigned int 
  PIDEF : 1 ,
  CRC5EF : 1 ,
  CRC16EF : 1 ,
  DFN8EF : 1 ,
  BTOEF : 1 ,
  : 2,
  BTSEF : 1 ;
} ; 

} UEIRbits@0xf77  ;

// ------------------------------
//        UIR
// ------------------------------
unsigned int UIR@0xf78 ;
union
{

struct 
{
  unsigned int 
  URSTIF : 1 ,
  UERRIF : 1 ,
  ACTVIF : 1 ,
  TRNIF : 1 ,
  IDLEIF : 1 ,
  STALLIF : 1 ,
  SOFIF : 1 ;
} ; 

} UIRbits@0xf78  ;

// ------------------------------
//        UFRM
// ------------------------------
unsigned int UFRM@0xf79 ;
// ------------------------------
//        UFRMH
// ------------------------------
unsigned int UFRMH@0xf79 ;
union
{

struct 
{
  unsigned int 
  FRM8 : 1 ,
  FRM9 : 1 ,
  FRM10 : 1 ;
} ; 

} UFRMHbits@0xf79  ;

// ------------------------------
//        UFRML
// ------------------------------
unsigned int UFRML@0xf7a ;
union
{

struct 
{
  unsigned int 
  FRM0 : 1 ,
  FRM1 : 1 ,
  FRM2 : 1 ,
  FRM3 : 1 ,
  FRM4 : 1 ,
  FRM5 : 1 ,
  FRM6 : 1 ,
  FRM7 : 1 ;
} ; 

} UFRMLbits@0xf7a  ;

// ------------------------------
//        RCON4
// ------------------------------
unsigned int RCON4@0xf7b ;
union
{

struct 
{
  unsigned int 
  PMSLP : 1 ,
  : 1,
  DPSLP : 1 ,
  : 1,
  SRETEN : 1 ;
} ; 

} RCON4bits@0xf7b  ;

// ------------------------------
//        RCON3
// ------------------------------
unsigned int RCON3@0xf7c ;
union
{

struct 
{
  unsigned int 
  VBAT : 1 ,
  VBPOR : 1 ,
  VDDPOR : 1 ,
  VDDBOR : 1 ,
  : 3,
  STKERR : 1 ;
} ; 

} RCON3bits@0xf7c  ;

// ------------------------------
//        RCON2
// ------------------------------
unsigned int RCON2@0xf7d ;
union
{

struct 
{
  unsigned int 
  : 5,
  SWDTEN : 1 ,
  : 1,
  EXTR : 1 ;
} ; 

} RCON2bits@0xf7d  ;

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
  : 1,
  WR : 1 ,
  WREN : 1 ,
  WRERR : 1 ,
  FREE : 1 ,
  WWPROG : 1 ;
} ; 

} EECON1bits@0xf7f  ;

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
  : 2,
  RF2 : 1 ,
  RF3 : 1 ,
  RF4 : 1 ,
  RF5 : 1 ,
  RF6 : 1 ,
  RF7 : 1 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _RG : 5 ;
} ; 

} PORTGbits@0xf86  ;

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

} PORTHbits@0xf87  ;

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

} PORTJbits@0xf88  ;

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
  : 2,
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

} TRISAbits@0xf92  ;

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

} TRISEbits@0xf96  ;

// ------------------------------
//        TRISF
// ------------------------------
unsigned int TRISF@0xf97 ;
union
{

struct 
{
  unsigned int 
  : 2,
  TRISF2 : 1 ,
  TRISF3 : 1 ,
  TRISF4 : 1 ,
  TRISF5 : 1 ,
  TRISF6 : 1 ,
  TRISF7 : 1 ;
} ; 

} TRISFbits@0xf97  ;

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

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISG : 5 ;
} ; 

} TRISGbits@0xf98  ;

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

} TRISHbits@0xf99  ;

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

} TRISJbits@0xf9a  ;

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
  TUN5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TUN : 6 ;
} ; 

} OSCTUNEbits@0xf9b  ;

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
  STRSYNC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
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
  SSP1IE : 1 ,
  TX1IE : 1 ,
  RC1IE : 1 ,
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
  TMR1GIF : 1 ,
  SSP1IF : 1 ,
  TX1IF : 1 ,
  RC1IF : 1 ,
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
  TMR1GIP : 1 ,
  SSP1IP : 1 ,
  TX1IP : 1 ,
  RC1IP : 1 ,
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
  TMR3GIE : 1 ,
  TMR3IE : 1 ,
  HLVDIE : 1 ,
  BCL1IE : 1 ,
  USBIE : 1 ,
  BCL2IE : 1 ,
  SSP2IE : 1 ,
  OSCFIE : 1 ;
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
  TMR3GIF : 1 ,
  TMR3IF : 1 ,
  HLVDIF : 1 ,
  BCL1IF : 1 ,
  USBIF : 1 ,
  BCL2IF : 1 ,
  SSP2IF : 1 ,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIF : 1 ;
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
  TMR3GIP : 1 ,
  TMR3IP : 1 ,
  HLVDIP : 1 ,
  BCL1IP : 1 ,
  USBIP : 1 ,
  BCL2IP : 1 ,
  SSP2IP : 1 ,
  OSCFIP : 1 ;
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
  RTCCIE : 1 ,
  CCP1IE : 1 ,
  CCP2IE : 1 ,
  CTMUIE : 1 ,
  TX2IE : 1 ,
  RC2IE : 1 ,
  LCDIE : 1 ,
  TMR5GIE : 1 ;
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
  RTCCIF : 1 ,
  CCP1IF : 1 ,
  CCP2IF : 1 ,
  CTMUIF : 1 ,
  TX2IF : 1 ,
  RC2IF : 1 ,
  LCDIF : 1 ,
  TMR5GIF : 1 ;
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
  RTCCIP : 1 ,
  CCP1IP : 1 ,
  CCP2IP : 1 ,
  CTMUIP : 1 ,
  TX2IP : 1 ,
  RC2IP : 1 ,
  LCDIP : 1 ,
  TMR5GIP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

// ------------------------------
//        PIR6
// ------------------------------
unsigned int PIR6@0xfa6 ;
union
{

struct 
{
  unsigned int 
  CMP1IF : 1 ,
  CMP2IF : 1 ,
  CMP3IF : 1 ,
  : 1,
  TX3IF : 1 ,
  RC3IF : 1 ,
  TX4IF : 1 ,
  RC4IF : 1 ;
} ; 

} PIR6bits@0xfa6  ;

// ------------------------------
//        PSPCON
// ------------------------------
unsigned int PSPCON@0xfa7 ;
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

} PSPCONbits@0xfa7  ;

// ------------------------------
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xfa8 ;
union
{

struct 
{
  unsigned int 
  : 4,
  HLVDEN : 1 ,
  IRVST : 1 ,
  BGVST : 1 ,
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _HLVDL : 4 ;
} ; 

} HLVDCONbits@0xfa8  ;

// ------------------------------
//        IPR6
// ------------------------------
unsigned int IPR6@0xfa9 ;
union
{

struct 
{
  unsigned int 
  CMP1IP : 1 ,
  CMP2IP : 1 ,
  CMP3IP : 1 ,
  : 1,
  TX3IP : 1 ,
  RC3IP : 1 ,
  TX4IP : 1 ,
  RC4IP : 1 ;
} ; 

} IPR6bits@0xfa9  ;

// ------------------------------
//        T1GCON
// ------------------------------
unsigned int T1GCON@0xfaa ;
union
{

struct 
{
  unsigned int 
  : 2,
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
  T1GSS0 : 1 ,
  T1GSS1 : 1 ,
  : 1,
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

} RCSTA1bits@0xfab  ;

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

} TXSTAbits@0xfac  ;

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

} TXSTA1bits@0xfac  ;

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
union
{

struct 
{
  unsigned int 
  BRG0 : 1 ,
  BRG1 : 1 ,
  BRG2 : 1 ,
  BRG3 : 1 ,
  BRG4 : 1 ,
  BRG5 : 1 ,
  BRG6 : 1 ,
  BRG7 : 1 ;
} ; 

} SPBRGbits@0xfaf  ;

// ------------------------------
//        SPBRG1
// ------------------------------
unsigned int SPBRG1@0xfaf ;
union
{

struct 
{
  unsigned int 
  BRG0 : 1 ,
  BRG1 : 1 ,
  BRG2 : 1 ,
  BRG3 : 1 ,
  BRG4 : 1 ,
  BRG5 : 1 ,
  BRG6 : 1 ,
  BRG7 : 1 ;
} ; 

} SPBRG1bits@0xfaf  ;

// ------------------------------
//        T3GCON
// ------------------------------
unsigned int T3GCON@0xfb0 ;
union
{

struct 
{
  unsigned int 
  : 2,
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
  T3GSS0 : 1 ,
  T3GSS1 : 1 ,
  : 1,
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
  SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
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
//        PIE4
// ------------------------------
unsigned int PIE4@0xfb4 ;
union
{

struct 
{
  unsigned int 
  ECCP3IE : 1 ,
  CCP4IE : 1 ,
  CCP5IE : 1 ,
  CCP6IE : 1 ,
  CCP7IE : 1 ,
  CCP8IE : 1 ,
  CCP9IE : 1 ,
  CCP10IE : 1 ;
} ; 

} PIE4bits@0xfb4  ;

// ------------------------------
//        PIR4
// ------------------------------
unsigned int PIR4@0xfb5 ;
union
{

struct 
{
  unsigned int 
  ECCP3IF : 1 ,
  CCP4IF : 1 ,
  CCP5IF : 1 ,
  CCP6IF : 1 ,
  CCP7IF : 1 ,
  CCP8IF : 1 ,
  CCP9IF : 1 ,
  CCP10IF : 1 ;
} ; 

} PIR4bits@0xfb5  ;

// ------------------------------
//        IPR4
// ------------------------------
unsigned int IPR4@0xfb6 ;
union
{

struct 
{
  unsigned int 
  ECCP3IP : 1 ,
  CCP4IP : 1 ,
  CCP5IP : 1 ,
  CCP6IP : 1 ,
  CCP7IP : 1 ,
  CCP8IP : 1 ,
  CCP9IP : 1 ,
  CCP10IP : 1 ;
} ; 

} IPR4bits@0xfb6  ;

// ------------------------------
//        PIE5
// ------------------------------
unsigned int PIE5@0xfb7 ;
union
{

struct 
{
  unsigned int 
  TMR4IE : 1 ,
  TMR5IE : 1 ,
  TMR6IE : 1 ,
  : 1,
  TMR8IE : 1 ,
  ACTLOCKIE : 1 ,
  ACTORSIE : 1 ;
} ; 

} PIE5bits@0xfb7  ;

// ------------------------------
//        PIR5
// ------------------------------
unsigned int PIR5@0xfb8 ;
union
{

struct 
{
  unsigned int 
  TMR4IF : 1 ,
  TMR5IF : 1 ,
  TMR6IF : 1 ,
  : 1,
  TMR8IF : 1 ,
  ACTLOCKIF : 1 ,
  ACTORSIF : 1 ;
} ; 

} PIR5bits@0xfb8  ;

// ------------------------------
//        CCP1CON
// ------------------------------
unsigned int CCP1CON@0xfb9 ;
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

} CCP1CONbits@0xfb9  ;

// ------------------------------
//        CCPR1
// ------------------------------
unsigned int CCPR1@0xfba ;
// ------------------------------
//        CCPR1L
// ------------------------------
unsigned int CCPR1L@0xfba ;
// ------------------------------
//        CCPR1H
// ------------------------------
unsigned int CCPR1H@0xfbb ;
// ------------------------------
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xfbc ;
union
{

struct 
{
  unsigned int 
  : 7,
  P1RSEN : 1 ;
} ; 

struct 
{
  unsigned int 
  P1DC0 : 1 ,
  P1DC1 : 1 ,
  P1DC2 : 1 ,
  P1DC3 : 1 ,
  P1DC4 : 1 ,
  P1DC5 : 1 ,
  P1DC6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P1DC : 7 ;
} ; 

} ECCP1DELbits@0xfbc  ;

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfbd ;
union
{

struct 
{
  unsigned int 
  : 7,
  ECCP1ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS1BD0 : 1 ,
  PSS1BD1 : 1 ,
  PSS1AC0 : 1 ,
  PSS1AC1 : 1 ,
  ECCP1AS0 : 1 ,
  ECCP1AS1 : 1 ,
  ECCP1AS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSS1BD : 2 ,
  _PSS1AC : 2 ,
  _ECCP1AS : 3 ;
} ; 

} ECCP1ASbits@0xfbd  ;

// ------------------------------
//        CVRCONL
// ------------------------------
unsigned int CVRCONL@0xfbe ;
union
{

struct 
{
  unsigned int 
  CVRNSS : 1 ,
  : 5,
  CVROE : 1 ,
  CVREN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  CVRPSS0 : 1 ,
  CVRPSS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _CVRPSS : 2 ;
} ; 

} CVRCONLbits@0xfbe  ;

// ------------------------------
//        CVRCONH
// ------------------------------
unsigned int CVRCONH@0xfbf ;
union
{

struct 
{
  unsigned int 
  CVR0 : 1 ,
  CVR1 : 1 ,
  CVR2 : 1 ,
  CVR3 : 1 ,
  CVR4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CVR : 5 ;
} ; 

} CVRCONHbits@0xfbf  ;

// ------------------------------
//        ADCON1L
// ------------------------------
unsigned int ADCON1L@0xfc0 ;
union
{

struct 
{
  unsigned int 
  DONE : 1 ,
  SAMP : 1 ,
  ASAM : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SSRC0 : 1 ,
  SSRC1 : 1 ,
  SSRC2 : 1 ,
  SSRC3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _SSRC : 4 ;
} ; 

} ADCON1Lbits@0xfc0  ;

// ------------------------------
//        ADCON1H
// ------------------------------
unsigned int ADCON1H@0xfc1 ;
union
{

struct 
{
  unsigned int 
  : 2,
  MODE12 : 1 ,
  : 4,
  ADON : 1 ;
} ; 

struct 
{
  unsigned int 
  FORM0 : 1 ,
  FORM1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FORM : 2 ;
} ; 

} ADCON1Hbits@0xfc1  ;

// ------------------------------
//        ADCBUF0
// ------------------------------
unsigned int ADCBUF0@0xfc2 ;
// ------------------------------
//        ADCBUF0L
// ------------------------------
unsigned int ADCBUF0L@0xfc2 ;
// ------------------------------
//        ADCBUF0H
// ------------------------------
unsigned int ADCBUF0H@0xfc3 ;
// ------------------------------
//        CMSTAT
// ------------------------------
unsigned int CMSTAT@0xfc4 ;
union
{

struct 
{
  unsigned int 
  C1OUT : 1 ,
  C2OUT : 1 ,
  C3OUT : 1 ;
} ; 

} CMSTATbits@0xfc4  ;

// ------------------------------
//        SSP1CON2
// ------------------------------
unsigned int SSP1CON2@0xfc5 ;
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

} SSP1CON2bits@0xfc5  ;

// ------------------------------
//        SSP1CON1
// ------------------------------
unsigned int SSP1CON1@0xfc6 ;
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

} SSP1CON1bits@0xfc6  ;

// ------------------------------
//        SSP1STAT
// ------------------------------
unsigned int SSP1STAT@0xfc7 ;
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
  I2C_START : 1 ,
  I2C_STOP : 1 ,
  I2C_DAT : 1 ;
} ; 

} SSP1STATbits@0xfc7  ;

// ------------------------------
//        SSP1ADD
// ------------------------------
unsigned int SSP1ADD@0xfc8 ;
// ------------------------------
//        SSP1BUF
// ------------------------------
unsigned int SSP1BUF@0xfc9 ;
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
  SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
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
  : 1,
  IPEN : 1 ;
} ; 

struct 
{
  unsigned int 
  BOR_RCON : 1 ,
  POR : 1 ,
  PD : 1 ,
  TO : 1 ,
  RI : 1 ,
  CM : 1 ;
} ; 

} RCONbits@0xfd0  ;

// ------------------------------
//        IOCF
// ------------------------------
unsigned int IOCF@0xfd1 ;
union
{

struct 
{
  unsigned int 
  IOCF0 : 1 ,
  IOCF1 : 1 ,
  IOCF2 : 1 ,
  IOCF3 : 1 ,
  IOCF4 : 1 ,
  IOCF5 : 1 ,
  IOCF6 : 1 ,
  IOCF7 : 1 ;
} ; 

} IOCFbits@0xfd1  ;

// ------------------------------
//        IPR5
// ------------------------------
unsigned int IPR5@0xfd2 ;
union
{

struct 
{
  unsigned int 
  TMR4IP : 1 ,
  TMR5IP : 1 ,
  TMR6IP : 1 ,
  : 1,
  TMR8IP : 1 ,
  ACTLOCKIP : 1 ,
  ACTORSIP : 1 ;
} ; 

} IPR5bits@0xfd2  ;

// ------------------------------
//        OSCCON
// ------------------------------
unsigned int OSCCON@0xfd3 ;
union
{

struct 
{
  unsigned int 
  : 7,
  IDLEN : 1 ;
} ; 

struct 
{
  unsigned int 
  NOSC0 : 1 ,
  NOSC1 : 1 ,
  NOSC2 : 1 ,
  : 1,
  COSC0 : 1 ,
  COSC1 : 1 ,
  COSC2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _NOSC : 3 ,
  : 1,
  _COSC : 3 ;
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
  : 2,
  T08BIT : 1 ,
  TMR0ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T0PS0 : 1 ,
  T0PS1 : 1 ,
  T0PS2 : 1 ,
  : 1,
  T0CS0 : 1 ,
  T0CS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T0PS : 3 ,
  : 1,
  _T0CS : 2 ;
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
  IOCIP : 1 ,
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
  IOCIF : 1 ,
  INT0IF : 1 ,
  TMR0IF : 1 ,
  IOCIE : 1 ,
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
  SP0 : 1 ,
  SP1 : 1 ,
  SP2 : 1 ,
  SP3 : 1 ,
  SP4 : 1 ,
  : 2,
  STKOVF : 1 ;
} ; 

// The following are aliases ..  
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
