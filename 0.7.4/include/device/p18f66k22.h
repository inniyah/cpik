#ifndef DEVICE
#define DEVICE p18f66k22
#define p18f66k22

// ======================================
//         PROCESSOR : p18f66k22
// ======================================

// This file has been automatically generated from Microchip's "p18f66k22.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xf16 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        PMD3
// ------------------------------
unsigned int PMD3@0xf16 ;
union
{

struct 
{
  unsigned int 
  TMR12MD : 1 ,
  CCP4MD : 1 ,
  CCP5MD : 1 ,
  CCP6MD : 1 ,
  CCP7MD : 1 ,
  CCP8MD : 1 ,
  CCP9MD : 1 ,
  CCP10MD : 1 ;
} ; 

} PMD3bits@0xf16  ;

// ------------------------------
//        PMD2
// ------------------------------
unsigned int PMD2@0xf17 ;
union
{

struct 
{
  unsigned int 
  CMP1MD : 1 ,
  CMP2MD : 1 ,
  CMP3MD : 1 ,
  TMR5MD : 1 ,
  TMR6MD : 1 ,
  TMR7MD : 1 ,
  TMR8MD : 1 ,
  TMR10MD : 1 ;
} ; 

} PMD2bits@0xf17  ;

// ------------------------------
//        PMD1
// ------------------------------
unsigned int PMD1@0xf18 ;
union
{

struct 
{
  unsigned int 
  : 1,
  TMR1MD : 1 ,
  TMR2MD : 1 ,
  TMR3MD : 1 ,
  TMR4MD : 1 ,
  RTCCMD : 1 ,
  CTMUMD : 1 ,
  PSPMD : 1 ;
} ; 

} PMD1bits@0xf18  ;

// ------------------------------
//        PMD0
// ------------------------------
unsigned int PMD0@0xf19 ;
union
{

struct 
{
  unsigned int 
  ADCMD : 1 ,
  SSP1MD : 1 ,
  SSP2MD : 1 ,
  UART1MD : 1 ,
  UART2MD : 1 ,
  CCP1MD : 1 ,
  CCP2MD : 1 ,
  CCP3MD : 1 ;
} ; 

} PMD0bits@0xf19  ;

// ------------------------------
//        PSTR3CON
// ------------------------------
unsigned int PSTR3CON@0xf1a ;
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

} PSTR3CONbits@0xf1a  ;

// ------------------------------
//        PSTR2CON
// ------------------------------
unsigned int PSTR2CON@0xf1b ;
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

} PSTR2CONbits@0xf1b  ;

// ------------------------------
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xf1c ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xf1d ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xf1e ;
// ------------------------------
//        SPBRGH2
// ------------------------------
unsigned int SPBRGH2@0xf1f ;
// ------------------------------
//        BAUDCON2
// ------------------------------
unsigned int BAUDCON2@0xf20 ;
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

} BAUDCON2bits@0xf20  ;

// ------------------------------
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xf21 ;
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

} TXSTA2bits@0xf21  ;

// ------------------------------
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf22 ;
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

} RCSTA2bits@0xf22  ;

// ------------------------------
//        ANCON2
// ------------------------------
unsigned int ANCON2@0xf23 ;
union
{

struct 
{
  unsigned int 
  ANSEL16 : 1 ,
  ANSEL17 : 1 ,
  ANSEL18 : 1 ,
  ANSEL19 : 1 ;
} ; 

} ANCON2bits@0xf23  ;

// ------------------------------
//        ANCON1
// ------------------------------
unsigned int ANCON1@0xf24 ;
union
{

struct 
{
  unsigned int 
  ANSEL8 : 1 ,
  ANSEL9 : 1 ,
  ANSEL10 : 1 ,
  ANSEL11 : 1 ;
} ; 

} ANCON1bits@0xf24  ;

// ------------------------------
//        ANCON0
// ------------------------------
unsigned int ANCON0@0xf25 ;
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

} ANCON0bits@0xf25  ;

// ------------------------------
//        ODCON3
// ------------------------------
unsigned int ODCON3@0xf27 ;
union
{

struct 
{
  unsigned int 
  CTMUDS : 1 ,
  : 5,
  U1OD : 1 ,
  U2OD : 1 ;
} ; 

} ODCON3bits@0xf27  ;

