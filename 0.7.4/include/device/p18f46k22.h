#ifndef DEVICE
#define DEVICE p18f46k22
#define p18f46k22

// ======================================
//         PROCESSOR : p18f46k22
// ======================================

// This file has been automatically generated from Microchip's "p18f46k22.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xf38 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        ANSELA
// ------------------------------
unsigned int ANSELA@0xf38 ;
union
{

struct 
{
  unsigned int 
  ANSA0 : 1 ,
  ANSA1 : 1 ,
  ANSA2 : 1 ,
  ANSA3 : 1 ,
  : 1,
  ANSA5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ANSA : 4 ;
} ; 

} ANSELAbits@0xf38  ;

// ------------------------------
//        ANSELB
// ------------------------------
unsigned int ANSELB@0xf39 ;
union
{

struct 
{
  unsigned int 
  ANSB0 : 1 ,
  ANSB1 : 1 ,
  ANSB2 : 1 ,
  ANSB3 : 1 ,
  ANSB4 : 1 ,
  ANSB5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ANSB : 6 ;
} ; 

} ANSELBbits@0xf39  ;

// ------------------------------
//        ANSELC
// ------------------------------
unsigned int ANSELC@0xf3a ;
union
{

struct 
{
  unsigned int 
  : 2,
  ANSC2 : 1 ,
  ANSC3 : 1 ,
  ANSC4 : 1 ,
  ANSC5 : 1 ,
  ANSC6 : 1 ,
  ANSC7 : 1 ;
} ; 

} ANSELCbits@0xf3a  ;

// ------------------------------
//        ANSELD
// ------------------------------
unsigned int ANSELD@0xf3b ;
union
{

struct 
{
  unsigned int 
  ANSD0 : 1 ,
  ANSD1 : 1 ,
  ANSD2 : 1 ,
  ANSD3 : 1 ,
  ANSD4 : 1 ,
  ANSD5 : 1 ,
  ANSD6 : 1 ,
  ANSD7 : 1 ;
} ; 

} ANSELDbits@0xf3b  ;

// ------------------------------
//        ANSELE
// ------------------------------
unsigned int ANSELE@0xf3c ;
union
{

struct 
{
  unsigned int 
  ANSE0 : 1 ,
  ANSE1 : 1 ,
  ANSE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ANSE : 3 ;
} ; 

} ANSELEbits@0xf3c  ;

// ------------------------------
//        PMD2
// ------------------------------
unsigned int PMD2@0xf3d ;
union
{

struct 
{
  unsigned int 
  ADCMD : 1 ,
  CMP1MD : 1 ,
  CMP2MD : 1 ,
  CTMUMD : 1 ;
} ; 

} PMD2bits@0xf3d  ;

// ------------------------------
//        PMD1
// ------------------------------
unsigned int PMD1@0xf3e ;
union
{

struct 
{
  unsigned int 
  CCP1MD : 1 ,
  CCP2MD : 1 ,
  CCP3MD : 1 ,
  CCP4MD : 1 ,
  CCP5MD : 1 ,
  : 1,
  MSSP1MD : 1 ,
  MSSP2MD : 1 ;
} ; 

} PMD1bits@0xf3e  ;

// ------------------------------
//        PMD0
// ------------------------------
unsigned int PMD0@0xf3f ;
union
{

struct 
{
  unsigned int 
  TMR1MD : 1 ,
  TMR2MD : 1 ,
  TMR3MD : 1 ,
  TMR4MD : 1 ,
  TMR5MD : 1 ,
  TMR6MD : 1 ,
  UART1MD : 1 ,
  UART2MD : 1 ;
} ; 

} PMD0bits@0xf3f  ;

// ------------------------------
//        DACCON1
// ------------------------------
unsigned int DACCON1@0xf40 ;
union
{

struct 
{
  unsigned int 
  DACR0 : 1 ,
  DACR1 : 1 ,
  DACR2 : 1 ,
  DACR3 : 1 ,
  DACR4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DACR : 5 ;
} ; 

} DACCON1bits@0xf40  ;

// ------------------------------
//        VREFCON2
// ------------------------------
unsigned int VREFCON2@0xf40 ;
union
{

struct 
{
  unsigned int 
  DACR0 : 1 ,
  DACR1 : 1 ,
  DACR2 : 1 ,
  DACR3 : 1 ,
  DACR4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DACR : 5 ;
} ; 

} VREFCON2bits@0xf40  ;

// ------------------------------
//        DACCON0
// ------------------------------
unsigned int DACCON0@0xf41 ;
union
{

struct 
{
  unsigned int 
  DACNSS : 1 ,
  : 4,
  DACOE : 1 ,
  DACLPS : 1 ,
  DACEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  DACPSS0 : 1 ,
  DACPSS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _DACPSS : 2 ;
} ; 

} DACCON0bits@0xf41  ;

// ------------------------------
//        VREFCON1
// ------------------------------
unsigned int VREFCON1@0xf41 ;
union
{

struct 
{
  unsigned int 
  DACNSS : 1 ,
  : 4,
  DACOE : 1 ,
  DACLPS : 1 ,
  DACEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  DACPSS0 : 1 ,
  DACPSS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _DACPSS : 2 ;
} ; 

} VREFCON1bits@0xf41  ;

