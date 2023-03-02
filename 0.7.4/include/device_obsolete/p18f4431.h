#ifndef DEVICE
#define DEVICE p18f4431
#define p18f4431

// ======================================
//         PROCESSOR : p18f4431
// ======================================

// This file has been automatically generated from Microchip's "p18f4431.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note; All SFRs are reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        DFLTCON
// ------------------------------
unsigned int DFLTCON@0xf60 ;
union
{

struct 
{
  unsigned int 
  : 3,
  FLT1EN : 1 ,
  FLT2EN : 1 ,
  FLT3EN : 1 ,
  FLT4EN : 1 ;
} ; 

struct 
{
  unsigned int 
  FLTCK0 : 1 ,
  FLTCK1 : 1 ,
  FLTCK2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _FLTCK : 3 ;
} ; 

} DFLTCONbits@0xf60  ;

#define _FLT1EN 3
#define _FLT2EN 4
#define _FLT3EN 5
#define _FLT4EN 6

#define _FLTCK0 0
#define _FLTCK1 1
#define _FLTCK2 2

// The following are aliases ..  
#define __FLTCK 0:3

// ------------------------------
//        CAP3CON
// ------------------------------
unsigned int CAP3CON@0xf61 ;
union
{

struct 
{
  unsigned int 
  : 5,
  CAP3TMR : 1 ,
  CAP3REN : 1 ;
} ; 

struct 
{
  unsigned int 
  CAP3M0 : 1 ,
  CAP3M1 : 1 ,
  CAP3M2 : 1 ,
  CAP3M3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CAP3M : 4 ;
} ; 

} CAP3CONbits@0xf61  ;

#define _CAP3TMR 5
#define _CAP3REN 6

#define _CAP3M0 0
#define _CAP3M1 1
#define _CAP3M2 2
#define _CAP3M3 3

// The following are aliases ..  
#define __CAP3M 0:4

// ------------------------------
//        CAP2CON
// ------------------------------
unsigned int CAP2CON@0xf62 ;
union
{

struct 
{
  unsigned int 
  : 5,
  CAP2TMR : 1 ,
  CAP2REN : 1 ;
} ; 

struct 
{
  unsigned int 
  CAP2M0 : 1 ,
  CAP2M1 : 1 ,
  CAP2M2 : 1 ,
  CAP2M3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CAP2M : 4 ;
} ; 

} CAP2CONbits@0xf62  ;

#define _CAP2TMR 5
#define _CAP2REN 6

#define _CAP2M0 0
#define _CAP2M1 1
#define _CAP2M2 2
#define _CAP2M3 3

// The following are aliases ..  
#define __CAP2M 0:4

// ------------------------------
//        CAP1CON
// ------------------------------
unsigned int CAP1CON@0xf63 ;
union
{

struct 
{
  unsigned int 
  : 5,
  CAP1TMR : 1 ,
  CAP1REN : 1 ;
} ; 

struct 
{
  unsigned int 
  CAP1M0 : 1 ,
  CAP1M1 : 1 ,
  CAP1M2 : 1 ,
  CAP1M3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CAP1M : 4 ;
} ; 

} CAP1CONbits@0xf63  ;

#define _CAP1TMR 5
#define _CAP1REN 6

#define _CAP1M0 0
#define _CAP1M1 1
#define _CAP1M2 2
#define _CAP1M3 3

// The following are aliases ..  
#define __CAP1M 0:4