// ------------------------------
//        ODCON2
// ------------------------------
unsigned int ODCON2@0xf28 ;
union
{

struct 
{
  unsigned int 
  CCP3OD : 1 ,
  CCP4OD : 1 ,
  CCP5OD : 1 ,
  CCP6OD : 1 ,
  CCP7OD : 1 ,
  CCP8OD : 1 ,
  CCP9OD : 1 ,
  CCP10OD : 1 ;
} ; 

} ODCON2bits@0xf28  ;

// ------------------------------
//        ODCON1
// ------------------------------
unsigned int ODCON1@0xf29 ;
union
{

struct 
{
  unsigned int 
  SPI2OD : 1 ,
  : 4,
  CCP1OD : 1 ,
  CCP2OD : 1 ,
  SPI1OD : 1 ;
} ; 

} ODCON1bits@0xf29  ;

// ------------------------------
//        REFOCON
// ------------------------------
unsigned int REFOCON@0xf2a ;
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

} REFOCONbits@0xf2a  ;

// ------------------------------
//        CCPTMRS2
// ------------------------------
unsigned int CCPTMRS2@0xf2b ;
union
{

struct 
{
  unsigned int 
  : 2,
  C9TSEL0 : 1 ,
  : 1,
  C10TSEL0 : 1 ;
} ; 

struct 
{
  unsigned int 
  C8TSEL0 : 1 ,
  C8TSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _C9TSEL : 1 ;
} ; 

struct 
{
  unsigned int 
  _C8TSEL : 2 ;
} ; 

} CCPTMRS2bits@0xf2b  ;

// ------------------------------
//        CCPTMRS1
// ------------------------------
unsigned int CCPTMRS1@0xf2c ;
union
{

struct 
{
  unsigned int 
  : 2,
  C5TSEL0 : 1 ,
  : 1,
  C6TSEL0 : 1 ;
} ; 

struct 
{
  unsigned int 
  C4TSEL0 : 1 ,
  C4TSEL1 : 1 ,
  : 4,
  C7TSEL0 : 1 ,
  C7TSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _C5TSEL : 1 ;
} ; 

struct 
{
  unsigned int 
  _C4TSEL : 2 ,
  : 4,
  _C7TSEL : 2 ;
} ; 

} CCPTMRS1bits@0xf2c  ;

// ------------------------------
//        CCPTMRS0
// ------------------------------
unsigned int CCPTMRS0@0xf2d ;
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

} CCPTMRS0bits@0xf2d  ;

// ------------------------------
//        CM3CON
// ------------------------------
unsigned int CM3CON@0xf2e ;
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

} CM3CONbits@0xf2e  ;

// ------------------------------
//        CM3CON1
// ------------------------------
unsigned int CM3CON1@0xf2e ;
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

} CM3CON1bits@0xf2e  ;

// ------------------------------
//        CM2CON
// ------------------------------
unsigned int CM2CON@0xf2f ;
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

} CM2CONbits@0xf2f  ;

// ------------------------------
//        CM2CON1
// ------------------------------
unsigned int CM2CON1@0xf2f ;
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

} CM2CON1bits@0xf2f  ;

// ------------------------------
//        T12CON
// ------------------------------
unsigned int T12CON@0xf30 ;
union
{

struct 
{
  unsigned int 
  : 2,
  TMR12ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T12CKPS0 : 1 ,
  T12CKPS1 : 1 ,
  : 1,
  T12OUTPS0 : 1 ,
  T12OUTPS1 : 1 ,
  T12OUTPS2 : 1 ,
  T12OUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T12CKPS : 2 ,
  : 1,
  _T12OUTPS : 4 ;
} ; 

} T12CONbits@0xf30  ;

// ------------------------------
//        PR12
// ------------------------------
unsigned int PR12@0xf31 ;
// ------------------------------
//        TMR12
// ------------------------------
unsigned int TMR12@0xf32 ;
// ------------------------------
//        T10CON
// ------------------------------
unsigned int T10CON@0xf33 ;
union
{

struct 
{
  unsigned int 
  : 2,
  TMR10ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T10CKPS0 : 1 ,
  T10CKPS1 : 1 ,
  : 1,
  T10OUTPS0 : 1 ,
  T10OUTPS1 : 1 ,
  T10OUTPS2 : 1 ,
  T10OUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T10CKPS : 2 ,
  : 1,
  _T10OUTPS : 4 ;
} ; 

} T10CONbits@0xf33  ;

