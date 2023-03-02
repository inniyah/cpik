#ifndef DEVICE
#define DEVICE p18f8622
#define p18f8622

// ======================================
//         PROCESSOR : p18f8622
// ======================================

// This file has been automatically generated from Microchip's "p18f8622.inc" file.
// with the inc2h-v2 utility.             Please do not edit by hand.
// Do not use with cpik versions prior V0.7, report problems to author.
// (C) Alain Gibaud  2012    (alain.gibaud@free.fr)

#pragma firstsfr 0xf62
// ------------------------------
//        SSP2CON2
// ------------------------------
unsigned int SSP2CON2@0xf62 ;
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

} SSP2CON2bits@0xf62  ;

#define _SEN 0
#define _RSEN 1
#define _PEN 2
#define _RCEN 3
#define _ACKEN 4
#define _ACKDT 5
#define _ACKSTAT 6
#define _GCEN 7

// ------------------------------
//        SSP2CON1
// ------------------------------
unsigned int SSP2CON1@0xf63 ;
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
  SSPM : 4 ;
} ; 

} SSP2CON1bits@0xf63  ;

#define _SSPM0 0
#define _SSPM1 1
#define _SSPM2 2
#define _SSPM3 3
#define _CKP 4
#define _SSPEN 5
#define _SSPOV 6
#define _WCOL 7

// The following are aliases ..  
#define _SSPM 0:4

// ------------------------------
//        SSP2STAT
// ------------------------------
unsigned int SSP2STAT@0xf64 ;
union
{

struct 
{
  unsigned int 
  BF : 1 ,
  UA : 1 ,
  R_W : 1 ,
  S : 1 ,
  P : 1 ,
  D_A : 1 ,
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

} SSP2STATbits@0xf64  ;

#define _BF 0
#define _UA 1
#define _R_W 2
#define _S 3
#define _P 4
#define _D_A 5
#define _CKE 6
#define _SMP 7

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
//        SSP2ADD
// ------------------------------
unsigned int SSP2ADD@0xf65 ;
// ------------------------------
//        SSP2BUF
// ------------------------------
unsigned int SSP2BUF@0xf66 ;
// ------------------------------
//        ECCP2DEL
// ------------------------------
unsigned int ECCP2DEL@0xf67 ;
union
{

struct 
{
  unsigned int 
  P2DC0 : 1 ,
  P2DC1 : 1 ,
  P2DC2 : 1 ,
  P2DC3 : 1 ,
  P2DC4 : 1 ,
  P2DC5 : 1 ,
  P2DC6 : 1 ,
  P2RSEN : 1 ;
} ; 

struct 
{
  unsigned int 
  PDC0 : 1 ,
  PDC1 : 1 ,
  PDC2 : 1 ,
  PDC3 : 1 ,
  PDC4 : 1 ,
  PDC5 : 1 ,
  PDC6 : 1 ,
  PRSEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  P2DC : 7 ;
} ; 

struct 
{
  unsigned int 
  PDC : 7 ;
} ; 

} ECCP2DELbits@0xf67  ;

#define _P2DC0 0
#define _P2DC1 1
#define _P2DC2 2
#define _P2DC3 3
#define _P2DC4 4
#define _P2DC5 5
#define _P2DC6 6
#define _P2RSEN 7

#define _PDC0 0
#define _PDC1 1
#define _PDC2 2
#define _PDC3 3
#define _PDC4 4
#define _PDC5 5
#define _PDC6 6
#define _PRSEN 7

// The following are aliases ..  
#define _P2DC 0:7

#define _PDC 0:7

// ------------------------------
//        ECCP2AS
// ------------------------------
unsigned int ECCP2AS@0xf68 ;
union
{

struct 
{
  unsigned int 
  PSS2BD0 : 1 ,
  PSS2BD1 : 1 ,
  PSS2AC0 : 1 ,
  PSS2AC1 : 1 ,
  ECCP2AS0 : 1 ,
  ECCP2AS1 : 1 ,
  ECCP2AS2 : 1 ,
  ECCP2ASE : 1 ;
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
  ECCPAS2 : 1 ,
  ECCPASE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  PSS2BD : 2 ,
  PSS2AC : 2 ,
  ECCP2AS : 3 ;
} ; 

struct 
{
  unsigned int 
  PSSBD : 2 ,
  PSSAC : 2 ,
  ECCPAS : 3 ;
} ; 

} ECCP2ASbits@0xf68  ;

#define _PSS2BD0 0
#define _PSS2BD1 1
#define _PSS2AC0 2
#define _PSS2AC1 3
#define _ECCP2AS0 4
#define _ECCP2AS1 5
#define _ECCP2AS2 6
#define _ECCP2ASE 7

#define _PSSBD0 0
#define _PSSBD1 1
#define _PSSAC0 2
#define _PSSAC1 3
#define _ECCPAS0 4
#define _ECCPAS1 5
#define _ECCPAS2 6
#define _ECCPASE 7

// The following are aliases ..  
#define _PSS2BD 0:2
#define _PSS2AC 2:2
#define _ECCP2AS 4:3

#define _PSSBD 0:2
#define _PSSAC 2:2
#define _ECCPAS 4:3

// ------------------------------
//        ECCP3DEL
// ------------------------------
unsigned int ECCP3DEL@0xf69 ;
union
{

struct 
{
  unsigned int 
  P3DC0 : 1 ,
  P3DC1 : 1 ,
  P3DC2 : 1 ,
  P3DC3 : 1 ,
  P3DC4 : 1 ,
  P3DC5 : 1 ,
  P3DC6 : 1 ,
  P3RSEN : 1 ;
} ; 

struct 
{
  unsigned int 
  PDC0 : 1 ,
  PDC1 : 1 ,
  PDC2 : 1 ,
  PDC3 : 1 ,
  PDC4 : 1 ,
  PDC5 : 1 ,
  PDC6 : 1 ,
  PRSEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  P3DC : 7 ;
} ; 

struct 
{
  unsigned int 
  PDC : 7 ;
} ; 

} ECCP3DELbits@0xf69  ;

#define _P3DC0 0
#define _P3DC1 1
#define _P3DC2 2
#define _P3DC3 3
#define _P3DC4 4
#define _P3DC5 5
#define _P3DC6 6
#define _P3RSEN 7

#define _PDC0 0
#define _PDC1 1
#define _PDC2 2
#define _PDC3 3
#define _PDC4 4
#define _PDC5 5
#define _PDC6 6
#define _PRSEN 7

// The following are aliases ..  
#define _P3DC 0:7

#define _PDC 0:7

// ------------------------------
//        ECCP3AS
// ------------------------------
unsigned int ECCP3AS@0xf6a ;
union
{

struct 
{
  unsigned int 
  PSS3BD0 : 1 ,
  PSS3BD1 : 1 ,
  PSS3AC0 : 1 ,
  PSS3AC1 : 1 ,
  ECCP3AS0 : 1 ,
  ECCP3AS1 : 1 ,
  ECCP3AS2 : 1 ,
  ECCP3ASE : 1 ;
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
  ECCPAS2 : 1 ,
  ECCPASE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  PSS3BD : 2 ,
  PSS3AC : 2 ,
  ECCP3AS : 3 ;
} ; 

struct 
{
  unsigned int 
  PSSBD : 2 ,
  PSSAC : 2 ,
  ECCPAS : 3 ;
} ; 

} ECCP3ASbits@0xf6a  ;

#define _PSS3BD0 0
#define _PSS3BD1 1
#define _PSS3AC0 2
#define _PSS3AC1 3
#define _ECCP3AS0 4
#define _ECCP3AS1 5
#define _ECCP3AS2 6
#define _ECCP3ASE 7

#define _PSSBD0 0
#define _PSSBD1 1
#define _PSSAC0 2
#define _PSSAC1 3
#define _ECCPAS0 4
#define _ECCPAS1 5
#define _ECCPAS2 6
#define _ECCPASE 7

// The following are aliases ..  
#define _PSS3BD 0:2
#define _PSS3AC 2:2
#define _ECCP3AS 4:3

#define _PSSBD 0:2
#define _PSSAC 2:2
#define _ECCPAS 4:3

// ------------------------------
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf6b ;
union
{

struct 
{
  unsigned int 
  RCD8 : 1 ,
  OERR : 1 ,
  FERR : 1 ,
  ADDEN : 1 ,
  CREN : 1 ,
  SREN : 1 ,
  RC9 : 1 ,
  SPEN : 1 ;
} ; 

struct 
{
  unsigned int 
  RX9D : 1 ,
  : 5,
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
  RX9 : 1 ;
} ; 

} RCSTA2bits@0xf6b  ;

#define _RCD8 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RC9 6
#define _SPEN 7

#define _RX9D 0
#define _NOT_RC8 6

#define _RC8_9 6

#define _RX9 6

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

} TXSTA2bits@0xf6c  ;

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SENDB 3
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

