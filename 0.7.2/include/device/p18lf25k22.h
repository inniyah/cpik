#ifndef DEVICE
#define DEVICE p18lf25k22
#define p18lf25k22

// ======================================
//         PROCESSOR : p18lf25k22
// ======================================

// This file has been automatically generated from Microchip's "p18lf25k22.inc" file.
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

#define _ANSA0 0
#define _ANSA1 1
#define _ANSA2 2
#define _ANSA3 3
#define _ANSA5 5

// The following are aliases ..  
#define __ANSA 0:4

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

#define _ANSB0 0
#define _ANSB1 1
#define _ANSB2 2
#define _ANSB3 3
#define _ANSB4 4
#define _ANSB5 5

// The following are aliases ..  
#define __ANSB 0:6

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

#define _ANSC2 2
#define _ANSC3 3
#define _ANSC4 4
#define _ANSC5 5
#define _ANSC6 6
#define _ANSC7 7

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

#define _ADCMD 0
#define _CMP1MD 1
#define _CMP2MD 2
#define _CTMUMD 3

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

#define _CCP1MD 0
#define _CCP2MD 1
#define _CCP3MD 2
#define _CCP4MD 3
#define _CCP5MD 4
#define _MSSP1MD 6
#define _MSSP2MD 7

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

#define _TMR1MD 0
#define _TMR2MD 1
#define _TMR3MD 2
#define _TMR4MD 3
#define _TMR5MD 4
#define _TMR6MD 5
#define _UART1MD 6
#define _UART2MD 7

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

#define _DACR0 0
#define _DACR1 1
#define _DACR2 2
#define _DACR3 3
#define _DACR4 4

// The following are aliases ..  
#define __DACR 0:5

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

#define _DACR0 0
#define _DACR1 1
#define _DACR2 2
#define _DACR3 3
#define _DACR4 4

// The following are aliases ..  
#define __DACR 0:5

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
  : 1,
  DACPSS0 : 1 ,
  DACPSS1 : 1 ,
  : 1,
  DACOE : 1 ,
  DACLPS : 1 ,
  DACEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _DACPSS : 2 ;
} ; 

} DACCON0bits@0xf41  ;

#define _DACNSS 0
#define _DACPSS0 2
#define _DACPSS1 3
#define _DACOE 5
#define _DACLPS 6
#define _DACEN 7

// The following are aliases ..  
#define __DACPSS 2:2

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
  : 1,
  DACPSS0 : 1 ,
  DACPSS1 : 1 ,
  : 1,
  DACOE : 1 ,
  DACLPS : 1 ,
  DACEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _DACPSS : 2 ;
} ; 

} VREFCON1bits@0xf41  ;

#define _DACNSS 0
#define _DACPSS0 2
#define _DACPSS1 3
#define _DACOE 5
#define _DACLPS 6
#define _DACEN 7

// The following are aliases ..  
#define __DACPSS 2:2

// ------------------------------
//        FVRCON
// ------------------------------
unsigned int FVRCON@0xf42 ;
union
{

struct 
{
  unsigned int 
  : 4,
  FVRS0 : 1 ,
  FVRS1 : 1 ,
  FVRST : 1 ,
  FVREN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _FVRS : 2 ;
} ; 

} FVRCONbits@0xf42  ;

#define _FVRS0 4
#define _FVRS1 5
#define _FVRST 6
#define _FVREN 7

// The following are aliases ..  
#define __FVRS 4:2

// ------------------------------
//        VREFCON0
// ------------------------------
unsigned int VREFCON0@0xf42 ;
union
{

struct 
{
  unsigned int 
  : 4,
  FVRS0 : 1 ,
  FVRS1 : 1 ,
  FVRST : 1 ,
  FVREN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _FVRS : 2 ;
} ; 

} VREFCON0bits@0xf42  ;

#define _FVRS0 4
#define _FVRS1 5
#define _FVRST 6
#define _FVREN 7

// The following are aliases ..  
#define __FVRS 4:2

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

} CTMUCON1bits@0xf44  ;

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

} CTMUCONLbits@0xf44  ;

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

#define _CTTRIG 0
#define _IDISSEN 1
#define _EDGSEQEN 2
#define _EDGEN 3
#define _TGEN 4
#define _CTMUSIDL 5
#define _CTMUEN 7

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

#define _CTTRIG 0
#define _IDISSEN 1
#define _EDGSEQEN 2
#define _EDGEN 3
#define _TGEN 4
#define _CTMUSIDL 5
#define _CTMUEN 7

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

#define _SRRC1E 0
#define _SRRC2E 1
#define _SRRCKE 2
#define _SRRPE 3
#define _SRSC1E 4
#define _SRSC2E 5
#define _SRSCKE 6
#define _SRSPE 7

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
  SRCLK0 : 1 ,
  SRCLK1 : 1 ,
  SRCLK2 : 1 ,
  SRLEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _SRCLK : 3 ;
} ; 

} SRCON0bits@0xf47  ;

