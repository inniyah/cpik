#ifndef DEVICE
#define DEVICE p18f24k50
#define p18f24k50

// ======================================
//         PROCESSOR : p18f24k50
// ======================================

// This file has been automatically generated from Microchip's "p18f24k50.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xf57 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        SRCON1
// ------------------------------
unsigned int SRCON1@0xf57 ;
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

} SRCON1bits@0xf57  ;

// ------------------------------
//        SRCON0
// ------------------------------
unsigned int SRCON0@0xf58 ;
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

} SRCON0bits@0xf58  ;

// ------------------------------
//        CCPTMRS
// ------------------------------
unsigned int CCPTMRS@0xf59 ;
union
{

struct 
{
  unsigned int 
  C1TSEL : 1 ,
  : 2,
  C2TSEL : 1 ;
} ; 

} CCPTMRSbits@0xf59  ;

// ------------------------------
//        VREGCON
// ------------------------------
unsigned int VREGCON@0xf5a ;
// ------------------------------
//        ANSELA
// ------------------------------
unsigned int ANSELA@0xf5b ;
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

} ANSELAbits@0xf5b  ;

// ------------------------------
//        ANSELB
// ------------------------------
unsigned int ANSELB@0xf5c ;
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

} ANSELBbits@0xf5c  ;

// ------------------------------
//        ANSELC
// ------------------------------
unsigned int ANSELC@0xf5d ;
union
{

struct 
{
  unsigned int 
  : 2,
  ANSC2 : 1 ,
  : 3,
  ANSC6 : 1 ,
  ANSC7 : 1 ;
} ; 

} ANSELCbits@0xf5d  ;

// ------------------------------
//        UCON
// ------------------------------
unsigned int UCON@0xf60 ;
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

} UCONbits@0xf60  ;

// ------------------------------
//        USTAT
// ------------------------------
unsigned int USTAT@0xf61 ;
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

} USTATbits@0xf61  ;

// ------------------------------
//        UCFG
// ------------------------------
unsigned int UCFG@0xf62 ;
union
{

struct 
{
  unsigned int 
  : 2,
  FSEN : 1 ,
  UTRDIS : 1 ,
  UPUEN : 1 ,
  : 1,
  UOEMON : 1 ,
  UTEYE : 1 ;
} ; 

struct 
{
  unsigned int 
  PPB0 : 1 ,
  PPB1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PPB : 2 ;
} ; 

} UCFGbits@0xf62  ;

// ------------------------------
//        UADDR
// ------------------------------
unsigned int UADDR@0xf63 ;
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

} UADDRbits@0xf63  ;

// ------------------------------
//        UIE
// ------------------------------
unsigned int UIE@0xf64 ;
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

} UIEbits@0xf64  ;

// ------------------------------
//        UIR
// ------------------------------
unsigned int UIR@0xf65 ;
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

} UIRbits@0xf65  ;

// ------------------------------
//        UEIE
// ------------------------------
unsigned int UEIE@0xf66 ;
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

} UEIEbits@0xf66  ;

// ------------------------------
//        UEIR
// ------------------------------
unsigned int UEIR@0xf67 ;
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

} UEIRbits@0xf67  ;

// ------------------------------
//        UFRM
// ------------------------------
unsigned int UFRM@0xf68 ;
// ------------------------------
//        UFRML
// ------------------------------
unsigned int UFRML@0xf68 ;
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

} UFRMLbits@0xf68  ;

// ------------------------------
//        UFRMH
// ------------------------------
unsigned int UFRMH@0xf69 ;
union
{

struct 
{
  unsigned int 
  FRM8 : 1 ,
  FRM9 : 1 ,
  FRM10 : 1 ;
} ; 

} UFRMHbits@0xf69  ;

// ------------------------------
//        UEP0
// ------------------------------
unsigned int UEP0@0xf6a ;
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

} UEP0bits@0xf6a  ;

// ------------------------------
//        UEP1
// ------------------------------
unsigned int UEP1@0xf6b ;
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

} UEP1bits@0xf6b  ;

// ------------------------------
//        UEP2
// ------------------------------
unsigned int UEP2@0xf6c ;
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

} UEP2bits@0xf6c  ;