#define _TXD8 0
#define _TX8_9 6

#define _NOT_TX8 6

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
//        CCP5CON
// ------------------------------
unsigned int CCP5CON@0xf70 ;
union
{

struct 
{
  unsigned int 
  CCP5M0 : 1 ,
  CCP5M1 : 1 ,
  CCP5M2 : 1 ,
  CCP5M3 : 1 ,
  DCCP5Y : 1 ,
  DCCP5X : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  DC5B0 : 1 ,
  DC5B1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  CCP5M : 4 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  DC5B : 2 ;
} ; 

} CCP5CONbits@0xf70  ;

#define _CCP5M0 0
#define _CCP5M1 1
#define _CCP5M2 2
#define _CCP5M3 3
#define _DCCP5Y 4
#define _DCCP5X 5

#define _DC5B0 4
#define _DC5B1 5

// The following are aliases ..  
#define _CCP5M 0:4

#define _DC5B 4:2

// ------------------------------
//        CCPR5
// ------------------------------
unsigned int CCPR5@0xf71 ;
// ------------------------------
//        CCPR5L
// ------------------------------
unsigned int CCPR5L@0xf71 ;
// ------------------------------
//        CCPR5H
// ------------------------------
unsigned int CCPR5H@0xf72 ;
// ------------------------------
//        CCP4CON
// ------------------------------
unsigned int CCP4CON@0xf73 ;
union
{

struct 
{
  unsigned int 
  CCP4M0 : 1 ,
  CCP4M1 : 1 ,
  CCP4M2 : 1 ,
  CCP4M3 : 1 ,
  DCCP4Y : 1 ,
  DCCP4X : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  DC4B0 : 1 ,
  DC4B1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  CCP4M : 4 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  DC4B : 2 ;
} ; 

} CCP4CONbits@0xf73  ;

#define _CCP4M0 0
#define _CCP4M1 1
#define _CCP4M2 2
#define _CCP4M3 3
#define _DCCP4Y 4
#define _DCCP4X 5

#define _DC4B0 4
#define _DC4B1 5

// The following are aliases ..  
#define _CCP4M 0:4

#define _DC4B 4:2

// ------------------------------
//        CCPR4
// ------------------------------
unsigned int CCPR4@0xf74 ;
// ------------------------------
//        CCPR4L
// ------------------------------
unsigned int CCPR4L@0xf74 ;
// ------------------------------
//        CCPR4H
// ------------------------------
unsigned int CCPR4H@0xf75 ;
// ------------------------------
//        T4CON
// ------------------------------
unsigned int T4CON@0xf76 ;
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
  T4CKPS : 2 ,
  : 1,
  T4OUTPS : 4 ;
} ; 

} T4CONbits@0xf76  ;