// ------------------------------
//        CAP3BUFL
// ------------------------------
unsigned int CAP3BUFL@0xf64 ;
// ------------------------------
//        MAXCNTL
// ------------------------------
unsigned int MAXCNTL@0xf64 ;
// ------------------------------
//        CAP3BUFH
// ------------------------------
unsigned int CAP3BUFH@0xf65 ;
// ------------------------------
//        MAXCNTH
// ------------------------------
unsigned int MAXCNTH@0xf65 ;
// ------------------------------
//        CAP2BUFL
// ------------------------------
unsigned int CAP2BUFL@0xf66 ;
// ------------------------------
//        POSCNTL
// ------------------------------
unsigned int POSCNTL@0xf66 ;
// ------------------------------
//        CAP2BUFH
// ------------------------------
unsigned int CAP2BUFH@0xf67 ;
// ------------------------------
//        POSCNTH
// ------------------------------
unsigned int POSCNTH@0xf67 ;
// ------------------------------
//        CAP1BUFL
// ------------------------------
unsigned int CAP1BUFL@0xf68 ;
// ------------------------------
//        VELRL
// ------------------------------
unsigned int VELRL@0xf68 ;
// ------------------------------
//        CAP1BUFH
// ------------------------------
unsigned int CAP1BUFH@0xf69 ;
// ------------------------------
//        VELRH
// ------------------------------
unsigned int VELRH@0xf69 ;
// ------------------------------
//        OVDCONS
// ------------------------------
unsigned int OVDCONS@0xf6a ;
union
{

struct 
{
  unsigned int 
  POUT0 : 1 ,
  POUT1 : 1 ,
  POUT2 : 1 ,
  POUT3 : 1 ,
  POUT4 : 1 ,
  POUT5 : 1 ,
  POUT6 : 1 ,
  POUT7 : 1 ;
} ; 

} OVDCONSbits@0xf6a  ;

#define _POUT0 0
#define _POUT1 1
#define _POUT2 2
#define _POUT3 3
#define _POUT4 4
#define _POUT5 5
#define _POUT6 6
#define _POUT7 7

// ------------------------------
//        OVDCOND
// ------------------------------
unsigned int OVDCOND@0xf6b ;
union
{

struct 
{
  unsigned int 
  POVD0 : 1 ,
  POVD1 : 1 ,
  POVD2 : 1 ,
  POVD3 : 1 ,
  POVD4 : 1 ,
  POVD5 : 1 ,
  POVD6 : 1 ,
  POVD7 : 1 ;
} ; 

} OVDCONDbits@0xf6b  ;

#define _POVD0 0
#define _POVD1 1
#define _POVD2 2
#define _POVD3 3
#define _POVD4 4
#define _POVD5 5
#define _POVD6 6
#define _POVD7 7

// ------------------------------
//        FLTCONFIG
// ------------------------------
unsigned int FLTCONFIG@0xf6c ;
union
{

struct 
{
  unsigned int 
  FLTAEN : 1 ,
  FLTAMOD : 1 ,
  FLTAS : 1 ,
  FLTCON : 1 ,
  FLTBEN : 1 ,
  FLTBMOD : 1 ,
  FLTBS : 1 ,
  BRFEN : 1 ;
} ; 

} FLTCONFIGbits@0xf6c  ;

#define _FLTAEN 0
#define _FLTAMOD 1
#define _FLTAS 2
#define _FLTCON 3
#define _FLTBEN 4
#define _FLTBMOD 5
#define _FLTBS 6
#define _BRFEN 7

// ------------------------------
//        DTCON
// ------------------------------
unsigned int DTCON@0xf6d ;
union
{

struct 
{
  unsigned int 
  DT0 : 1 ,
  DT1 : 1 ,
  DT2 : 1 ,
  DT3 : 1 ,
  DT4 : 1 ,
  DT5 : 1 ,
  DTPS0 : 1 ,
  DTPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  DTA0 : 1 ,
  DTA1 : 1 ,
  DTA2 : 1 ,
  DTA3 : 1 ,
  DTA4 : 1 ,
  DTA5 : 1 ,
  DTAPS0 : 1 ,
  DTAPS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DT : 6 ,
  _DTPS : 2 ;
} ; 

struct 
{
  unsigned int 
  _DTA : 6 ,
  _DTAPS : 2 ;
} ; 

} DTCONbits@0xf6d  ;

#define _DT0 0
#define _DT1 1
#define _DT2 2
#define _DT3 3
#define _DT4 4
#define _DT5 5
#define _DTPS0 6
#define _DTPS1 7

#define _DTA0 0
#define _DTA1 1
#define _DTA2 2
#define _DTA3 3
#define _DTA4 4
#define _DTA5 5
#define _DTAPS0 6
#define _DTAPS1 7

