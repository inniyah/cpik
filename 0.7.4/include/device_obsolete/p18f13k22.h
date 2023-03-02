#ifndef DEVICE
#define DEVICE p18f13k22
#define p18f13k22

// ======================================
//         PROCESSOR : p18f13k22
// ======================================

// This file has been automatically generated from Microchip's "p18f13k22.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note; All SFRs are reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        SRCON0
// ------------------------------
unsigned int SRCON0@0xf68 ;
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

} SRCON0bits@0xf68  ;

#define _SRPR 0
#define _SRPS 1
#define _SRNQEN 2
#define _SRQEN 3
#define _SRLEN 7

#define _SRCLK0 4
#define _SRCLK1 5
#define _SRCLK2 6

// The following are aliases ..  
#define __SRCLK 4:3

// ------------------------------
//        SRCON1
// ------------------------------
unsigned int SRCON1@0xf69 ;
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

} SRCON1bits@0xf69  ;

#define _SRRC1E 0
#define _SRRC2E 1
#define _SRRCKE 2
#define _SRRPE 3
#define _SRSC1E 4
#define _SRSC2E 5
#define _SRSCKE 6
#define _SRSPE 7

// ------------------------------
//        CM2CON0
// ------------------------------
unsigned int CM2CON0@0xf6b ;
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

} CM2CON0bits@0xf6b  ;

#define _C2R 2
#define _C2SP 3
#define _C2POL 4
#define _C2OE 5
#define _C2OUT_CM2CON0 6
#define _C2ON 7

#define _C2CH0 0
#define _C2CH1 1

// The following are aliases ..  
#define __C2CH 0:2

// ------------------------------
//        CM2CON1
// ------------------------------
unsigned int CM2CON1@0xf6c ;
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

} CM2CON1bits@0xf6c  ;

#define _C2SYNC 0
#define _C1SYNC 1
#define _C2HYS 2
#define _C1HYS 3
#define _C2RSEL 4
#define _C1RSEL 5
#define _MC2OUT 6
#define _MC1OUT 7

// ------------------------------
//        CM1CON0
// ------------------------------
unsigned int CM1CON0@0xf6d ;
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

} CM1CON0bits@0xf6d  ;

#define _C1R 2
#define _C1SP 3
#define _C1POL 4
#define _C1OE 5
#define _C1OUT_CM1CON0 6
#define _C1ON 7

#define _C1CH0 0
#define _C1CH1 1

// The following are aliases ..  
#define __C1CH 0:2

// ------------------------------
//        SSPMSK
// ------------------------------
unsigned int SSPMSK@0xf6f ;
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

} SSPMSKbits@0xf6f  ;

#define _MSK0 0
#define _MSK1 1
#define _MSK2 2
#define _MSK3 3
#define _MSK4 4
#define _MSK5 5
#define _MSK6 6
#define _MSK7 7

// ------------------------------
//        SLRCON
// ------------------------------
unsigned int SLRCON@0xf76 ;
union
{

struct 
{
  unsigned int 
  SLRA : 1 ,
  SLRB : 1 ,
  SLRC : 1 ;
} ; 

} SLRCONbits@0xf76  ;

#define _SLRA 0
#define _SLRB 1
#define _SLRC 2

// ------------------------------
//        WPUA
// ------------------------------
unsigned int WPUA@0xf77 ;
union
{

struct 
{
  unsigned int 
  WPUA0 : 1 ,
  WPUA1 : 1 ,
  WPUA2 : 1 ,
  WPUA3 : 1 ,
  WPUA4 : 1 ,
  WPUA5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _WPUA : 6 ;
} ; 

} WPUAbits@0xf77  ;

#define _WPUA0 0
#define _WPUA1 1
#define _WPUA2 2
#define _WPUA3 3
#define _WPUA4 4
#define _WPUA5 5

// The following are aliases ..  
#define __WPUA 0:6