#define _T4CKPS0 0
#define _T4CKPS1 1
#define _TMR4ON 2
#define _T4OUTPS0 3
#define _T4OUTPS1 4
#define _T4OUTPS2 5
#define _T4OUTPS3 6

// The following are aliases ..  
#define _T4CKPS 0:2
#define _T4OUTPS 3:4

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xf77 ;
// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf78 ;
// ------------------------------
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xf79 ;
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

struct 
{
  unsigned int 
  PDC0 : 1 ,
  PDC1 : 1 ,
  PDC2 : 1 ,
  PDC3 : 1 ,
  PDC4 : 1 ,
  PDC5 : 1 ,
  PDC6 : 1 ,
  PRSEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  P1DC : 7 ;
} ; 

struct 
{
  unsigned int 
  PDC : 7 ;
} ; 

} ECCP1DELbits@0xf79  ;

#define _P1DC0 0
#define _P1DC1 1
#define _P1DC2 2
#define _P1DC3 3
#define _P1DC4 4
#define _P1DC5 5
#define _P1DC6 6
#define _P1RSEN 7

#define _PDC0 0
#define _PDC1 1
#define _PDC2 2
#define _PDC3 3
#define _PDC4 4
#define _PDC5 5
#define _PDC6 6
#define _PRSEN 7

// The following are aliases ..  
#define _P1DC 0:7

#define _PDC 0:7

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

} BAUDCON2bits@0xf7c  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _SCKP 4
#define _RCIDL 6
#define _ABDOVF 7

#define _RCMT 6

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

} BAUDCONbits@0xf7e  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _SCKP 4
#define _RCIDL 6
#define _ABDOVF 7

#define _RCMT 6

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
  VREFM : 1 ,
  VREFP : 1 ,
  T0CKI : 1 ,
  LVDIN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  AN2 : 1 ,
  AN3 : 1 ,
  : 1,
  AN4 : 1 ;
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
  AN : 2 ;
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
#define _VREFM 2
#define _VREFP 3
#define _T0CKI 4
#define _LVDIN 5

#define _AN2 2
#define _AN3 3
#define _AN4 5

#define _HLVDIN 5

// The following are aliases ..  
#define _AN 0:2

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
  : 2,
  ECCP2_PORTB : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  P2A_PORTB : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  CCP2_PORTB : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  INT : 4 ,
  KBI : 4 ;
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

#define _FLT0 0
#define _ECCP2_PORTB 3

#define _P2A_PORTB 3

#define _CCP2_PORTB 3

// The following are aliases ..  
#define _INT 0:4
#define _KBI 4:4

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
  ECCP1 : 1 ,
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
  ECCP2_PORTC : 1 ,
  CCP1 : 1 ,
  SCL : 1 ,
  SDA : 1 ,
  SDO1 : 1 ,
  CK : 1 ,
  DT1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  CCP2_PORTC : 1 ,
  P1A : 1 ,
  SCL1 : 1 ,
  SDA1 : 1 ,
  : 1,
  CK1 : 1 ,
  RX1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  P2A_PORTC : 1 ,
  : 1,
  SCK1 : 1 ,
  SDI1 : 1 ,
  : 1,
  TX1 : 1 ;
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
#define _ECCP1 2
#define _SCK 3
#define _SDI 4
#define _SDO 5
#define _TX 6
#define _RX 7

#define _T13CKI 0
#define _ECCP2_PORTC 1
#define _CCP1 2
#define _SCL 3
#define _SDA 4
#define _SDO1 5
#define _CK 6
#define _DT1 7

#define _CCP2_PORTC 1
#define _P1A 2
#define _SCL1 3
#define _SDA1 4
#define _CK1 6
#define _RX1 7

#define _P2A_PORTC 1
#define _SCK1 3
#define _SDI1 4
#define _TX1 6

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
  : 4,
  SDO2 : 1 ,
  SDA2 : 1 ,
  SCL2 : 1 ,
  SS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  SDI2 : 1 ,
  SCK2 : 1 ,
  NOT_SS2 : 1 ;
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

#define _PSP0 0
#define _PSP1 1
#define _PSP2 2
#define _PSP3 3
#define _PSP4 4
#define _PSP5 5
#define _PSP6 6
#define _PSP7 7

#define _AD0 0
#define _AD1 1
#define _AD2 2
#define _AD3 3
#define _AD4 4
#define _AD5 5
#define _AD6 6
#define _AD7 7

#define _SDO2 4
#define _SDA2 5
#define _SCL2 6
#define _SS2 7

#define _SDI2 5
#define _SCK2 6
#define _NOT_SS2 7

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
  RD : 1 ,
  WR : 1 ,
  CS : 1 ,
  AD11 : 1 ,
  AD12 : 1 ,
  AD13 : 1 ,
  AD14 : 1 ,
  ECCP2_PORTE : 1 ;
} ; 

struct 
{
  unsigned int 
  NOT_RD : 1 ,
  NOT_WR : 1 ,
  NOT_CS : 1 ,
  P3C_PORTE : 1 ,
  P3B_PORTE : 1 ,
  P1C_PORTE : 1 ,
  P1B_PORTE : 1 ,
  AD15 : 1 ;
} ; 

struct 
{
  unsigned int 
  AD8 : 1 ,
  AD9 : 1 ,
  AD10 : 1 ,
  : 4,
  P2A_PORTE : 1 ;
} ; 

struct 
{
  unsigned int 
  P2D : 1 ,
  P2C : 1 ,
  P2B : 1 ,
  : 4,
  CCP2_PORTE : 1 ;
} ; 

} PORTEbits@0xf84  ;