// The following are aliases ..  
#define __DT 0:6
#define __DTPS 6:2

#define __DTA 0:6
#define __DTAPS 6:2

// ------------------------------
//        PWMCON1
// ------------------------------
unsigned int PWMCON1@0xf6e ;
union
{

struct 
{
  unsigned int 
  OSYNC : 1 ,
  UDIS : 1 ,
  : 1,
  SEVTDIR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SEVOPS0 : 1 ,
  SEVOPS1 : 1 ,
  SEVOPS2 : 1 ,
  SEVOPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _SEVOPS : 4 ;
} ; 

} PWMCON1bits@0xf6e  ;

#define _OSYNC 0
#define _UDIS 1
#define _SEVTDIR 3

#define _SEVOPS0 4
#define _SEVOPS1 5
#define _SEVOPS2 6
#define _SEVOPS3 7

// The following are aliases ..  
#define __SEVOPS 4:4

// ------------------------------
//        PWMCON0
// ------------------------------
unsigned int PWMCON0@0xf6f ;
union
{

struct 
{
  unsigned int 
  PMOD0 : 1 ,
  PMOD1 : 1 ,
  PMOD2 : 1 ,
  PMOD3 : 1 ,
  PWMEN0 : 1 ,
  PWMEN1 : 1 ,
  PWMEN2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PMOD : 4 ,
  _PWMEN : 3 ;
} ; 

} PWMCON0bits@0xf6f  ;

#define _PMOD0 0
#define _PMOD1 1
#define _PMOD2 2
#define _PMOD3 3
#define _PWMEN0 4
#define _PWMEN1 5
#define _PWMEN2 6

// The following are aliases ..  
#define __PMOD 0:4
#define __PWMEN 4:3

// ------------------------------
//        SEVTCMPH
// ------------------------------
unsigned int SEVTCMPH@0xf70 ;
// ------------------------------
//        SEVTCMPL
// ------------------------------
unsigned int SEVTCMPL@0xf71 ;
// ------------------------------
//        PDC3H
// ------------------------------
unsigned int PDC3H@0xf72 ;
// ------------------------------
//        PDC3L
// ------------------------------
unsigned int PDC3L@0xf73 ;
// ------------------------------
//        PDC2H
// ------------------------------
unsigned int PDC2H@0xf74 ;
// ------------------------------
//        PDC2L
// ------------------------------
unsigned int PDC2L@0xf75 ;
// ------------------------------
//        PDC1H
// ------------------------------
unsigned int PDC1H@0xf76 ;
// ------------------------------
//        PDC1L
// ------------------------------
unsigned int PDC1L@0xf77 ;
// ------------------------------
//        PDC0H
// ------------------------------
unsigned int PDC0H@0xf78 ;
// ------------------------------
//        PDC0L
// ------------------------------
unsigned int PDC0L@0xf79 ;
// ------------------------------
//        PTPERH
// ------------------------------
unsigned int PTPERH@0xf7a ;
// ------------------------------
//        PTPERL
// ------------------------------
unsigned int PTPERL@0xf7b ;
// ------------------------------
//        PTMRH
// ------------------------------
unsigned int PTMRH@0xf7c ;
// ------------------------------
//        PTMRL
// ------------------------------
unsigned int PTMRL@0xf7d ;
// ------------------------------
//        PTCON1
// ------------------------------
unsigned int PTCON1@0xf7e ;
union
{

struct 
{
  unsigned int 
  : 6,
  PTDIR : 1 ,
  PTEN : 1 ;
} ; 

} PTCON1bits@0xf7e  ;

#define _PTDIR 6
#define _PTEN 7

// ------------------------------
//        PTCON0
// ------------------------------
unsigned int PTCON0@0xf7f ;
union
{

struct 
{
  unsigned int 
  PTMOD0 : 1 ,
  PTMOD1 : 1 ,
  PTCKPS0 : 1 ,
  PTCKPS1 : 1 ,
  PTOPS0 : 1 ,
  PTOPS1 : 1 ,
  PTOPS2 : 1 ,
  PTOPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PTMOD : 2 ,
  _PTCKPS : 2 ,
  _PTOPS : 4 ;
} ; 

} PTCON0bits@0xf7f  ;

