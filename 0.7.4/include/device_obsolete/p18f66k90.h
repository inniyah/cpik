#ifndef DEVICE
#define DEVICE p18f66k90
#define p18f66k90

// ======================================
//         PROCESSOR : p18f66k90
// ======================================

// This file has been automatically generated from Microchip's "p18f66k90.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xef4 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        LCDCON
// ------------------------------
unsigned int LCDCON@0xef4 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _LMUX : 2 ,
  _CS : 2 ;
} ; 

} LCDCONbits@0xef4  ;

#define _WERR 5
#define _SLPEN 6
#define _LCDEN 7

#define _LMUX0 0
#define _LMUX1 1
#define _CS0 2
#define _CS1 3

// The following are aliases ..  
#define __LMUX 0:2
#define __CS 2:2

// ------------------------------
//        LCDPS
// ------------------------------
unsigned int LCDPS@0xef5 ;
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

} LCDPSbits@0xef5  ;

#define _WA 4
#define _LCDA 5
#define _BIASMD 6
#define _WFT 7

#define _LP0 0
#define _LP1 1
#define _LP2 2
#define _LP3 3

// The following are aliases ..  
#define __LP 0:4

// ------------------------------
//        LCDSE0
// ------------------------------
unsigned int LCDSE0@0xef6 ;
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

} LCDSE0bits@0xef6  ;

#define _SE00 0
#define _SE01 1
#define _SE02 2
#define _SE03 3
#define _SE04 4
#define _SE05 5
#define _SE06 6
#define _SE07 7

// ------------------------------
//        LCDSE1
// ------------------------------
unsigned int LCDSE1@0xef7 ;
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

} LCDSE1bits@0xef7  ;

#define _SE08 0
#define _SE09 1
#define _SE10 2
#define _SE11 3
#define _SE12 4
#define _SE13 5
#define _SE14 6
#define _SE15 7

// ------------------------------
//        LCDSE2
// ------------------------------
unsigned int LCDSE2@0xef8 ;
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

} LCDSE2bits@0xef8  ;

#define _SE16 0
#define _SE17 1
#define _SE18 2
#define _SE19 3
#define _SE20 4
#define _SE21 5
#define _SE22 6
#define _SE23 7

// ------------------------------
//        LCDSE3
// ------------------------------
unsigned int LCDSE3@0xef9 ;
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

} LCDSE3bits@0xef9  ;

#define _SE24 0
#define _SE25 1
#define _SE26 2
#define _SE27 3
#define _SE28 4
#define _SE29 5
#define _SE30 6
#define _SE31 7

// ------------------------------
//        LCDSE4
// ------------------------------
unsigned int LCDSE4@0xefa ;
union
{

struct 
{
  unsigned int 
  SE32 : 1 ;
} ; 

} LCDSE4bits@0xefa  ;

#define _SE32 0

// ------------------------------
//        LCDRL
// ------------------------------
unsigned int LCDRL@0xefc ;
union
{

struct 
{
  unsigned int 
  : 3,
  LCDIRI : 1 ;
} ; 

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

} LCDRLbits@0xefc  ;

#define _LCDIRI 3

#define _LRLAT0 0
#define _LRLAT1 1
#define _LRLAT2 2
#define _LRLBP0 4
#define _LRLBP1 5
#define _LRLAP0 6
#define _LRLAP1 7

// The following are aliases ..  
#define __LRLAT 0:3
#define __LRLBP 4:2
#define __LRLAP 6:2

// ------------------------------
//        LCDREF
// ------------------------------
unsigned int LCDREF@0xefd ;
union
{

struct 
{
  unsigned int 
  VLCD1PE : 1 ,
  VLCD2PE : 1 ,
  VLCD3PE : 1 ,
  : 3,
  LCDIRS : 1 ,
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

} LCDREFbits@0xefd  ;

#define _VLCD1PE 0
#define _VLCD2PE 1
#define _VLCD3PE 2
#define _LCDIRS 6
#define _LCDIRE 7

#define _LCDCST0 3
#define _LCDCST1 4
#define _LCDCST2 5

// The following are aliases ..  
#define __LCDCST 3:3

// ------------------------------
//        SSP2CON2
// ------------------------------
unsigned int SSP2CON2@0xefe ;
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

} SSP2CON2bits@0xefe  ;

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
//        SSP2CON1
// ------------------------------
unsigned int SSP2CON1@0xeff ;
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

} SSP2CON1bits@0xeff  ;

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
//        SSP2STAT
// ------------------------------
unsigned int SSP2STAT@0xf00 ;
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

} SSP2STATbits@0xf00  ;

#define _BF 0
#define _UA 1
#define _R_NOT_W 2
#define _S 3
#define _P 4
#define _D_NOT_A 5
#define _CKE 6
#define _SMP 7

#define _R 2
#define _D 5

#define _R_W 2
#define _D_A 5

#define _NOT_W 2
#define _NOT_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

#define _READ_WRITE 2
#define _DATA_ADDRESS 5

#define _I2C_READ 2
#define _I2C_START 3
#define _I2C_STOP 4
#define _I2C_DAT 5

// ------------------------------
//        SSP2ADD
// ------------------------------
unsigned int SSP2ADD@0xf01 ;
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

} SSP2ADDbits@0xf01  ;

#define _MSK0 0
#define _MSK1 1
#define _MSK2 2
#define _MSK3 3
#define _MSK4 4
#define _MSK5 5
#define _MSK6 6
#define _MSK7 7