#define _RE0 0
#define _RE1 1
#define _RE2 2
#define _RE3 3
#define _RE4 4
#define _RE5 5
#define _RE6 6
#define _RE7 7

#define _RD 0
#define _WR 1
#define _CS 2
#define _AD11 3
#define _AD12 4
#define _AD13 5
#define _AD14 6
#define _ECCP2_PORTE 7

#define _NOT_RD 0
#define _NOT_WR 1
#define _NOT_CS 2
#define _P3C_PORTE 3
#define _P3B_PORTE 4
#define _P1C_PORTE 5
#define _P1B_PORTE 6
#define _AD15 7

#define _AD8 0
#define _AD9 1
#define _AD10 2
#define _P2A_PORTE 7

#define _P2D 0
#define _P2C 1
#define _P2B 2
#define _CCP2_PORTE 7

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
  SS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  C2OUT_PORTF : 1 ,
  C1OUT_PORTF : 1 ,
  : 2,
  CVREF : 1 ,
  : 1,
  NOT_SS1 : 1 ;
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
#define _SS1 7

#define _C2OUT_PORTF 1
#define _C1OUT_PORTF 2
#define _CVREF 5
#define _NOT_SS1 7

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
  ECCP3 : 1 ,
  TX2 : 1 ,
  RX2 : 1 ,
  CCP4 : 1 ,
  CCP5 : 1 ,
  MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  P3A : 1 ,
  CK2 : 1 ,
  DT2 : 1 ,
  P3D : 1 ,
  P1D : 1 ,
  NOT_MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  CCP3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  RG : 6 ;
} ; 

} PORTGbits@0xf86  ;

#define _RG0 0
#define _RG1 1
#define _RG2 2
#define _RG3 3
#define _RG4 4
#define _RG5 5

#define _ECCP3 0
#define _TX2 1
#define _RX2 2
#define _CCP4 3
#define _CCP5 4
#define _MCLR 5

#define _P3A 0
#define _CK2 1
#define _DT2 2
#define _P3D 3
#define _P1D 4
#define _NOT_MCLR 5

#define _CCP3 0

// The following are aliases ..  
#define _RG 0:6

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
  A16 : 1 ,
  A17 : 1 ,
  A18 : 1 ,
  A19 : 1 ,
  AN12 : 1 ,
  AN13 : 1 ,
  AN14 : 1 ,
  AN15 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  P3C_PORTH : 1 ,
  P3B_PORTH : 1 ,
  P1C_PORTH : 1 ,
  P1B_PORTH : 1 ;
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

#define _A16 0
#define _A17 1
#define _A18 2
#define _A19 3
#define _AN12 4
#define _AN13 5
#define _AN14 6
#define _AN15 7

#define _P3C_PORTH 4
#define _P3B_PORTH 5
#define _P1C_PORTH 6
#define _P1B_PORTH 7

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
  ALE : 1 ,
  OE : 1 ,
  WRL : 1 ,
  WRH : 1 ,
  BA0 : 1 ,
  CE : 1 ,
  LB : 1 ,
  UB : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  NOT_OE : 1 ,
  NOT_WRL : 1 ,
  NOT_WRH : 1 ,
  : 1,
  NOT_CE : 1 ,
  NOT_LB : 1 ,
  NOT_UB : 1 ;
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

#define _ALE 0
#define _OE 1
#define _WRL 2
#define _WRH 3
#define _BA0 4
#define _CE 5
#define _LB 6
#define _UB 7

#define _NOT_OE 1
#define _NOT_WRL 2
#define _NOT_WRH 3
#define _NOT_CE 5
#define _NOT_LB 6
#define _NOT_UB 7

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

#define _LATE0 0
#define _LATE1 1
#define _LATE2 2
#define _LATE3 3
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
  LATG4 : 1 ,
  LATG5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  LATG : 6 ;
} ; 

} LATGbits@0xf8f  ;

#define _LATG0 0
#define _LATG1 1
#define _LATG2 2
#define _LATG3 3
#define _LATG4 4
#define _LATG5 5

// The following are aliases ..  
#define _LATG 0:6

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

} TRISAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA4 4
#define _TRISA5 5
#define _TRISA6 6
#define _TRISA7 7

// ------------------------------
//        DDRB
// ------------------------------
unsigned int DDRB@0xf93 ;
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

} DDRBbits@0xf93  ;

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
//        DDRC
// ------------------------------
unsigned int DDRC@0xf94 ;
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

} DDRCbits@0xf94  ;

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
//        DDRD
// ------------------------------
unsigned int DDRD@0xf95 ;
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

} DDRDbits@0xf95  ;

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
//        DDRE
// ------------------------------
unsigned int DDRE@0xf96 ;
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

} DDREbits@0xf96  ;

#define _RE0 0
#define _RE1 1
#define _RE2 2
#define _RE3 3
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

#define _TRISE0 0
#define _TRISE1 1
#define _TRISE2 2
#define _TRISE3 3
#define _TRISE4 4
#define _TRISE5 5
#define _TRISE6 6
#define _TRISE7 7

// ------------------------------
//        DDRF
// ------------------------------
unsigned int DDRF@0xf97 ;
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

} DDRFbits@0xf97  ;

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

} TRISFbits@0xf97  ;

#define _TRISF0 0
#define _TRISF1 1
#define _TRISF2 2
#define _TRISF3 3
#define _TRISF4 4
#define _TRISF5 5
#define _TRISF6 6
#define _TRISF7 7

// ------------------------------
//        DDRG
// ------------------------------
unsigned int DDRG@0xf98 ;
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
  RG : 5 ;
} ; 

} DDRGbits@0xf98  ;

#define _RG0 0
#define _RG1 1
#define _RG2 2
#define _RG3 3
#define _RG4 4

// The following are aliases ..  
#define _RG 0:5

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
  TRISG : 5 ;
} ; 

} TRISGbits@0xf98  ;