// ------------------------------
//        PR10
// ------------------------------
unsigned int PR10@0xf34 ;
// ------------------------------
//        TMR10
// ------------------------------
unsigned int TMR10@0xf35 ;
// ------------------------------
//        T8CON
// ------------------------------
unsigned int T8CON@0xf36 ;
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

} T8CONbits@0xf36  ;

// ------------------------------
//        PR8
// ------------------------------
unsigned int PR8@0xf37 ;
// ------------------------------
//        TMR8
// ------------------------------
unsigned int TMR8@0xf38 ;
// ------------------------------
//        T6CON
// ------------------------------
unsigned int T6CON@0xf39 ;
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

} T6CONbits@0xf39  ;

// ------------------------------
//        PR6
// ------------------------------
unsigned int PR6@0xf3a ;
// ------------------------------
//        TMR6
// ------------------------------
unsigned int TMR6@0xf3b ;
// ------------------------------
//        T7GCON
// ------------------------------
unsigned int T7GCON@0xf3c ;
union
{

struct 
{
  unsigned int 
  : 2,
  T7GVAL : 1 ,
  T7GGO_NOT_T7DONE : 1 ,
  T7GSPM : 1 ,
  T7GTM : 1 ,
  T7GPOL : 1 ,
  TMR7GE : 1 ;
} ; 

struct 
{
  unsigned int 
  T7GSS0 : 1 ,
  T7GSS1 : 1 ,
  : 1,
  T7GGO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  NOT_T7DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T7GSS : 2 ;
} ; 

} T7GCONbits@0xf3c  ;

// ------------------------------
//        T7CON
// ------------------------------
unsigned int T7CON@0xf3d ;
union
{

struct 
{
  unsigned int 
  TMR7ON : 1 ,
  RD16 : 1 ,
  NOT_T7SYNC : 1 ,
  SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  T7CKPS0 : 1 ,
  T7CKPS1 : 1 ,
  TMR7CS0 : 1 ,
  TMR7CS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T7CKPS : 2 ,
  _TMR7CS : 2 ;
} ; 

} T7CONbits@0xf3d  ;

// ------------------------------
//        TMR7
// ------------------------------
unsigned int TMR7@0xf3e ;
// ------------------------------
//        TMR7L
// ------------------------------
unsigned int TMR7L@0xf3e ;
// ------------------------------
//        TMR7H
// ------------------------------
unsigned int TMR7H@0xf3f ;
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
//        ECCP2CON
// ------------------------------
unsigned int ECCP2CON@0xf4e ;
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

} ECCP2CONbits@0xf4e  ;

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
//        PWM2CON
// ------------------------------
unsigned int PWM2CON@0xf51 ;
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

} PWM2CONbits@0xf51  ;

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
//        PADCFG1
// ------------------------------
unsigned int PADCFG1@0xf53 ;
union
{

struct 
{
  unsigned int 
  : 6,
  REPU : 1 ,
  RDPU : 1 ;
} ; 

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

} PADCFG1bits@0xf53  ;

// ------------------------------
//        CM1CON
// ------------------------------
unsigned int CM1CON@0xf54 ;
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

} CM1CONbits@0xf54  ;

// ------------------------------
//        CM1CON1
// ------------------------------
unsigned int CM1CON1@0xf54 ;
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

} CM1CON1bits@0xf54  ;

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
  : 2,
  EDG1POL : 1 ,
  : 2,
  EDG2POL : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  EDG1SEL0 : 1 ,
  EDG1SEL1 : 1 ,
  : 1,
  EDG2SEL0 : 1 ,
  EDG2SEL1 : 1 ;
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
//        ALRMVAL
// ------------------------------
unsigned int ALRMVAL@0xf58 ;
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
//        RTCVAL
// ------------------------------
unsigned int RTCVAL@0xf5c ;
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

} RTCCFGbits@0xf5f  ;

// ------------------------------
//        PIE6
// ------------------------------
unsigned int PIE6@0xf60 ;
union
{

struct 
{
  unsigned int 
  CMP1IE : 1 ,
  CMP2IE : 1 ,
  CMP3IE : 1 ,
  : 1,
  EEIE : 1 ;
} ; 

} PIE6bits@0xf60  ;

// ------------------------------
//        EEDATA
// ------------------------------
unsigned int EEDATA@0xf61 ;
// ------------------------------
//        EEADR
// ------------------------------
unsigned int EEADR@0xf62 ;
// ------------------------------
//        EEADRH
// ------------------------------
unsigned int EEADRH@0xf63 ;
// ------------------------------
//        OSCCON2
// ------------------------------
unsigned int OSCCON2@0xf64 ;
union
{

struct 
{
  unsigned int 
  MFIOSEL : 1 ,
  MFIOFS : 1 ,
  : 1,
  SOSCGO : 1 ,
  : 2,
  SOSCRUN : 1 ;
} ; 

} OSCCON2bits@0xf64  ;