// ------------------------------
//        SSP2BUF
// ------------------------------
unsigned int SSP2BUF@0xf02 ;
// ------------------------------
//        T4CON
// ------------------------------
unsigned int T4CON@0xf03 ;
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

} T4CONbits@0xf03  ;

#define _TMR4ON 2

#define _T4CKPS0 0
#define _T4CKPS1 1
#define _T4OUTPS0 3
#define _T4OUTPS1 4
#define _T4OUTPS2 5
#define _T4OUTPS3 6

// The following are aliases ..  
#define __T4CKPS 0:2
#define __T4OUTPS 3:4

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xf04 ;
// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf05 ;
// ------------------------------
//        CCP7CON
// ------------------------------
unsigned int CCP7CON@0xf06 ;
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

} CCP7CONbits@0xf06  ;

#define _CCP7M0 0
#define _CCP7M1 1
#define _CCP7M2 2
#define _CCP7M3 3
#define _DC7B0 4
#define _DC7B1 5

#define _CCP7Y 4
#define _CCP7X 5

// The following are aliases ..  
#define __CCP7M 0:4
#define __DC7B 4:2

// ------------------------------
//        CCPR7
// ------------------------------
unsigned int CCPR7@0xf07 ;
// ------------------------------
//        CCPR7L
// ------------------------------
unsigned int CCPR7L@0xf07 ;
// ------------------------------
//        CCPR7H
// ------------------------------
unsigned int CCPR7H@0xf08 ;
// ------------------------------
//        CCP6CON
// ------------------------------
unsigned int CCP6CON@0xf09 ;
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

} CCP6CONbits@0xf09  ;

#define _CCP6M0 0
#define _CCP6M1 1
#define _CCP6M2 2
#define _CCP6M3 3
#define _DC6B0 4
#define _DC6B1 5

#define _CCP6Y 4
#define _CCP6X 5

// The following are aliases ..  
#define __CCP6M 0:4
#define __DC6B 4:2

// ------------------------------
//        CCPR6
// ------------------------------
unsigned int CCPR6@0xf0a ;
// ------------------------------
//        CCPR6L
// ------------------------------
unsigned int CCPR6L@0xf0a ;
// ------------------------------
//        CCPR6H
// ------------------------------
unsigned int CCPR6H@0xf0b ;
// ------------------------------
//        CCP5CON
// ------------------------------
unsigned int CCP5CON@0xf0c ;
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

} CCP5CONbits@0xf0c  ;

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
unsigned int CCPR5@0xf0d ;
// ------------------------------
//        CCPR5L
// ------------------------------
unsigned int CCPR5L@0xf0d ;
// ------------------------------
//        CCPR5H
// ------------------------------
unsigned int CCPR5H@0xf0e ;
// ------------------------------
//        CCP4CON
// ------------------------------
unsigned int CCP4CON@0xf0f ;
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

} CCP4CONbits@0xf0f  ;

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
unsigned int CCPR4@0xf10 ;
// ------------------------------
//        CCPR4L
// ------------------------------
unsigned int CCPR4L@0xf10 ;
// ------------------------------
//        CCPR4H
// ------------------------------
unsigned int CCPR4H@0xf11 ;
// ------------------------------
//        T5GCON
// ------------------------------
unsigned int T5GCON@0xf12 ;
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

} T5GCONbits@0xf12  ;

#define _T5GVAL 2
#define _T5GGO_NOT_T5DONE 3
#define _T5GSPM 4
#define _T5GTM 5
#define _T5GPOL 6
#define _TMR5GE 7

#define _T5GSS0 0
#define _T5GSS1 1
#define _T5GGO 3

#define _NOT_T5DONE 3

// The following are aliases ..  
#define __T5GSS 0:2

// ------------------------------
//        T5CON
// ------------------------------
unsigned int T5CON@0xf13 ;
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

} T5CONbits@0xf13  ;

#define _TMR5ON 0
#define _RD16 1
#define _NOT_T5SYNC 2
#define _SOSCEN 3

#define _T5CKPS0 4
#define _T5CKPS1 5
#define _TMR5CS0 6
#define _TMR5CS1 7

// The following are aliases ..  
#define __T5CKPS 4:2
#define __TMR5CS 6:2

// ------------------------------
//        TMR5
// ------------------------------
unsigned int TMR5@0xf14 ;
// ------------------------------
//        TMR5L
// ------------------------------
unsigned int TMR5L@0xf14 ;
// ------------------------------
//        TMR5H
// ------------------------------
unsigned int TMR5H@0xf15 ;
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

#define _TMR12MD 0
#define _CCP4MD 1
#define _CCP5MD 2
#define _CCP6MD 3
#define _CCP7MD 4
#define _CCP8MD 5
#define _CCP9MD 6
#define _CCP10MD 7

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

#define _CMP1MD 0
#define _CMP2MD 1
#define _CMP3MD 2
#define _TMR5MD 3
#define _TMR6MD 4
#define _TMR7MD 5
#define _TMR8MD 6
#define _TMR10MD 7

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
  CTMUMD : 1 ;
} ; 

} PMD1bits@0xf18  ;

#define _TMR1MD 1
#define _TMR2MD 2
#define _TMR3MD 3
#define _TMR4MD 4
#define _RTCCMD 5
#define _CTMUMD 6

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

#define _ADCMD 0
#define _SSP1MD 1
#define _SSP2MD 2
#define _UART1MD 3
#define _UART2MD 4
#define _CCP1MD 5
#define _CCP2MD 6
#define _CCP3MD 7

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

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

#define _ANSEL16 0
#define _ANSEL17 1
#define _ANSEL18 2
#define _ANSEL19 3

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