// ------------------------------
//        WPUB
// ------------------------------
unsigned int WPUB@0xf78 ;
union
{

struct 
{
  unsigned int 
  : 4,
  WPUB4 : 1 ,
  WPUB5 : 1 ,
  WPUB6 : 1 ,
  WPUB7 : 1 ;
} ; 

} WPUBbits@0xf78  ;

#define _WPUB4 4
#define _WPUB5 5
#define _WPUB6 6
#define _WPUB7 7

// ------------------------------
//        IOCA
// ------------------------------
unsigned int IOCA@0xf79 ;
union
{

struct 
{
  unsigned int 
  IOCA0 : 1 ,
  IOCA1 : 1 ,
  IOCA2 : 1 ,
  IOCA3 : 1 ,
  IOCA4 : 1 ,
  IOCA5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _IOCA : 6 ;
} ; 

} IOCAbits@0xf79  ;

#define _IOCA0 0
#define _IOCA1 1
#define _IOCA2 2
#define _IOCA3 3
#define _IOCA4 4
#define _IOCA5 5

// The following are aliases ..  
#define __IOCA 0:6

// ------------------------------
//        IOCB
// ------------------------------
unsigned int IOCB@0xf7a ;
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

} IOCBbits@0xf7a  ;

#define _IOCB4 4
#define _IOCB5 5
#define _IOCB6 6
#define _IOCB7 7

// ------------------------------
//        ANSEL
// ------------------------------
unsigned int ANSEL@0xf7e ;
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

} ANSELbits@0xf7e  ;

#define _ANS0 0
#define _ANS1 1
#define _ANS2 2
#define _ANS3 3
#define _ANS4 4
#define _ANS5 5
#define _ANS6 6
#define _ANS7 7

#define _ANSEL0 0
#define _ANSEL1 1
#define _ANSEL2 2
#define _ANSEL3 3
#define _ANSEL4 4
#define _ANSEL5 5
#define _ANSEL6 6
#define _ANSEL7 7

// ------------------------------
//        ANSELH
// ------------------------------
unsigned int ANSELH@0xf7f ;
union
{

struct 
{
  unsigned int 
  ANS8 : 1 ,
  ANS9 : 1 ,
  ANS10 : 1 ,
  ANS11 : 1 ;
} ; 

struct 
{
  unsigned int 
  ANSEL8 : 1 ,
  ANSEL9 : 1 ,
  ANSEL10 : 1 ,
  ANSEL11 : 1 ;
} ; 

} ANSELHbits@0xf7f  ;

#define _ANS8 0
#define _ANS9 1
#define _ANS10 2
#define _ANS11 3

#define _ANSEL8 0
#define _ANSEL9 1
#define _ANSEL10 2
#define _ANSEL11 3

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
  RA5 : 1 ;
} ; 

struct 
{
  unsigned int 
  AN0 : 1 ,
  AN1 : 1 ,
  AN2 : 1 ,
  MCLR : 1 ,
  AN3 : 1 ,
  T13CKI : 1 ;
} ; 

struct 
{
  unsigned int 
  CVREF : 1 ,
  C12IN0M : 1 ,
  C1OUT_PORTA : 1 ,
  NOT_MCLR : 1 ,
  OSC2 : 1 ,
  OSC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  VREFM : 1 ,
  VREFP : 1 ,
  T0CKI : 1 ,
  : 1,
  CLKOUT : 1 ,
  CLKIN : 1 ;
} ; 

struct 
{
  unsigned int 
  INT0 : 1 ,
  INT1 : 1 ,
  INT2 : 1 ;
} ; 

struct 
{
  unsigned int 
  PGD : 1 ,
  PGC : 1 ,
  : 1,
  VPP : 1 ;
} ; 

struct 
{
  unsigned int 
  C1INP : 1 ,
  : 1,
  SRQ : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RA : 6 ;
} ; 

struct 
{
  unsigned int 
  _AN : 3 ;
} ; 

struct 
{
  unsigned int 
  _INT : 3 ;
} ; 

} PORTAbits@0xf80  ;

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5

#define _AN0 0
#define _AN1 1
#define _AN2 2
#define _MCLR 3
#define _AN3 4
#define _T13CKI 5