// ------------------------------
//        BAUDCON
// ------------------------------
unsigned int BAUDCON@0xf65 ;
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

} BAUDCONbits@0xf65  ;

// ------------------------------
//        BAUDCON1
// ------------------------------
unsigned int BAUDCON1@0xf65 ;
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

} BAUDCON1bits@0xf65  ;

// ------------------------------
//        BAUDCTL
// ------------------------------
unsigned int BAUDCTL@0xf65 ;
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

} BAUDCTLbits@0xf65  ;

// ------------------------------
//        SSP2CON2
// ------------------------------
unsigned int SSP2CON2@0xf66 ;
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

} SSP2CON2bits@0xf66  ;

// ------------------------------
//        SSP2CON1
// ------------------------------
unsigned int SSP2CON1@0xf67 ;
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

} SSP2CON1bits@0xf67  ;

// ------------------------------
//        SSP2STAT
// ------------------------------
unsigned int SSP2STAT@0xf68 ;
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

} SSP2STATbits@0xf68  ;

// ------------------------------
//        SSP2ADD
// ------------------------------
unsigned int SSP2ADD@0xf69 ;
// ------------------------------
//        SSP2MSK
// ------------------------------
unsigned int SSP2MSK@0xf69 ;
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

} SSP2MSKbits@0xf69  ;

// ------------------------------
//        SSP2BUF
// ------------------------------
unsigned int SSP2BUF@0xf6a ;
// ------------------------------
//        T4CON
// ------------------------------
unsigned int T4CON@0xf6b ;
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

} T4CONbits@0xf6b  ;

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xf6c ;
// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf6d ;
// ------------------------------
//        CCP7CON
// ------------------------------
unsigned int CCP7CON@0xf6e ;
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

} CCP7CONbits@0xf6e  ;

// ------------------------------
//        CCPR7
// ------------------------------
unsigned int CCPR7@0xf6f ;
// ------------------------------
//        CCPR7L
// ------------------------------
unsigned int CCPR7L@0xf6f ;
// ------------------------------
//        CCPR7H
// ------------------------------
unsigned int CCPR7H@0xf70 ;
// ------------------------------
//        CCP6CON
// ------------------------------
unsigned int CCP6CON@0xf71 ;
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

} CCP6CONbits@0xf71  ;

// ------------------------------
//        CCPR6
// ------------------------------
unsigned int CCPR6@0xf72 ;
// ------------------------------
//        CCPR6L
// ------------------------------
unsigned int CCPR6L@0xf72 ;
// ------------------------------
//        CCPR6H
// ------------------------------
unsigned int CCPR6H@0xf73 ;
// ------------------------------
//        CCP5CON
// ------------------------------
unsigned int CCP5CON@0xf74 ;
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

} CCP5CONbits@0xf74  ;

// ------------------------------
//        CCPR5
// ------------------------------
unsigned int CCPR5@0xf75 ;
// ------------------------------
//        CCPR5L
// ------------------------------
unsigned int CCPR5L@0xf75 ;
// ------------------------------
//        CCPR5H
// ------------------------------
unsigned int CCPR5H@0xf76 ;
// ------------------------------
//        CCP4CON
// ------------------------------
unsigned int CCP4CON@0xf77 ;
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

} CCP4CONbits@0xf77  ;

// ------------------------------
//        CCPR4
// ------------------------------
unsigned int CCPR4@0xf78 ;
// ------------------------------
//        CCPR4L
// ------------------------------
unsigned int CCPR4L@0xf78 ;
// ------------------------------
//        CCPR4H
// ------------------------------
unsigned int CCPR4H@0xf79 ;
// ------------------------------
//        T5GCON
// ------------------------------
unsigned int T5GCON@0xf7a ;
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

} T5GCONbits@0xf7a  ;

// ------------------------------
//        T5CON
// ------------------------------
unsigned int T5CON@0xf7b ;
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

} T5CONbits@0xf7b  ;