#define _ANSEL8 0
#define _ANSEL9 1
#define _ANSEL10 2
#define _ANSEL11 3

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

#define _ANSEL0 0
#define _ANSEL1 1
#define _ANSEL2 2
#define _ANSEL3 3
#define _ANSEL4 4
#define _ANSEL5 5
#define _ANSEL6 6
#define _ANSEL7 7

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

#define _CTMUDS 0
#define _U1OD 6
#define _U2OD 7

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

#define _CCP3OD 0
#define _CCP4OD 1
#define _CCP5OD 2
#define _CCP6OD 3
#define _CCP7OD 4
#define _CCP8OD 5
#define _CCP9OD 6
#define _CCP10OD 7

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

#define _SPI2OD 0
#define _CCP1OD 5
#define _CCP2OD 6
#define _SPI1OD 7

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

#define _ROSEL 4
#define _ROSSLP 5
#define _ROON 7

#define _RODIV0 0
#define _RODIV1 1
#define _RODIV2 2
#define _RODIV3 3

// The following are aliases ..  
#define __RODIV 0:4

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

#define _C9TSEL0 2
#define _C10TSEL0 4

#define _C8TSEL0 0
#define _C8TSEL1 1

// The following are aliases ..  
#define __C9TSEL 2

#define __C8TSEL 0:2

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

#define _C5TSEL0 2
#define _C6TSEL0 4

#define _C4TSEL0 0
#define _C4TSEL1 1
#define _C7TSEL0 6
#define _C7TSEL1 7

// The following are aliases ..  
#define __C5TSEL 2

#define __C4TSEL 0:2
#define __C7TSEL 6:2

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

#define _C1TSEL0 0
#define _C1TSEL1 1
#define _C1TSEL2 2
#define _C2TSEL0 3
#define _C2TSEL1 4
#define _C2TSEL2 5
#define _C3TSEL0 6
#define _C3TSEL1 7

// The following are aliases ..  
#define __C1TSEL 0:3
#define __C2TSEL 3:3
#define __C3TSEL 6:2

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

#define _CREF 2
#define _CPOL 5
#define _COE 6
#define _CON 7

#define _CCH0 0
#define _CCH1 1
#define _EVPOL0 3
#define _EVPOL1 4

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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

#define _CREF 2
#define _CPOL 5
#define _COE 6
#define _CON 7

#define _CCH0 0
#define _CCH1 1
#define _EVPOL0 3
#define _EVPOL1 4

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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

#define _CREF 2
#define _CPOL 5
#define _COE 6
#define _CON 7

#define _CCH0 0
#define _CCH1 1
#define _EVPOL0 3
#define _EVPOL1 4

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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

#define _CREF 2
#define _CPOL 5
#define _COE 6
#define _CON 7

#define _CCH0 0
#define _CCH1 1
#define _EVPOL0 3
#define _EVPOL1 4

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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

#define _TMR12ON 2

#define _T12CKPS0 0
#define _T12CKPS1 1
#define _T12OUTPS0 3
#define _T12OUTPS1 4
#define _T12OUTPS2 5
#define _T12OUTPS3 6

// The following are aliases ..  
#define __T12CKPS 0:2
#define __T12OUTPS 3:4

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

#define _TMR10ON 2

#define _T10CKPS0 0
#define _T10CKPS1 1
#define _T10OUTPS0 3
#define _T10OUTPS1 4
#define _T10OUTPS2 5
#define _T10OUTPS3 6

// The following are aliases ..  
#define __T10CKPS 0:2
#define __T10OUTPS 3:4

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

#define _TMR8ON 2

#define _T8CKPS0 0
#define _T8CKPS1 1
#define _T8OUTPS0 3
#define _T8OUTPS1 4
#define _T8OUTPS2 5
#define _T8OUTPS3 6

// The following are aliases ..  
#define __T8CKPS 0:2
#define __T8OUTPS 3:4

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

#define _TMR6ON 2

#define _T6CKPS0 0
#define _T6CKPS1 1
#define _T6OUTPS0 3
#define _T6OUTPS1 4
#define _T6OUTPS2 5
#define _T6OUTPS3 6

// The following are aliases ..  
#define __T6CKPS 0:2
#define __T6OUTPS 3:4

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

#define _T7GVAL 2
#define _T7GGO_NOT_T7DONE 3
#define _T7GSPM 4
#define _T7GTM 5
#define _T7GPOL 6
#define _TMR7GE 7

#define _T7GSS0 0
#define _T7GSS1 1
#define _T7GGO 3

#define _NOT_T7DONE 3

// The following are aliases ..  
#define __T7GSS 0:2

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

#define _TMR7ON 0
#define _RD16 1
#define _NOT_T7SYNC 2
#define _SOSCEN 3

#define _T7CKPS0 4
#define _T7CKPS1 5
#define _TMR7CS0 6
#define _TMR7CS1 7

// The following are aliases ..  
#define __T7CKPS 4:2
#define __TMR7CS 6:2

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

#define _CCP10M0 0
#define _CCP10M1 1
#define _CCP10M2 2
#define _CCP10M3 3
#define _DC10B0 4
#define _DC10B1 5

#define _CCP10Y 4
#define _CCP10X 5

// The following are aliases ..  
#define __CCP10M 0:4
#define __DC10B 4:2

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

#define _CCP9M0 0
#define _CCP9M1 1
#define _CCP9M2 2
#define _CCP9M3 3
#define _DC9B0 4
#define _DC9B1 5