// ------------------------------
//        UEP3
// ------------------------------
unsigned int UEP3@0xf6d ;
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

} UEP3bits@0xf6d  ;

// ------------------------------
//        UEP4
// ------------------------------
unsigned int UEP4@0xf6e ;
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

} UEP4bits@0xf6e  ;

// ------------------------------
//        UEP5
// ------------------------------
unsigned int UEP5@0xf6f ;
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

} UEP5bits@0xf6f  ;

// ------------------------------
//        UEP6
// ------------------------------
unsigned int UEP6@0xf70 ;
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

} UEP6bits@0xf70  ;

// ------------------------------
//        UEP7
// ------------------------------
unsigned int UEP7@0xf71 ;
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

} UEP7bits@0xf71  ;

// ------------------------------
//        UEP8
// ------------------------------
unsigned int UEP8@0xf72 ;
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

} UEP8bits@0xf72  ;

// ------------------------------
//        UEP9
// ------------------------------
unsigned int UEP9@0xf73 ;
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

} UEP9bits@0xf73  ;

// ------------------------------
//        UEP10
// ------------------------------
unsigned int UEP10@0xf74 ;
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

} UEP10bits@0xf74  ;

// ------------------------------
//        UEP11
// ------------------------------
unsigned int UEP11@0xf75 ;
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

} UEP11bits@0xf75  ;

// ------------------------------
//        UEP12
// ------------------------------
unsigned int UEP12@0xf76 ;
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

} UEP12bits@0xf76  ;

// ------------------------------
//        UEP13
// ------------------------------
unsigned int UEP13@0xf77 ;
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

} UEP13bits@0xf77  ;

// ------------------------------
//        UEP14
// ------------------------------
unsigned int UEP14@0xf78 ;
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

} UEP14bits@0xf78  ;

// ------------------------------
//        UEP15
// ------------------------------
unsigned int UEP15@0xf79 ;
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

} UEP15bits@0xf79  ;

// ------------------------------
//        SLRCON
// ------------------------------
unsigned int SLRCON@0xf7a ;
union
{

struct 
{
  unsigned int 
  SLRA : 1 ,
  SLRB : 1 ,
  SLRC : 1 ;
} ; 

} SLRCONbits@0xf7a  ;

// ------------------------------
//        VREFCON2
// ------------------------------
unsigned int VREFCON2@0xf7b ;
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

} VREFCON2bits@0xf7b  ;

// ------------------------------
//        VREFCON1
// ------------------------------
unsigned int VREFCON1@0xf7c ;
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

} VREFCON1bits@0xf7c  ;

// ------------------------------
//        VREFCON0
// ------------------------------
unsigned int VREFCON0@0xf7d ;
union
{

struct 
{
  unsigned int 
  : 2,
  TSRNG : 1 ,
  TSEN : 1 ,
  : 2,
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

} VREFCON0bits@0xf7d  ;

// ------------------------------
//        PMD0
// ------------------------------
unsigned int PMD0@0xf7e ;
union
{

struct 
{
  unsigned int 
  TMR1MD : 1 ,
  TMR2MD : 1 ,
  TMR3MD : 1 ,
  : 1,
  ACTMD : 1 ,
  USBMD : 1 ,
  UARTMD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  STMD : 1 ,
  : 1,
  UART1MD : 1 ;
} ; 

} PMD0bits@0xf7e  ;

// ------------------------------
//        PMD1
// ------------------------------
unsigned int PMD1@0xf7f ;
union
{

struct 
{
  unsigned int 
  CCP1MD : 1 ,
  CCP2MD : 1 ,
  ADCMD : 1 ,
  CMP1MD : 1 ,
  CMP2MD : 1 ,
  CTMUMD : 1 ,
  MSSPMD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  SSP1MD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  MSSP1MD : 1 ;
} ; 

} PMD1bits@0xf7f  ;

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
  OSC2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  VREFM : 1 ,
  VREFP : 1 ,
  : 1,
  LVDIN : 1 ;
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
  : 2,
  PGM : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INT : 3 ;
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
  : 1,
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
  : 3,
  TX : 1 ,
  RX : 1 ;
} ; 

