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

// The following are aliases ..  
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