#define _CCP9Y 4
#define _CCP9X 5

// The following are aliases ..  
#define __CCP9M 0:4
#define __DC9B 4:2

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

#define _CCP8M0 0
#define _CCP8M1 1
#define _CCP8M2 2
#define _CCP8M3 3
#define _DC8B0 4
#define _DC8B1 5

#define _CCP8Y 4
#define _CCP8X 5

// The following are aliases ..  
#define __CCP8M 0:4
#define __DC8B 4:2

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
#define __CCP3M 0:4
#define __DC3B 4:2
#define __P3M 6:2

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

#define _P3RSEN 7

#define _P3DC0 0
#define _P3DC1 1
#define _P3DC2 2
#define _P3DC3 3
#define _P3DC4 4
#define _P3DC5 5
#define _P3DC6 6

// The following are aliases ..  
#define __P3DC 0:7

// ------------------------------
//        PWM3CON
// ------------------------------
unsigned int PWM3CON@0xf4c ;
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

} PWM3CONbits@0xf4c  ;

#define _P3RSEN 7

#define _P3DC0 0
#define _P3DC1 1
#define _P3DC2 2
#define _P3DC3 3
#define _P3DC4 4
#define _P3DC5 5
#define _P3DC6 6

// The following are aliases ..  
#define __P3DC 0:7

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

#define _ECCP3ASE 7

#define _PSS3BD0 0
#define _PSS3BD1 1
#define _PSS3AC0 2
#define _PSS3AC1 3
#define _ECCP3AS0 4
#define _ECCP3AS1 5
#define _ECCP3AS2 6

// The following are aliases ..  
#define __PSS3BD 0:2
#define __PSS3AC 2:2
#define __ECCP3AS 4:3

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
#define __CCP2M 0:4
#define __DC2B 4:2
#define __P2M 6:2

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
#define __CCP2M 0:4
#define __DC2B 4:2
#define __P2M 6:2

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

#define _P2RSEN 7

#define _P2DC0 0
#define _P2DC1 1
#define _P2DC2 2
#define _P2DC3 3
#define _P2DC4 4
#define _P2DC5 5
#define _P2DC6 6

// The following are aliases ..  
#define __P2DC 0:7

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

#define _P2RSEN 7

#define _P2DC0 0
#define _P2DC1 1
#define _P2DC2 2
#define _P2DC3 3
#define _P2DC4 4
#define _P2DC5 5
#define _P2DC6 6

// The following are aliases ..  
#define __P2DC 0:7

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

#define _ECCP2ASE 7

#define _PSS2BD0 0
#define _PSS2BD1 1
#define _PSS2AC0 2
#define _PSS2AC1 3
#define _ECCP2AS0 4
#define _ECCP2AS1 5
#define _ECCP2AS2 6

// The following are aliases ..  
#define __PSS2BD 0:2
#define __PSS2AC 2:2
#define __ECCP2AS 4:3

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

#define _REPU 6
#define _RDPU 7

#define _RTSECSEL0 1
#define _RTSECSEL1 2

// The following are aliases ..  
#define __RTSECSEL 1:2

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

#define _CREF 2
#define _CPOL 5
#define _COE 6
#define _CON 7

#define _CCH0 0
#define _CCH1 1
#define _EVPOL0 3
#define _EVPOL1 4

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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

#define _CREF 2
#define _CPOL 5
#define _COE 6
#define _CON 7

#define _CCH0 0
#define _CCH1 1
#define _EVPOL0 3
#define _EVPOL1 4

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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

#define _EDG1STAT 0
#define _EDG2STAT 1
#define _EDG1POL 4
#define _EDG2POL 7

#define _EDG1SEL0 2
#define _EDG1SEL1 3
#define _EDG2SEL0 5
#define _EDG2SEL1 6

// The following are aliases ..  
#define __EDG1SEL 2:2
#define __EDG2SEL 5:2

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

#define _CTTRIG 0
#define _IDISSEN 1
#define _EDGSEQEN 2
#define _EDGEN 3
#define _TGEN 4
#define _CTMUSIDL 5
#define _CTMUEN 7

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

#define _ARPT0 0
#define _ARPT1 1
#define _ARPT2 2
#define _ARPT3 3
#define _ARPT4 4
#define _ARPT5 5
#define _ARPT6 6
#define _ARPT7 7

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

#define _CHIME 6
#define _ALRMEN 7

#define _ALRMPTR0 0
#define _ALRMPTR1 1
#define _AMASK0 2
#define _AMASK1 3
#define _AMASK2 4
#define _AMASK3 5

// The following are aliases ..  
#define __ALRMPTR 0:2
#define __AMASK 2:4

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
union
{

struct 
{
  unsigned int 
  WAITE0 : 1 ,
  WAITE1 : 1 ,
  WAITM0 : 1 ,
  WAITM1 : 1 ,
  WAITM2 : 1 ,
  WAITM3 : 1 ,
  WAITB0 : 1 ,
  WAITB1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _WAITE : 2 ,
  _WAITM : 4 ,
  _WAITB : 2 ;
} ; 

} RTCVALHbits@0xf5d  ;

#define _WAITE0 0
#define _WAITE1 1
#define _WAITM0 2
#define _WAITM1 3
#define _WAITM2 4
#define _WAITM3 5
#define _WAITB0 6
#define _WAITB1 7

// The following are aliases ..  
#define __WAITE 0:2
#define __WAITM 2:4
#define __WAITB 6:2

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

#define _CAL0 0
#define _CAL1 1
#define _CAL2 2
#define _CAL3 3
#define _CAL4 4
#define _CAL5 5
#define _CAL6 6
#define _CAL7 7

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

