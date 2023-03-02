#ifndef DEVICE
#define DEVICE p18lf24j11
#define p18lf24j11

// ======================================
//         PROCESSOR : p18lf24j11
// ======================================

// This file has been automatically generated from Microchip's "p18lf24j11.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xec6 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        RPOR0
// ------------------------------
unsigned int RPOR0@0xec6 ;
// ------------------------------
//        RPOR1
// ------------------------------
unsigned int RPOR1@0xec7 ;
// ------------------------------
//        RPOR2
// ------------------------------
unsigned int RPOR2@0xec8 ;
// ------------------------------
//        RPOR3
// ------------------------------
unsigned int RPOR3@0xec9 ;
// ------------------------------
//        RPOR4
// ------------------------------
unsigned int RPOR4@0xeca ;
// ------------------------------
//        RPOR5
// ------------------------------
unsigned int RPOR5@0xecb ;
// ------------------------------
//        RPOR6
// ------------------------------
unsigned int RPOR6@0xecc ;
// ------------------------------
//        RPOR7
// ------------------------------
unsigned int RPOR7@0xecd ;
// ------------------------------
//        RPOR8
// ------------------------------
unsigned int RPOR8@0xece ;
// ------------------------------
//        RPOR9
// ------------------------------
unsigned int RPOR9@0xecf ;
// ------------------------------
//        RPOR10
// ------------------------------
unsigned int RPOR10@0xed0 ;
// ------------------------------
//        RPOR11
// ------------------------------
unsigned int RPOR11@0xed1 ;
// ------------------------------
//        RPOR12
// ------------------------------
unsigned int RPOR12@0xed2 ;
// ------------------------------
//        RPOR13
// ------------------------------
unsigned int RPOR13@0xed3 ;
// ------------------------------
//        RPOR14
// ------------------------------
unsigned int RPOR14@0xed4 ;
// ------------------------------
//        RPOR15
// ------------------------------
unsigned int RPOR15@0xed5 ;
// ------------------------------
//        RPOR16
// ------------------------------
unsigned int RPOR16@0xed6 ;
// ------------------------------
//        RPOR17
// ------------------------------
unsigned int RPOR17@0xed7 ;
// ------------------------------
//        RPOR18
// ------------------------------
unsigned int RPOR18@0xed8 ;
// ------------------------------
//        RPINR1
// ------------------------------
unsigned int RPINR1@0xee7 ;
// ------------------------------
//        RPINR2
// ------------------------------
unsigned int RPINR2@0xee8 ;
// ------------------------------
//        RPINR3
// ------------------------------
unsigned int RPINR3@0xee9 ;
// ------------------------------
//        RPINR4
// ------------------------------
unsigned int RPINR4@0xeea ;
// ------------------------------
//        RPINR6
// ------------------------------
unsigned int RPINR6@0xeec ;
// ------------------------------
//        RPINR7
// ------------------------------
unsigned int RPINR7@0xeed ;
// ------------------------------
//        RPINR8
// ------------------------------
unsigned int RPINR8@0xeee ;
// ------------------------------
//        RPINR12
// ------------------------------
unsigned int RPINR12@0xef2 ;
// ------------------------------
//        RPINR13
// ------------------------------
unsigned int RPINR13@0xef3 ;
// ------------------------------
//        RPINR16
// ------------------------------
unsigned int RPINR16@0xef6 ;
// ------------------------------
//        RPINR17
// ------------------------------
unsigned int RPINR17@0xef7 ;
// ------------------------------
//        RPINR21
// ------------------------------
unsigned int RPINR21@0xefb ;
// ------------------------------
//        RPINR22
// ------------------------------
unsigned int RPINR22@0xefc ;
// ------------------------------
//        RPINR23
// ------------------------------
unsigned int RPINR23@0xefd ;
// ------------------------------
//        RPINR24
// ------------------------------
unsigned int RPINR24@0xefe ;
// ------------------------------
//        PPSCON
// ------------------------------
unsigned int PPSCON@0xeff ;
union
{

struct 
{
  unsigned int 
  IOLOCK : 1 ;
} ; 

} PPSCONbits@0xeff  ;

