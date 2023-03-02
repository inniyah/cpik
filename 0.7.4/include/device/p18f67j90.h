#ifndef DEVICE
#define DEVICE p18f67j90
#define p18f67j90

// ======================================
//         PROCESSOR : p18f67j90
// ======================================

// This file has been automatically generated from Microchip's "p18f67j90.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xf54 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        PADCFG1
// ------------------------------
unsigned int PADCFG1@0xf54 ;
union
{

struct 
{
  unsigned int 
  : 1,
  RTSECSEL0 : 1 ,
  RTSECSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 1,
  _RTSECSEL : 2 ;
} ; 

} PADCFG1bits@0xf54  ;

// ------------------------------
//        CTMUICON
// ------------------------------
unsigned int CTMUICON@0xf55 ;
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

} CTMUICONbits@0xf55  ;

// ------------------------------
//        CTMUCONL
// ------------------------------
unsigned int CTMUCONL@0xf56 ;
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

} CTMUCONLbits@0xf56  ;

// ------------------------------
//        CTMUCONH
// ------------------------------
unsigned int CTMUCONH@0xf57 ;
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

} CTMUCONHbits@0xf57  ;

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
//        RTCCFG
// ------------------------------
unsigned int RTCCFG@0xf5f ;
union
{

struct 
{
  unsigned int 
  RTCPTR0 : 1 ,
  RTCPTR1 : 1 ,
  RTCOE : 1 ,
  HALFSEC : 1 ,
  RTCSYNC : 1 ,
  RTCWREN : 1 ,
  : 1,
  RTCEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RTCPTR : 2 ;
} ; 

} RTCCFGbits@0xf5f  ;

// ------------------------------
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf60 ;
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

} RCSTA2bits@0xf60  ;

// ------------------------------
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xf61 ;
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

} TXSTA2bits@0xf61  ;

// ------------------------------
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xf62 ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xf63 ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xf64 ;
// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xf65 ;
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
  DCCP2Y : 1 ,
  DCCP2X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ,
  _DC2B : 2 ;
} ; 

} CCP2CONbits@0xf65  ;

// ------------------------------
//        ECCP2CON
// ------------------------------
unsigned int ECCP2CON@0xf65 ;
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
  DCCP2Y : 1 ,
  DCCP2X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ,
  _DC2B : 2 ;
} ; 

} ECCP2CONbits@0xf65  ;

// ------------------------------
//        CCPR2
// ------------------------------
unsigned int CCPR2@0xf66 ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xf66 ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xf67 ;
// ------------------------------
//        CCP1CON
// ------------------------------
unsigned int CCP1CON@0xf68 ;
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
  DCCP1Y : 1 ,
  DCCP1X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP1M : 4 ,
  _DC1B : 2 ;
} ; 

} CCP1CONbits@0xf68  ;

// ------------------------------
//        ECCP1CON
// ------------------------------
unsigned int ECCP1CON@0xf68 ;
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
  DCCP1Y : 1 ,
  DCCP1X : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP1M : 4 ,
  _DC1B : 2 ;
} ; 

} ECCP1CONbits@0xf68  ;

// ------------------------------
//        CCPR1
// ------------------------------
unsigned int CCPR1@0xf69 ;
// ------------------------------
//        CCPR1L
// ------------------------------
unsigned int CCPR1L@0xf69 ;
// ------------------------------
//        CCPR1H
// ------------------------------
unsigned int CCPR1H@0xf6a ;
// ------------------------------
//        LCDDATA6
// ------------------------------
unsigned int LCDDATA6@0xf6c ;
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
  S0C1 : 1 ,
  S1C1 : 1 ,
  S2C1 : 1 ,
  S3C1 : 1 ,
  S4C1 : 1 ,
  S5C1 : 1 ,
  S6C1 : 1 ,
  S7C1 : 1 ;
} ; 

} LCDDATA6bits@0xf6c  ;

// ------------------------------
//        LCDDATA7
// ------------------------------
unsigned int LCDDATA7@0xf6d ;
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

} LCDDATA7bits@0xf6d  ;

// ------------------------------
//        LCDDATA8
// ------------------------------
unsigned int LCDDATA8@0xf6e ;
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

} LCDDATA8bits@0xf6e  ;

// ------------------------------
//        LCDDATA9
// ------------------------------
unsigned int LCDDATA9@0xf6f ;
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

} LCDDATA9bits@0xf6f  ;

// ------------------------------
//        LCDDATA10
// ------------------------------
unsigned int LCDDATA10@0xf70 ;
union
{

struct 
{
  unsigned int 
  S32C1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32COM1 : 1 ;
} ; 

} LCDDATA10bits@0xf70  ;