#define _PTMOD0 0
#define _PTMOD1 1
#define _PTCKPS0 2
#define _PTCKPS1 3
#define _PTOPS0 4
#define _PTOPS1 5
#define _PTOPS2 6
#define _PTOPS3 7

// The following are aliases ..  
#define __PTMOD 0:2
#define __PTCKPS 2:2
#define __PTOPS 4:4

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
  AN4 : 1 ,
  AN5 : 1 ,
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _AN : 6 ;
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
#define _AN4 4
#define _AN5 5
#define _OSC2 6
#define _OSC1 7

#define _VREFM 2
#define _VREFP 3
#define _LVDIN 5
#define _CLKO 6
#define _CLKI 7

// The following are aliases ..  
#define __AN 0:6

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

#define _RB0 0
#define _RB1 1
#define _RB2 2
#define _RB3 3
#define _RB4 4
#define _RB5 5
#define _RB6 6
#define _RB7 7

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
  INT0 : 1 ,
  INT1 : 1 ,
  INT2 : 1 ,
  TX : 1 ,
  RX : 1 ;
} ; 

struct 
{
  unsigned int 
  T13CKI : 1 ,
  CCP2 : 1 ,
  : 1,
  T0CKI : 1 ,
  SDA : 1 ,
  SCK : 1 ,
  CK : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  NOT_FLTA : 1 ,
  NOT_FLTB : 1 ,
  T5CKI : 1 ,
  SDI : 1 ,
  SCL : 1 ,
  NOT_SS : 1 ,
  SDO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  FLTA : 1 ,
  FLTB : 1 ,
  : 3,
  SS : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 3,
  _INT : 3 ;
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
#define _INT0 3
#define _INT1 4
#define _INT2 5
#define _TX 6
#define _RX 7

#define _T13CKI 0
#define _CCP2 1
#define _T0CKI 3
#define _SDA 4
#define _SCK 5
#define _CK 6

#define _NOT_FLTA 1
#define _NOT_FLTB 2
#define _T5CKI 3
#define _SDI 4
#define _SCL 5
#define _NOT_SS 6
#define _SDO 7

#define _FLTA 1
#define _FLTB 2
#define _SS 6

// The following are aliases ..  
#define __INT 3:3

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

#define _RD0 0
#define _RD1 1
#define _RD2 2
#define _RD3 3
#define _RD4 4
#define _RD5 5
#define _RD6 6
#define _RD7 7

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
  : 3,
  NOT_MCLR : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  MCLR : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RE : 4 ;
} ; 

} PORTEbits@0xf84  ;

#define _RE0 0
#define _RE1 1
#define _RE2 2
#define _RE3 3

#define _NOT_MCLR 3

#define _MCLR 3

// The following are aliases ..  
#define __RE 0:4

// ------------------------------
//        TMR5
// ------------------------------
unsigned int TMR5@0xf87 ;
// ------------------------------
//        TMR5L
// ------------------------------
unsigned int TMR5L@0xf87 ;
// ------------------------------
//        TMR5H
// ------------------------------
unsigned int TMR5H@0xf88 ;
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
  LATE2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATE : 3 ;
} ; 

} LATEbits@0xf8d  ;

#define _LATE0 0
#define _LATE1 1
#define _LATE2 2

// The following are aliases ..  
#define __LATE 0:3

// ------------------------------
//        PR5
// ------------------------------
unsigned int PR5@0xf90 ;
// ------------------------------
//        PR5L
// ------------------------------
unsigned int PR5L@0xf90 ;
// ------------------------------
//        PR5H
// ------------------------------
unsigned int PR5H@0xf91 ;
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
  TRISE0 : 1 ,
  TRISE1 : 1 ,
  TRISE2 : 1 ;
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

#define _TRISE0 0
#define _TRISE1 1
#define _TRISE2 2

#define _RE0 0
#define _RE1 1
#define _RE2 2