// ------------------------------
//        PADCFG1
// ------------------------------
unsigned int PADCFG1@0xf3c ;
union
{

struct 
{
  unsigned int 
  PMPTTL : 1 ,
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

} PADCFG1bits@0xf3c  ;

// ------------------------------
//        REFOCON
// ------------------------------
unsigned int REFOCON@0xf3d ;
union
{

struct 
{
  unsigned int 
  : 4,
  ROSEL : 1 ,
  ROSSLP : 1 ,
  : 1,
  ROON : 1 ;
} ; 

struct 
{
  unsigned int 
  RODIV0 : 1 ,
  RODIV1 : 1 ,
  RODIV2 : 1 ,
  RODIV3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RODIV : 4 ;
} ; 

} REFOCONbits@0xf3d  ;

// ------------------------------
//        RTCCAL
// ------------------------------
unsigned int RTCCAL@0xf3e ;
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

} RTCCALbits@0xf3e  ;

// ------------------------------
//        RTCCFG
// ------------------------------
unsigned int RTCCFG@0xf3f ;
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

} RTCCFGbits@0xf3f  ;

// ------------------------------
//        ODCON3
// ------------------------------
unsigned int ODCON3@0xf40 ;
union
{

struct 
{
  unsigned int 
  SPI1OD : 1 ,
  SPI2OD : 1 ;
} ; 

} ODCON3bits@0xf40  ;

// ------------------------------
//        ODCON2
// ------------------------------
unsigned int ODCON2@0xf41 ;
union
{

struct 
{
  unsigned int 
  U1OD : 1 ,
  U2OD : 1 ;
} ; 

} ODCON2bits@0xf41  ;

// ------------------------------
//        ODCON1
// ------------------------------
unsigned int ODCON1@0xf42 ;
union
{

struct 
{
  unsigned int 
  ECCP1OD : 1 ,
  ECCP2OD : 1 ;
} ; 

} ODCON1bits@0xf42  ;

// ------------------------------
//        ANCON0
// ------------------------------
unsigned int ANCON0@0xf48 ;
union
{

struct 
{
  unsigned int 
  PCFG0 : 1 ,
  PCFG1 : 1 ,
  PCFG2 : 1 ,
  PCFG3 : 1 ,
  PCFG4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PCFG : 5 ;
} ; 

} ANCON0bits@0xf48  ;

// ------------------------------
//        ANCON1
// ------------------------------
unsigned int ANCON1@0xf49 ;
union
{

struct 
{
  unsigned int 
  PCFG8 : 1 ,
  PCFG9 : 1 ,
  PCFG10 : 1 ,
  PCFG11 : 1 ,
  PCFG12 : 1 ,
  : 2,
  VBGEN : 1 ;
} ; 

} ANCON1bits@0xf49  ;

// ------------------------------
//        DSWAKEL
// ------------------------------
unsigned int DSWAKEL@0xf4a ;
union
{

struct 
{
  unsigned int 
  DSPOR : 1 ,
  : 1,
  DSMCLR : 1 ,
  DSRTC : 1 ,
  DSWDT : 1 ,
  DSULP : 1 ,
  : 1,
  DSFLT : 1 ;
} ; 

} DSWAKELbits@0xf4a  ;

// ------------------------------
//        DSWAKEH
// ------------------------------
unsigned int DSWAKEH@0xf4b ;
union
{

struct 
{
  unsigned int 
  DSINT0 : 1 ;
} ; 

} DSWAKEHbits@0xf4b  ;

// ------------------------------
//        DSCONL
// ------------------------------
unsigned int DSCONL@0xf4c ;
union
{

struct 
{
  unsigned int 
  RELEASE : 1 ,
  DSBOR : 1 ,
  ULPWDIS : 1 ;
} ; 

} DSCONLbits@0xf4c  ;

// ------------------------------
//        DSCONH
// ------------------------------
unsigned int DSCONH@0xf4d ;
union
{

struct 
{
  unsigned int 
  RTCWDIS : 1 ,
  DSULPEN : 1 ,
  : 5,
  DSEN : 1 ;
} ; 

} DSCONHbits@0xf4d  ;