#define _SRPR 0
#define _SRPS 1
#define _SRNQEN 2
#define _SRQEN 3
#define _SRCLK0 4
#define _SRCLK1 5
#define _SRCLK2 6
#define _SRLEN 7

// The following are aliases ..  
#define __SRCLK 4:3

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

#define _C4TSEL0 0
#define _C4TSEL1 1
#define _C5TSEL0 2
#define _C5TSEL1 3

// The following are aliases ..  
#define __C4TSEL 0:2
#define __C5TSEL 2:2

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

#define _C1TSEL0 0
#define _C1TSEL1 1
#define _C2TSEL0 3
#define _C2TSEL1 4
#define _C3TSEL0 6
#define _C3TSEL1 7

// The following are aliases ..  
#define __C1TSEL 0:2
#define __C2TSEL 3:2
#define __C3TSEL 6:2

// ------------------------------
//        T6CON
// ------------------------------
unsigned int T6CON@0xf4a ;
union
{

struct 
{
  unsigned int 
  T6CKPS0 : 1 ,
  T6CKPS1 : 1 ,
  TMR6ON : 1 ,
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

#define _T6CKPS0 0
#define _T6CKPS1 1
#define _TMR6ON 2
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
  T5GSS0 : 1 ,
  T5GSS1 : 1 ,
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
  : 3,
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

#define _T5GSS0 0
#define _T5GSS1 1
#define _T5GVAL 2
#define _T5GGO_NOT_DONE 3
#define _T5GSPM 4
#define _T5GTM 5
#define _T5GPOL 6
#define _TMR5GE 7

#define _T5GGO 3

#define _T5G_DONE 3

// The following are aliases ..  
#define __T5GSS 0:2

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
  T5SOSCEN : 1 ,
  T5CKPS0 : 1 ,
  T5CKPS1 : 1 ,
  TMR5CS0 : 1 ,
  TMR5CS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T5SYNC : 1 ;
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

#define _TMR5ON 0
#define _T5RD16 1
#define _NOT_T5SYNC 2
#define _T5SOSCEN 3
#define _T5CKPS0 4
#define _T5CKPS1 5
#define _TMR5CS0 6
#define _TMR5CS1 7

#define _T5SYNC 2

// The following are aliases ..  
#define __T5CKPS 4:2
#define __TMR5CS 6:2

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

} T4CONbits@0xf51  ;

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

#define _CCP5M0 0
#define _CCP5M1 1
#define _CCP5M2 2
#define _CCP5M3 3
#define _DC5B0 4
#define _DC5B1 5

// The following are aliases ..  
#define __CCP5M 0:4
#define __DC5B 4:2

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

#define _CCP4M0 0
#define _CCP4M1 1
#define _CCP4M2 2
#define _CCP4M3 3
#define _DC4B0 4
#define _DC4B1 5

// The following are aliases ..  
#define __CCP4M 0:4
#define __DC4B 4:2

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

#define _STR3A 0
#define _STR3B 1
#define _STR3C 2
#define _STR3D 3
#define _STR3SYNC 4

// ------------------------------
//        CCP3AS
// ------------------------------
unsigned int CCP3AS@0xf5b ;
union
{

struct 
{
  unsigned int 
  P3SSBD0 : 1 ,
  P3SSBD1 : 1 ,
  P3SSAC0 : 1 ,
  P3SSAC1 : 1 ,
  CCP3AS0 : 1 ,
  CCP3AS1 : 1 ,
  CCP3AS2 : 1 ,
  CCP3ASE : 1 ;
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

#define _P3SSBD0 0
#define _P3SSBD1 1
#define _P3SSAC0 2
#define _P3SSAC1 3
#define _CCP3AS0 4
#define _CCP3AS1 5
#define _CCP3AS2 6
#define _CCP3ASE 7

#define _PSS3BD0 0
#define _PSS3BD1 1
#define _PSS3AC0 2
#define _PSS3AC1 3

// The following are aliases ..  
#define __P3SSBD 0:2
#define __P3SSAC 2:2
#define __CCP3AS 4:3

#define __PSS3BD 0:2
#define __PSS3AC 2:2

// ------------------------------
//        ECCP3AS
// ------------------------------
unsigned int ECCP3AS@0xf5b ;
union
{

struct 
{
  unsigned int 
  P3SSBD0 : 1 ,
  P3SSBD1 : 1 ,
  P3SSAC0 : 1 ,
  P3SSAC1 : 1 ,
  CCP3AS0 : 1 ,
  CCP3AS1 : 1 ,
  CCP3AS2 : 1 ,
  CCP3ASE : 1 ;
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

#define _P3SSBD0 0
#define _P3SSBD1 1
#define _P3SSAC0 2
#define _P3SSAC1 3
#define _CCP3AS0 4
#define _CCP3AS1 5
#define _CCP3AS2 6
#define _CCP3ASE 7

#define _PSS3BD0 0
#define _PSS3BD1 1
#define _PSS3AC0 2
#define _PSS3AC1 3

// The following are aliases ..  
#define __P3SSBD 0:2
#define __P3SSAC 2:2
#define __CCP3AS 4:3

#define __PSS3BD 0:2
#define __PSS3AC 2:2

// ------------------------------
//        PWM3CON
// ------------------------------
unsigned int PWM3CON@0xf5c ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _P3DC : 7 ;
} ; 

} PWM3CONbits@0xf5c  ;

#define _P3DC0 0
#define _P3DC1 1
#define _P3DC2 2
#define _P3DC3 3
#define _P3DC4 4
#define _P3DC5 5
#define _P3DC6 6
#define _P3RSEN 7

// The following are aliases ..  
#define __P3DC 0:7

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

#define _CCP3M0 0
#define _CCP3M1 1
#define _CCP3M2 2
#define _CCP3M3 3
#define _DC3B0 4
#define _DC3B1 5
#define _P3M0 6
#define _P3M1 7

// The following are aliases ..  
#define __CCP3M 0:4
#define __DC3B 4:2
#define __P3M 6:2

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
  SLRC : 1 ;
} ; 

} SLRCONbits@0xf60  ;

#define _SLRA 0
#define _SLRB 1
#define _SLRC 2

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

#define _WPUB0 0
#define _WPUB1 1
#define _WPUB2 2
#define _WPUB3 3
#define _WPUB4 4
#define _WPUB5 5
#define _WPUB6 6
#define _WPUB7 7

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

#define _IOCB4 4
#define _IOCB5 5
#define _IOCB6 6
#define _IOCB7 7

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

#define _STR2A 0
#define _STR2B 1
#define _STR2C 2
#define _STR2D 3
#define _STR2SYNC 4

// ------------------------------
//        CCP2AS
// ------------------------------
unsigned int CCP2AS@0xf64 ;
union
{

struct 
{
  unsigned int 
  P2SSBD0 : 1 ,
  P2SSBD1 : 1 ,
  P2SSAC0 : 1 ,
  P2SSAC1 : 1 ,
  CCP2AS0 : 1 ,
  CCP2AS1 : 1 ,
  CCP2AS2 : 1 ,
  CCP2ASE : 1 ;
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

#define _P2SSBD0 0
#define _P2SSBD1 1
#define _P2SSAC0 2
#define _P2SSAC1 3
#define _CCP2AS0 4
#define _CCP2AS1 5
#define _CCP2AS2 6
#define _CCP2ASE 7

#define _PSS2BD0 0
#define _PSS2BD1 1
#define _PSS2AC0 2
#define _PSS2AC1 3

// The following are aliases ..  
#define __P2SSBD 0:2
#define __P2SSAC 2:2
#define __CCP2AS 4:3

#define __PSS2BD 0:2
#define __PSS2AC 2:2

// ------------------------------
//        ECCP2AS
// ------------------------------
unsigned int ECCP2AS@0xf64 ;
union
{

struct 
{
  unsigned int 
  P2SSBD0 : 1 ,
  P2SSBD1 : 1 ,
  P2SSAC0 : 1 ,
  P2SSAC1 : 1 ,
  CCP2AS0 : 1 ,
  CCP2AS1 : 1 ,
  CCP2AS2 : 1 ,
  CCP2ASE : 1 ;
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

#define _P2SSBD0 0
#define _P2SSBD1 1
#define _P2SSAC0 2
#define _P2SSAC1 3
#define _CCP2AS0 4
#define _CCP2AS1 5
#define _CCP2AS2 6
#define _CCP2ASE 7

#define _PSS2BD0 0
#define _PSS2BD1 1
#define _PSS2AC0 2
#define _PSS2AC1 3

// The following are aliases ..  
#define __P2SSBD 0:2
#define __P2SSAC 2:2
#define __CCP2AS 4:3

#define __PSS2BD 0:2
#define __PSS2AC 2:2

// ------------------------------
//        PWM2CON
// ------------------------------
unsigned int PWM2CON@0xf65 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _P2DC : 7 ;
} ; 

} PWM2CONbits@0xf65  ;

#define _P2DC0 0
#define _P2DC1 1
#define _P2DC2 2
#define _P2DC3 3
#define _P2DC4 4
#define _P2DC5 5
#define _P2DC6 6
#define _P2RSEN 7

// The following are aliases ..  
#define __P2DC 0:7

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

#define _CCP2M0 0
#define _CCP2M1 1
#define _CCP2M2 2
#define _CCP2M3 3
#define _DC2B0 4
#define _DC2B1 5
#define _P2M0 6
#define _P2M1 7

// The following are aliases ..  
#define __CCP2M 0:4
#define __DC2B 4:2
#define __P2M 6:2

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

#define _DHEN 0
#define _AHEN 1
#define _SBCDE 2
#define _SDAHT 3
#define _BOEN 4
#define _SCIE 5
#define _PCIE 6
#define _ACKTIM 7

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

#define _MSK0 0
#define _MSK1 1
#define _MSK2 2
#define _MSK3 3
#define _MSK4 4
#define _MSK5 5
#define _MSK6 6
#define _MSK7 7

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
unsigned int SSP2CON1@0xf6c ;
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

} SSP2CON1bits@0xf6c  ;

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

#define _NOT_W 2
#define _NOT_A 5

#define _R_W 2
#define _D_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _CKTXP 4
#define _DTRXP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _CKTXP 4
#define _DTRXP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4

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
  RX9D2 : 1 ,
  OERR2 : 1 ,
  FERR2 : 1 ,
  ADEN : 1 ,
  CREN2 : 1 ,
  SREN2 : 1 ,
  RX92 : 1 ,
  SPEN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  ADDEN2 : 1 ;
} ; 

} RC2STAbits@0xf71  ;

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
#define _ADEN 3
#define _CREN2 4
#define _SREN2 5
#define _RX92 6
#define _SPEN2 7