// The following are aliases ..  
#define __TRISE 0:3

#define __RE 0:3

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
  TRISE2 : 1 ;
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

#define _TRISE0 0
#define _TRISE1 1
#define _TRISE2 2

#define _RE0 0
#define _RE1 1
#define _RE2 2

// The following are aliases ..  
#define __TRISE 0:3

#define __RE 0:3

// ------------------------------
//        ADCHS
// ------------------------------
unsigned int ADCHS@0xf99 ;
union
{

struct 
{
  unsigned int 
  GASEL0 : 1 ,
  GASEL1 : 1 ,
  GCSEL0 : 1 ,
  GCSEL1 : 1 ,
  GBSEL0 : 1 ,
  GBSEL1 : 1 ,
  GDSEL0 : 1 ,
  GDSEL1 : 1 ;
} ; 

struct 
{
  unsigned int 
  SASEL0 : 1 ,
  SASEL1 : 1 ,
  SCSEL0 : 1 ,
  SCSEL1 : 1 ,
  SBSEL0 : 1 ,
  SBSEL1 : 1 ,
  SDSEL0 : 1 ,
  SDSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _GASEL : 2 ,
  _GCSEL : 2 ,
  _GBSEL : 2 ,
  _GDSEL : 2 ;
} ; 

struct 
{
  unsigned int 
  _SASEL : 2 ,
  _SCSEL : 2 ,
  _SBSEL : 2 ,
  _SDSEL : 2 ;
} ; 

} ADCHSbits@0xf99  ;

#define _GASEL0 0
#define _GASEL1 1
#define _GCSEL0 2
#define _GCSEL1 3
#define _GBSEL0 4
#define _GBSEL1 5
#define _GDSEL0 6
#define _GDSEL1 7

#define _SASEL0 0
#define _SASEL1 1
#define _SCSEL0 2
#define _SCSEL1 3
#define _SBSEL0 4
#define _SBSEL1 5
#define _SDSEL0 6
#define _SDSEL1 7

// The following are aliases ..  
#define __GASEL 0:2
#define __GCSEL 2:2
#define __GBSEL 4:2
#define __GDSEL 6:2

#define __SASEL 0:2
#define __SCSEL 2:2
#define __SBSEL 4:2
#define __SDSEL 6:2

// ------------------------------
//        ADCON3
// ------------------------------
unsigned int ADCON3@0xf9a ;
union
{

struct 
{
  unsigned int 
  SSRC0 : 1 ,
  SSRC1 : 1 ,
  SSRC2 : 1 ,
  SSRC3 : 1 ,
  SSRC4 : 1 ,
  : 1,
  ADRS0 : 1 ,
  ADRS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SSRC : 5 ,
  : 1,
  _ADRS : 2 ;
} ; 

} ADCON3bits@0xf9a  ;

#define _SSRC0 0
#define _SSRC1 1
#define _SSRC2 2
#define _SSRC3 3
#define _SSRC4 4
#define _ADRS0 6
#define _ADRS1 7

// The following are aliases ..  
#define __SSRC 0:5
#define __ADRS 6:2

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

#define _TUN0 0
#define _TUN1 1
#define _TUN2 2
#define _TUN3 3
#define _TUN4 4
#define _TUN5 5

// The following are aliases ..  
#define __TUN 0:6

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
  TBIE : 1 ;
} ; 

} PIE1bits@0xf9d  ;

#define _TMR1IE 0
#define _TMR2IE 1
#define _CCP1IE 2
#define _SSPIE 3
#define _TXIE 4
#define _RCIE 5
#define _ADIE 6

#define _TBIE 4

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
  TBIF : 1 ;
} ; 

} PIR1bits@0xf9e  ;

#define _TMR1IF 0
#define _TMR2IF 1
#define _CCP1IF 2
#define _SSPIF 3
#define _TXIF 4
#define _RCIF 5
#define _ADIF 6

#define _TBIF 4

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
  TBIP : 1 ;
} ; 

} IPR1bits@0xf9f  ;