#define _CVREF 0
#define _C12IN0M 1
#define _C1OUT_PORTA 2
#define _NOT_MCLR 3
#define _OSC2 4
#define _OSC1 5

#define _VREFM 0
#define _VREFP 1
#define _T0CKI 2
#define _CLKOUT 4
#define _CLKIN 5

#define _INT0 0
#define _INT1 1
#define _INT2 2

#define _PGD 0
#define _PGC 1
#define _VPP 3

#define _C1INP 0
#define _SRQ 2

// The following are aliases ..  
#define __RA 0:6

#define __AN 0:3

#define __INT 0:3

// ------------------------------
//        PORTB
// ------------------------------
unsigned int PORTB@0xf81 ;
union
{

struct 
{
  unsigned int 
  : 4,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SDI : 1 ,
  RX : 1 ,
  SCL : 1 ,
  TX : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  SDA : 1 ,
  : 1,
  SCK : 1 ,
  CK : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  AN10 : 1 ,
  AN11 : 1 ;
} ; 

} PORTBbits@0xf81  ;

#define _RB4 4
#define _RB5 5
#define _RB6 6
#define _RB7 7

#define _SDI 4
#define _RX 5
#define _SCL 6
#define _TX 7

#define _SDA 4
#define _SCK 6
#define _CK 7

#define _AN10 4
#define _AN11 5

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
  AN4 : 1 ,
  AN5 : 1 ,
  AN6 : 1 ,
  AN7 : 1 ,
  : 2,
  AN8 : 1 ,
  AN9 : 1 ;
} ; 

struct 
{
  unsigned int 
  C12INP : 1 ,
  C12IN1M : 1 ,
  C12IN2M : 1 ,
  C12IN3M : 1 ,
  C12OUT : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  P1D : 1 ,
  P1C : 1 ,
  P1B : 1 ,
  P1A : 1 ,
  SS : 1 ,
  SDO : 1 ;
} ; 

struct 
{
  unsigned int 
  C2INP : 1 ,
  : 2,
  PGM : 1 ,
  C2OUT_PORTC : 1 ,
  CCP1 : 1 ,
  NOT_SS : 1 ;
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

#define _AN4 0
#define _AN5 1
#define _AN6 2
#define _AN7 3
#define _AN8 6
#define _AN9 7

#define _C12INP 0
#define _C12IN1M 1
#define _C12IN2M 2
#define _C12IN3M 3
#define _C12OUT 4

#define _P1D 2
#define _P1C 3
#define _P1B 4
#define _P1A 5
#define _SS 6
#define _SDO 7

#define _C2INP 0
#define _PGM 3
#define _C2OUT_PORTC 4
#define _CCP1 5
#define _NOT_SS 6

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
  : 1,
  LATA4 : 1 ,
  LATA5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATA : 3 ;
} ; 

} LATAbits@0xf89  ;

#define _LATA0 0
#define _LATA1 1
#define _LATA2 2
#define _LATA4 4
#define _LATA5 5

// The following are aliases ..  
#define __LATA 0:3

// ------------------------------
//        LATB
// ------------------------------
unsigned int LATB@0xf8a ;
union
{

struct 
{
  unsigned int 
  : 4,
  LATB4 : 1 ,
  LATB5 : 1 ,
  LATB6 : 1 ,
  LATB7 : 1 ;
} ; 

} LATBbits@0xf8a  ;

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
  : 1,
  TRISA4 : 1 ,
  TRISA5 : 1 ;
} ; 

struct 
{
  unsigned int 
  RA0 : 1 ,
  RA1 : 1 ,
  RA2 : 1 ,
  : 1,
  RA4 : 1 ,
  RA5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISA : 3 ;
} ; 

struct 
{
  unsigned int 
  _RA : 3 ;
} ; 

} DDRAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA4 4
#define _TRISA5 5

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA4 4
#define _RA5 5

// The following are aliases ..  
#define __TRISA 0:3

#define __RA 0:3

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
  : 1,
  TRISA4 : 1 ,
  TRISA5 : 1 ;
} ; 