#define _ADDEN2 3

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
  RX9D2 : 1 ,
  OERR2 : 1 ,
  FERR2 : 1 ,
  ADEN : 1 ,
  CREN2 : 1 ,
  SREN2 : 1 ,
  RX92 : 1 ,
  SPEN2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  ADDEN2 : 1 ;
} ; 

} RCSTA2bits@0xf71  ;

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
#define _ADEN 3
#define _CREN2 4
#define _SREN2 5
#define _RX92 6
#define _SPEN2 7

#define _ADDEN2 3

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

#define _C2SYNC 0
#define _C1SYNC 1
#define _C2HYS 2
#define _C1HYS 3
#define _C2RSEL 4
#define _C1RSEL 5
#define _MC2OUT 6
#define _MC1OUT 7

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

#define _C2SYNC 0
#define _C1SYNC 1
#define _C2HYS 2
#define _C1HYS 3
#define _C2RSEL 4
#define _C1RSEL 5
#define _MC2OUT 6
#define _MC1OUT 7

// ------------------------------
//        CM2CON
// ------------------------------
unsigned int CM2CON@0xf78 ;
union
{

struct 
{
  unsigned int 
  C2CH0 : 1 ,
  C2CH1 : 1 ,
  C2R : 1 ,
  C2SP : 1 ,
  C2POL : 1 ,
  C2OE : 1 ,
  C2OUT_CM2CON : 1 ,
  C2ON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C2CH : 2 ;
} ; 

} CM2CONbits@0xf78  ;