#define _TMR1IP 0
#define _TMR2IP 1
#define _CCP1IP 2
#define _SSPIP 3
#define _TXIP 4
#define _RCIP 5
#define _ADIP 6

#define _TBIP 4

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
  : 1,
  LVDIE : 1 ,
  : 1,
  EEIE : 1 ,
  : 2,
  OSFIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _CCP2IE 0
#define _LVDIE 2
#define _EEIE 4
#define _OSFIE 7

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
  : 1,
  LVDIF : 1 ,
  : 1,
  EEIF : 1 ,
  : 2,
  OSFIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _CCP2IF 0
#define _LVDIF 2
#define _EEIF 4
#define _OSFIF 7

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
  : 1,
  LVDIP : 1 ,
  : 1,
  EEIP : 1 ,
  : 2,
  OSFIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _CCP2IP 0
#define _LVDIP 2
#define _EEIP 4
#define _OSFIP 7

// ------------------------------
//        PIE3
// ------------------------------
unsigned int PIE3@0xfa3 ;
union
{

struct 
{
  unsigned int 
  TMR5IE : 1 ,
  IC1IE : 1 ,
  IC2QEIE : 1 ,
  IC3DRIE : 1 ,
  PTIE : 1 ;
} ; 

} PIE3bits@0xfa3  ;

#define _TMR5IE 0
#define _IC1IE 1
#define _IC2QEIE 2
#define _IC3DRIE 3
#define _PTIE 4

// ------------------------------
//        PIR3
// ------------------------------
unsigned int PIR3@0xfa4 ;
union
{

struct 
{
  unsigned int 
  TMR5IF : 1 ,
  IC1IF : 1 ,
  IC2QEIF : 1 ,
  IC3DRIF : 1 ,
  PTIF : 1 ;
} ; 

} PIR3bits@0xfa4  ;

#define _TMR5IF 0
#define _IC1IF 1
#define _IC2QEIF 2
#define _IC3DRIF 3
#define _PTIF 4

// ------------------------------
//        IPR3
// ------------------------------
unsigned int IPR3@0xfa5 ;
union
{

struct 
{
  unsigned int 
  TMR5IP : 1 ,
  IC1IP : 1 ,
  IC2QEIP : 1 ,
  IC3DRIP : 1 ,
  PTIP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

#define _TMR5IP 0
#define _IC1IP 1
#define _IC2QEIP 2
#define _IC3DRIP 3
#define _PTIP 4

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
//        BAUDCON
// ------------------------------
unsigned int BAUDCON@0xfaa ;
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
  SCKP : 1 ,
  : 1,
  RCMT : 1 ;
} ; 

} BAUDCONbits@0xfaa  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4
#define _RCMT 6

// ------------------------------
//        BAUDCTL
// ------------------------------
unsigned int BAUDCTL@0xfaa ;
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
  SCKP : 1 ,
  : 1,
  RCMT : 1 ;
} ; 

} BAUDCTLbits@0xfaa  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

#define _SCKP 4
#define _RCMT 6

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

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _ADEN 3

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

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SENDB 3
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

// ------------------------------
//        TXREG
// ------------------------------
unsigned int TXREG@0xfad ;
// ------------------------------
//        RCREG
// ------------------------------
unsigned int RCREG@0xfae ;
// ------------------------------
//        SPBRG
// ------------------------------
unsigned int SPBRG@0xfaf ;
// ------------------------------
//        SPBRGH
// ------------------------------
unsigned int SPBRGH@0xfb0 ;
// ------------------------------
//        QEICON
// ------------------------------
unsigned int QEICON@0xfb6 ;
union
{

struct 
{
  unsigned int 
  : 5,
  UP_NOT_DOWN : 1 ,
  QERR : 1 ,
  NOT_VELM : 1 ;
} ; 

struct 
{
  unsigned int 
  PDEC0 : 1 ,
  PDEC1 : 1 ,
  QEIM0 : 1 ,
  QEIM1 : 1 ,
  QEIM2 : 1 ,
  UP_DOWN : 1 ,
  : 1,
  VELM : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  UP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  DOWN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  NOT_DOWN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 5,
  UPDOWN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PDEC : 2 ,
  _QEIM : 3 ;
} ; 

} QEICONbits@0xfb6  ;