#define _TRISG0 0
#define _TRISG1 1
#define _TRISG2 2
#define _TRISG3 3
#define _TRISG4 4

// The following are aliases ..  
#define _TRISG 0:5

// ------------------------------
//        DDRH
// ------------------------------
unsigned int DDRH@0xf99 ;
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

} DDRHbits@0xf99  ;

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

} TRISHbits@0xf99  ;

#define _TRISH0 0
#define _TRISH1 1
#define _TRISH2 2
#define _TRISH3 3
#define _TRISH4 4
#define _TRISH5 5
#define _TRISH6 6
#define _TRISH7 7

// ------------------------------
//        DDRJ
// ------------------------------
unsigned int DDRJ@0xf9a ;
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

} DDRJbits@0xf9a  ;

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

} TRISJbits@0xf9a  ;

#define _TRISJ0 0
#define _TRISJ1 1
#define _TRISJ2 2
#define _TRISJ3 3
#define _TRISJ4 4
#define _TRISJ5 5
#define _TRISJ6 6
#define _TRISJ7 7

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
  : 1,
  PLLEN : 1 ,
  INTSRC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  TUN : 5 ;
} ; 

} OSCTUNEbits@0xf9b  ;

#define _TUN0 0
#define _TUN1 1
#define _TUN2 2
#define _TUN3 3
#define _TUN4 4
#define _PLLEN 6
#define _INTSRC 7

// The following are aliases ..  
#define _TUN 0:5

// ------------------------------
//        MEMCON
// ------------------------------
unsigned int MEMCON@0xf9c ;
union
{

struct 
{
  unsigned int 
  WM0 : 1 ,
  WM1 : 1 ,
  : 2,
  WAIT0 : 1 ,
  WAIT1 : 1 ,
  : 1,
  EBDIS : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  WM : 2 ,
  : 2,
  WAIT : 2 ;
} ; 

} MEMCONbits@0xf9c  ;

#define _WM0 0
#define _WM1 1
#define _WAIT0 4
#define _WAIT1 5
#define _EBDIS 7

// The following are aliases ..  
#define _WM 0:2
#define _WAIT 4:2

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

struct 
{
  unsigned int 
  : 3,
  SSP1IE : 1 ,
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
#define _PSPIE 7

#define _SSP1IE 3
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
  ADIF : 1 ,
  PSPIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IF : 1 ,
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
#define _PSPIF 7

#define _SSP1IF 3
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
  ADIP : 1 ,
  PSPIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IP : 1 ,
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
#define _PSPIP 7

#define _SSP1IP 3
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
  LVDIE : 1 ,
  BCLIE : 1 ,
  EEIE : 1 ,
  : 1,
  CMIE : 1 ,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  HLVDIE : 1 ,
  BCL1IE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _CCP2IE 0
#define _TMR3IE 1
#define _LVDIE 2
#define _BCLIE 3
#define _EEIE 4
#define _CMIE 6
#define _OSCFIE 7

#define _HLVDIE 2
#define _BCL1IE 3

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
  EEIF : 1 ,
  : 1,
  CMIF : 1 ,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  HLVDIF : 1 ,
  BCL1IF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _CCP2IF 0
#define _TMR3IF 1
#define _LVDIF 2
#define _BCLIF 3
#define _EEIF 4
#define _CMIF 6
#define _OSCFIF 7

#define _HLVDIF 2
#define _BCL1IF 3

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
  EEIP : 1 ,
  : 1,
  CMIP : 1 ,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  HLVDIP : 1 ,
  BCL1IP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _CCP2IP 0
#define _TMR3IP 1
#define _LVDIP 2
#define _BCLIP 3
#define _EEIP 4
#define _CMIP 6
#define _OSCFIP 7

#define _HLVDIP 2
#define _BCL1IP 3

// ------------------------------
//        PIE3
// ------------------------------
unsigned int PIE3@0xfa3 ;
union
{

struct 
{
  unsigned int 
  CCP3IE : 1 ,
  CCP4IE : 1 ,
  CCP5IE : 1 ,
  TMR4IE : 1 ,
  TX2IE : 1 ,
  RC2IE : 1 ,
  BCL2IE : 1 ,
  SSP2IE : 1 ;
} ; 

} PIE3bits@0xfa3  ;

#define _CCP3IE 0
#define _CCP4IE 1
#define _CCP5IE 2
#define _TMR4IE 3
#define _TX2IE 4
#define _RC2IE 5
#define _BCL2IE 6
#define _SSP2IE 7

// ------------------------------
//        PIR3
// ------------------------------
unsigned int PIR3@0xfa4 ;
union
{

struct 
{
  unsigned int 
  CCP3IF : 1 ,
  CCP4IF : 1 ,
  CCP5IF : 1 ,
  TMR4IF : 1 ,
  TX2IF : 1 ,
  RC2IF : 1 ,
  BCL2IF : 1 ,
  SSP2IF : 1 ;
} ; 

} PIR3bits@0xfa4  ;

#define _CCP3IF 0
#define _CCP4IF 1
#define _CCP5IF 2
#define _TMR4IF 3
#define _TX2IF 4
#define _RC2IF 5
#define _BCL2IF 6
#define _SSP2IF 7

// ------------------------------
//        IPR3
// ------------------------------
unsigned int IPR3@0xfa5 ;
union
{

struct 
{
  unsigned int 
  CCP3IP : 1 ,
  CCP4IP : 1 ,
  CCP5IP : 1 ,
  TMR4IP : 1 ,
  TX2IP : 1 ,
  RC2IP : 1 ,
  BCL2IP : 1 ,
  SSP2IP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

#define _CCP3IP 0
#define _CCP4IP 1
#define _CCP5IP 2
#define _TMR4IP 3
#define _TX2IP 4
#define _RC2IP 5
#define _BCL2IP 6
#define _SSP2IP 7

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

} EECON1bits@0xfa6  ;

#define _RD 0
#define _WR 1
#define _WREN 2
#define _WRERR 3
#define _FREE 4
#define _CFGS 6
#define _EEPGD 7

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
//        EEADRH
// ------------------------------
unsigned int EEADRH@0xfaa ;
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
  NOT_RC8 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  RC8_9 : 1 ;
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

#define _NOT_RC8 6

#define _RC8_9 6

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
#define _RC9 6

#define _NOT_RC8 6

#define _RC8_9 6

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
#define _TX8_9 6

#define _NOT_TX8 6

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
#define _TX8_9 6

#define _NOT_TX8 6

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

#define _PSPMODE 4
#define _IBOV 5
#define _OBF 6
#define _IBF 7

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
  T3SYNC : 1 ,
  T3CCP1 : 1 ,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ,
  T3CCP2 : 1 ,
  RD16 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T3INSYNC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  NOT_T3SYNC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  T3CKPS : 2 ;
} ; 

} T3CONbits@0xfb1  ;