#define _RTCOE 2
#define _HALFSEC 3
#define _RTCSYNC 4
#define _RTCWREN 5
#define _RTCEN 7

#define _RTCPTR0 0
#define _RTCPTR1 1

// The following are aliases ..  
#define __RTCPTR 0:2

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

#define _CMP1IE 0
#define _CMP2IE 1
#define _CMP3IE 2
#define _EEIE 4

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

#define _MFIOSEL 0
#define _MFIOFS 1
#define _SOSCGO 3
#define _SOSCRUN 6

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

// ------------------------------
//        LCDDATA0
// ------------------------------
unsigned int LCDDATA0@0xf66 ;
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

} LCDDATA0bits@0xf66  ;

#define _S00C0 0
#define _S01C0 1
#define _S02C0 2
#define _S03C0 3
#define _S04C0 4
#define _S05C0 5
#define _S06C0 6
#define _S07C0 7

// The following are aliases ..  
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
unsigned int LCDDATA1@0xf67 ;
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

} LCDDATA1bits@0xf67  ;

#define _S08C0 0
#define _S09C0 1
#define _S10C0 2
#define _S11C0 3
#define _S12C0 4
#define _S13C0 5
#define _S14C0 6
#define _S15C0 7

// The following are aliases ..  
#define __S08C 0
#define __S09C 1
#define __S10C 2
#define __S11C 3
#define __S12C 4
#define __S13C 5
#define __S14C 6

// ------------------------------
//        LCDDATA2
// ------------------------------
unsigned int LCDDATA2@0xf68 ;
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

} LCDDATA2bits@0xf68  ;

#define _S16C0 0
#define _S17C0 1
#define _S18C0 2
#define _S19C0 3
#define _S20C0 4
#define _S21C0 5
#define _S22C0 6
#define _S23C0 7

// The following are aliases ..  
#define __S16C 0
#define __S17C 1
#define __S18C 2
#define __S19C 3
#define __S20C 4
#define __S21C 5
#define __S22C 6

// ------------------------------
//        LCDDATA3
// ------------------------------
unsigned int LCDDATA3@0xf69 ;
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

} LCDDATA3bits@0xf69  ;

#define _S24C0 0
#define _S25C0 1
#define _S26C0 2
#define _S27C0 3
#define _S28C0 4
#define _S29C0 5
#define _S30C0 6
#define _S31C0 7

// The following are aliases ..  
#define __S24C 0
#define __S25C 1
#define __S26C 2
#define __S27C 3
#define __S28C 4
#define __S29C 5
#define __S30C 6

// ------------------------------
//        LCDDATA4
// ------------------------------
unsigned int LCDDATA4@0xf6a ;
union
{

struct 
{
  unsigned int 
  S32C0 : 1 ;
} ; 

} LCDDATA4bits@0xf6a  ;

#define _S32C0 0

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

} LCDDATA6bits@0xf6c  ;

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
unsigned int LCDDATA7@0xf6d ;
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

} LCDDATA7bits@0xf6d  ;

#define _S08C1 0
#define _S09C1 1
#define _S10C1 2
#define _S11C1 3
#define _S12C1 4
#define _S13C1 5
#define _S14C1 6
#define _S15C1 7

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

} LCDDATA8bits@0xf6e  ;

#define _S16C1 0
#define _S17C1 1
#define _S18C1 2
#define _S19C1 3
#define _S20C1 4
#define _S21C1 5
#define _S22C1 6
#define _S23C1 7

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

} LCDDATA9bits@0xf6f  ;

#define _S24C1 0
#define _S25C1 1
#define _S26C1 2
#define _S27C1 3
#define _S28C1 4
#define _S29C1 5
#define _S30C1 6
#define _S31C1 7

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

} LCDDATA10bits@0xf70  ;

#define _S32C1 0

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

} LCDDATA12bits@0xf72  ;

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
unsigned int LCDDATA13@0xf73 ;
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

} LCDDATA13bits@0xf73  ;

#define _S08C2 0
#define _S09C2 1
#define _S10C2 2
#define _S11C2 3
#define _S12C2 4
#define _S13C2 5
#define _S14C2 6
#define _S15C2 7

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

} LCDDATA14bits@0xf74  ;

#define _S16C2 0
#define _S17C2 1
#define _S18C2 2
#define _S19C2 3
#define _S20C2 4
#define _S21C2 5
#define _S22C2 6
#define _S23C2 7

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

} LCDDATA15bits@0xf75  ;

#define _S24C2 0
#define _S25C2 1
#define _S26C2 2
#define _S27C2 3
#define _S28C2 4
#define _S29C2 5
#define _S30C2 6
#define _S31C2 7

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

} LCDDATA16bits@0xf76  ;

#define _S32C2 0

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

} LCDDATA18bits@0xf78  ;

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
unsigned int LCDDATA19@0xf79 ;
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

} LCDDATA19bits@0xf79  ;

#define _S08C3 0
#define _S09C3 1
#define _S10C3 2
#define _S11C3 3
#define _S12C3 4
#define _S13C3 5
#define _S14C3 6
#define _S15C3 7

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

} LCDDATA20bits@0xf7a  ;

#define _S16C3 0
#define _S17C3 1
#define _S18C3 2
#define _S19C3 3
#define _S20C3 4
#define _S21C3 5
#define _S22C3 6
#define _S23C3 7

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

} LCDDATA21bits@0xf7b  ;