// ------------------------------
//        LCDDATA12
// ------------------------------
unsigned int LCDDATA12@0xf72 ;
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
  S0C2 : 1 ,
  S1C2 : 1 ,
  S2C2 : 1 ,
  S3C2 : 1 ,
  S4C2 : 1 ,
  S5C2 : 1 ,
  S6C2 : 1 ,
  S7C2 : 1 ;
} ; 

} LCDDATA12bits@0xf72  ;

// ------------------------------
//        LCDDATA13
// ------------------------------
unsigned int LCDDATA13@0xf73 ;
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

} LCDDATA13bits@0xf73  ;

// ------------------------------
//        LCDDATA14
// ------------------------------
unsigned int LCDDATA14@0xf74 ;
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

} LCDDATA14bits@0xf74  ;

// ------------------------------
//        LCDDATA15
// ------------------------------
unsigned int LCDDATA15@0xf75 ;
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

} LCDDATA15bits@0xf75  ;

// ------------------------------
//        LCDDATA16
// ------------------------------
unsigned int LCDDATA16@0xf76 ;
union
{

struct 
{
  unsigned int 
  S32C2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32COM2 : 1 ;
} ; 

} LCDDATA16bits@0xf76  ;

// ------------------------------
//        LCDDATA18
// ------------------------------
unsigned int LCDDATA18@0xf78 ;
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

struct 
{
  unsigned int 
  SEG00COM3 : 1 ,
  SEG01COM3 : 1 ,
  SEG02COM3 : 1 ,
  SEG03COM3 : 1 ,
  SEG04COM3 : 1 ,
  SEG05COM3 : 1 ,
  SEG06COM3 : 1 ,
  SEG07COM3 : 1 ;
} ; 

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

} LCDDATA18bits@0xf78  ;

// ------------------------------
//        LCDDATA19
// ------------------------------
unsigned int LCDDATA19@0xf79 ;
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

} LCDDATA19bits@0xf79  ;

// ------------------------------
//        LCDDATA20
// ------------------------------
unsigned int LCDDATA20@0xf7a ;
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

} LCDDATA20bits@0xf7a  ;

// ------------------------------
//        LCDDATA21
// ------------------------------
unsigned int LCDDATA21@0xf7b ;
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

} LCDDATA21bits@0xf7b  ;

// ------------------------------
//        LCDDATA22
// ------------------------------
unsigned int LCDDATA22@0xf7c ;
union
{

struct 
{
  unsigned int 
  S32C3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG32COM3 : 1 ;
} ; 

} LCDDATA22bits@0xf7c  ;

// ------------------------------
//        BAUDCON
// ------------------------------
unsigned int BAUDCON@0xf7e ;
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
  RCMT : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RCIDL : 1 ;
} ; 

} BAUDCONbits@0xf7e  ;

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
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCMT : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RCIDL : 1 ;
} ; 

} BAUDCON1bits@0xf7e  ;

// ------------------------------
//        SPBRGH
// ------------------------------
unsigned int SPBRGH@0xf7f ;
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
  TOCKI : 1 ,
  AN4 : 1 ,
  OSC2 : 1 ,
  OSC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  SEG18 : 1 ,
  VREFM : 1 ,
  VREFP : 1 ,
  SEG14 : 1 ,
  SEG15 : 1 ,
  CLKO : 1 ,
  CLKI : 1 ;
} ; 

// The following are aliases ..  
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
  INT3 : 1 ,
  KBI0 : 1 ,
  KBI1 : 1 ,
  KBI2 : 1 ,
  KBI3 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEG30 : 1 ,
  SEG8 : 1 ,
  SEG9 : 1 ,
  SEG10 : 1 ,
  SEG11 : 1 ,
  SEG29 : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  CTED1 : 1 ,
  CTED2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT : 4 ,
  _KBI : 4 ;
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
  SCL : 1 ,
  SDA : 1 ,
  : 1,
  CK1 : 1 ,
  DT1 : 1 ;
} ; 

struct 
{
  unsigned int 
  T13CKI : 1 ,
  CCP2_PORTC : 1 ,
  CCP1 : 1 ,
  SCK : 1 ,
  SDI : 1 ,
  SDO : 1 ,
  TX1 : 1 ,
  RX1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  SEG32 : 1 ,
  SEG13 : 1 ,
  SEG17 : 1 ,
  SEG16 : 1 ,
  SEG12 : 1 ,
  SEG27 : 1 ,
  SEG28 : 1 ;
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
  SEG0 : 1 ,
  SEG1 : 1 ,
  SEG2 : 1 ,
  SEG3 : 1 ,
  SEG4 : 1 ,
  SEG5 : 1 ,
  SEG6 : 1 ,
  SEG7 : 1 ;
} ; 

