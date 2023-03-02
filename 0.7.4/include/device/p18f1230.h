#ifndef DEVICE
#define DEVICE p18f1230
#define p18f1230

// ======================================
//         PROCESSOR : p18f1230
// ======================================

// This file has been automatically generated from Microchip's "p18f1230.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note; All SFRs are reachable via access bank
#pragma firstsfr 0xf80
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
  TX : 1 ,
  RX : 1 ,
  AN2 : 1 ,
  MCLR : 1 ,
  OSC2 : 1 ,
  OSC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  INT0 : 1 ,
  INT1 : 1 ,
  CK : 1 ,
  : 1,
  T0CKI : 1 ,
  : 1,
  CLKO : 1 ,
  CLKI : 1 ;
} ; 

struct 
{
  unsigned int 
  KBI0 : 1 ,
  KBI1 : 1 ,
  : 2,
  VREFP : 1 ,
  : 1,
  T1OSO_PORTA : 1 ,
  T1OSI_PORTA : 1 ;
} ; 

struct 
{
  unsigned int 
  CMP0 : 1 ,
  : 4,
  NOT_MCLR : 1 ,
  AN3 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  T1CKI_PORTA : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _AN : 2 ;
} ; 

struct 
{
  unsigned int 
  _INT : 2 ;
} ; 

struct 
{
  unsigned int 
  _KBI : 2 ;
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
  PWM0 : 1 ,
  PWM1 : 1 ,
  INT2 : 1 ,
  INT3 : 1 ,
  PWM2 : 1 ,
  PWM3 : 1 ,
  PWM4 : 1 ,
  PWM5 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  KBI2 : 1 ,
  KBI3 : 1 ,
  : 2,
  PGC : 1 ,
  PGD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  CMP2 : 1 ,
  CMP1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1OSO_PORTB : 1 ,
  T1OSI_PORTB : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1CKI_PORTB : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PWM : 2 ;
} ; 

} PORTBbits@0xf81  ;

// ------------------------------
//        OVDCONS
// ------------------------------
unsigned int OVDCONS@0xf82 ;
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
  POUT5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _POUT : 6 ;
} ; 

} OVDCONSbits@0xf82  ;

// ------------------------------
//        OVDCOND
// ------------------------------
unsigned int OVDCOND@0xf83 ;
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
  POVD5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _POVD : 6 ;
} ; 

} OVDCONDbits@0xf83  ;

// ------------------------------
//        DTCON
// ------------------------------
unsigned int DTCON@0xf84 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _DT : 6 ,
  _DTPS : 2 ;
} ; 

} DTCONbits@0xf84  ;

// ------------------------------
//        PWMCON1
// ------------------------------
unsigned int PWMCON1@0xf85 ;
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

} PWMCON1bits@0xf85  ;

// ------------------------------
//        PWMCON0
// ------------------------------
unsigned int PWMCON0@0xf86 ;
union
{

struct 
{
  unsigned int 
  PMOD0 : 1 ,
  PMOD1 : 1 ,
  PMOD2 : 1 ,
  : 1,
  PWMEN0 : 1 ,
  PWMEN1 : 1 ,
  PWMEN2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PMOD : 3 ,
  : 1,
  _PWMEN : 3 ;
} ; 

} PWMCON0bits@0xf86  ;

// ------------------------------
//        SEVTCMPH
// ------------------------------
unsigned int SEVTCMPH@0xf87 ;
// ------------------------------
//        SEVTCMPL
// ------------------------------
unsigned int SEVTCMPL@0xf88 ;
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
//        FLTCONFIG
// ------------------------------
unsigned int FLTCONFIG@0xf8b ;
union
{

struct 
{
  unsigned int 
  FLTAEN : 1 ,
  FLTAMOD : 1 ,
  FLTAS : 1 ,
  : 4,
  BRFEN : 1 ;
} ; 

} FLTCONFIGbits@0xf8b  ;