// ------------------------------
//        FVRCON
// ------------------------------
unsigned int FVRCON@0xf42 ;
union
{

struct 
{
  unsigned int 
  : 6,
  FVRST : 1 ,
  FVREN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  FVRS0 : 1 ,
  FVRS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _FVRS : 2 ;
} ; 

} FVRCONbits@0xf42  ;

// ------------------------------
//        VREFCON0
// ------------------------------
unsigned int VREFCON0@0xf42 ;
union
{

struct 
{
  unsigned int 
  : 6,
  FVRST : 1 ,
  FVREN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  FVRS0 : 1 ,
  FVRS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _FVRS : 2 ;
} ; 

} VREFCON0bits@0xf42  ;

// ------------------------------
//        CTMUICON
// ------------------------------
unsigned int CTMUICON@0xf43 ;
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

} CTMUICONbits@0xf43  ;

// ------------------------------
//        CTMUICONH
// ------------------------------
unsigned int CTMUICONH@0xf43 ;
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

} CTMUICONHbits@0xf43  ;

// ------------------------------
//        CTMUCON1
// ------------------------------
unsigned int CTMUCON1@0xf44 ;
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

} CTMUCON1bits@0xf44  ;

// ------------------------------
//        CTMUCONL
// ------------------------------
unsigned int CTMUCONL@0xf44 ;
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

} CTMUCONLbits@0xf44  ;

// ------------------------------
//        CTMUCON0
// ------------------------------
unsigned int CTMUCON0@0xf45 ;
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

} CTMUCON0bits@0xf45  ;

// ------------------------------
//        CTMUCONH
// ------------------------------
unsigned int CTMUCONH@0xf45 ;
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

} CTMUCONHbits@0xf45  ;

// ------------------------------
//        SRCON1
// ------------------------------
unsigned int SRCON1@0xf46 ;
union
{

struct 
{
  unsigned int 
  SRRC1E : 1 ,
  SRRC2E : 1 ,
  SRRCKE : 1 ,
  SRRPE : 1 ,
  SRSC1E : 1 ,
  SRSC2E : 1 ,
  SRSCKE : 1 ,
  SRSPE : 1 ;
} ; 

} SRCON1bits@0xf46  ;

// ------------------------------
//        SRCON0
// ------------------------------
unsigned int SRCON0@0xf47 ;
union
{

struct 
{
  unsigned int 
  SRPR : 1 ,
  SRPS : 1 ,
  SRNQEN : 1 ,
  SRQEN : 1 ,
  : 3,
  SRLEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SRCLK0 : 1 ,
  SRCLK1 : 1 ,
  SRCLK2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _SRCLK : 3 ;
} ; 

} SRCON0bits@0xf47  ;

// ------------------------------
//        CCPTMRS1
// ------------------------------
unsigned int CCPTMRS1@0xf48 ;
union
{

struct 
{
  unsigned int 
  C4TSEL0 : 1 ,
  C4TSEL1 : 1 ,
  C5TSEL0 : 1 ,
  C5TSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C4TSEL : 2 ,
  _C5TSEL : 2 ;
} ; 

} CCPTMRS1bits@0xf48  ;

// ------------------------------
//        CCPTMRS0
// ------------------------------
unsigned int CCPTMRS0@0xf49 ;
union
{

struct 
{
  unsigned int 
  C1TSEL0 : 1 ,
  C1TSEL1 : 1 ,
  : 1,
  C2TSEL0 : 1 ,
  C2TSEL1 : 1 ,
  : 1,
  C3TSEL0 : 1 ,
  C3TSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C1TSEL : 2 ,
  : 1,
  _C2TSEL : 2 ,
  : 1,
  _C3TSEL : 2 ;
} ; 

} CCPTMRS0bits@0xf49  ;

// ------------------------------
//        T6CON
// ------------------------------
unsigned int T6CON@0xf4a ;
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

} T6CONbits@0xf4a  ;

// ------------------------------
//        PR6
// ------------------------------
unsigned int PR6@0xf4b ;
// ------------------------------
//        TMR6
// ------------------------------
unsigned int TMR6@0xf4c ;
// ------------------------------
//        T5GCON
// ------------------------------
unsigned int T5GCON@0xf4d ;
union
{

struct 
{
  unsigned int 
  : 2,
  T5GVAL : 1 ,
  T5GGO_NOT_DONE : 1 ,
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
  T5G_DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T5GSS : 2 ;
} ; 

} T5GCONbits@0xf4d  ;

// ------------------------------
//        T5CON
// ------------------------------
unsigned int T5CON@0xf4e ;
union
{

struct 
{
  unsigned int 
  TMR5ON : 1 ,
  T5RD16 : 1 ,
  NOT_T5SYNC : 1 ,
  T5SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T5SYNC : 1 ,
  : 1,
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

} T5CONbits@0xf4e  ;

// ------------------------------
//        TMR5
// ------------------------------
unsigned int TMR5@0xf4f ;
// ------------------------------
//        TMR5L
// ------------------------------
unsigned int TMR5L@0xf4f ;
// ------------------------------
//        TMR5H
// ------------------------------
unsigned int TMR5H@0xf50 ;
// ------------------------------
//        T4CON
// ------------------------------
unsigned int T4CON@0xf51 ;
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

} T4CONbits@0xf51  ;

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xf52 ;
// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf53 ;
// ------------------------------
//        CCP5CON
// ------------------------------
unsigned int CCP5CON@0xf54 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP5M : 4 ,
  _DC5B : 2 ;
} ; 

} CCP5CONbits@0xf54  ;