#define _UP_NOT_DOWN 5
#define _QERR 6
#define _NOT_VELM 7

#define _PDEC0 0
#define _PDEC1 1
#define _QEIM0 2
#define _QEIM1 3
#define _QEIM2 4
#define _UP_DOWN 5
#define _VELM 7

#define _UP 5

#define _DOWN 5

#define _NOT_DOWN 5

#define _UPDOWN 5

// The following are aliases ..  
#define __PDEC 0:2
#define __QEIM 2:3

// ------------------------------
//        T5CON
// ------------------------------
unsigned int T5CON@0xfb7 ;
union
{

struct 
{
  unsigned int 
  TMR5ON : 1 ,
  TMR5CS : 1 ,
  NOT_T5SYNC : 1 ,
  : 2,
  T5MOD : 1 ,
  NOT_RESEN : 1 ,
  T5SEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T5SYNC : 1 ,
  T5PS0 : 1 ,
  T5PS1 : 1 ,
  : 1,
  RESEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 3,
  _T5PS : 2 ;
} ; 

} T5CONbits@0xfb7  ;

#define _TMR5ON 0
#define _TMR5CS 1
#define _NOT_T5SYNC 2
#define _T5MOD 5
#define _NOT_RESEN 6
#define _T5SEN 7

#define _T5SYNC 2
#define _T5PS0 3
#define _T5PS1 4
#define _RESEN 6

// The following are aliases ..  
#define __T5PS 3:2

// ------------------------------
//        ANSEL0
// ------------------------------
unsigned int ANSEL0@0xfb8 ;
union
{

struct 
{
  unsigned int 
  ANS0 : 1 ,
  ANS1 : 1 ,
  ANS2 : 1 ,
  ANS3 : 1 ,
  ANS4 : 1 ,
  ANS5 : 1 ,
  ANS6 : 1 ,
  ANS7 : 1 ;
} ; 

} ANSEL0bits@0xfb8  ;

#define _ANS0 0
#define _ANS1 1
#define _ANS2 2
#define _ANS3 3
#define _ANS4 4
#define _ANS5 5
#define _ANS6 6
#define _ANS7 7

// ------------------------------
//        ANSEL1
// ------------------------------
unsigned int ANSEL1@0xfb9 ;
union
{

struct 
{
  unsigned int 
  ANS8 : 1 ;
} ; 

} ANSEL1bits@0xfb9  ;

#define _ANS8 0

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
  ACQT2 : 1 ,
  ACQT3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADCS : 3 ,
  _ACQT : 4 ;
} ; 

} ADCON2bits@0xfc0  ;

#define _ADFM 7

#define _ADCS0 0
#define _ADCS1 1
#define _ADCS2 2
#define _ACQT0 3
#define _ACQT1 4
#define _ACQT2 5
#define _ACQT3 6

// The following are aliases ..  
#define __ADCS 0:3
#define __ACQT 3:4

// ------------------------------
//        ADCON1
// ------------------------------
unsigned int ADCON1@0xfc1 ;
union
{

struct 
{
  unsigned int 
  : 2,
  BFOVFL : 1 ,
  BFEMT : 1 ,
  FIFOEN : 1 ;
} ; 

struct 
{
  unsigned int 
  ADPNT0 : 1 ,
  ADPNT1 : 1 ,
  : 4,
  VCFG0 : 1 ,
  VCFG1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  FFOVFL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADPNT : 2 ,
  : 4,
  _VCFG : 2 ;
} ; 

} ADCON1bits@0xfc1  ;

#define _BFOVFL 2
#define _BFEMT 3
#define _FIFOEN 4

#define _ADPNT0 0
#define _ADPNT1 1
#define _VCFG0 6
#define _VCFG1 7

#define _FFOVFL 2

// The following are aliases ..  
#define __ADPNT 0:2
#define __VCFG 6:2

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
  : 2,
  ACSCH : 1 ,
  ACONV : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  GO_DONE : 1 ,
  ACMOD0 : 1 ,
  ACMOD1 : 1 ;
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