// ------------------------------
//        DSGPR0
// ------------------------------
unsigned int DSGPR0@0xf4e ;
// ------------------------------
//        DSGPR1
// ------------------------------
unsigned int DSGPR1@0xf4f ;
// ------------------------------
//        TCLKCON
// ------------------------------
unsigned int TCLKCON@0xf52 ;
union
{

struct 
{
  unsigned int 
  T3CCP1 : 1 ,
  T3CCP2 : 1 ,
  : 2,
  T1RUN : 1 ;
} ; 

} TCLKCONbits@0xf52  ;

// ------------------------------
//        CVRCON
// ------------------------------
unsigned int CVRCON@0xf53 ;
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

} CVRCONbits@0xf53  ;

// ------------------------------
//        DMABCH
// ------------------------------
unsigned int DMABCH@0xf66 ;
// ------------------------------
//        DMABCL
// ------------------------------
unsigned int DMABCL@0xf67 ;
// ------------------------------
//        RXADDRH
// ------------------------------
unsigned int RXADDRH@0xf68 ;
// ------------------------------
//        RXADDRL
// ------------------------------
unsigned int RXADDRL@0xf69 ;
// ------------------------------
//        TXADDRH
// ------------------------------
unsigned int TXADDRH@0xf6a ;
// ------------------------------
//        TXADDRL
// ------------------------------
unsigned int TXADDRL@0xf6b ;
// ------------------------------
//        CMSTAT
// ------------------------------
unsigned int CMSTAT@0xf70 ;
union
{

struct 
{
  unsigned int 
  COUT1 : 1 ,
  COUT2 : 1 ;
} ; 

} CMSTATbits@0xf70  ;

// ------------------------------
//        CMSTATUS
// ------------------------------
unsigned int CMSTATUS@0xf70 ;
union
{

struct 
{
  unsigned int 
  COUT1 : 1 ,
  COUT2 : 1 ;
} ; 

} CMSTATUSbits@0xf70  ;

// ------------------------------
//        SSP2CON2
// ------------------------------
unsigned int SSP2CON2@0xf71 ;
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

} SSP2CON2bits@0xf71  ;

// ------------------------------
//        SSP2CON1
// ------------------------------
unsigned int SSP2CON1@0xf72 ;
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

} SSP2CON1bits@0xf72  ;

// ------------------------------
//        SSP2STAT
// ------------------------------
unsigned int SSP2STAT@0xf73 ;
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

} SSP2STATbits@0xf73  ;

// ------------------------------
//        SSP2ADD
// ------------------------------
unsigned int SSP2ADD@0xf74 ;
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

} SSP2ADDbits@0xf74  ;

// ------------------------------
//        SSP2BUF
// ------------------------------
unsigned int SSP2BUF@0xf75 ;
// ------------------------------
//        T4CON
// ------------------------------
unsigned int T4CON@0xf76 ;
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

} T4CONbits@0xf76  ;

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xf77 ;
// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf78 ;
// ------------------------------
//        T3CON
// ------------------------------
unsigned int T3CON@0xf79 ;
union
{

struct 
{
  unsigned int 
  TMR3ON : 1 ,
  RD16 : 1 ,
  T3SYNC : 1 ;
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

} T3CONbits@0xf79  ;

// ------------------------------
//        TMR3
// ------------------------------
unsigned int TMR3@0xf7a ;
// ------------------------------
//        TMR3L
// ------------------------------
unsigned int TMR3L@0xf7a ;
// ------------------------------
//        TMR3H
// ------------------------------
unsigned int TMR3H@0xf7b ;
// ------------------------------
//        BAUDCON2
// ------------------------------
unsigned int BAUDCON2@0xf7c ;
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

} BAUDCON2bits@0xf7c  ;

// ------------------------------
//        SPBRGH2
// ------------------------------
unsigned int SPBRGH2@0xf7d ;
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
  RCIDL : 1 ,
  ABDOVF : 1 ;
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
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

} BAUDCON1bits@0xf7e  ;

// ------------------------------
//        BAUDCTL
// ------------------------------
unsigned int BAUDCTL@0xf7e ;
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

} BAUDCTLbits@0xf7e  ;

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
  : 1,
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
  : 1,
  AN4 : 1 ,
  OSC2 : 1 ,
  OSC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  C1INA : 1 ,
  C2INA : 1 ,
  VREF_MINUS : 1 ,
  VREF_PLUS : 1 ,
  : 1,
  NOT_SS1 : 1 ,
  CLKO : 1 ,
  CLKI : 1 ;
} ; 