#define _C2CH0 0
#define _C2CH1 1
#define _C2R 2
#define _C2SP 3
#define _C2POL 4
#define _C2OE 5
#define _C2OUT_CM2CON 6
#define _C2ON 7

// The following are aliases ..  
#define __C2CH 0:2

// ------------------------------
//        CM2CON0
// ------------------------------
unsigned int CM2CON0@0xf78 ;
union
{

struct 
{
  unsigned int 
  C2CH0 : 1 ,
  C2CH1 : 1 ,
  C2R : 1 ,
  C2SP : 1 ,
  C2POL : 1 ,
  C2OE : 1 ,
  C2OUT_CM2CON0 : 1 ,
  C2ON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C2CH : 2 ;
} ; 

} CM2CON0bits@0xf78  ;

#define _C2CH0 0
#define _C2CH1 1
#define _C2R 2
#define _C2SP 3
#define _C2POL 4
#define _C2OE 5
#define _C2OUT_CM2CON0 6
#define _C2ON 7

// The following are aliases ..  
#define __C2CH 0:2

// ------------------------------
//        CM1CON
// ------------------------------
unsigned int CM1CON@0xf79 ;
union
{

struct 
{
  unsigned int 
  C1CH0 : 1 ,
  C1CH1 : 1 ,
  C1R : 1 ,
  C1SP : 1 ,
  C1POL : 1 ,
  C1OE : 1 ,
  C1OUT_CM1CON : 1 ,
  C1ON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C1CH : 2 ;
} ; 

} CM1CONbits@0xf79  ;

#define _C1CH0 0
#define _C1CH1 1
#define _C1R 2
#define _C1SP 3
#define _C1POL 4
#define _C1OE 5
#define _C1OUT_CM1CON 6
#define _C1ON 7

// The following are aliases ..  
#define __C1CH 0:2

// ------------------------------
//        CM1CON0
// ------------------------------
unsigned int CM1CON0@0xf79 ;
union
{

struct 
{
  unsigned int 
  C1CH0 : 1 ,
  C1CH1 : 1 ,
  C1R : 1 ,
  C1SP : 1 ,
  C1POL : 1 ,
  C1OE : 1 ,
  C1OUT_CM1CON0 : 1 ,
  C1ON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C1CH : 2 ;
} ; 

} CM1CON0bits@0xf79  ;

#define _C1CH0 0
#define _C1CH1 1
#define _C1R 2
#define _C1SP 3
#define _C1POL 4
#define _C1OE 5
#define _C1OUT_CM1CON0 6
#define _C1ON 7

// The following are aliases ..  
#define __C1CH 0:2

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

#define _CCP3IE 0
#define _CCP4IE 1
#define _CCP5IE 2

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

#define _CCP3IF 0
#define _CCP4IF 1
#define _CCP5IF 2

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

#define _CCP3IP 0
#define _CCP4IP 1
#define _CCP5IP 2

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

#define _TMR4IE 0
#define _TMR5IE 1
#define _TMR6IE 2

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