// ------------------------------
//        CCPR5
// ------------------------------
unsigned int CCPR5@0xf55 ;
// ------------------------------
//        CCPR5L
// ------------------------------
unsigned int CCPR5L@0xf55 ;
// ------------------------------
//        CCPR5H
// ------------------------------
unsigned int CCPR5H@0xf56 ;
// ------------------------------
//        CCP4CON
// ------------------------------
unsigned int CCP4CON@0xf57 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP4M : 4 ,
  _DC4B : 2 ;
} ; 

} CCP4CONbits@0xf57  ;

// ------------------------------
//        CCPR4
// ------------------------------
unsigned int CCPR4@0xf58 ;
// ------------------------------
//        CCPR4L
// ------------------------------
unsigned int CCPR4L@0xf58 ;
// ------------------------------
//        CCPR4H
// ------------------------------
unsigned int CCPR4H@0xf59 ;
// ------------------------------
//        PSTR3CON
// ------------------------------
unsigned int PSTR3CON@0xf5a ;
union
{

struct 
{
  unsigned int 
  STR3A : 1 ,
  STR3B : 1 ,
  STR3C : 1 ,
  STR3D : 1 ,
  STR3SYNC : 1 ;
} ; 

} PSTR3CONbits@0xf5a  ;

// ------------------------------
//        CCP3AS
// ------------------------------
unsigned int CCP3AS@0xf5b ;
union
{

struct 
{
  unsigned int 
  : 7,
  CCP3ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  P3SSBD0 : 1 ,
  P3SSBD1 : 1 ,
  P3SSAC0 : 1 ,
  P3SSAC1 : 1 ,
  CCP3AS0 : 1 ,
  CCP3AS1 : 1 ,
  CCP3AS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS3BD0 : 1 ,
  PSS3BD1 : 1 ,
  PSS3AC0 : 1 ,
  PSS3AC1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P3SSBD : 2 ,
  _P3SSAC : 2 ,
  _CCP3AS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSS3BD : 2 ,
  _PSS3AC : 2 ;
} ; 

} CCP3ASbits@0xf5b  ;

// ------------------------------
//        ECCP3AS
// ------------------------------
unsigned int ECCP3AS@0xf5b ;
union
{

struct 
{
  unsigned int 
  : 7,
  CCP3ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  P3SSBD0 : 1 ,
  P3SSBD1 : 1 ,
  P3SSAC0 : 1 ,
  P3SSAC1 : 1 ,
  CCP3AS0 : 1 ,
  CCP3AS1 : 1 ,
  CCP3AS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS3BD0 : 1 ,
  PSS3BD1 : 1 ,
  PSS3AC0 : 1 ,
  PSS3AC1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P3SSBD : 2 ,
  _P3SSAC : 2 ,
  _CCP3AS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSS3BD : 2 ,
  _PSS3AC : 2 ;
} ; 

} ECCP3ASbits@0xf5b  ;

// ------------------------------
//        PWM3CON
// ------------------------------
unsigned int PWM3CON@0xf5c ;
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

} PWM3CONbits@0xf5c  ;

// ------------------------------
//        CCP3CON
// ------------------------------
unsigned int CCP3CON@0xf5d ;
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

} CCP3CONbits@0xf5d  ;

// ------------------------------
//        CCPR3
// ------------------------------
unsigned int CCPR3@0xf5e ;
// ------------------------------
//        CCPR3L
// ------------------------------
unsigned int CCPR3L@0xf5e ;
// ------------------------------
//        CCPR3H
// ------------------------------
unsigned int CCPR3H@0xf5f ;
// ------------------------------
//        SLRCON
// ------------------------------
unsigned int SLRCON@0xf60 ;
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

} SLRCONbits@0xf60  ;

// ------------------------------
//        WPUB
// ------------------------------
unsigned int WPUB@0xf61 ;
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

} WPUBbits@0xf61  ;

// ------------------------------
//        IOCB
// ------------------------------
unsigned int IOCB@0xf62 ;
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

} IOCBbits@0xf62  ;

// ------------------------------
//        PSTR2CON
// ------------------------------
unsigned int PSTR2CON@0xf63 ;
union
{

struct 
{
  unsigned int 
  STR2A : 1 ,
  STR2B : 1 ,
  STR2C : 1 ,
  STR2D : 1 ,
  STR2SYNC : 1 ;
} ; 

} PSTR2CONbits@0xf63  ;

// ------------------------------
//        CCP2AS
// ------------------------------
unsigned int CCP2AS@0xf64 ;
union
{

struct 
{
  unsigned int 
  : 7,
  CCP2ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  P2SSBD0 : 1 ,
  P2SSBD1 : 1 ,
  P2SSAC0 : 1 ,
  P2SSAC1 : 1 ,
  CCP2AS0 : 1 ,
  CCP2AS1 : 1 ,
  CCP2AS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS2BD0 : 1 ,
  PSS2BD1 : 1 ,
  PSS2AC0 : 1 ,
  PSS2AC1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P2SSBD : 2 ,
  _P2SSAC : 2 ,
  _CCP2AS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSS2BD : 2 ,
  _PSS2AC : 2 ;
} ; 

} CCP2ASbits@0xf64  ;