struct 
{
  unsigned int 
  T13CKI : 1 ,
  : 1,
  P1A : 1 ,
  : 3,
  CK : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RC : 3 ;
} ; 

} PORTCbits@0xf82  ;

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

} PORTEbits@0xf84  ;

// ------------------------------
//        WPUB
// ------------------------------
unsigned int WPUB@0xf85 ;
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

} WPUBbits@0xf85  ;

// ------------------------------
//        IOCB
// ------------------------------
unsigned int IOCB@0xf86 ;
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

} IOCBbits@0xf86  ;

// ------------------------------
//        IOCC
// ------------------------------
unsigned int IOCC@0xf87 ;
union
{

struct 
{
  unsigned int 
  IOCC0 : 1 ,
  IOCC1 : 1 ,
  IOCC2 : 1 ,
  : 1,
  IOCC4 : 1 ,
  IOCC5 : 1 ,
  IOCC6 : 1 ,
  IOCC7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IOCC : 3 ;
} ; 

} IOCCbits@0xf87  ;

// ------------------------------
//        CTMUICON
// ------------------------------
unsigned int CTMUICON@0xf88 ;
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

} CTMUICONbits@0xf88  ;

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
  : 1,
  LATC4 : 1 ,
  LATC5 : 1 ,
  LATC6 : 1 ,
  LATC7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATC : 3 ;
} ; 

} LATCbits@0xf8b  ;

// ------------------------------
//        CTMUCON1
// ------------------------------
unsigned int CTMUCON1@0xf8e ;
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

} CTMUCON1bits@0xf8e  ;

// ------------------------------
//        CTMUCONL
// ------------------------------
unsigned int CTMUCONL@0xf8e ;
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

} CTMUCONLbits@0xf8e  ;

// ------------------------------
//        CTMUCON0
// ------------------------------
unsigned int CTMUCON0@0xf8f ;
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

struct 
{
  unsigned int 
  TRIGEN : 1 ,
  : 4,
  SIDL : 1 ,
  : 1,
  ON : 1 ;
} ; 

} CTMUCON0bits@0xf8f  ;

// ------------------------------
//        CTMUCONH
// ------------------------------
unsigned int CTMUCONH@0xf8f ;
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

struct 
{
  unsigned int 
  TRIGEN : 1 ,
  : 4,
  SIDL : 1 ,
  : 1,
  ON : 1 ;
} ; 

} CTMUCONHbits@0xf8f  ;

// ------------------------------
//        CCPR2
// ------------------------------
unsigned int CCPR2@0xf90 ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xf90 ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xf91 ;
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
  RA6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RA : 7 ;
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
  RA6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RA : 7 ;
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
  : 1,
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
  : 3,
  RC6 : 1 ,
  RC7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISC : 3 ;
} ; 

struct 
{
  unsigned int 
  _RC : 3 ;
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
  : 1,
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
  : 3,
  RC6 : 1 ,
  RC7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISC : 3 ;
} ; 

struct 
{
  unsigned int 
  _RC : 3 ;
} ; 

} TRISCbits@0xf94  ;

// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xf97 ;
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

} CCP2CONbits@0xf97  ;

// ------------------------------
//        CM1CON0
// ------------------------------
unsigned int CM1CON0@0xf98 ;
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
  C1OUT : 1 ,
  C1ON : 1 ;
} ; 

struct 
{
  unsigned int 
  C1CH0 : 1 ,
  C1CH1 : 1 ,
  CREF : 1 ,
  : 1,
  CPOL : 1 ,
  COE : 1 ,
  COUT1 : 1 ,
  CON : 1 ;
} ; 

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C1CH : 2 ;
} ; 

struct 
{
  unsigned int 
  _CCH : 2 ;
} ; 

} CM1CON0bits@0xf98  ;

// ------------------------------
//        CM2CON0
// ------------------------------
unsigned int CM2CON0@0xf99 ;
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
  C2OUT : 1 ,
  C2ON : 1 ;
} ; 

struct 
{
  unsigned int 
  C2CH0 : 1 ,
  C2CH1 : 1 ,
  CREF : 1 ,
  : 1,
  CPOL : 1 ,
  COE : 1 ,
  COUT2 : 1 ,
  CON : 1 ;
} ; 

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C2CH : 2 ;
} ; 