struct 
{
  unsigned int 
  ULPWU : 1 ,
  : 1,
  CVREF_MINUS : 1 ,
  C1INB : 1 ,
  : 1,
  HLVDIN : 1 ;
} ; 

struct 
{
  unsigned int 
  RP0 : 1 ,
  RP1 : 1 ,
  C2INB : 1 ,
  : 2,
  RP2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RA : 4 ;
} ; 

struct 
{
  unsigned int 
  _AN : 4 ;
} ; 

struct 
{
  unsigned int 
  _RP : 2 ;
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
  AN12 : 1 ,
  AN10 : 1 ,
  AN8 : 1 ,
  AN9 : 1 ,
  : 2,
  KBI2 : 1 ,
  KBI3 : 1 ;
} ; 

struct 
{
  unsigned int 
  INT0 : 1 ,
  : 1,
  CTEDG1 : 1 ,
  CTEDG2 : 1 ,
  KBI0 : 1 ,
  KBI1 : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

struct 
{
  unsigned int 
  RP3 : 1 ,
  RTCC : 1 ,
  : 4,
  RP9 : 1 ,
  RP10 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  RP4 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  REFO : 1 ,
  RP6 : 1 ,
  RP7 : 1 ,
  RP8 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  RP5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT : 1 ,
  : 3,
  _KBI : 2 ;
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
  AN11 : 1 ,
  SCK1 : 1 ;
} ; 

struct 
{
  unsigned int 
  T1CKI : 1 ,
  : 1,
  CTPLS : 1 ,
  SCL1 : 1 ,
  SDI1 : 1 ,
  SDO1 : 1 ,
  TX1 : 1 ,
  RX1 : 1 ;
} ; 

struct 
{
  unsigned int 
  RP11 : 1 ,
  RP12 : 1 ,
  RP13 : 1 ,
  RP14 : 1 ,
  RP15 : 1 ,
  RP16 : 1 ,
  CK1 : 1 ,
  DT1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RP17 : 1 ,
  RP18 : 1 ;
} ; 

} PORTCbits@0xf82  ;

// ------------------------------
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xf85 ;
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

} HLVDCONbits@0xf85  ;

// ------------------------------
//        DMACON2
// ------------------------------
unsigned int DMACON2@0xf86 ;
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

} DMACON2bits@0xf86  ;

// ------------------------------
//        DMACON1
// ------------------------------
unsigned int DMACON1@0xf88 ;
union
{

struct 
{
  unsigned int 
  DMAEN : 1 ,
  DLYINTEN : 1 ,
  DUPLEX0 : 1 ,
  DUPLEX1 : 1 ,
  RXINC : 1 ,
  TXINC : 1 ,
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

} DMACON1bits@0xf88  ;

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
//        ALRMVALL
// ------------------------------
unsigned int ALRMVALL@0xf8e ;
// ------------------------------
//        ALRMVALH
// ------------------------------
unsigned int ALRMVALH@0xf8f ;
// ------------------------------
//        ALRMRPT
// ------------------------------
unsigned int ALRMRPT@0xf90 ;
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

} ALRMRPTbits@0xf90  ;

// ------------------------------
//        ALRMCFG
// ------------------------------
unsigned int ALRMCFG@0xf91 ;
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

} ALRMCFGbits@0xf91  ;

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
//        T3GCON
// ------------------------------
unsigned int T3GCON@0xf97 ;
union
{

struct 
{
  unsigned int 
  T3GSS0 : 1 ,
  T3GSS1 : 1 ,
  T3GVAL : 1 ,
  T3GGO_T3DONE : 1 ,
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
  T3DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T3GSS : 2 ;
} ; 

} T3GCONbits@0xf97  ;