// ------------------------------
//        ECCP2AS
// ------------------------------
unsigned int ECCP2AS@0xf64 ;
union
{

struct 
{
  unsigned int 
  : 7,
  CCP2ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  P2SSBD0 : 1 ,
  P2SSBD1 : 1 ,
  P2SSAC0 : 1 ,
  P2SSAC1 : 1 ,
  CCP2AS0 : 1 ,
  CCP2AS1 : 1 ,
  CCP2AS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS2BD0 : 1 ,
  PSS2BD1 : 1 ,
  PSS2AC0 : 1 ,
  PSS2AC1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P2SSBD : 2 ,
  _P2SSAC : 2 ,
  _CCP2AS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSS2BD : 2 ,
  _PSS2AC : 2 ;
} ; 

} ECCP2ASbits@0xf64  ;

// ------------------------------
//        PWM2CON
// ------------------------------
unsigned int PWM2CON@0xf65 ;
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

} PWM2CONbits@0xf65  ;

// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xf66 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ,
  _DC2B : 2 ,
  _P2M : 2 ;
} ; 

} CCP2CONbits@0xf66  ;

// ------------------------------
//        CCPR2
// ------------------------------
unsigned int CCPR2@0xf67 ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xf67 ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xf68 ;
// ------------------------------
//        SSP2CON3
// ------------------------------
unsigned int SSP2CON3@0xf69 ;
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

} SSP2CON3bits@0xf69  ;

// ------------------------------
//        SSP2MSK
// ------------------------------
unsigned int SSP2MSK@0xf6a ;
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

} SSP2MSKbits@0xf6a  ;

// ------------------------------
//        SSP2CON2
// ------------------------------
unsigned int SSP2CON2@0xf6b ;
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

} SSP2CON2bits@0xf6b  ;

// ------------------------------
//        SSP2CON1
// ------------------------------
unsigned int SSP2CON1@0xf6c ;
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

} SSP2CON1bits@0xf6c  ;

// ------------------------------
//        SSP2STAT
// ------------------------------
unsigned int SSP2STAT@0xf6d ;
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
  : 2,
  NOT_WRITE : 1 ,
  : 2,
  NOT_ADDRESS : 1 ;
} ; 

} SSP2STATbits@0xf6d  ;

// ------------------------------
//        SSP2ADD
// ------------------------------
unsigned int SSP2ADD@0xf6e ;
// ------------------------------
//        SSP2BUF
// ------------------------------
unsigned int SSP2BUF@0xf6f ;
// ------------------------------
//        BAUD2CON
// ------------------------------
unsigned int BAUD2CON@0xf70 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  CKTXP : 1 ,
  DTRXP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ;
} ; 

} BAUD2CONbits@0xf70  ;

// ------------------------------
//        BAUDCON2
// ------------------------------
unsigned int BAUDCON2@0xf70 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  CKTXP : 1 ,
  DTRXP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ;
} ; 

} BAUDCON2bits@0xf70  ;

// ------------------------------
//        RC2STA
// ------------------------------
unsigned int RC2STA@0xf71 ;
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
  RX9D2 : 1 ,
  OERR2 : 1 ,
  FERR2 : 1 ,
  ADDEN2 : 1 ,
  CREN2 : 1 ,
  SREN2 : 1 ,
  RX92 : 1 ,
  SPEN2 : 1 ;
} ; 

} RC2STAbits@0xf71  ;

// ------------------------------
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf71 ;
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
  RX9D2 : 1 ,
  OERR2 : 1 ,
  FERR2 : 1 ,
  ADDEN2 : 1 ,
  CREN2 : 1 ,
  SREN2 : 1 ,
  RX92 : 1 ,
  SPEN2 : 1 ;
} ; 

} RCSTA2bits@0xf71  ;

// ------------------------------
//        TX2STA
// ------------------------------
unsigned int TX2STA@0xf72 ;
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

} TX2STAbits@0xf72  ;

// ------------------------------
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xf72 ;
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

} TXSTA2bits@0xf72  ;

// ------------------------------
//        TX2REG
// ------------------------------
unsigned int TX2REG@0xf73 ;
// ------------------------------
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xf73 ;
// ------------------------------
//        RC2REG
// ------------------------------
unsigned int RC2REG@0xf74 ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xf74 ;
// ------------------------------
//        SP2BRG
// ------------------------------
unsigned int SP2BRG@0xf75 ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xf75 ;
// ------------------------------
//        SP2BRGH
// ------------------------------
unsigned int SP2BRGH@0xf76 ;
// ------------------------------
//        SPBRGH2
// ------------------------------
unsigned int SPBRGH2@0xf76 ;
// ------------------------------
//        CM12CON
// ------------------------------
unsigned int CM12CON@0xf77 ;
union
{

struct 
{
  unsigned int 
  C2SYNC : 1 ,
  C1SYNC : 1 ,
  C2HYS : 1 ,
  C1HYS : 1 ,
  C2RSEL : 1 ,
  C1RSEL : 1 ,
  MC2OUT : 1 ,
  MC1OUT : 1 ;
} ; 

} CM12CONbits@0xf77  ;