// ------------------------------
//        PDC2H
// ------------------------------
unsigned int PDC2H@0xf8c ;
// ------------------------------
//        PDC2L
// ------------------------------
unsigned int PDC2L@0xf8d ;
// ------------------------------
//        PDC1H
// ------------------------------
unsigned int PDC1H@0xf8e ;
// ------------------------------
//        PDC1L
// ------------------------------
unsigned int PDC1L@0xf8f ;
// ------------------------------
//        PDC0H
// ------------------------------
unsigned int PDC0H@0xf90 ;
// ------------------------------
//        PDC0L
// ------------------------------
unsigned int PDC0L@0xf91 ;
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
//        PTPERH
// ------------------------------
unsigned int PTPERH@0xf95 ;
// ------------------------------
//        PTPERL
// ------------------------------
unsigned int PTPERL@0xf96 ;
// ------------------------------
//        PTMRH
// ------------------------------
unsigned int PTMRH@0xf97 ;
// ------------------------------
//        PTMRL
// ------------------------------
unsigned int PTMRL@0xf98 ;
// ------------------------------
//        PTCON1
// ------------------------------
unsigned int PTCON1@0xf99 ;
union
{

struct 
{
  unsigned int 
  : 6,
  PTDIR : 1 ,
  PTEN : 1 ;
} ; 

} PTCON1bits@0xf99  ;

// ------------------------------
//        PTCON0
// ------------------------------
unsigned int PTCON0@0xf9a ;
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

} PTCON0bits@0xf9a  ;

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
  TUN4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TUN : 5 ;
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
  CMP0IE : 1 ,
  CMP1IE : 1 ,
  CMP2IE : 1 ,
  TXIE : 1 ,
  RCIE : 1 ,
  ADIE : 1 ;
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
  CMP0IF : 1 ,
  CMP1IF : 1 ,
  CMP2IF : 1 ,
  TXIF : 1 ,
  RCIF : 1 ,
  ADIF : 1 ;
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
  CMP0IP : 1 ,
  CMP1IP : 1 ,
  CMP2IP : 1 ,
  TXIP : 1 ,
  RCIP : 1 ,
  ADIP : 1 ;
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
  : 2,
  LVDIE : 1 ,
  : 1,
  EEIE : 1 ,
  : 2,
  OSCFIE : 1 ;
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
  : 2,
  LVDIF : 1 ,
  : 1,
  EEIF : 1 ,
  : 2,
  OSCFIF : 1 ;
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
  : 2,
  LVDIP : 1 ,
  : 1,
  EEIP : 1 ,
  : 2,
  OSCFIP : 1 ;
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
  : 4,
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
  : 4,
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
  : 4,
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
  ADEN : 1 ,
  CREN : 1 ,
  SREN : 1 ,
  RX9 : 1 ,
  SPEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  ADDEN : 1 ;
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
//        CMCON
// ------------------------------
unsigned int CMCON@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 5,
  C0OUT : 1 ,
  C1OUT : 1 ,
  C2OUT : 1 ;
} ; 

struct 
{
  unsigned int 
  CMEN0 : 1 ,
  CMEN1 : 1 ,
  CMEN2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CMEN : 3 ;
} ; 

} CMCONbits@0xfb4  ;

// ------------------------------
//        CVRCON
// ------------------------------
unsigned int CVRCON@0xfb5 ;
union
{

struct 
{
  unsigned int 
  : 4,
  CVRSS : 1 ,
  CVRR : 1 ,
  : 1,
  CVREN : 1 ;
} ; 

struct 
{
  unsigned int 
  CVR0 : 1 ,
  CVR1 : 1 ,
  CVR2 : 1 ,
  CVR3 : 1 ,
  CVREF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CVR : 4 ;
} ; 

} CVRCONbits@0xfb5  ;

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
  SCKP : 1 ,
  : 1,
  RCMT : 1 ;
} ; 

} BAUDCONbits@0xfb8  ;

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

} BAUDCTLbits@0xfb8  ;

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
  : 4,
  VCFG : 1 ;
} ; 

struct 
{
  unsigned int 
  PCFG0 : 1 ,
  PCFG1 : 1 ,
  PCFG2 : 1 ,
  PCFG3 : 1 ,
  VCFG0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PCFG : 4 ;
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
  : 5,
  SEVTEN : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  GO : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ;
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
  _CHS : 2 ;
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
  : 4,
  T1CKPS0 : 1 ,
  T1CKPS1 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  T1SYNC : 1 ;
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
  T016BIT : 1 ,
  TMR0ON : 1 ;
} ; 

struct 
{
  unsigned int 
  T0PS0 : 1 ,
  T0PS1 : 1 ,
  T0PS2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  T08BIT : 1 ;
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
  : 5,
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