struct 
{
  unsigned int 
  CTPLS : 1 ;
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
  : 1,
  RE3 : 1 ,
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
  : 1,
  COM0 : 1 ,
  COM1 : 1 ,
  COM2 : 1 ,
  COM3 : 1 ,
  CCP2_PORTE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 7,
  SEG31 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RE : 2 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  _COM : 4 ;
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
  : 1,
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
  : 1,
  AN6 : 1 ,
  AN7 : 1 ,
  AN8 : 1 ,
  AN9 : 1 ,
  AN10 : 1 ,
  AN11 : 1 ,
  AN5 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  C2OUT_PORTF : 1 ,
  C1OUT_PORTF : 1 ,
  C2INB : 1 ,
  C2INA : 1 ,
  C1INB : 1 ,
  C1INA : 1 ,
  SS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
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
  : 5,
  CVREF : 1 ;
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
  RG4 : 1 ,
  RJPU : 1 ,
  REPU : 1 ,
  RDPU : 1 ;
} ; 

struct 
{
  unsigned int 
  LCDBIAS0 : 1 ,
  CK2 : 1 ,
  DT2 : 1 ,
  VLCAP2 : 1 ,
  SEG26 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  TX2 : 1 ,
  RX2 : 1 ,
  : 1,
  RTCC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  VLCAP1 : 1 ;
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
  : 1,
  LATE3 : 1 ,
  LATE4 : 1 ,
  LATE5 : 1 ,
  LATE6 : 1 ,
  LATE7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATE : 2 ;
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
  : 1,
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
  LATG4 : 1 ,
  : 1,
  U1OD : 1 ,
  U2OD : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATG : 5 ;
} ; 

} LATGbits@0xf8f  ;

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
  : 1,
  TRISE3 : 1 ,
  TRISE4 : 1 ,
  TRISE5 : 1 ,
  TRISE6 : 1 ,
  TRISE7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISE : 2 ;
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
  : 1,
  TRISF1 : 1 ,
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
  TRISG4 : 1 ,
  CCP1OD : 1 ,
  CCP2OD : 1 ,
  SPIOD : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISG : 5 ;
} ; 

} TRISGbits@0xf98  ;

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
  : 1,
  SSPIE : 1 ,
  TX1IE : 1 ,
  RC1IE : 1 ,
  ADIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IE : 1 ,
  TXIE : 1 ,
  RCIE : 1 ;
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
  : 1,
  SSPIF : 1 ,
  TX1IF : 1 ,
  RC1IF : 1 ,
  ADIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IF : 1 ,
  TXIF : 1 ,
  RCIF : 1 ;
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
  : 1,
  SSPIP : 1 ,
  TX1IP : 1 ,
  RC1IP : 1 ,
  ADIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IP : 1 ,
  TXIP : 1 ,
  RCIP : 1 ;
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
  : 1,
  TMR3IE : 1 ,
  LVDIE : 1 ,
  BCLIE : 1 ,
  : 2,
  CMIE : 1 ,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  BCL1IE : 1 ;
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
  : 1,
  TMR3IF : 1 ,
  LVDIF : 1 ,
  BCLIF : 1 ,
  : 2,
  CMIF : 1 ,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  BCL1IF : 1 ;
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
  : 1,
  TMR3IP : 1 ,
  LVDIP : 1 ,
  BCLIP : 1 ,
  : 2,
  CMIP : 1 ,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  BCL1IP : 1 ;
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
  LCDIE : 1 ;
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
  LCDIF : 1 ;
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
  LCDIP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

// ------------------------------
//        EECON1
// ------------------------------
unsigned int EECON1@0xfa6 ;
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
  WPROG : 1 ;
} ; 

} EECON1bits@0xfa6  ;

// ------------------------------
//        EECON2
// ------------------------------
unsigned int EECON2@0xfa7 ;
// ------------------------------
//        LCDCON
// ------------------------------
unsigned int LCDCON@0xfa8 ;
union
{

struct 
{
  unsigned int 
  LMUX0 : 1 ,
  LMUX1 : 1 ,
  CS0 : 1 ,
  CS1 : 1 ,
  : 1,
  WERR : 1 ,
  SLPEN : 1 ,
  LCDEN : 1 ;
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

} LCDCONbits@0xfa8  ;

// ------------------------------
//        LCDSE0
// ------------------------------
unsigned int LCDSE0@0xfa9 ;
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

} LCDSE0bits@0xfa9  ;