// ------------------------------
//        CM2CON1
// ------------------------------
unsigned int CM2CON1@0xf77 ;
union
{

struct 
{
  unsigned int 
  C2SYNC : 1 ,
  C1SYNC : 1 ,
  C2HYS : 1 ,
  C1HYS : 1 ,
  C2RSEL : 1 ,
  C1RSEL : 1 ,
  MC2OUT : 1 ,
  MC1OUT : 1 ;
} ; 

} CM2CON1bits@0xf77  ;

// ------------------------------
//        CM2CON
// ------------------------------
unsigned int CM2CON@0xf78 ;
union
{

struct 
{
  unsigned int 
  : 2,
  C2R : 1 ,
  C2SP : 1 ,
  C2POL : 1 ,
  C2OE : 1 ,
  C2OUT_CM2CON : 1 ,
  C2ON : 1 ;
} ; 

struct 
{
  unsigned int 
  C2CH0 : 1 ,
  C2CH1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C2CH : 2 ;
} ; 

} CM2CONbits@0xf78  ;

// ------------------------------
//        CM2CON0
// ------------------------------
unsigned int CM2CON0@0xf78 ;
union
{

struct 
{
  unsigned int 
  : 2,
  C2R : 1 ,
  C2SP : 1 ,
  C2POL : 1 ,
  C2OE : 1 ,
  C2OUT_CM2CON0 : 1 ,
  C2ON : 1 ;
} ; 

struct 
{
  unsigned int 
  C2CH0 : 1 ,
  C2CH1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C2CH : 2 ;
} ; 

} CM2CON0bits@0xf78  ;

// ------------------------------
//        CM1CON
// ------------------------------
unsigned int CM1CON@0xf79 ;
union
{

struct 
{
  unsigned int 
  : 2,
  C1R : 1 ,
  C1SP : 1 ,
  C1POL : 1 ,
  C1OE : 1 ,
  C1OUT_CM1CON : 1 ,
  C1ON : 1 ;
} ; 

struct 
{
  unsigned int 
  C1CH0 : 1 ,
  C1CH1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C1CH : 2 ;
} ; 

} CM1CONbits@0xf79  ;

// ------------------------------
//        CM1CON0
// ------------------------------
unsigned int CM1CON0@0xf79 ;
union
{

struct 
{
  unsigned int 
  : 2,
  C1R : 1 ,
  C1SP : 1 ,
  C1POL : 1 ,
  C1OE : 1 ,
  C1OUT_CM1CON0 : 1 ,
  C1ON : 1 ;
} ; 

struct 
{
  unsigned int 
  C1CH0 : 1 ,
  C1CH1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C1CH : 2 ;
} ; 

} CM1CON0bits@0xf79  ;

// ------------------------------
//        PIE4
// ------------------------------
unsigned int PIE4@0xf7a ;
union
{

struct 
{
  unsigned int 
  CCP3IE : 1 ,
  CCP4IE : 1 ,
  CCP5IE : 1 ;
} ; 

} PIE4bits@0xf7a  ;

// ------------------------------
//        PIR4
// ------------------------------
unsigned int PIR4@0xf7b ;
union
{

struct 
{
  unsigned int 
  CCP3IF : 1 ,
  CCP4IF : 1 ,
  CCP5IF : 1 ;
} ; 

} PIR4bits@0xf7b  ;

// ------------------------------
//        IPR4
// ------------------------------
unsigned int IPR4@0xf7c ;
union
{

struct 
{
  unsigned int 
  CCP3IP : 1 ,
  CCP4IP : 1 ,
  CCP5IP : 1 ;
} ; 

} IPR4bits@0xf7c  ;

// ------------------------------
//        PIE5
// ------------------------------
unsigned int PIE5@0xf7d ;
union
{

struct 
{
  unsigned int 
  TMR4IE : 1 ,
  TMR5IE : 1 ,
  TMR6IE : 1 ;
} ; 

} PIE5bits@0xf7d  ;

// ------------------------------
//        PIR5
// ------------------------------
unsigned int PIR5@0xf7e ;
union
{

struct 
{
  unsigned int 
  TMR4IF : 1 ,
  TMR5IF : 1 ,
  TMR6IF : 1 ;
} ; 

} PIR5bits@0xf7e  ;

// ------------------------------
//        IPR5
// ------------------------------
unsigned int IPR5@0xf7f ;
union
{

struct 
{
  unsigned int 
  TMR4IP : 1 ,
  TMR5IP : 1 ,
  TMR6IP : 1 ;
} ; 

} IPR5bits@0xf7f  ;

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
  AN4 : 1 ;
} ; 

struct 
{
  unsigned int 
  C12IN0M : 1 ,
  C12IN1M : 1 ,
  C2INP : 1 ,
  C1INP : 1 ,
  C1OUT_PORTA : 1 ,
  C2OUT_PORTA : 1 ;
} ; 