#define _S24C3 0
#define _S25C3 1
#define _S26C3 2
#define _S27C3 3
#define _S28C3 4
#define _S29C3 5
#define _S30C3 6
#define _S31C3 7

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

} LCDDATA22bits@0xf7c  ;

#define _S32C3 0

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
  ULPWUIN : 1 ,
  SEG18 : 1 ,
  VREF_MINUS : 1 ,
  VREF_PLUS : 1 ,
  SEG14 : 1 ,
  SEG15 : 1 ,
  CLKO : 1 ,
  CLKI : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  T0CKI : 1 ,
  T1CKI : 1 ;
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
  LVDIN : 1 ;
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
#define _AN4 5
#define _OSC2 6
#define _OSC1 7

#define _ULPWUIN 0
#define _SEG18 1
#define _VREF_MINUS 2
#define _VREF_PLUS 3
#define _SEG14 4
#define _SEG15 5
#define _CLKO 6
#define _CLKI 7

#define _T0CKI 4
#define _T1CKI 5

#define _T3G 5

#define _LVDIN 5

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
  SEG30 : 1 ,
  SEG8 : 1 ,
  SEG9 : 1 ,
  SEG10 : 1 ,
  SEG11 : 1 ,
  SEG29 : 1 ;
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
  CCP2_PA2 : 1 ,
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

#define _SEG30 0
#define _SEG8 1
#define _SEG9 2
#define _SEG10 3
#define _SEG11 4
#define _SEG29 5

#define _FLT0 0
#define _CTED1 2
#define _CTED2 3
#define _T3CKI 5

#define _CCP2_PA2 3
#define _T1G 5

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
  : 1,
  SEG32 : 1 ,
  SEG13 : 1 ,
  SEG17 : 1 ,
  SEG16 : 1 ,
  SEG12 : 1 ,
  SEG27 : 1 ,
  SEG28 : 1 ;
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
  PA2_PORTC : 1 ,
  PA1 : 1 ;
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

#define _SEG32 1
#define _SEG13 2
#define _SEG17 3
#define _SEG16 4
#define _SEG12 5
#define _SEG27 6
#define _SEG28 7

#define _SOSCO 0
#define _SOSCI 1
#define _SCK1 3
#define _SDI1 4
#define _SDO1 5
#define _TX1 6
#define _RX1 7

#define _SCKLI 0
#define _CCP2_PORTC 1
#define _CCP1 2
#define _SCL1 3
#define _SDA1 4
#define _CK1 6
#define _DT1 7

#define _PA2_PORTC 1
#define _PA1 2

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
  CTPLS : 1 ,
  T5CKI : 1 ,
  : 2,
  SDO2 : 1 ,
  SDI2 : 1 ,
  SCK2 : 1 ,
  SS2 : 1 ;
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

#define _RD0 0
#define _RD1 1
#define _RD2 2
#define _RD3 3
#define _RD4 4
#define _RD5 5
#define _RD6 6
#define _RD7 7

#define _AD0 0
#define _AD1 1
#define _AD2 2
#define _AD3 3
#define _AD4 4
#define _AD5 5
#define _AD6 6
#define _AD7 7

#define _PSP0 0
#define _PSP1 1
#define _PSP2 2
#define _PSP3 3
#define _PSP4 4
#define _PSP5 5
#define _PSP6 6
#define _PSP7 7

#define _SEG0 0
#define _SEG1 1
#define _SEG2 2
#define _SEG3 3
#define _SEG4 4
#define _SEG5 5
#define _SEG6 6
#define _SEG7 7

#define _CTPLS 0
#define _T5CKI 1
#define _SDO2 4
#define _SDI2 5
#define _SCK2 6
#define _SS2 7

#define _T7G 1
#define _SDA2 5
#define _SCL2 6

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
  PD2 : 1 ,
  PC2 : 1 ,
  PB2 : 1 ,
  PC3 : 1 ,
  PB3 : 1 ,
  PC1 : 1 ,
  PB1 : 1 ,
  PA2_PORTE : 1 ;
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
  RD : 1 ,
  WR : 1 ,
  CS : 1 ,
  COM0 : 1 ,
  COM1 : 1 ,
  COM2 : 1 ,
  COM3 : 1 ,
  SEG31 : 1 ;
} ; 

struct 
{
  unsigned int 
  LCDBIAS1 : 1 ,
  LCDBIAS2 : 1 ,
  LCDBIAS3 : 1 ,
  : 1,
  REFO : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 3,
  _COM : 4 ;
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

#define _AD8 0
#define _AD9 1
#define _AD10 2
#define _AD11 3
#define _AD12 4
#define _AD13 5
#define _AD14 6
#define _AD15 7

#define _PD2 0
#define _PC2 1
#define _PB2 2
#define _PC3 3
#define _PB3 4
#define _PC1 5
#define _PB1 6
#define _PA2_PORTE 7

#define _CCP10 2
#define _CCP9 3
#define _CCP8 4
#define _CCP7 5
#define _CCP6 6
#define _CCP2_PORTE 7

#define _RD 0
#define _WR 1
#define _CS 2
#define _COM0 3
#define _COM1 4
#define _COM2 5
#define _COM3 6
#define _SEG31 7

#define _LCDBIAS1 0
#define _LCDBIAS2 1
#define _LCDBIAS3 2
#define _REFO 4

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
  CTDIN : 1 ,
  : 1,
  CTMUI : 1 ,
  : 1,
  CVREF : 1 ;
} ; 

} PORTFbits@0xf85  ;