struct 
{
  unsigned int 
  RA0 : 1 ,
  RA1 : 1 ,
  RA2 : 1 ,
  : 1,
  RA4 : 1 ,
  RA5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISA : 3 ;
} ; 

struct 
{
  unsigned int 
  _RA : 3 ;
} ; 

} TRISAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA4 4
#define _TRISA5 5

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA4 4
#define _RA5 5

// The following are aliases ..  
#define __TRISA 0:3

#define __RA 0:3

// ------------------------------
//        DDRB
// ------------------------------
unsigned int DDRB@0xf93 ;
union
{

struct 
{
  unsigned int 
  : 4,
  TRISB4 : 1 ,
  TRISB5 : 1 ,
  TRISB6 : 1 ,
  TRISB7 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

} DDRBbits@0xf93  ;

#define _TRISB4 4
#define _TRISB5 5
#define _TRISB6 6
#define _TRISB7 7

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
  : 4,
  TRISB4 : 1 ,
  TRISB5 : 1 ,
  TRISB6 : 1 ,
  TRISB7 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 4,
  RB4 : 1 ,
  RB5 : 1 ,
  RB6 : 1 ,
  RB7 : 1 ;
} ; 

} TRISBbits@0xf93  ;

#define _TRISB4 4
#define _TRISB5 5
#define _TRISB6 6
#define _TRISB7 7

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

} PIE1bits@0xf9d  ;

#define _TMR1IE 0
#define _TMR2IE 1
#define _CCP1IE 2
#define _SSPIE 3
#define _TXIE 4
#define _RCIE 5
#define _ADIE 6

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

} PIR1bits@0xf9e  ;

#define _TMR1IF 0
#define _TMR2IF 1
#define _CCP1IF 2
#define _SSPIF 3
#define _TXIF 4
#define _RCIF 5
#define _ADIF 6

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

} IPR1bits@0xf9f  ;

#define _TMR1IP 0
#define _TMR2IP 1
#define _CCP1IP 2
#define _SSPIP 3
#define _TXIP 4
#define _RCIP 5
#define _ADIP 6

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
  : 1,
  BCLIE : 1 ,
  EEIE : 1 ,
  C2IE : 1 ,
  C1IE : 1 ,
  OSCFIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _TMR3IE 1
#define _BCLIE 3
#define _EEIE 4
#define _C2IE 5
#define _C1IE 6
#define _OSCFIE 7

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
  : 1,
  BCLIF : 1 ,
  EEIF : 1 ,
  C2IF : 1 ,
  C1IF : 1 ,
  OSCFIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _TMR3IF 1
#define _BCLIF 3
#define _EEIF 4
#define _C2IF 5
#define _C1IF 6
#define _OSCFIF 7

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
  : 1,
  BCLIP : 1 ,
  EEIP : 1 ,
  C2IP : 1 ,
  C1IP : 1 ,
  OSCFIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _TMR3IP 1
#define _BCLIP 3
#define _EEIP 4
#define _C2IP 5
#define _C1IP 6
#define _OSCFIP 7

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
  : 3,
  RD16 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T3SYNC : 1 ,
  : 1,
  T3CKPS0 : 1 ,
  T3CKPS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _T3CKPS : 2 ;
} ; 

} T3CONbits@0xfb1  ;

#define _TMR3ON 0
#define _TMR3CS 1
#define _NOT_T3SYNC 2
#define _T3CCP1 3
#define _RD16 7

#define _T3SYNC 2
#define _T3CKPS0 4
#define _T3CKPS1 5

// The following are aliases ..  
#define __T3CKPS 4:2

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
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfb6 ;
union
{

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
  _PSSBD : 2 ,
  _PSSAC : 2 ,
  _ECCPAS : 3 ;
} ; 

} ECCP1ASbits@0xfb6  ;

#define _ECCPASE 7

#define _PSSBD0 0
#define _PSSBD1 1
#define _PSSAC0 2
#define _PSSAC1 3
#define _ECCPAS0 4
#define _ECCPAS1 5
#define _ECCPAS2 6