#define _TMR4IF 0
#define _TMR5IF 1
#define _TMR6IF 2

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

#define _TMR4IP 0
#define _TMR5IP 1
#define _TMR6IP 2

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
  C1OUT_PORTA : 1 ,
  AN4 : 1 ;
} ; 

struct 
{
  unsigned int 
  C12IN0M : 1 ,
  C12IN1M : 1 ,
  C2INP : 1 ,
  C1INP : 1 ,
  T0CKI : 1 ,
  C2OUT_PORTA : 1 ;
} ; 

struct 
{
  unsigned int 
  C12IN0N : 1 ,
  C12IN1N : 1 ,
  VREFM : 1 ,
  VREFP : 1 ,
  SRQ : 1 ,
  SS : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  VREFN : 1 ,
  : 1,
  CCP5 : 1 ,
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
#define _C1OUT_PORTA 4
#define _AN4 5

#define _C12IN0M 0
#define _C12IN1M 1
#define _C2INP 2
#define _C1INP 3
#define _T0CKI 4
#define _C2OUT_PORTA 5

#define _C12IN0N 0
#define _C12IN1N 1
#define _VREFM 2
#define _VREFP 3
#define _SRQ 4
#define _SS 5

#define _VREFN 2
#define _CCP5 4
#define _NOT_SS 5

#define _CVREF 2
#define _LVDIN 5

#define _DACOUT 2
#define _HLVDIN 5

#define _SS1 5

#define _NOT_SS1 5

#define _SRNQ 5

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
  TX2 : 1 ,
  RX2 : 1 ;
} ; 

struct 
{
  unsigned int 
  FLT0 : 1 ,
  C12IN3M : 1 ,
  P1B : 1 ,
  C12IN2M : 1 ,
  T5G : 1 ,
  T1G : 1 ,
  CK2 : 1 ,
  DT2 : 1 ;
} ; 