struct 
{
  unsigned int 
  C12IN0N : 1 ,
  C12IN1N : 1 ,
  VREFM : 1 ,
  VREFP : 1 ,
  T0CKI : 1 ,
  SS : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  VREFN : 1 ,
  : 1,
  SRQ : 1 ,
  NOT_SS : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  CVREF : 1 ,
  : 2,
  LVDIN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  DACOUT : 1 ,
  : 2,
  HLVDIN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  SS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  NOT_SS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  SRNQ : 1 ;
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
  CCP2_PORTB : 1 ,
  KBI0 : 1 ,
  KBI1 : 1 ,
  KBI2 : 1 ,
  KBI3 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN12 : 1 ,
  AN10 : 1 ,
  AN8 : 1 ,
  AN9 : 1 ,
  AN11 : 1 ,
  AN13 : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

struct 
{
  unsigned int 
  FLT0 : 1 ,
  C12IN3M : 1 ,
  : 1,
  C12IN2M : 1 ,
  T5G : 1 ,
  T1G : 1 ;
} ; 

struct 
{
  unsigned int 
  SRI : 1 ,
  C12IN3N : 1 ,
  : 1,
  C12IN2N : 1 ,
  : 1,
  CCP3_PORTB : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  CTED1 : 1 ,
  CTED2 : 1 ,
  : 1,
  T3CKI_PORTB : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  P2A_PORTB : 1 ,
  : 1,
  P3A_PORTB : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT : 3 ,
  : 1,
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
  T5CKI : 1 ,
  SCK : 1 ,
  SDI : 1 ,
  SDO : 1 ,
  TX : 1 ,
  RX : 1 ;
} ; 

struct 
{
  unsigned int 
  P2B_PORTC : 1 ,
  P2A_PORTC : 1 ,
  P1A : 1 ,
  SCL : 1 ,
  SDA : 1 ,
  : 1,
  CK : 1 ;
} ; 

struct 
{
  unsigned int 
  T1CKI : 1 ,
  CCP2_PORTC : 1 ,
  CCP1 : 1 ,
  SCK1 : 1 ,
  SDI1 : 1 ,
  SDO1 : 1 ,
  TX1 : 1 ,
  RX1 : 1 ;
} ; 

struct 
{
  unsigned int 
  T3CKI_PORTC : 1 ,
  : 1,
  CTPLS : 1 ,
  SCL1 : 1 ,
  SDA1 : 1 ,
  : 1,
  CK1 : 1 ,
  DT1 : 1 ;
} ; 

struct 
{
  unsigned int 
  T3G : 1 ,
  : 1,
  AN14 : 1 ,
  AN15 : 1 ,
  AN16 : 1 ,
  AN17 : 1 ,
  AN18 : 1 ,
  AN19 : 1 ;
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
  : 2,
  P2B_PORTD : 1 ,
  P2C : 1 ,
  P2D : 1 ,
  P1B : 1 ,
  P1C : 1 ,
  P1D : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  CCP4 : 1 ,
  : 4,
  TX2 : 1 ,
  RX2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SCK2 : 1 ,
  SDI2 : 1 ,
  : 1,
  NOT_SS2 : 1 ,
  SDO2 : 1 ,
  : 1,
  CK2 : 1 ,
  DT2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SCL2 : 1 ,
  SDA2 : 1 ,
  : 1,
  SS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN20 : 1 ,
  AN21 : 1 ,
  AN22 : 1 ,
  AN23 : 1 ,
  AN24 : 1 ,
  AN25 : 1 ,
  AN26 : 1 ,
  AN27 : 1 ;
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
  RE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN5 : 1 ,
  AN6 : 1 ,
  AN7 : 1 ,
  MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  P3A_PORTE : 1 ,
  P3B : 1 ,
  CCP5 : 1 ,
  NOT_MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  CCP3_PORTE : 1 ,
  : 2,
  VPP : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RE : 4 ;
} ; 

} PORTEbits@0xf84  ;

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
  LATE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATE : 3 ;
} ; 

} LATEbits@0xf8d  ;

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
  : 4,
  WPUE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  RE0 : 1 ,
  RE1 : 1 ,
  RE2 : 1 ;
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
  : 4,
  WPUE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  RE0 : 1 ,
  RE1 : 1 ,
  RE2 : 1 ;
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

} TRISEbits@0xf96  ;

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
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xf9c ;
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

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  LVDL2 : 1 ,
  LVDL3 : 1 ,
  LVDEN : 1 ,
  IVRST : 1 ;
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

} HLVDCONbits@0xf9c  ;