// ------------------------------
//        TMR5
// ------------------------------
unsigned int TMR5@0xf7c ;
// ------------------------------
//        TMR5L
// ------------------------------
unsigned int TMR5L@0xf7c ;
// ------------------------------
//        TMR5H
// ------------------------------
unsigned int TMR5H@0xf7d ;
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
  : 1,
  AN4 : 1 ,
  OSC2 : 1 ,
  OSC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  ULPWU : 1 ,
  : 1,
  VREF_MINUS : 1 ,
  VREF_PLUS : 1 ,
  T0CKI : 1 ,
  T1CKI : 1 ,
  CLKO : 1 ,
  CLKI : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  T3G : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  HLVDIN : 1 ;
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
  FLT0 : 1 ,
  : 1,
  CTED1 : 1 ,
  CTED2 : 1 ,
  : 1,
  T3CKI : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  CCP2_P2A : 1 ,
  : 1,
  T1G : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
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
  SOSCO : 1 ,
  SOSCI : 1 ,
  : 1,
  SCK1 : 1 ,
  SDI1 : 1 ,
  SDO1 : 1 ,
  TX1 : 1 ,
  RX1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SCKLI : 1 ,
  CCP2_PORTC : 1 ,
  CCP1 : 1 ,
  SCL1 : 1 ,
  SDA1 : 1 ,
  : 1,
  CK1 : 1 ,
  DT1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  P2A_PORTC : 1 ,
  P1A : 1 ;
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
  AD0 : 1 ,
  AD1 : 1 ,
  AD2 : 1 ,
  AD3 : 1 ,
  AD4 : 1 ,
  AD5 : 1 ,
  AD6 : 1 ,
  AD7 : 1 ;
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

struct 
{
  unsigned int 
  CTPLS : 1 ,
  T5CKI : 1 ,
  : 2,
  SDO2 : 1 ,
  SDI2 : 1 ,
  SCK2 : 1 ,
  NOT_SS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  T7G : 1 ,
  : 3,
  SDA2 : 1 ,
  SCL2 : 1 ;
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
  AD8 : 1 ,
  AD9 : 1 ,
  AD10 : 1 ,
  AD11 : 1 ,
  AD12 : 1 ,
  AD13 : 1 ,
  AD14 : 1 ,
  AD15 : 1 ;
} ; 

struct 
{
  unsigned int 
  P2D : 1 ,
  P2C : 1 ,
  P2B : 1 ,
  P3C : 1 ,
  P3B : 1 ,
  P1C : 1 ,
  P1B : 1 ,
  P2A_PORTE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  CCP10 : 1 ,
  CCP9 : 1 ,
  CCP8 : 1 ,
  CCP7 : 1 ,
  CCP6 : 1 ,
  CCP2_PORTE : 1 ;
} ; 

struct 
{
  unsigned int 
  NOT_RD : 1 ,
  NOT_WR : 1 ,
  NOT_CS : 1 ,
  REFO : 1 ;
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
  C2OUT : 1 ,
  C1OUT : 1 ,
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
  CTDIN : 1 ,
  : 1,
  CTMUI : 1 ,
  : 1,
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
  RG5 : 1 ;
} ; 

struct 
{
  unsigned int 
  CCP3 : 1 ,
  C3OUT : 1 ,
  C3INA : 1 ,
  C3INB : 1 ,
  C3INC : 1 ;
} ; 

struct 
{
  unsigned int 
  PA3 : 1 ,
  TX2 : 1 ,
  RX2 : 1 ,
  PD3 : 1 ,
  PD1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  AN19 : 1 ,
  AN18 : 1 ,
  AN17 : 1 ,
  AN16 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  CK2 : 1 ,
  DT2 : 1 ,
  CCP4 : 1 ,
  CCP5 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  T7CKI : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  T5G : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RTCC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RG : 6 ;
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
  TMR1GIF : 1 ,
  SSP1IF : 1 ,
  TX1IF : 1 ,
  RC1IF : 1 ,
  ADIF : 1 ,
  PSPIF : 1 ;
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
  TMR1GIP : 1 ,
  SSP1IP : 1 ,
  TX1IP : 1 ,
  RC1IP : 1 ,
  ADIP : 1 ,
  PSPIP : 1 ;
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
  TMR3GIE : 1 ,
  TMR3IE : 1 ,
  HLVDIE : 1 ,
  BCL1IE : 1 ,
  BCL2IE : 1 ,
  SSP2IE : 1 ,
  : 1,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIE : 1 ,
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
  TMR3GIF : 1 ,
  TMR3IF : 1 ,
  HLVDIF : 1 ,
  BCL1IF : 1 ,
  BCL2IF : 1 ,
  SSP2IF : 1 ,
  : 1,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIF : 1 ,
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
  TMR3GIP : 1 ,
  TMR3IP : 1 ,
  HLVDIP : 1 ,
  BCL1IP : 1 ,
  BCL2IP : 1 ,
  SSP2IP : 1 ,
  : 1,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIP : 1 ,
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
  CCP1IE : 1 ,
  CCP2IE : 1 ,
  CTMUIE : 1 ,
  TX2IE : 1 ,
  RC2IE : 1 ,
  : 1,
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
  : 1,
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
  : 1,
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
  EEIF : 1 ;
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
  EEIP : 1 ;
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
//        CMSTAT
// ------------------------------
unsigned int CMSTAT@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 5,
  CMP1OUT : 1 ,
  CMP2OUT : 1 ,
  CMP3OUT : 1 ;
} ; 

} CMSTATbits@0xfb4  ;