#define _TMR3ON 0
#define _TMR3CS 1
#define _T3SYNC 2
#define _T3CCP1 3
#define _T3CKPS0 4
#define _T3CKPS1 5
#define _T3CCP2 6
#define _RD16 7

#define _T3INSYNC 2

#define _NOT_T3SYNC 2

// The following are aliases ..  
#define _T3CKPS 4:2

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
  CM0 : 1 ,
  CM1 : 1 ,
  CM2 : 1 ,
  CIS : 1 ,
  C1INV : 1 ,
  C2INV : 1 ,
  C1OUT_CMCON : 1 ,
  C2OUT_CMCON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  CM : 3 ;
} ; 

} CMCONbits@0xfb4  ;

#define _CM0 0
#define _CM1 1
#define _CM2 2
#define _CIS 3
#define _C1INV 4
#define _C2INV 5
#define _C1OUT_CMCON 6
#define _C2OUT_CMCON 7

// The following are aliases ..  
#define _CM 0:3

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
  CVRSS : 1 ,
  CVRR : 1 ,
  CVROE : 1 ,
  CVREN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  CVR : 4 ;
} ; 

} CVRCONbits@0xfb5  ;

#define _CVR0 0
#define _CVR1 1
#define _CVR2 2
#define _CVR3 3
#define _CVRSS 4
#define _CVRR 5
#define _CVROE 6
#define _CVREN 7

// The following are aliases ..  
#define _CVR 0:4

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfb6 ;
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

struct 
{
  unsigned int 
  PSSBD0 : 1 ,
  PSSBD1 : 1 ,
  PSSAC0 : 1 ,
  PSSAC1 : 1 ,
  ECCPAS0 : 1 ,
  ECCPAS1 : 1 ,
  ECCPAS2 : 1 ,
  ECCPASE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  PSS1BD : 2 ,
  PSS1AC : 2 ,
  ECCP1AS : 3 ;
} ; 

struct 
{
  unsigned int 
  PSSBD : 2 ,
  PSSAC : 2 ,
  ECCPAS : 3 ;
} ; 

} ECCP1ASbits@0xfb6  ;

#define _PSS1BD0 0
#define _PSS1BD1 1
#define _PSS1AC0 2
#define _PSS1AC1 3
#define _ECCP1AS0 4
#define _ECCP1AS1 5
#define _ECCP1AS2 6
#define _ECCP1ASE 7

#define _PSSBD0 0
#define _PSSBD1 1
#define _PSSAC0 2
#define _PSSAC1 3
#define _ECCPAS0 4
#define _ECCPAS1 5
#define _ECCPAS2 6
#define _ECCPASE 7

// The following are aliases ..  
#define _PSS1BD 0:2
#define _PSS1AC 2:2
#define _ECCP1AS 4:3

#define _PSSBD 0:2
#define _PSSAC 2:2
#define _ECCPAS 4:3

// ------------------------------
//        CCP3CON
// ------------------------------
unsigned int CCP3CON@0xfb7 ;
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
  CCP3M : 4 ,
  DC3B : 2 ,
  P3M : 2 ;
} ; 

} CCP3CONbits@0xfb7  ;

#define _CCP3M0 0
#define _CCP3M1 1
#define _CCP3M2 2
#define _CCP3M3 3
#define _DC3B0 4
#define _DC3B1 5
#define _P3M0 6
#define _P3M1 7

#define _CCP3Y 4
#define _CCP3X 5

// The following are aliases ..  
#define _CCP3M 0:4
#define _DC3B 4:2
#define _P3M 6:2

// ------------------------------
//        ECCP3CON
// ------------------------------
unsigned int ECCP3CON@0xfb7 ;
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
  CCP3M : 4 ,
  DC3B : 2 ,
  P3M : 2 ;
} ; 

} ECCP3CONbits@0xfb7  ;

#define _CCP3M0 0
#define _CCP3M1 1
#define _CCP3M2 2
#define _CCP3M3 3
#define _DC3B0 4
#define _DC3B1 5
#define _P3M0 6
#define _P3M1 7

#define _CCP3Y 4
#define _CCP3X 5

// The following are aliases ..  
#define _CCP3M 0:4
#define _DC3B 4:2
#define _P3M 6:2

// ------------------------------
//        CCPR3
// ------------------------------
unsigned int CCPR3@0xfb8 ;
// ------------------------------
//        CCPR3L
// ------------------------------
unsigned int CCPR3L@0xfb8 ;
// ------------------------------
//        CCPR3H
// ------------------------------
unsigned int CCPR3H@0xfb9 ;
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
  CCP2M : 4 ,
  DC2B : 2 ,
  P2M : 2 ;
} ; 

} CCP2CONbits@0xfba  ;