struct 
{
  unsigned int 
  : 1,
  GODONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _ACMOD : 2 ;
} ; 

} ADCON0bits@0xfc2  ;

#define _ADON 0
#define _GO_NOT_DONE 1
#define _ACSCH 4
#define _ACONV 5

#define _GO_DONE 1
#define _ACMOD0 2
#define _ACMOD1 3

#define _DONE 1

#define _GO 1

#define _NOT_DONE 1

#define _GODONE 1

// The following are aliases ..  
#define __ACMOD 2:2

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

struct 
{
  unsigned int 
  : 3,
  TOUTPS0 : 1 ,
  TOUTPS1 : 1 ,
  TOUTPS2 : 1 ,
  TOUTPS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T2CKPS : 2 ,
  : 1,
  _T2OUTPS : 4 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  _TOUTPS : 4 ;
} ; 

} T2CONbits@0xfca  ;

#define _TMR2ON 2

#define _T2CKPS0 0
#define _T2CKPS1 1
#define _T2OUTPS0 3
#define _T2OUTPS1 4
#define _T2OUTPS2 5
#define _T2OUTPS3 6

#define _TOUTPS0 3
#define _TOUTPS1 4
#define _TOUTPS2 5
#define _TOUTPS3 6

// The following are aliases ..  
#define __T2CKPS 0:2
#define __T2OUTPS 3:4

#define __TOUTPS 3:4

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
  T1SYNC : 1 ,
  : 1,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1INSYNC : 1 ;
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

#define _T1SYNC 2
#define _T1CKPS0 4
#define _T1CKPS1 5

#define _T1INSYNC 2

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
  : 2,
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
  : 2,
  NOT_IPEN : 1 ;
} ; 

} RCONbits@0xfd0  ;

#define _NOT_BOR 0
#define _NOT_POR 1
#define _NOT_PD 2
#define _NOT_TO 3
#define _NOT_RI 4
#define _IPEN 7

#define _BOR 0
#define _POR 1
#define _PD 2
#define _TO 3
#define _RI 4
#define _NOT_IPEN 7

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
  WDTW : 1 ;
} ; 

} WDTCONbits@0xfd1  ;

#define _SWDTEN 0
#define _WDTW 7

// ------------------------------
//        LVDCON
// ------------------------------
unsigned int LVDCON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  : 4,
  LVDEN : 1 ,
  IRVST : 1 ;
} ; 

struct 
{
  unsigned int 
  LVDL0 : 1 ,
  LVDL1 : 1 ,
  LVDL2 : 1 ,
  LVDL3 : 1 ,
  : 1,
  IVRST : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LVDL : 4 ;
} ; 

} LVDCONbits@0xfd2  ;

#define _LVDEN 4
#define _IRVST 5

#define _LVDL0 0
#define _LVDL1 1
#define _LVDL2 2
#define _LVDL3 3
#define _IVRST 5

// The following are aliases ..  
#define __LVDL 0:4

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
#define _IRCF0 4
#define _IRCF1 5
#define _IRCF2 6

#define _FLTS 2

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
  T016BIT : 1 ,
  TMR0ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T0PS0 : 1 ,
  T0PS1 : 1 ,
  T0PS2 : 1 ,
  T0PS3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T0PS : 4 ;
} ; 

} T0CONbits@0xfd5  ;

#define _PSA 3
#define _T0SE 4
#define _T0CS 5
#define _T016BIT 6
#define _TMR0ON 7

#define _T0PS0 0
#define _T0PS1 1
#define _T0PS2 2
#define _T0PS3 3

// The following are aliases ..  
#define __T0PS 0:4

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
  : 2,
  T0IP : 1 ,
  : 4,
  RBPU : 1 ;
} ; 

} INTCON2bits@0xff1  ;

#define _RBIP 0
#define _TMR0IP 2
#define _INTEDG2 4
#define _INTEDG1 5
#define _INTEDG0 6
#define _NOT_RBPU 7

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