// ------------------------------
//        LVDCON
// ------------------------------
unsigned int LVDCON@0xf9c ;
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

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  LVDL2 : 1 ,
  LVDL3 : 1 ,
  LVDEN : 1 ,
  IVRST : 1 ;
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

} LVDCONbits@0xf9c  ;

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
  HLVDIE : 1 ,
  BCL1IE : 1 ,
  EEIE : 1 ,
  C2IE : 1 ,
  C1IE : 1 ,
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
  CCP2IF : 1 ,
  TMR3IF : 1 ,
  HLVDIF : 1 ,
  BCL1IF : 1 ,
  EEIF : 1 ,
  C2IF : 1 ,
  C1IF : 1 ,
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
  CCP2IP : 1 ,
  TMR3IP : 1 ,
  HLVDIP : 1 ,
  BCL1IP : 1 ,
  EEIP : 1 ,
  C2IP : 1 ,
  C1IP : 1 ,
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
  TMR1GIE : 1 ,
  TMR3GIE : 1 ,
  TMR5GIE : 1 ,
  CTMUIE : 1 ,
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
  TMR1GIF : 1 ,
  TMR3GIF : 1 ,
  TMR5GIF : 1 ,
  CTMUIF : 1 ,
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
  TMR1GIP : 1 ,
  TMR3GIP : 1 ,
  TMR5GIP : 1 ,
  CTMUIP : 1 ,
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
union
{

struct 
{
  unsigned int 
  EEADR0 : 1 ,
  EEADR1 : 1 ,
  EEADR2 : 1 ,
  EEADR3 : 1 ,
  EEADR4 : 1 ,
  EEADR5 : 1 ,
  EEADR6 : 1 ,
  EEADR7 : 1 ;
} ; 

} EEADRbits@0xfa9  ;

// ------------------------------
//        EEADRH
// ------------------------------
unsigned int EEADRH@0xfaa ;
union
{

struct 
{
  unsigned int 
  EEADR8 : 1 ,
  EEADR9 : 1 ;
} ; 

} EEADRHbits@0xfaa  ;

// ------------------------------
//        RC1STA
// ------------------------------
unsigned int RC1STA@0xfab ;
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

} RC1STAbits@0xfab  ;

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

// ------------------------------
//        TX1STA
// ------------------------------
unsigned int TX1STA@0xfac ;
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

} TX1STAbits@0xfac  ;

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

// ------------------------------
//        TX1REG
// ------------------------------
unsigned int TX1REG@0xfad ;
// ------------------------------
//        TXREG
// ------------------------------
unsigned int TXREG@0xfad ;
// ------------------------------
//        TXREG1
// ------------------------------
unsigned int TXREG1@0xfad ;
// ------------------------------
//        RC1REG
// ------------------------------
unsigned int RC1REG@0xfae ;
// ------------------------------
//        RCREG
// ------------------------------
unsigned int RCREG@0xfae ;
// ------------------------------
//        RCREG1
// ------------------------------
unsigned int RCREG1@0xfae ;
// ------------------------------
//        SP1BRG
// ------------------------------
unsigned int SP1BRG@0xfaf ;
// ------------------------------
//        SPBRG
// ------------------------------
unsigned int SPBRG@0xfaf ;
// ------------------------------
//        SPBRG1
// ------------------------------
unsigned int SPBRG1@0xfaf ;
// ------------------------------
//        SP1BRGH
// ------------------------------
unsigned int SP1BRGH@0xfb0 ;
// ------------------------------
//        SPBRGH
// ------------------------------
unsigned int SPBRGH@0xfb0 ;
// ------------------------------
//        SPBRGH1
// ------------------------------
unsigned int SPBRGH1@0xfb0 ;
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
  T3RD16 : 1 ,
  NOT_T3SYNC : 1 ,
  T3SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T3OSCEN : 1 ,
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
//        T3GCON
// ------------------------------
unsigned int T3GCON@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 2,
  T3GVAL : 1 ,
  T3GGO_NOT_DONE : 1 ,
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
  T3G_DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T3GGO : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T3GSS : 2 ;
} ; 

} T3GCONbits@0xfb4  ;

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfb6 ;
union
{

struct 
{
  unsigned int 
  : 7,
  CCP1ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  P1SSBD0 : 1 ,
  P1SSBD1 : 1 ,
  P1SSAC0 : 1 ,
  P1SSAC1 : 1 ,
  CCP1AS0 : 1 ,
  CCP1AS1 : 1 ,
  CCP1AS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS1BD0 : 1 ,
  PSS1BD1 : 1 ,
  PSS1AC0 : 1 ,
  PSS1AC1 : 1 ;
} ; 

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
  _P1SSBD : 2 ,
  _P1SSAC : 2 ,
  _CCP1AS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSS1BD : 2 ,
  _PSS1AC : 2 ;
} ; 

struct 
{
  unsigned int 
  _PSSBD : 2 ,
  _PSSAC : 2 ,
  _ECCPAS : 3 ;
} ; 

} ECCP1ASbits@0xfb6  ;

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
  CCP1ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  P1SSBD0 : 1 ,
  P1SSBD1 : 1 ,
  P1SSAC0 : 1 ,
  P1SSAC1 : 1 ,
  CCP1AS0 : 1 ,
  CCP1AS1 : 1 ,
  CCP1AS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS1BD0 : 1 ,
  PSS1BD1 : 1 ,
  PSS1AC0 : 1 ,
  PSS1AC1 : 1 ;
} ; 

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
  _P1SSBD : 2 ,
  _P1SSAC : 2 ,
  _CCP1AS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSS1BD : 2 ,
  _PSS1AC : 2 ;
} ; 

struct 
{
  unsigned int 
  _PSSBD : 2 ,
  _PSSAC : 2 ,
  _ECCPAS : 3 ;
} ; 

} ECCPASbits@0xfb6  ;

// ------------------------------
//        PWM1CON
// ------------------------------
unsigned int PWM1CON@0xfb7 ;
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