// ------------------------------
//        CMSTATUS
// ------------------------------
unsigned int CMSTATUS@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 5,
  CMP1OUT : 1 ,
  CMP2OUT : 1 ,
  CMP3OUT : 1 ;
} ; 

} CMSTATUSbits@0xfb4  ;

// ------------------------------
//        CVRCON
// ------------------------------
unsigned int CVRCON@0xfb5 ;
union
{

struct 
{
  unsigned int 
  : 5,
  CVRSS : 1 ,
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
  CVR4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CVR : 5 ;
} ; 

} CVRCONbits@0xfb5  ;

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
  CCP6IE : 1 ,
  CCP7IE : 1 ,
  CCP8IE : 1 ,
  CCP9IE : 1 ,
  CCP10IE : 1 ;
} ; 

} PIE4bits@0xfb6  ;

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
  CCP6IF : 1 ,
  CCP7IF : 1 ,
  CCP8IF : 1 ,
  CCP9IF : 1 ,
  CCP10IF : 1 ;
} ; 

} PIR4bits@0xfb7  ;

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
  CCP6IP : 1 ,
  CCP7IP : 1 ,
  CCP8IP : 1 ,
  CCP9IP : 1 ,
  CCP10IP : 1 ;
} ; 

} IPR4bits@0xfb8  ;

// ------------------------------
//        PIE5
// ------------------------------
unsigned int PIE5@0xfb9 ;
union
{

struct 
{
  unsigned int 
  TMR4IE : 1 ,
  TMR5IE : 1 ,
  TMR6IE : 1 ,
  TMR7IE : 1 ,
  TMR8IE : 1 ,
  TMR10IE : 1 ,
  TMR12IE : 1 ,
  TMR7GIE : 1 ;
} ; 

} PIE5bits@0xfb9  ;

// ------------------------------
//        PIR5
// ------------------------------
unsigned int PIR5@0xfba ;
union
{

struct 
{
  unsigned int 
  TMR4IF : 1 ,
  TMR5IF : 1 ,
  TMR6IF : 1 ,
  TMR7IF : 1 ,
  TMR8IF : 1 ,
  TMR10IF : 1 ,
  TMR12IF : 1 ,
  TMR7GIF : 1 ;
} ; 

} PIR5bits@0xfba  ;

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

} ECCP1DELbits@0xfbe  ;

// ------------------------------
//        PWM1CON
// ------------------------------
unsigned int PWM1CON@0xfbe ;
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

} PWM1CONbits@0xfbe  ;

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfbf ;
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

} ECCP1ASbits@0xfbf  ;

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
  : 3,
  VNCFG : 1 ;
} ; 

struct 
{
  unsigned int 
  CHSN0 : 1 ,
  CHSN1 : 1 ,
  CHSN2 : 1 ,
  : 1,
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
  DONE : 1 ,
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
// ------------------------------
//        SSP1MSK
// ------------------------------
unsigned int SSP1MSK@0xfc8 ;
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

} SSP1MSKbits@0xfc8  ;

// ------------------------------
//        SSPADD
// ------------------------------
unsigned int SSPADD@0xfc8 ;
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
  TMR7IP : 1 ,
  TMR8IP : 1 ,
  TMR10IP : 1 ,
  TMR12IP : 1 ,
  TMR7GIP : 1 ;
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
  : 2,
  HFIOFS : 1 ,
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
//        SPBRGH1
// ------------------------------
unsigned int SPBRGH1@0xfd4 ;
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