#define _RF1 1
#define _RF2 2
#define _RF3 3
#define _RF4 4
#define _RF5 5
#define _RF6 6
#define _RF7 7

#define _AN6 1
#define _AN7 2
#define _AN8 3
#define _AN9 4
#define _AN10 5
#define _AN11 6
#define _AN5 7

#define _SEG19 1
#define _SEG20 2
#define _SEG21 3
#define _SEG22 4
#define _SEG23 5
#define _SEG24 6
#define _SEG25 7

#define _C2OUT_PORTF 1
#define _C1OUT_PORTF 2
#define _C2INB 3
#define _C2INA 4
#define _C1INB 5
#define _C1INA 6
#define _SS1 7

#define _CTDIN 1
#define _CTMUI 3
#define _CVREF 5

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
  C3OUT_PORTG : 1 ,
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
  SEG26 : 1 ;
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

#define _RG0 0
#define _RG1 1
#define _RG2 2
#define _RG3 3
#define _RG4 4
#define _RG5 5

#define _CCP3 0
#define _C3OUT_PORTG 1
#define _C3INA 2
#define _C3INB 3
#define _C3INC 4

#define _PA3 0
#define _TX2 1
#define _RX2 2
#define _PD3 3
#define _PD1 4

#define _AN19 1
#define _AN18 2
#define _AN17 3
#define _AN16 4

#define _CK2 1
#define _DT2 2
#define _CCP4 3
#define _CCP5 4

#define _SEG26 4

#define _T7CKI 4

#define _T5G 4

#define _RTCC 4

// The following are aliases ..  
#define __RG 0:6

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

#define _TRISF1 1
#define _TRISF2 2
#define _TRISF3 3
#define _TRISF4 4
#define _TRISF5 5
#define _TRISF6 6
#define _TRISF7 7

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

#define _TRISG0 0
#define _TRISG1 1
#define _TRISG2 2
#define _TRISG3 3
#define _TRISG4 4

// The following are aliases ..  
#define __TRISG 0:5

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

#define _PLLEN 6
#define _INTSRC 7

#define _TUN0 0
#define _TUN1 1
#define _TUN2 2
#define _TUN3 3
#define _TUN4 4
#define _TUN5 5

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

#define _TMR1IE 0
#define _TMR2IE 1
#define _TMR1GIE 2
#define _SSP1IE 3
#define _TX1IE 4
#define _RC1IE 5
#define _ADIE 6

#define _SSPIE 3
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

#define _TMR1IF 0
#define _TMR2IF 1
#define _TMR1GIF 2
#define _SSP1IF 3
#define _TX1IF 4
#define _RC1IF 5
#define _ADIF 6

#define _SSPIF 3
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

#define _TMR1IP 0
#define _TMR2IP 1
#define _TMR1GIP 2
#define _SSP1IP 3
#define _TX1IP 4
#define _RC1IP 5
#define _ADIP 6

#define _SSPIP 3
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

#define _TMR3GIE 0
#define _TMR3IE 1
#define _HLVDIE 2
#define _BCL1IE 3
#define _BCL2IE 4
#define _SSP2IE 5
#define _OSCFIE 7

#define _LVDIE 2
#define _BCLIE 3

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

#define _TMR3GIF 0
#define _TMR3IF 1
#define _HLVDIF 2
#define _BCL1IF 3
#define _BCL2IF 4
#define _SSP2IF 5
#define _OSCFIF 7

#define _LVDIF 2
#define _BCLIF 3

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

#define _TMR3GIP 0
#define _TMR3IP 1
#define _HLVDIP 2
#define _BCL1IP 3
#define _BCL2IP 4
#define _SSP2IP 5
#define _OSCFIP 7

#define _LVDIP 2
#define _BCLIP 3

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

#define _RTCCIE 0
#define _CCP1IE 1
#define _CCP2IE 2
#define _CTMUIE 3
#define _TX2IE 4
#define _RC2IE 5
#define _LCDIE 6
#define _TMR5GIE 7

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

#define _RTCCIF 0
#define _CCP1IF 1
#define _CCP2IF 2
#define _CTMUIF 3
#define _TX2IF 4
#define _RC2IF 5
#define _LCDIF 6
#define _TMR5GIF 7

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

#define _RTCCIP 0
#define _CCP1IP 1
#define _CCP2IP 2
#define _CTMUIP 3
#define _TX2IP 4
#define _RC2IP 5
#define _LCDIP 6
#define _TMR5GIP 7

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

#define _CMP1IF 0
#define _CMP2IF 1
#define _CMP3IF 2
#define _EEIF 4

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

#define _HLVDEN 4
#define _IRVST 5
#define _BGVST 6
#define _VDIRMAG 7

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3

// The following are aliases ..  
#define __HLVDL 0:4

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

#define _CMP1IP 0
#define _CMP2IP 1
#define _CMP3IP 2
#define _EEIP 4

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

#define _T1GVAL 2
#define _T1GGO_NOT_T1DONE 3
#define _T1GSPM 4
#define _T1GTM 5
#define _T1GPOL 6
#define _TMR1GE 7

#define _T1GSS0 0
#define _T1GSS1 1
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

#define _T3GVAL 2
#define _T3GGO_NOT_T3DONE 3
#define _T3GSPM 4
#define _T3GTM 5
#define _T3GPOL 6
#define _TMR3GE 7

#define _T3GSS0 0
#define _T3GSS1 1
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
  : 5,
  CMP1OUT : 1 ,
  CMP2OUT : 1 ,
  CMP3OUT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  C1OUT_CMSTAT : 1 ,
  C2OUT_CMSTAT : 1 ,
  C3OUT_CMSTAT : 1 ;
} ; 

} CMSTATbits@0xfb4  ;