#define _CCP2M0 0
#define _CCP2M1 1
#define _CCP2M2 2
#define _CCP2M3 3
#define _DC2B0 4
#define _DC2B1 5
#define _P2M0 6
#define _P2M1 7

#define _CCP2Y 4
#define _CCP2X 5

// The following are aliases ..  
#define _CCP2M 0:4
#define _DC2B 4:2
#define _P2M 6:2

// ------------------------------
//        ECCP2CON
// ------------------------------
unsigned int ECCP2CON@0xfba ;
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
  CCP2M : 4 ,
  DC2B : 2 ,
  P2M : 2 ;
} ; 

} ECCP2CONbits@0xfba  ;

#define _CCP2M0 0
#define _CCP2M1 1
#define _CCP2M2 2
#define _CCP2M3 3
#define _DC2B0 4
#define _DC2B1 5
#define _P2M0 6
#define _P2M1 7

#define _CCP2Y 4
#define _CCP2X 5

// The following are aliases ..  
#define _CCP2M 0:4
#define _DC2B 4:2
#define _P2M 6:2

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
  CCP1M : 4 ,
  DC1B : 2 ,
  P1M : 2 ;
} ; 

} CCP1CONbits@0xfbd  ;

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
#define _CCP1M 0:4
#define _DC1B 4:2
#define _P1M 6:2

// ------------------------------
//        ECCP1CON
// ------------------------------
unsigned int ECCP1CON@0xfbd ;
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
  CCP1M : 4 ,
  DC1B : 2 ,
  P1M : 2 ;
} ; 

} ECCP1CONbits@0xfbd  ;

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
#define _CCP1M 0:4
#define _DC1B 4:2
#define _P1M 6:2

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
  ADCS : 3 ,
  ACQT : 3 ;
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
#define _ADCS 0:3
#define _ACQT 3:3

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
  PCFG : 4 ,
  VCFG : 2 ;
} ; 

} ADCON1bits@0xfc1  ;

#define _PCFG0 0
#define _PCFG1 1
#define _PCFG2 2
#define _PCFG3 3
#define _VCFG0 4
#define _VCFG1 5

// The following are aliases ..  
#define _PCFG 0:4
#define _VCFG 4:2

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
  DONE : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ,
  CHS2 : 1 ,
  CHS3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  GO_DONE : 1 ;
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
  CHS : 4 ;
} ; 

} ADCON0bits@0xfc2  ;

#define _ADON 0
#define _DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5

#define _GO_DONE 1

#define _GO 1

#define _NOT_DONE 1

// The following are aliases ..  
#define _CHS 2:4

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

} SSP1CON2bits@0xfc5  ;

#define _SEN 0
#define _RSEN 1
#define _PEN 2
#define _RCEN 3
#define _ACKEN 4
#define _ACKDT 5
#define _ACKSTAT 6
#define _GCEN 7

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
//        SSP1CON1
// ------------------------------
unsigned int SSP1CON1@0xfc6 ;
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
  SSPM : 4 ;
} ; 

} SSP1CON1bits@0xfc6  ;

#define _SSPM0 0
#define _SSPM1 1
#define _SSPM2 2
#define _SSPM3 3
#define _CKP 4
#define _SSPEN 5
#define _SSPOV 6
#define _WCOL 7

// The following are aliases ..  
#define _SSPM 0:4

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
  SSPM : 4 ;
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
#define _SSPM 0:4

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
  R_W : 1 ,
  S : 1 ,
  P : 1 ,
  D_A : 1 ,
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

} SSP1STATbits@0xfc7  ;

#define _BF 0
#define _UA 1
#define _R_W 2
#define _S 3
#define _P 4
#define _D_A 5
#define _CKE 6
#define _SMP 7

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
  R_W : 1 ,
  S : 1 ,
  P : 1 ,
  D_A : 1 ,
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
#define _R_W 2
#define _S 3
#define _P 4
#define _D_A 5
#define _CKE 6
#define _SMP 7

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
//        SSP1ADD
// ------------------------------
unsigned int SSP1ADD@0xfc8 ;
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
  T2CKPS : 2 ,
  : 1,
  T2OUTPS : 4 ;
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
#define _T2CKPS 0:2
#define _T2OUTPS 3:4

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
  T1SYNC : 1 ,
  T1OSCEN : 1 ,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ,
  T1RUN : 1 ,
  RD16 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1INSYNC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  NOT_T1SYNC : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  T1CKPS : 2 ;
} ; 

} T1CONbits@0xfcd  ;

#define _TMR1ON 0
#define _TMR1CS 1
#define _T1SYNC 2
#define _T1OSCEN 3
#define _T1CKPS0 4
#define _T1CKPS1 5
#define _T1RUN 6
#define _RD16 7

#define _T1INSYNC 2

#define _NOT_T1SYNC 2

// The following are aliases ..  
#define _T1CKPS 4:2

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
  SWDTE : 1 ;
} ; 

struct 
{
  unsigned int 
  SWDTEN : 1 ;
} ; 

} WDTCONbits@0xfd1  ;

#define _SWDTE 0

#define _SWDTEN 0

// ------------------------------
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  LVDL2 : 1 ,
  LVDL3 : 1 ,
  LVDEN : 1 ,
  IRVST : 1 ,
  : 1,
  VDIRMAG : 1 ;
} ; 

struct 
{
  unsigned int 
  LVV0 : 1 ,
  LVV1 : 1 ,
  LVV2 : 1 ,
  LVV3 : 1 ,
  HLVDEN : 1 ,
  BGST : 1 ;
} ; 

struct 
{
  unsigned int 
  HLVDL0 : 1 ,
  HLVDL1 : 1 ,
  HLVDL2 : 1 ,
  HLVDL3 : 1 ,
  : 1,
  IVRST : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  LVDL : 4 ;
} ; 