// The following are aliases ..  
#define __PSSBD 0:2
#define __PSSAC 2:2
#define __ECCPAS 4:3

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
  _PDC : 7 ;
} ; 

} PWM1CONbits@0xfb7  ;

#define _PRSEN 7

#define _PDC0 0
#define _PDC1 1
#define _PDC2 2
#define _PDC3 3
#define _PDC4 4
#define _PDC5 5
#define _PDC6 6

// The following are aliases ..  
#define __PDC 0:7

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
//        PSTRCON
// ------------------------------
unsigned int PSTRCON@0xfb9 ;
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

} PSTRCONbits@0xfb9  ;

#define _STRA 0
#define _STRB 1
#define _STRC 2
#define _STRD 3
#define _STRSYNC 4

// ------------------------------
//        REFCON0
// ------------------------------
unsigned int REFCON0@0xfba ;
union
{

struct 
{
  unsigned int 
  : 4,
  FVR1S0 : 1 ,
  FVR1S1 : 1 ,
  FVR1ST : 1 ,
  FVR1EN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _FVR1S : 2 ;
} ; 

} REFCON0bits@0xfba  ;

#define _FVR1S0 4
#define _FVR1S1 5
#define _FVR1ST 6
#define _FVR1EN 7

// The following are aliases ..  
#define __FVR1S 4:2

// ------------------------------
//        VREFCON0
// ------------------------------
unsigned int VREFCON0@0xfba ;
union
{

struct 
{
  unsigned int 
  : 4,
  FVR1S0 : 1 ,
  FVR1S1 : 1 ,
  FVR1ST : 1 ,
  FVR1EN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
  _FVR1S : 2 ;
} ; 

} VREFCON0bits@0xfba  ;

#define _FVR1S0 4
#define _FVR1S1 5
#define _FVR1ST 6
#define _FVR1EN 7

// The following are aliases ..  
#define __FVR1S 4:2

// ------------------------------
//        REFCON1
// ------------------------------
unsigned int REFCON1@0xfbb ;
union
{

struct 
{
  unsigned int 
  D1NSS : 1 ,
  : 4,
  DAC1OE : 1 ,
  D1LPS : 1 ,
  D1EN : 1 ;
} ; 

struct 
{
  unsigned int 
  D1NSS0 : 1 ,
  : 1,
  D1PSS0 : 1 ,
  D1PSS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _D1NSS : 1 ,
  : 1,
  _D1PSS : 2 ;
} ; 

} REFCON1bits@0xfbb  ;

#define _D1NSS 0
#define _DAC1OE 5
#define _D1LPS 6
#define _D1EN 7

#define _D1NSS0 0
#define _D1PSS0 2
#define _D1PSS1 3

// The following are aliases ..  
#define __D1NSS 0
#define __D1PSS 2:2

// ------------------------------
//        VREFCON1
// ------------------------------
unsigned int VREFCON1@0xfbb ;
union
{

struct 
{
  unsigned int 
  D1NSS : 1 ,
  : 4,
  DAC1OE : 1 ,
  D1LPS : 1 ,
  D1EN : 1 ;
} ; 

struct 
{
  unsigned int 
  D1NSS0 : 1 ,
  : 1,
  D1PSS0 : 1 ,
  D1PSS1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _D1NSS : 1 ,
  : 1,
  _D1PSS : 2 ;
} ; 

} VREFCON1bits@0xfbb  ;

#define _D1NSS 0
#define _DAC1OE 5
#define _D1LPS 6
#define _D1EN 7

#define _D1NSS0 0
#define _D1PSS0 2
#define _D1PSS1 3

// The following are aliases ..  
#define __D1NSS 0
#define __D1PSS 2:2

// ------------------------------
//        REFCON2
// ------------------------------
unsigned int REFCON2@0xfbc ;
union
{

struct 
{
  unsigned int 
  DAC1R0 : 1 ,
  DAC1R1 : 1 ,
  DAC1R2 : 1 ,
  DAC1R3 : 1 ,
  DAC1R4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DAC1R : 5 ;
} ; 

} REFCON2bits@0xfbc  ;