struct 
{
  unsigned int 
  SRI : 1 ,
  C12IN3N : 1 ,
  CTED1 : 1 ,
  C12IN2N : 1 ,
  P1D : 1 ,
  CCP3_PORTB : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

struct 
{
  unsigned int 
  CCP4 : 1 ,
  P1C : 1 ,
  SDA2 : 1 ,
  CTED2 : 1 ,
  : 1,
  T3CKI_PORTB : 1 ;
} ; 

struct 
{
  unsigned int 
  SS2 : 1 ,
  SCL2 : 1 ,
  SDI2 : 1 ,
  P2A_PORTB : 1 ,
  : 1,
  P3A_PORTB : 1 ;
} ; 

struct 
{
  unsigned int 
  NOT_SS2 : 1 ,
  SCK2 : 1 ,
  : 1,
  SDO2 : 1 ,
  : 1,
  P2B_PORTB : 1 ;
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
#define _CCP2_PORTB 3
#define _KBI0 4
#define _KBI1 5
#define _KBI2 6
#define _KBI3 7

#define _AN12 0
#define _AN10 1
#define _AN8 2
#define _AN9 3
#define _AN11 4
#define _AN13 5
#define _TX2 6
#define _RX2 7

#define _FLT0 0
#define _C12IN3M 1
#define _P1B 2
#define _C12IN2M 3
#define _T5G 4
#define _T1G 5
#define _CK2 6
#define _DT2 7

#define _SRI 0
#define _C12IN3N 1
#define _CTED1 2
#define _C12IN2N 3
#define _P1D 4
#define _CCP3_PORTB 5
#define _PGC 6
#define _PGD 7

#define _CCP4 0
#define _P1C 1
#define _SDA2 2
#define _CTED2 3
#define _T3CKI_PORTB 5

#define _SS2 0
#define _SCL2 1
#define _SDI2 2
#define _P2A_PORTB 3
#define _P3A_PORTB 5

#define _NOT_SS2 0
#define _SCK2 1
#define _SDO2 3
#define _P2B_PORTB 5

// The following are aliases ..  
#define __INT 0:3
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
  SDO1 : 1 ,
  CK : 1 ,
  RX1 : 1 ;
} ; 

struct 
{
  unsigned int 
  T1CKI : 1 ,
  CCP2_PORTC : 1 ,
  CCP1 : 1 ,
  SCK1 : 1 ,
  SDI1 : 1 ,
  AN17 : 1 ,
  TX1 : 1 ,
  DT1 : 1 ;
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
  AN19 : 1 ;
} ; 

struct 
{
  unsigned int 
  T3G : 1 ,
  : 1,
  AN14 : 1 ,
  AN15 : 1 ,
  AN16 : 1 ,
  : 1,
  AN18 : 1 ,
  P3B : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  CCP3_PORTC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  P3A_PORTC : 1 ;
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
#define _T5CKI 2
#define _SCK 3
#define _SDI 4
#define _SDO 5
#define _TX 6
#define _RX 7

#define _P2B_PORTC 0
#define _P2A_PORTC 1
#define _P1A 2
#define _SCL 3
#define _SDA 4
#define _SDO1 5
#define _CK 6
#define _RX1 7

#define _T1CKI 0
#define _CCP2_PORTC 1
#define _CCP1 2
#define _SCK1 3
#define _SDI1 4
#define _AN17 5
#define _TX1 6
#define _DT1 7

#define _T3CKI_PORTC 0
#define _CTPLS 2
#define _SCL1 3
#define _SDA1 4
#define _CK1 6
#define _AN19 7

#define _T3G 0
#define _AN14 2
#define _AN15 3
#define _AN16 4
#define _AN18 6
#define _P3B 7

#define _CCP3_PORTC 6

#define _P3A_PORTC 6

// ------------------------------
//        PORTE
// ------------------------------
unsigned int PORTE@0xf84 ;
union
{

struct 
{
  unsigned int 
  : 3,
  RE3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  NOT_MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  VPP : 1 ;
} ; 

} PORTEbits@0xf84  ;

#define _RE3 3

#define _MCLR 3

#define _NOT_MCLR 3

#define _VPP 3

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
//        TRISE
// ------------------------------
unsigned int TRISE@0xf96 ;
union
{

struct 
{
  unsigned int 
  : 7,
  WPUE3 : 1 ;
} ; 

} TRISEbits@0xf96  ;

#define _WPUE3 7

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
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xf9c ;
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

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3
#define _HLVDEN 4
#define _IRVST 5
#define _BGVST 6
#define _VDIRMAG 7

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL2 2
#define _LVDL3 3
#define _LVDEN 4
#define _IVRST 5

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
//        LVDCON
// ------------------------------
unsigned int LVDCON@0xf9c ;
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

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3
#define _HLVDEN 4
#define _IRVST 5
#define _BGVST 6
#define _VDIRMAG 7

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL2 2
#define _LVDL3 3
#define _LVDEN 4
#define _IVRST 5

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

#define _TMR1IE 0
#define _TMR2IE 1
#define _CCP1IE 2
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

#define _TMR1IF 0
#define _TMR2IF 1
#define _CCP1IF 2
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

#define _TMR1IP 0
#define _TMR2IP 1
#define _CCP1IP 2
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

#define _CCP2IE 0
#define _TMR3IE 1
#define _HLVDIE 2
#define _BCL1IE 3
#define _EEIE 4
#define _C2IE 5
#define _C1IE 6
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

#define _CCP2IF 0
#define _TMR3IF 1
#define _HLVDIF 2
#define _BCL1IF 3
#define _EEIF 4
#define _C2IF 5
#define _C1IF 6
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

#define _CCP2IP 0
#define _TMR3IP 1
#define _HLVDIP 2
#define _BCL1IP 3
#define _EEIP 4
#define _C2IP 5
#define _C1IP 6
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

#define _TMR1GIE 0
#define _TMR3GIE 1
#define _TMR5GIE 2
#define _CTMUIE 3
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

#define _TMR1GIF 0
#define _TMR3GIF 1
#define _TMR5GIF 2
#define _CTMUIF 3
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

#define _TMR1GIP 0
#define _TMR3GIP 1
#define _TMR5GIP 2
#define _CTMUIP 3
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

#define _EEADR0 0
#define _EEADR1 1
#define _EEADR2 2
#define _EEADR3 3
#define _EEADR4 4
#define _EEADR5 5
#define _EEADR6 6
#define _EEADR7 7

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
  RX9D1 : 1 ,
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADEN : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RX91 : 1 ,
  SPEN1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  ADDEN1 : 1 ;
} ; 

} RC1STAbits@0xfab  ;

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _RX9D1 0
#define _OERR1 1
#define _FERR1 2
#define _ADEN 3
#define _CREN1 4
#define _SREN1 5
#define _RX91 6
#define _SPEN1 7

#define _ADDEN1 3

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
  RX9D1 : 1 ,
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADEN : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RX91 : 1 ,
  SPEN1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  ADDEN1 : 1 ;
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

#define _RX9D1 0
#define _OERR1 1
#define _FERR1 2
#define _ADEN 3
#define _CREN1 4
#define _SREN1 5
#define _RX91 6
#define _SPEN1 7

#define _ADDEN1 3

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
  RX9D1 : 1 ,
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADEN : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RX91 : 1 ,
  SPEN1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  ADDEN1 : 1 ;
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

#define _RX9D1 0
#define _OERR1 1
#define _FERR1 2
#define _ADEN 3
#define _CREN1 4
#define _SREN1 5
#define _RX91 6
#define _SPEN1 7

#define _ADDEN1 3

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
  T3SOSCEN : 1 ,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ,
  TMR3CS0 : 1 ,
  TMR3CS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T3OSCEN : 1 ;
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
#define _T3RD16 1
#define _NOT_T3SYNC 2
#define _T3SOSCEN 3
#define _T3CKPS0 4
#define _T3CKPS1 5
#define _TMR3CS0 6
#define _TMR3CS1 7