// ------------------------------
//        RTCVALL
// ------------------------------
unsigned int RTCVALL@0xf98 ;
// ------------------------------
//        RTCVALH
// ------------------------------
unsigned int RTCVALH@0xf99 ;
// ------------------------------
//        T1GCON
// ------------------------------
unsigned int T1GCON@0xf9a ;
union
{

struct 
{
  unsigned int 
  T1GSS0 : 1 ,
  T1GSS1 : 1 ,
  T1GVAL : 1 ,
  T1GGO_T1DONE : 1 ,
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
  T1DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T1GSS : 2 ;
} ; 

} T1GCONbits@0xf9a  ;

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
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf9c ;
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

} RCSTA2bits@0xf9c  ;

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
  SSP1IE : 1 ,
  TX1IE : 1 ,
  RC1IE : 1 ,
  ADIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSPIE : 1 ,
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
  CCP1IF : 1 ,
  SSP1IF : 1 ,
  TX1IF : 1 ,
  RC1IF : 1 ,
  ADIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSPIF : 1 ,
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
  CCP1IP : 1 ,
  SSP1IP : 1 ,
  TX1IP : 1 ,
  RC1IP : 1 ,
  ADIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSPIP : 1 ,
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
  CCP2IE : 1 ,
  TMR3IE : 1 ,
  LVDIE : 1 ,
  BCL1IE : 1 ,
  : 1,
  CM1IE : 1 ,
  CM2IE : 1 ,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  BCLIE : 1 ;
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
  BCL1IF : 1 ,
  : 1,
  CM1IF : 1 ,
  CM2IF : 1 ,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  BCLIF : 1 ;
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
  BCL1IP : 1 ,
  : 1,
  CM1IP : 1 ,
  CM2IP : 1 ,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  BCLIP : 1 ;
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
  TMR3GIE : 1 ,
  CTMUIE : 1 ,
  TMR4IE : 1 ,
  TX2IE : 1 ,
  RC2IE : 1 ,
  BCL2IE : 1 ,
  SSP2IE : 1 ;
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
  TMR3GIF : 1 ,
  CTMUIF : 1 ,
  TMR4IF : 1 ,
  TX2IF : 1 ,
  RC2IF : 1 ,
  BCL2IF : 1 ,
  SSP2IF : 1 ;
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
  TMR3GIP : 1 ,
  CTMUIP : 1 ,
  TMR4IP : 1 ,
  TX2IP : 1 ,
  RC2IP : 1 ,
  BCL2IP : 1 ,
  SSP2IP : 1 ;
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
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xfa8 ;
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

} TXSTA2bits@0xfa8  ;

// ------------------------------
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xfa9 ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xfaa ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xfab ;
// ------------------------------
//        RCSTA
// ------------------------------
unsigned int RCSTA@0xfac ;
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

} RCSTAbits@0xfac  ;

// ------------------------------
//        RCSTA1
// ------------------------------
unsigned int RCSTA1@0xfac ;
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

} RCSTA1bits@0xfac  ;

// ------------------------------
//        TXSTA
// ------------------------------
unsigned int TXSTA@0xfad ;
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

} TXSTAbits@0xfad  ;

// ------------------------------
//        TXSTA1
// ------------------------------
unsigned int TXSTA1@0xfad ;
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

} TXSTA1bits@0xfad  ;

// ------------------------------
//        TXREG
// ------------------------------
unsigned int TXREG@0xfae ;
// ------------------------------
//        TXREG1
// ------------------------------
unsigned int TXREG1@0xfae ;
// ------------------------------
//        RCREG
// ------------------------------
unsigned int RCREG@0xfaf ;
// ------------------------------
//        RCREG1
// ------------------------------
unsigned int RCREG1@0xfaf ;
// ------------------------------
//        SPBRG
// ------------------------------
unsigned int SPBRG@0xfb0 ;
// ------------------------------
//        SPBRG1
// ------------------------------
unsigned int SPBRG1@0xfb0 ;
// ------------------------------
//        CTMUICON
// ------------------------------
unsigned int CTMUICON@0xfb1 ;
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

} CTMUICONbits@0xfb1  ;

// ------------------------------
//        CTMUCONL
// ------------------------------
unsigned int CTMUCONL@0xfb2 ;
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

} CTMUCONLbits@0xfb2  ;

// ------------------------------
//        CTMUCONH
// ------------------------------
unsigned int CTMUCONH@0xfb3 ;
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

} CTMUCONHbits@0xfb3  ;

// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xfb4 ;
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

} CCP2CONbits@0xfb4  ;