struct 
{
  unsigned int 
  LVV : 4 ;
} ; 

struct 
{
  unsigned int 
  HLVDL : 4 ;
} ; 

} HLVDCONbits@0xfd2  ;

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL2 2
#define _LVDL3 3
#define _LVDEN 4
#define _IRVST 5
#define _VDIRMAG 7

#define _LVV0 0
#define _LVV1 1
#define _LVV2 2
#define _LVV3 3
#define _HLVDEN 4
#define _BGST 5

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3
#define _IVRST 5

// The following are aliases ..  
#define _LVDL 0:4

#define _LVV 0:4

#define _HLVDL 0:4

// ------------------------------
//        LVDCON
// ------------------------------
unsigned int LVDCON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  LVDL2 : 1 ,
  LVDL3 : 1 ,
  LVDEN : 1 ,
  IRVST : 1 ,
  : 1,
  VDIRMAG : 1 ;
} ; 

struct 
{
  unsigned int 
  LVV0 : 1 ,
  LVV1 : 1 ,
  LVV2 : 1 ,
  LVV3 : 1 ,
  HLVDEN : 1 ,
  BGST : 1 ;
} ; 

struct 
{
  unsigned int 
  HLVDL0 : 1 ,
  HLVDL1 : 1 ,
  HLVDL2 : 1 ,
  HLVDL3 : 1 ,
  : 1,
  IVRST : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  LVDL : 4 ;
} ; 

struct 
{
  unsigned int 
  LVV : 4 ;
} ; 

struct 
{
  unsigned int 
  HLVDL : 4 ;
} ; 

} LVDCONbits@0xfd2  ;

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL2 2
#define _LVDL3 3
#define _LVDEN 4
#define _IRVST 5
#define _VDIRMAG 7

#define _LVV0 0
#define _LVV1 1
#define _LVV2 2
#define _LVV3 3
#define _HLVDEN 4
#define _BGST 5

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3
#define _IVRST 5

// The following are aliases ..  
#define _LVDL 0:4

#define _LVV 0:4

#define _HLVDL 0:4

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
  IOFS : 1 ,
  OSTS : 1 ,
  IRCF0 : 1 ,
  IRCF1 : 1 ,
  IRCF2 : 1 ,
  IDLEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  FLTS : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  SCS : 2 ,
  : 2,
  IRCF : 3 ;
} ; 

} OSCCONbits@0xfd3  ;

#define _SCS0 0
#define _SCS1 1
#define _IOFS 2
#define _OSTS 3
#define _IRCF0 4
#define _IRCF1 5
#define _IRCF2 6
#define _IDLEN 7

#define _FLTS 2

// The following are aliases ..  
#define _SCS 0:2
#define _IRCF 4:3

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

struct 
{
  unsigned int 
  : 3,
  T0PS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  T0PS : 3 ;
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

#define _T0PS3 3

// The following are aliases ..  
#define _T0PS 0:3

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
  INT1F : 1 ,
  INT2F : 1 ,
  INT3F : 1 ,
  INT1E : 1 ,
  INT2E : 1 ,
  INT3E : 1 ,
  INT1P : 1 ,
  INT2P : 1 ;
} ; 

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

} INTCON3bits@0xff0  ;

#define _INT1F 0
#define _INT2F 1
#define _INT3F 2
#define _INT1E 3
#define _INT2E 4
#define _INT3E 5
#define _INT1P 6
#define _INT2P 7

#define _INT1IF 0
#define _INT2IF 1
#define _INT3IF 2
#define _INT1IE 3
#define _INT2IE 4
#define _INT3IE 5
#define _INT1IP 6
#define _INT2IP 7

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
  INT3P : 1 ,
  T0IP : 1 ,
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
  INT3IP : 1 ,
  TMR0IP : 1 ,
  : 4,
  RBPU : 1 ;
} ; 

} INTCON2bits@0xff1  ;

#define _RBIP 0
#define _INT3P 1
#define _T0IP 2
#define _INTEDG3 3
#define _INTEDG2 4
#define _INTEDG1 5
#define _INTEDG0 6
#define _NOT_RBPU 7

#define _INT3IP 1
#define _TMR0IP 2
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
  INT0F : 1 ,
  T0IF : 1 ,
  RBIE : 1 ,
  INT0E : 1 ,
  T0IE : 1 ,
  PEIE : 1 ,
  GIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  INT0IF : 1 ,
  TMR0IF : 1 ,
  : 1,
  INT0IE : 1 ,
  TMR0IE : 1 ,
  GIEL : 1 ,
  GIEH : 1 ;
} ; 

} INTCONbits@0xff2  ;

#define _RBIF 0
#define _INT0F 1
#define _T0IF 2
#define _RBIE 3
#define _INT0E 4
#define _T0IE 5
#define _PEIE 6
#define _GIE 7

#define _INT0IF 1
#define _TMR0IF 2
#define _INT0IE 4
#define _TMR0IE 5
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
  STKPTR0 : 1 ,
  STKPTR1 : 1 ,
  STKPTR2 : 1 ,
  STKPTR3 : 1 ,
  STKPTR4 : 1 ,
  : 1,
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
  STKPTR : 5 ;
} ; 

struct 
{
  unsigned int 
  SP : 5 ;
} ; 

} STKPTRbits@0xffc  ;

#define _STKPTR0 0
#define _STKPTR1 1
#define _STKPTR2 2
#define _STKPTR3 3
#define _STKPTR4 4
#define _STKUNF 6
#define _STKFUL 7

#define _SP0 0
#define _SP1 1
#define _SP2 2
#define _SP3 3
#define _SP4 4
#define _STKOVF 7

// The following are aliases ..  
#define _STKPTR 0:5

#define _SP 0:5

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