#define _CMP1OUT 5
#define _CMP2OUT 6
#define _CMP3OUT 7

#define _C1OUT_CMSTAT 5
#define _C2OUT_CMSTAT 6
#define _C3OUT_CMSTAT 7

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

struct 
{
  unsigned int 
  : 5,
  C1OUT_CMSTATUS : 1 ,
  C2OUT_CMSTATUS : 1 ,
  C3OUT_CMSTATUS : 1 ;
} ; 

} CMSTATUSbits@0xfb4  ;

#define _CMP1OUT 5
#define _CMP2OUT 6
#define _CMP3OUT 7

#define _C1OUT_CMSTATUS 5
#define _C2OUT_CMSTATUS 6
#define _C3OUT_CMSTATUS 7

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

#define _CVRSS 5
#define _CVROE 6
#define _CVREN 7

#define _CVR0 0
#define _CVR1 1
#define _CVR2 2
#define _CVR3 3
#define _CVR4 4

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
  CCP6IE : 1 ,
  CCP7IE : 1 ,
  CCP8IE : 1 ,
  CCP9IE : 1 ,
  CCP10IE : 1 ;
} ; 

} PIE4bits@0xfb6  ;

#define _CCP3IE 0
#define _CCP4IE 1
#define _CCP5IE 2
#define _CCP6IE 3
#define _CCP7IE 4
#define _CCP8IE 5
#define _CCP9IE 6
#define _CCP10IE 7

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

#define _CCP3IF 0
#define _CCP4IF 1
#define _CCP5IF 2
#define _CCP6IF 3
#define _CCP7IF 4
#define _CCP8IF 5
#define _CCP9IF 6
#define _CCP10IF 7

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

#define _CCP3IP 0
#define _CCP4IP 1
#define _CCP5IP 2
#define _CCP6IP 3
#define _CCP7IP 4
#define _CCP8IP 5
#define _CCP9IP 6
#define _CCP10IP 7

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

#define _TMR4IE 0
#define _TMR5IE 1
#define _TMR6IE 2
#define _TMR7IE 3
#define _TMR8IE 4
#define _TMR10IE 5
#define _TMR12IE 6
#define _TMR7GIE 7

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

#define _TMR4IF 0
#define _TMR5IF 1
#define _TMR6IF 2
#define _TMR7IF 3
#define _TMR8IF 4
#define _TMR10IF 5
#define _TMR12IF 6
#define _TMR7GIF 7

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

#define _P1RSEN 7

#define _P1DC0 0
#define _P1DC1 1
#define _P1DC2 2
#define _P1DC3 3
#define _P1DC4 4
#define _P1DC5 5
#define _P1DC6 6

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

#define _P1RSEN 7

#define _P1DC0 0
#define _P1DC1 1
#define _P1DC2 2
#define _P1DC3 3
#define _P1DC4 4
#define _P1DC5 5
#define _P1DC6 6

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

#define _ECCP1ASE 7

#define _PSS1BD0 0
#define _PSS1BD1 1
#define _PSS1AC0 2
#define _PSS1AC1 3
#define _ECCP1AS0 4
#define _ECCP1AS1 5
#define _ECCP1AS2 6

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

#define _VNCFG 3

#define _CHSN0 0
#define _CHSN1 1
#define _CHSN2 2
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

#define _ADON 0
#define _GO_NOT_DONE 1

#define _DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5
#define _CHS4 6

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
  _SSPM : 4 ;
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
#define __SSPM 0:4

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

#define _BF 0
#define _UA 1
#define _R_NOT_W 2
#define _S 3
#define _P 4
#define _D_NOT_A 5
#define _CKE 6
#define _SMP 7

#define _R 2
#define _D 5

#define _R_W 2
#define _D_A 5

#define _NOT_W 2
#define _NOT_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

#define _READ_WRITE 2
#define _DATA_ADDRESS 5

#define _I2C_READ 2
#define _I2C_START 3
#define _I2C_STOP 4
#define _I2C_DAT 5

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

#define _BF 0
#define _UA 1
#define _R_NOT_W 2
#define _S 3
#define _P 4
#define _D_NOT_A 5
#define _CKE 6
#define _SMP 7

#define _R 2
#define _D 5

#define _R_W 2
#define _D_A 5

#define _NOT_W 2
#define _NOT_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

#define _READ_WRITE 2
#define _DATA_ADDRESS 5

#define _I2C_READ 2
#define _I2C_START 3
#define _I2C_STOP 4
#define _I2C_DAT 5

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

#define _MSK0 0
#define _MSK1 1
#define _MSK2 2
#define _MSK3 3
#define _MSK4 4
#define _MSK5 5
#define _MSK6 6
#define _MSK7 7

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

#define _TMR4IP 0
#define _TMR5IP 1
#define _TMR6IP 2
#define _TMR7IP 3
#define _TMR8IP 4
#define _TMR10IP 5
#define _TMR12IP 6
#define _TMR7GIP 7

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

#define _HFIOFS 2
#define _OSTS 3
#define _IDLEN 7

#define _SCS0 0
#define _SCS1 1
#define _IRCF0 4
#define _IRCF1 5
#define _IRCF2 6

// The following are aliases ..  
#define __SCS 0:2
#define __IRCF 4:3

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

#define _STKUNF 6
#define _STKFUL 7

#define _SP0 0
#define _SP1 1
#define _SP2 2
#define _SP3 3
#define _SP4 4
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