// ------------------------------
//        ECCP2CON
// ------------------------------
unsigned int ECCP2CON@0xfb4 ;
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

} ECCP2CONbits@0xfb4  ;

// ------------------------------
//        CCPR2
// ------------------------------
unsigned int CCPR2@0xfb5 ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xfb5 ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xfb6 ;
// ------------------------------
//        ECCP2DEL
// ------------------------------
unsigned int ECCP2DEL@0xfb7 ;
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

} ECCP2DELbits@0xfb7  ;

// ------------------------------
//        PWM2CON
// ------------------------------
unsigned int PWM2CON@0xfb7 ;
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

} PWM2CONbits@0xfb7  ;

// ------------------------------
//        ECCP2AS
// ------------------------------
unsigned int ECCP2AS@0xfb8 ;
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

} ECCP2ASbits@0xfb8  ;

// ------------------------------
//        PSTR2CON
// ------------------------------
unsigned int PSTR2CON@0xfb9 ;
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
  : 6,
  _CMPL : 2 ;
} ; 

struct 
{
  unsigned int 
  _P2DC : 7 ;
} ; 

} PSTR2CONbits@0xfb9  ;

// ------------------------------
//        CCP1CON
// ------------------------------
unsigned int CCP1CON@0xfba ;
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

} CCP1CONbits@0xfba  ;

// ------------------------------
//        ECCP1CON
// ------------------------------
unsigned int ECCP1CON@0xfba ;
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

} ECCP1CONbits@0xfba  ;

// ------------------------------
//        CCPR1
// ------------------------------
unsigned int CCPR1@0xfbb ;
// ------------------------------
//        CCPR1L
// ------------------------------
unsigned int CCPR1L@0xfbb ;
// ------------------------------
//        CCPR1H
// ------------------------------
unsigned int CCPR1H@0xfbc ;
// ------------------------------
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xfbd ;
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

} ECCP1DELbits@0xfbd  ;

// ------------------------------
//        PWM1CON
// ------------------------------
unsigned int PWM1CON@0xfbd ;
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

} PWM1CONbits@0xfbd  ;

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfbe ;
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

} ECCP1ASbits@0xfbe  ;

// ------------------------------
//        PSTR1CON
// ------------------------------
unsigned int PSTR1CON@0xfbf ;
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

} PSTR1CONbits@0xfbf  ;

// ------------------------------
//        WDTCON
// ------------------------------
unsigned int WDTCON@0xfc0 ;
union
{

struct 
{
  unsigned int 
  SWDTEN : 1 ,
  ULPSINK : 1 ,
  ULPEN : 1 ,
  DS : 1 ,
  : 1,
  ULPLVL : 1 ,
  LVDSTAT : 1 ,
  REGSLP : 1 ;
} ; 

struct 
{
  unsigned int 
  SWDTE : 1 ;
} ; 

} WDTCONbits@0xfc0  ;

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
  ADCAL : 1 ,
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
  GO_DONE : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ,
  CHS2 : 1 ,
  CHS3 : 1 ,
  VCFG0 : 1 ,
  VCFG1 : 1 ;
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
  _CHS : 4 ,
  _VCFG : 2 ;
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
  RD16 : 1 ,
  T1SYNC : 1 ,
  T1OSCEN : 1 ;
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
  BOR : 1 ,
  POR : 1 ,
  PD : 1 ,
  TO : 1 ,
  RI : 1 ,
  CM : 1 ;
} ; 

} RCONbits@0xfd0  ;

// ------------------------------
//        CM2CON
// ------------------------------
unsigned int CM2CON@0xfd1 ;
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

} CM2CONbits@0xfd1  ;

// ------------------------------
//        CM2CON1
// ------------------------------
unsigned int CM2CON1@0xfd1 ;
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

} CM2CON1bits@0xfd1  ;

// ------------------------------
//        CM1CON
// ------------------------------
unsigned int CM1CON@0xfd2 ;
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

} CM1CONbits@0xfd2  ;

// ------------------------------
//        CM1CON1
// ------------------------------
unsigned int CM1CON1@0xfd2 ;
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

} CM1CON1bits@0xfd2  ;

// ------------------------------
//        OSCCON
// ------------------------------
unsigned int OSCCON@0xfd3 ;
union
{

struct 
{
  unsigned int 
  : 3,
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