struct 
{
  unsigned int 
  : 7,
  PRSEN : 1 ;
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
  PDC6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P1DC : 7 ;
} ; 

struct 
{
  unsigned int 
  _PDC : 7 ;
} ; 

} PWM1CONbits@0xfb7  ;

// ------------------------------
//        PWMCON
// ------------------------------
unsigned int PWMCON@0xfb7 ;
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

struct 
{
  unsigned int 
  : 7,
  PRSEN : 1 ;
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
  PDC6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _P1DC : 7 ;
} ; 

struct 
{
  unsigned int 
  _PDC : 7 ;
} ; 

} PWMCONbits@0xfb7  ;

// ------------------------------
//        BAUD1CON
// ------------------------------
unsigned int BAUD1CON@0xfb8 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  CKTXP : 1 ,
  DTRXP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ;
} ; 

} BAUD1CONbits@0xfb8  ;

// ------------------------------
//        BAUDCON
// ------------------------------
unsigned int BAUDCON@0xfb8 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  CKTXP : 1 ,
  DTRXP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ;
} ; 

} BAUDCONbits@0xfb8  ;

// ------------------------------
//        BAUDCON1
// ------------------------------
unsigned int BAUDCON1@0xfb8 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  CKTXP : 1 ,
  DTRXP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ;
} ; 

} BAUDCON1bits@0xfb8  ;

// ------------------------------
//        BAUDCTL
// ------------------------------
unsigned int BAUDCTL@0xfb8 ;
union
{

struct 
{
  unsigned int 
  ABDEN : 1 ,
  WUE : 1 ,
  : 1,
  BRG16 : 1 ,
  CKTXP : 1 ,
  DTRXP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SCKP : 1 ;
} ; 

} BAUDCTLbits@0xfb8  ;

// ------------------------------
//        PSTR1CON
// ------------------------------
unsigned int PSTR1CON@0xfb9 ;
union
{

struct 
{
  unsigned int 
  STR1A : 1 ,
  STR1B : 1 ,
  STR1C : 1 ,
  STR1D : 1 ,
  STR1SYNC : 1 ;
} ; 

} PSTR1CONbits@0xfb9  ;

// ------------------------------
//        PSTRCON
// ------------------------------
unsigned int PSTRCON@0xfb9 ;
union
{

struct 
{
  unsigned int 
  STR1A : 1 ,
  STR1B : 1 ,
  STR1C : 1 ,
  STR1D : 1 ,
  STR1SYNC : 1 ;
} ; 

} PSTRCONbits@0xfb9  ;

// ------------------------------
//        T2CON
// ------------------------------
unsigned int T2CON@0xfba ;
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

} T2CONbits@0xfba  ;

// ------------------------------
//        PR2
// ------------------------------
unsigned int PR2@0xfbb ;
// ------------------------------
//        TMR2
// ------------------------------
unsigned int TMR2@0xfbc ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP1M : 4 ,
  _DC1B : 2 ,
  _P1M : 2 ;
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
  NVCFG0 : 1 ,
  NVCFG1 : 1 ,
  PVCFG0 : 1 ,
  PVCFG1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _NVCFG : 2 ,
  _PVCFG : 2 ;
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
  NOT_DONE : 1 ;
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
  : 2,
  NOT_WRITE : 1 ,
  : 2,
  NOT_ADDRESS : 1 ;
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
  : 2,
  NOT_WRITE : 1 ,
  : 2,
  NOT_ADDRESS : 1 ;
} ; 

} SSPSTATbits@0xfc7  ;

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
//        SSP1MSK
// ------------------------------
unsigned int SSP1MSK@0xfca ;
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

} SSP1MSKbits@0xfca  ;

// ------------------------------
//        SSPMSK
// ------------------------------
unsigned int SSPMSK@0xfca ;
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

} SSPMSKbits@0xfca  ;

// ------------------------------
//        SSP1CON3
// ------------------------------
unsigned int SSP1CON3@0xfcb ;
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

} SSP1CON3bits@0xfcb  ;

// ------------------------------
//        SSPCON3
// ------------------------------
unsigned int SSPCON3@0xfcb ;
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

} SSPCON3bits@0xfcb  ;

// ------------------------------
//        T1GCON
// ------------------------------
unsigned int T1GCON@0xfcc ;
union
{

struct 
{
  unsigned int 
  : 2,
  T1GVAL : 1 ,
  T1GGO_NOT_DONE : 1 ,
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
  T1G_DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T1GGO : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T1GSS : 2 ;
} ; 

} T1GCONbits@0xfcc  ;

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
  T1RD16 : 1 ,
  NOT_T1SYNC : 1 ,
  T1SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  RD16 : 1 ,
  T1SYNC : 1 ,
  T1OSCEN : 1 ,
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
//        OSCCON2
// ------------------------------
unsigned int OSCCON2@0xfd2 ;
union
{

struct 
{
  unsigned int 
  LFIOFS : 1 ,
  MFIOFS : 1 ,
  PRISD : 1 ,
  SOSCGO : 1 ,
  MFIOSEL : 1 ,
  : 1,
  SOSCRUN : 1 ,
  PLLRDY : 1 ;
} ; 

} OSCCON2bits@0xfd2  ;

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
  IOFS : 1 ,
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
  : 7,
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