struct 
{
  unsigned int 
  _CCH : 2 ;
} ; 

} CM2CON0bits@0xf99  ;

// ------------------------------
//        CM2CON1
// ------------------------------
unsigned int CM2CON1@0xf9a ;
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

} CM2CON1bits@0xf9a  ;

// ------------------------------
//        OSCTUNE
// ------------------------------
unsigned int OSCTUNE@0xf9b ;
union
{

struct 
{
  unsigned int 
  : 7,
  SPLLMULT : 1 ;
} ; 

struct 
{
  unsigned int 
  TUN0 : 1 ,
  TUN1 : 1 ,
  TUN2 : 1 ,
  TUN3 : 1 ,
  TUN4 : 1 ,
  TUN5 : 1 ,
  TUN6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TUN : 7 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _HLVDL : 4 ;
} ; 

} HLVDCONbits@0xf9c  ;

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
  ACTIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IE : 1 ,
  TX1IE : 1 ,
  RC1IE : 1 ,
  : 1,
  STIE : 1 ;
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
  SSPIF : 1 ,
  TXIF : 1 ,
  RCIF : 1 ,
  ADIF : 1 ,
  ACTIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IF : 1 ,
  TX1IF : 1 ,
  RC1IF : 1 ,
  : 1,
  STIF : 1 ;
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
  SSPIP : 1 ,
  TXIP : 1 ,
  RCIP : 1 ,
  ADIP : 1 ,
  ACTIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  SSP1IP : 1 ,
  TX1IP : 1 ,
  RC1IP : 1 ,
  : 1,
  STIP : 1 ;
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
  BCLIE : 1 ,
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
  BCL1IE : 1 ,
  : 1,
  CM2IE : 1 ,
  CM1IE : 1 ;
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
  BCLIF : 1 ,
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
  BCL1IF : 1 ,
  : 1,
  CM2IF : 1 ,
  CM1IF : 1 ;
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
  BCLIP : 1 ,
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
  BCL1IP : 1 ,
  : 1,
  CM2IP : 1 ,
  CM1IP : 1 ;
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
  USBIE : 1 ,
  CTMUIE : 1 ;
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
  USBIF : 1 ,
  CTMUIF : 1 ;
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
  USBIP : 1 ,
  CTMUIP : 1 ;
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
//        SPBRGH
// ------------------------------
unsigned int SPBRGH@0xfb0 ;
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

} SPBRGHbits@0xfb0  ;

// ------------------------------
//        SPBRGH1
// ------------------------------
unsigned int SPBRGH1@0xfb0 ;
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

} SPBRGH1bits@0xfb0  ;

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
  : 1,
  T3RD16 : 1 ,
  T3SYNC : 1 ,
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

struct 
{
  unsigned int 
  : 3,
  T3DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T3GGO_NOT_DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T3GSS : 2 ;
} ; 

} T3GCONbits@0xfb4  ;

// ------------------------------
//        ACTCON
// ------------------------------
unsigned int ACTCON@0xfb5 ;
union
{

struct 
{
  unsigned int 
  : 1,
  ACTORS : 1 ,
  : 1,
  ACTLOCK : 1 ,
  ACTSRC : 1 ,
  : 1,
  ACTUD : 1 ,
  ACTEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  STOR : 1 ,
  : 1,
  STLOCK : 1 ,
  STSRC : 1 ,
  : 1,
  STUD : 1 ,
  STEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ACTOR : 1 ,
  : 4,
  ACTD : 1 ,
  ACTSEL : 1 ;
} ; 

} ACTCONbits@0xfb5  ;

// ------------------------------
//        STCON
// ------------------------------
unsigned int STCON@0xfb5 ;
union
{

struct 
{
  unsigned int 
  : 1,
  ACTORS : 1 ,
  : 1,
  ACTLOCK : 1 ,
  ACTSRC : 1 ,
  : 1,
  ACTUD : 1 ,
  ACTEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  STOR : 1 ,
  : 1,
  STLOCK : 1 ,
  STSRC : 1 ,
  : 1,
  STUD : 1 ,
  STEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  ACTOR : 1 ,
  : 4,
  ACTD : 1 ,
  ACTSEL : 1 ;
} ; 

} STCONbits@0xfb5  ;

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
  ECCP1AS2 : 1 ,
  CCP1ASE : 1 ;
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
  _PSS1BD : 2 ,
  _PSS1AC : 2 ,
  _ECCP1AS : 3 ;
} ; 