#define _T3OSCEN 3

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
//        T3GCON
// ------------------------------
unsigned int T3GCON@0xfb4 ;
union
{

struct 
{
  unsigned int 
  T3GSS0 : 1 ,
  T3GSS1 : 1 ,
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
  : 3,
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

#define _T3GSS0 0
#define _T3GSS1 1
#define _T3GVAL 2
#define _T3GGO_NOT_DONE 3
#define _T3GSPM 4
#define _T3GTM 5
#define _T3GPOL 6
#define _TMR3GE 7

#define _T3G_DONE 3

#define _T3GGO 3

// The following are aliases ..  
#define __T3GSS 0:2

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfb6 ;
union
{

struct 
{
  unsigned int 
  P1SSBD0 : 1 ,
  P1SSBD1 : 1 ,
  P1SSAC0 : 1 ,
  P1SSAC1 : 1 ,
  CCP1AS0 : 1 ,
  CCP1AS1 : 1 ,
  CCP1AS2 : 1 ,
  CCP1ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS1BD0 : 1 ,
  PSS1BD1 : 1 ,
  PSS1AC0 : 1 ,
  PSS1AC1 : 1 ,
  ECCPAS0 : 1 ,
  ECCPAS1 : 1 ,
  ECCPAS2 : 1 ,
  ECCPASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSSBD0 : 1 ,
  PSSBD1 : 1 ,
  PSSAC0 : 1 ,
  PSSAC1 : 1 ;
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
  _PSS1AC : 2 ,
  _ECCPAS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSSBD : 2 ,
  _PSSAC : 2 ;
} ; 

} ECCP1ASbits@0xfb6  ;

#define _P1SSBD0 0
#define _P1SSBD1 1
#define _P1SSAC0 2
#define _P1SSAC1 3
#define _CCP1AS0 4
#define _CCP1AS1 5
#define _CCP1AS2 6
#define _CCP1ASE 7

#define _PSS1BD0 0
#define _PSS1BD1 1
#define _PSS1AC0 2
#define _PSS1AC1 3
#define _ECCPAS0 4
#define _ECCPAS1 5
#define _ECCPAS2 6
#define _ECCPASE 7

#define _PSSBD0 0
#define _PSSBD1 1
#define _PSSAC0 2
#define _PSSAC1 3

// The following are aliases ..  
#define __P1SSBD 0:2
#define __P1SSAC 2:2
#define __CCP1AS 4:3

#define __PSS1BD 0:2
#define __PSS1AC 2:2
#define __ECCPAS 4:3

#define __PSSBD 0:2
#define __PSSAC 2:2

// ------------------------------
//        ECCPAS
// ------------------------------
unsigned int ECCPAS@0xfb6 ;
union
{

struct 
{
  unsigned int 
  P1SSBD0 : 1 ,
  P1SSBD1 : 1 ,
  P1SSAC0 : 1 ,
  P1SSAC1 : 1 ,
  CCP1AS0 : 1 ,
  CCP1AS1 : 1 ,
  CCP1AS2 : 1 ,
  CCP1ASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSS1BD0 : 1 ,
  PSS1BD1 : 1 ,
  PSS1AC0 : 1 ,
  PSS1AC1 : 1 ,
  ECCPAS0 : 1 ,
  ECCPAS1 : 1 ,
  ECCPAS2 : 1 ,
  ECCPASE : 1 ;
} ; 

struct 
{
  unsigned int 
  PSSBD0 : 1 ,
  PSSBD1 : 1 ,
  PSSAC0 : 1 ,
  PSSAC1 : 1 ;
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
  _PSS1AC : 2 ,
  _ECCPAS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSSBD : 2 ,
  _PSSAC : 2 ;
} ; 

} ECCPASbits@0xfb6  ;

#define _P1SSBD0 0
#define _P1SSBD1 1
#define _P1SSAC0 2
#define _P1SSAC1 3
#define _CCP1AS0 4
#define _CCP1AS1 5
#define _CCP1AS2 6
#define _CCP1ASE 7

#define _PSS1BD0 0
#define _PSS1BD1 1
#define _PSS1AC0 2
#define _PSS1AC1 3
#define _ECCPAS0 4
#define _ECCPAS1 5
#define _ECCPAS2 6
#define _ECCPASE 7

#define _PSSBD0 0
#define _PSSBD1 1
#define _PSSAC0 2
#define _PSSAC1 3

// The following are aliases ..  
#define __P1SSBD 0:2
#define __P1SSAC 2:2
#define __CCP1AS 4:3

#define __PSS1BD 0:2
#define __PSS1AC 2:2
#define __ECCPAS 4:3

#define __PSSBD 0:2
#define __PSSAC 2:2

// ------------------------------
//        PWM1CON
// ------------------------------
unsigned int PWM1CON@0xfb7 ;
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
  _P1DC : 7 ;
} ; 

struct 
{
  unsigned int 
  _PDC : 7 ;
} ; 

} PWM1CONbits@0xfb7  ;

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
#define __P1DC 0:7

#define __PDC 0:7

// ------------------------------
//        PWMCON
// ------------------------------
unsigned int PWMCON@0xfb7 ;
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
  _P1DC : 7 ;
} ; 

struct 
{
  unsigned int 
  _PDC : 7 ;
} ; 

} PWMCONbits@0xfb7  ;

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
#define __P1DC 0:7