#define _DAC1R0 0
#define _DAC1R1 1
#define _DAC1R2 2
#define _DAC1R3 3
#define _DAC1R4 4

// The following are aliases ..  
#define __DAC1R 0:5

// ------------------------------
//        VREFCON2
// ------------------------------
unsigned int VREFCON2@0xfbc ;
union
{

struct 
{
  unsigned int 
  DAC1R0 : 1 ,
  DAC1R1 : 1 ,
  DAC1R2 : 1 ,
  DAC1R3 : 1 ,
  DAC1R4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _DAC1R : 5 ;
} ; 

} VREFCON2bits@0xfbc  ;

#define _DAC1R0 0
#define _DAC1R1 1
#define _DAC1R2 2
#define _DAC1R3 3
#define _DAC1R4 4

// The following are aliases ..  
#define __DAC1R 0:5

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

#define _NVCFG0 0
#define _NVCFG1 1
#define _PVCFG0 2
#define _PVCFG1 3

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
  CHS3 : 1 ;
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

struct 
{
  unsigned int 
  : 1,
  GO : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _CHS : 4 ;
} ; 

} ADCON0bits@0xfc2  ;

#define _ADON 0
#define _GO_NOT_DONE 1

#define _DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5

#define _NOT_DONE 1

#define _GO_DONE 1

#define _GO 1

// The following are aliases ..  
#define __CHS 2:4

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
  HFIOFL : 1 ,
  PRI_SD : 1 ;
} ; 

} OSCCON2bits@0xfd2  ;

#define _LFIOFS 0
#define _HFIOFL 1
#define _PRI_SD 2

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

#define _HFIOFS 2
#define _OSTS 3
#define _IDLEN 7

#define _SCS0 0
#define _SCS1 1
#define _FLTS 2
#define _IRCF0 4
#define _IRCF1 5
#define _IRCF2 6

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
  RABIP : 1 ,
  : 1,
  TMR0IP : 1 ,
  : 1,
  INTEDG2 : 1 ,
  INTEDG1 : 1 ,
  INTEDG0 : 1 ,
  NOT_RABPU : 1 ;
} ; 

struct 
{
  unsigned int 
  RBIP : 1 ,
  : 6,
  RABPU : 1 ;
} ; 

struct 
{
  unsigned int 
  : 7,
  NOT_RBPU : 1 ;
} ; 

} INTCON2bits@0xff1  ;

#define _RABIP 0
#define _TMR0IP 2
#define _INTEDG2 4
#define _INTEDG1 5
#define _INTEDG0 6
#define _NOT_RABPU 7

#define _RBIP 0
#define _RABPU 7

#define _NOT_RBPU 7

// ------------------------------
//        INTCON
// ------------------------------
unsigned int INTCON@0xff2 ;
union
{

struct 
{
  unsigned int 
  RABIF : 1 ,
  INT0IF : 1 ,
  TMR0IF : 1 ,
  RABIE : 1 ,
  INT0IE : 1 ,
  TMR0IE : 1 ,
  PEIE_GIEL : 1 ,
  GIE_GIEH : 1 ;
} ; 

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
  : 6,
  GIEL : 1 ,
  GIEH : 1 ;
} ; 

} INTCONbits@0xff2  ;

#define _RABIF 0
#define _INT0IF 1
#define _TMR0IF 2
#define _RABIE 3
#define _INT0IE 4
#define _TMR0IE 5
#define _PEIE_GIEL 6
#define _GIE_GIEH 7

#define _RBIF 0
#define _INT0F 1
#define _T0IF 2
#define _RBIE 3
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
  STKOVF : 1 ;
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
  STKFUL : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SP : 5 ;
} ; 

} STKPTRbits@0xffc  ;

#define _STKUNF 6
#define _STKOVF 7

#define _SP0 0
#define _SP1 1
#define _SP2 2
#define _SP3 3
#define _SP4 4
#define _STKFUL 7

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