struct 
{
  unsigned int 
  _PSSBD : 2 ,
  _PSSAC : 2 ;
} ; 

} ECCP1ASbits@0xfb6  ;

// ------------------------------
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xfb7 ;
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
  PDC0 : 1 ,
  PDC1 : 1 ,
  PDC2 : 1 ,
  PDC3 : 1 ,
  PDC4 : 1 ,
  PDC5 : 1 ,
  PDC6 : 1 ,
  PR1SEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PDC : 7 ;
} ; 

} ECCP1DELbits@0xfb7  ;

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
  PDC0 : 1 ,
  PDC1 : 1 ,
  PDC2 : 1 ,
  PDC3 : 1 ,
  PDC4 : 1 ,
  PDC5 : 1 ,
  PDC6 : 1 ,
  PR1SEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PDC : 7 ;
} ; 

} PWM1CONbits@0xfb7  ;

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

} BAUDCON1bits@0xfb8  ;

// ------------------------------
//        PSTR1CON
// ------------------------------
unsigned int PSTR1CON@0xfb9 ;
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
  STR1A : 1 ,
  STR1B : 1 ,
  STR1C : 1 ,
  STR1D : 1 ,
  STR1SYNC : 1 ;
} ; 

} PSTR1CONbits@0xfb9  ;

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

} CCP1CONbits@0xfbd  ;

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
  _CCP1M : 4 ,
  _DC1B : 2 ,
  _P1M : 2 ;
} ; 

} ECCP1CONbits@0xfbd  ;

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

} ADCON0bits@0xfc2  ;

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
//        SSPCON
// ------------------------------
unsigned int SSPCON@0xfc6 ;
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

} SSPCONbits@0xfc6  ;

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
  SSP1ADD0 : 1 ,
  SSP1ADD1 : 1 ,
  SSP1ADD2 : 1 ,
  SSP1ADD3 : 1 ,
  SSP1ADD4 : 1 ,
  SSP1ADD5 : 1 ,
  SSP1ADD6 : 1 ,
  SSP1ADD7 : 1 ;
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
  SSP1ADD0 : 1 ,
  SSP1ADD1 : 1 ,
  SSP1ADD2 : 1 ,
  SSP1ADD3 : 1 ,
  SSP1ADD4 : 1 ,
  SSP1ADD5 : 1 ,
  SSP1ADD6 : 1 ,
  SSP1ADD7 : 1 ;
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
//        SSP1MSK
// ------------------------------
unsigned int SSP1MSK@0xfca ;
union
{

struct 
{
  unsigned int 
  SSP1MSK0 : 1 ,
  SSP1MSK1 : 1 ,
  SSP1MSK2 : 1 ,
  SSP1MSK3 : 1 ,
  SSP1MSK4 : 1 ,
  SSP1MSK5 : 1 ,
  SSP1MSK6 : 1 ,
  SSP1MSK7 : 1 ;
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
  SSP1MSK0 : 1 ,
  SSP1MSK1 : 1 ,
  SSP1MSK2 : 1 ,
  SSP1MSK3 : 1 ,
  SSP1MSK4 : 1 ,
  SSP1MSK5 : 1 ,
  SSP1MSK6 : 1 ,
  SSP1MSK7 : 1 ;
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

struct 
{
  unsigned int 
  : 3,
  T1DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T1GGO_NOT_DONE : 1 ;
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
  RD16 : 1 ,
  NOT_T1SYNC : 1 ,
  SOSCEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  T1RD16 : 1 ,
  T1SYNC : 1 ,
  T1SOSCEN : 1 ,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ,
  TMR1CS0 : 1 ,
  TMR1CS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
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
  HFIOFR : 1 ,
  PRISD : 1 ,
  SOSCGO : 1 ,
  PLLEN : 1 ,
  INTSRC : 1 ,
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
  IOCIP : 1 ,
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
  : 2,
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