// ------------------------------
//        LCDPS
// ------------------------------
unsigned int LCDPS@0xfaa ;
union
{

struct 
{
  unsigned int 
  LP0 : 1 ,
  LP1 : 1 ,
  LP2 : 1 ,
  LP3 : 1 ,
  WA : 1 ,
  LCDA : 1 ,
  BIASMD : 1 ,
  WFT : 1 ;
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

} LCDPSbits@0xfaa  ;

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
  : 2,
  T3SYNC : 1 ,
  : 1,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ,
  : 1,
  T3RD16 : 1 ;
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
  C1OUT_CMCON : 1 ,
  C2OUT_CMCON : 1 ;
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

// ------------------------------
//        LCDSE1
// ------------------------------
unsigned int LCDSE1@0xfb6 ;
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

struct 
{
  unsigned int 
  SE08 : 1 ,
  SE09 : 1 ;
} ; 

} LCDSE1bits@0xfb6  ;

// ------------------------------
//        LCDSE2
// ------------------------------
unsigned int LCDSE2@0xfb7 ;
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

} LCDSE2bits@0xfb7  ;

// ------------------------------
//        LCDSE3
// ------------------------------
unsigned int LCDSE3@0xfb8 ;
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

} LCDSE3bits@0xfb8  ;

// ------------------------------
//        LCDSE4
// ------------------------------
unsigned int LCDSE4@0xfb9 ;
union
{

struct 
{
  unsigned int 
  SE32 : 1 ;
} ; 

struct 
{
  unsigned int 
  SEGEN32 : 1 ;
} ; 

} LCDSE4bits@0xfb9  ;

// ------------------------------
//        LCDDATA0
// ------------------------------
unsigned int LCDDATA0@0xfbb ;
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

} LCDDATA0bits@0xfbb  ;

// ------------------------------
//        LCDDATA1
// ------------------------------
unsigned int LCDDATA1@0xfbc ;
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

} LCDDATA1bits@0xfbc  ;

// ------------------------------
//        LCDDATA2
// ------------------------------
unsigned int LCDDATA2@0xfbd ;
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

} LCDDATA2bits@0xfbd  ;

// ------------------------------
//        LCDDATA3
// ------------------------------
unsigned int LCDDATA3@0xfbe ;
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

} LCDDATA3bits@0xfbe  ;

// ------------------------------
//        LCDDATA4
// ------------------------------
unsigned int LCDDATA4@0xfbf ;
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

} LCDDATA4bits@0xfbf  ;

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

// ------------------------------
//        ADCON1
// ------------------------------
unsigned int ADCON1@0xfc1 ;
union
{

struct 
{
  unsigned int 
  : 7,
  TRIGSEL : 1 ;
} ; 

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
  GO_NOT_DONE : 1 ,
  : 5,
  ADCAL : 1 ;
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
  R : 1 ,
  : 2,
  D : 1 ;
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
  R : 1 ,
  : 2,
  D : 1 ;
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

} SSPSTATbits@0xfc7  ;

// ------------------------------
//        SSP1ADD
// ------------------------------
unsigned int SSP1ADD@0xfc8 ;
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

} SSP1ADDbits@0xfc8  ;

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

// ------------------------------
//        SSP1BUF
// ------------------------------
unsigned int SSP1BUF@0xfc9 ;
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
  T1CKPS1 : 1 ,
  : 1,
  T1RD16 : 1 ;
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
  BOR : 1 ,
  POR : 1 ,
  PD : 1 ,
  TO : 1 ,
  RI : 1 ,
  CM : 1 ;
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
  SWDTEN : 1 ,
  : 6,
  REGSLP : 1 ;
} ; 

struct 
{
  unsigned int 
  SWDTE : 1 ;
} ; 

} WDTCONbits@0xfd1  ;

// ------------------------------
//        LCDREG
// ------------------------------
unsigned int LCDREG@0xfd2 ;
union
{

struct 
{
  unsigned int 
  : 2,
  MODE13 : 1 ,
  : 3,
  CPEN : 1 ;
} ; 

struct 
{
  unsigned int 
  CKSEL0 : 1 ,
  CKSEL1 : 1 ,
  : 1,
  BIAS0 : 1 ,
  BIAS1 : 1 ,
  BIAS2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CKSEL : 2 ,
  : 1,
  _BIAS : 3 ;
} ; 

} LCDREGbits@0xfd2  ;

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
  : 2,
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

struct 
{
  unsigned int 
  STKPTR0 : 1 ,
  STKPTR1 : 1 ,
  STKPTR2 : 1 ,
  STKPTR3 : 1 ,
  STKPTR4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SP : 5 ;
} ; 

struct 
{
  unsigned int 
  _STKPTR : 5 ;
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