#define __PDC 0:7

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _CKTXP 4
#define _DTRXP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _CKTXP 4
#define _DTRXP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _CKTXP 4
#define _DTRXP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4

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

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _CKTXP 4
#define _DTRXP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4

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

#define _STR1A 0
#define _STR1B 1
#define _STR1C 2
#define _STR1D 3
#define _STR1SYNC 4

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

#define _STR1A 0
#define _STR1B 1
#define _STR1C 2
#define _STR1D 3
#define _STR1SYNC 4

// ------------------------------
//        T2CON
// ------------------------------
unsigned int T2CON@0xfba ;
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

} T2CONbits@0xfba  ;

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

#define _CCP1M0 0
#define _CCP1M1 1
#define _CCP1M2 2
#define _CCP1M3 3
#define _DC1B0 4
#define _DC1B1 5
#define _P1M0 6
#define _P1M1 7

// The following are aliases ..  
#define __CCP1M 0:4
#define __DC1B 4:2
#define __P1M 6:2

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
  NVCFG0 : 1 ,
  NVCFG1 : 1 ,
  PVCFG0 : 1 ,
  PVCFG1 : 1 ,
  : 3,
  TRIGSEL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _NVCFG : 2 ,
  _PVCFG : 2 ;
} ; 

} ADCON1bits@0xfc1  ;

#define _NVCFG0 0
#define _NVCFG1 1
#define _PVCFG0 2
#define _PVCFG1 3
#define _TRIGSEL 7

// The following are aliases ..  
#define __NVCFG 0:2
#define __PVCFG 2:2

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
  GO : 1 ;
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

#define _ADON 0
#define _GO_NOT_DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5
#define _CHS4 6

#define _GO 1

#define _DONE 1

#define _NOT_DONE 1

#define _GO_DONE 1

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

#define _NOT_W 2
#define _NOT_A 5

#define _R_W 2
#define _D_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

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

#define _NOT_W 2
#define _NOT_A 5

#define _R_W 2
#define _D_A 5

#define _NOT_WRITE 2
#define _NOT_ADDRESS 5

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

#define _MSK0 0
#define _MSK1 1
#define _MSK2 2
#define _MSK3 3
#define _MSK4 4
#define _MSK5 5
#define _MSK6 6
#define _MSK7 7

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

#define _MSK0 0
#define _MSK1 1
#define _MSK2 2
#define _MSK3 3
#define _MSK4 4
#define _MSK5 5
#define _MSK6 6
#define _MSK7 7

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

#define _DHEN 0
#define _AHEN 1
#define _SBCDE 2
#define _SDAHT 3
#define _BOEN 4
#define _SCIE 5
#define _PCIE 6
#define _ACKTIM 7

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

#define _DHEN 0
#define _AHEN 1
#define _SBCDE 2
#define _SDAHT 3
#define _BOEN 4
#define _SCIE 5
#define _PCIE 6
#define _ACKTIM 7

// ------------------------------
//        T1GCON
// ------------------------------
unsigned int T1GCON@0xfcc ;
union
{

struct 
{
  unsigned int 
  T1GSS0 : 1 ,
  T1GSS1 : 1 ,
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
  : 3,
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

#define _T1GSS0 0
#define _T1GSS1 1
#define _T1GVAL 2
#define _T1GGO_NOT_DONE 3
#define _T1GSPM 4
#define _T1GTM 5
#define _T1GPOL 6
#define _TMR1GE 7

#define _T1G_DONE 3

#define _T1GGO 3

// The following are aliases ..  
#define __T1GSS 0:2

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
  T1SOSCEN : 1 ,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ,
  TMR1CS0 : 1 ,
  TMR1CS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  RD16 : 1 ,
  T1SYNC : 1 ,
  T1OSCEN : 1 ;
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
#define _T1RD16 1
#define _NOT_T1SYNC 2
#define _T1SOSCEN 3
#define _T1CKPS0 4
#define _T1CKPS1 5
#define _TMR1CS0 6
#define _TMR1CS1 7

#define _RD16 1
#define _T1SYNC 2
#define _T1OSCEN 3

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

#define _LFIOFS 0
#define _MFIOFS 1
#define _PRISD 2
#define _SOSCGO 3
#define _MFIOSEL 4
#define _SOSCRUN 6
#define _PLLRDY 7

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

struct 
{
  unsigned int 
  : 2,
  IOFS : 1 ;
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

#define _IOFS 2

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

#define _INT1IF 0
#define _INT2IF 1
#define _INT1IE 3
#define _INT2IE 4
#define _INT1IP 6
#define _INT2IP 7

#define _INT1F 0
#define _INT2F 1
#define _INT1E 3
#define _INT2E 4
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

#define _RBIP 0
#define _TMR0IP 2
#define _INTEDG2 4
#define _INTEDG1 5
#define _INTEDG0 6
#define _NOT_RBPU 7

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
  _STKPTR : 5 ;
} ; 

struct 
{
  unsigned int 
  _SP : 5 ;
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
#define __STKPTR 0:5

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
