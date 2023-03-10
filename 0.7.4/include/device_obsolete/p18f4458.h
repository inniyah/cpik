#ifndef DEVICE
#define DEVICE p18f4458
#define p18f4458

// ======================================
//         PROCESSOR : p18f4458
// ======================================

// This file has been automatically generated from Microchip's "p18f4458.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note; All SFRs are reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        SPPDATA
// ------------------------------
unsigned int SPPDATA@0xf62 ;
// ------------------------------
//        SPPCFG
// ------------------------------
unsigned int SPPCFG@0xf63 ;
union
{

struct 
{
  unsigned int 
  : 4,
  CLK1EN : 1 ,
  CSEN : 1 ;
} ; 

struct 
{
  unsigned int 
  WS0 : 1 ,
  WS1 : 1 ,
  WS2 : 1 ,
  WS3 : 1 ,
  : 2,
  CLKCFG0 : 1 ,
  CLKCFG1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _WS : 4 ,
  : 2,
  _CLKCFG : 2 ;
} ; 

} SPPCFGbits@0xf63  ;

#define _CLK1EN 4
#define _CSEN 5

#define _WS0 0
#define _WS1 1
#define _WS2 2
#define _WS3 3
#define _CLKCFG0 6
#define _CLKCFG1 7

// The following are aliases ..  
#define __WS 0:4
#define __CLKCFG 6:2

// ------------------------------
//        SPPEPS
// ------------------------------
unsigned int SPPEPS@0xf64 ;
union
{

struct 
{
  unsigned int 
  : 4,
  SPPBUSY : 1 ,
  : 1,
  WRSPP : 1 ,
  RDSPP : 1 ;
} ; 

struct 
{
  unsigned int 
  ADDR0 : 1 ,
  ADDR1 : 1 ,
  ADDR2 : 1 ,
  ADDR3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADDR : 4 ;
} ; 

} SPPEPSbits@0xf64  ;

#define _SPPBUSY 4
#define _WRSPP 6
#define _RDSPP 7

#define _ADDR0 0
#define _ADDR1 1
#define _ADDR2 2
#define _ADDR3 3

// The following are aliases ..  
#define __ADDR 0:4

// ------------------------------
//        SPPCON
// ------------------------------
unsigned int SPPCON@0xf65 ;
union
{

struct 
{
  unsigned int 
  SPPEN : 1 ,
  SPPOWN : 1 ;
} ; 

} SPPCONbits@0xf65  ;

#define _SPPEN 0
#define _SPPOWN 1

// ------------------------------
//        UFRM
// ------------------------------
unsigned int UFRM@0xf66 ;
// ------------------------------
//        UFRML
// ------------------------------
unsigned int UFRML@0xf66 ;
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

} UFRMLbits@0xf66  ;

#define _FRM0 0
#define _FRM1 1
#define _FRM2 2
#define _FRM3 3
#define _FRM4 4
#define _FRM5 5
#define _FRM6 6
#define _FRM7 7

// ------------------------------
//        UFRMH
// ------------------------------
unsigned int UFRMH@0xf67 ;
union
{

struct 
{
  unsigned int 
  FRM8 : 1 ,
  FRM9 : 1 ,
  FRM10 : 1 ;
} ; 

} UFRMHbits@0xf67  ;

#define _FRM8 0
#define _FRM9 1
#define _FRM10 2

// ------------------------------
//        UIR
// ------------------------------
unsigned int UIR@0xf68 ;
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

} UIRbits@0xf68  ;

#define _URSTIF 0
#define _UERRIF 1
#define _ACTVIF 2
#define _TRNIF 3
#define _IDLEIF 4
#define _STALLIF 5
#define _SOFIF 6

// ------------------------------
//        UIE
// ------------------------------
unsigned int UIE@0xf69 ;
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

} UIEbits@0xf69  ;

#define _URSTIE 0
#define _UERRIE 1
#define _ACTVIE 2
#define _TRNIE 3
#define _IDLEIE 4
#define _STALLIE 5
#define _SOFIE 6

// ------------------------------
//        UEIR
// ------------------------------
unsigned int UEIR@0xf6a ;
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

} UEIRbits@0xf6a  ;

#define _PIDEF 0
#define _CRC5EF 1
#define _CRC16EF 2
#define _DFN8EF 3
#define _BTOEF 4
#define _BTSEF 7

// ------------------------------
//        UEIE
// ------------------------------
unsigned int UEIE@0xf6b ;
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

} UEIEbits@0xf6b  ;

#define _PIDEE 0
#define _CRC5EE 1
#define _CRC16EE 2
#define _DFN8EE 3
#define _BTOEE 4
#define _BTSEE 7

// ------------------------------
//        USTAT
// ------------------------------
unsigned int USTAT@0xf6c ;
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

} USTATbits@0xf6c  ;

#define _PPBI 1
#define _DIR 2

#define _ENDP0 3
#define _ENDP1 4
#define _ENDP2 5
#define _ENDP3 6

// The following are aliases ..  
#define __ENDP 3:4

// ------------------------------
//        UCON
// ------------------------------
unsigned int UCON@0xf6d ;
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

} UCONbits@0xf6d  ;

#define _SUSPND 1
#define _RESUME 2
#define _USBEN 3
#define _PKTDIS 4
#define _SE0 5
#define _PPBRST 6

// ------------------------------
//        UADDR
// ------------------------------
unsigned int UADDR@0xf6e ;
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

} UADDRbits@0xf6e  ;

#define _ADDR0 0
#define _ADDR1 1
#define _ADDR2 2
#define _ADDR3 3
#define _ADDR4 4
#define _ADDR5 5
#define _ADDR6 6

// The following are aliases ..  
#define __ADDR 0:7

// ------------------------------
//        UCFG
// ------------------------------
unsigned int UCFG@0xf6f ;
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

} UCFGbits@0xf6f  ;

#define _FSEN 2
#define _UTRDIS 3
#define _UPUEN 4
#define _UOEMON 6
#define _UTEYE 7

#define _PPB0 0
#define _PPB1 1

// The following are aliases ..  
#define __PPB 0:2

// ------------------------------
//        UEP0
// ------------------------------
unsigned int UEP0@0xf70 ;
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

} UEP0bits@0xf70  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP1
// ------------------------------
unsigned int UEP1@0xf71 ;
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

} UEP1bits@0xf71  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP2
// ------------------------------
unsigned int UEP2@0xf72 ;
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

} UEP2bits@0xf72  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP3
// ------------------------------
unsigned int UEP3@0xf73 ;
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

} UEP3bits@0xf73  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP4
// ------------------------------
unsigned int UEP4@0xf74 ;
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

} UEP4bits@0xf74  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP5
// ------------------------------
unsigned int UEP5@0xf75 ;
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

} UEP5bits@0xf75  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP6
// ------------------------------
unsigned int UEP6@0xf76 ;
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

} UEP6bits@0xf76  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP7
// ------------------------------
unsigned int UEP7@0xf77 ;
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

} UEP7bits@0xf77  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP8
// ------------------------------
unsigned int UEP8@0xf78 ;
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

} UEP8bits@0xf78  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP9
// ------------------------------
unsigned int UEP9@0xf79 ;
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

} UEP9bits@0xf79  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP10
// ------------------------------
unsigned int UEP10@0xf7a ;
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

} UEP10bits@0xf7a  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP11
// ------------------------------
unsigned int UEP11@0xf7b ;
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

} UEP11bits@0xf7b  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP12
// ------------------------------
unsigned int UEP12@0xf7c ;
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

} UEP12bits@0xf7c  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP13
// ------------------------------
unsigned int UEP13@0xf7d ;
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

} UEP13bits@0xf7d  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP14
// ------------------------------
unsigned int UEP14@0xf7e ;
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

} UEP14bits@0xf7e  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

// ------------------------------
//        UEP15
// ------------------------------
unsigned int UEP15@0xf7f ;
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

} UEP15bits@0xf7f  ;

#define _EPSTALL 0
#define _EPINEN 1
#define _EPOUTEN 2
#define _EPCONDIS 3
#define _EPHSHK 4

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
  RA6 : 1 ;
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
  _RA : 7 ;
} ; 

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

#define _AN0 0
#define _AN1 1
#define _AN2 2
#define _AN3 3
#define _T0CKI 4
#define _AN4 5
#define _OSC2 6

#define _VREFM 2
#define _VREFP 3
#define _LVDIN 5

#define _HLVDIN 5

// The following are aliases ..  
#define __RA 0:7

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
#define _PGM 5
#define _PGC 6
#define _PGD 7

// The following are aliases ..  
#define __INT 0:3

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

#define _RC0 0
#define _RC1 1
#define _RC2 2
#define _RC4 4
#define _RC5 5
#define _RC6 6
#define _RC7 7

#define _T1OSO 0
#define _T1OSI 1
#define _CCP1 2
#define _TX 6
#define _RX 7

#define _T13CKI 0
#define _P1A 2
#define _CK 6

// The following are aliases ..  
#define __RC 0:3

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
  SPP0 : 1 ,
  SPP1 : 1 ,
  SPP2 : 1 ,
  SPP3 : 1 ,
  SPP4 : 1 ,
  SPP5 : 1 ,
  SPP6 : 1 ,
  SPP7 : 1 ;
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

#define _SPP0 0
#define _SPP1 1
#define _SPP2 2
#define _SPP3 3
#define _SPP4 4
#define _SPP5 5
#define _SPP6 6
#define _SPP7 7

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
  : 3,
  RDPU : 1 ;
} ; 

struct 
{
  unsigned int 
  CK1SPP : 1 ,
  CK2SPP : 1 ,
  OESPP : 1 ;
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
#define _RDPU 7

#define _CK1SPP 0
#define _CK2SPP 1
#define _OESPP 2

// The following are aliases ..  
#define __RE 0:4

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
  LATA6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATA : 7 ;
} ; 

} LATAbits@0xf89  ;

#define _LATA0 0
#define _LATA1 1
#define _LATA2 2
#define _LATA3 3
#define _LATA4 4
#define _LATA5 5
#define _LATA6 6

// The following are aliases ..  
#define __LATA 0:7

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
  : 3,
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

#define _LATC0 0
#define _LATC1 1
#define _LATC2 2
#define _LATC6 6
#define _LATC7 7

// The following are aliases ..  
#define __LATC 0:3

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
  TRISA6 : 1 ;
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
  _TRISA : 7 ;
} ; 

struct 
{
  unsigned int 
  _RA : 7 ;
} ; 

} DDRAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA4 4
#define _TRISA5 5
#define _TRISA6 6

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5
#define _RA6 6

// The following are aliases ..  
#define __TRISA 0:7

#define __RA 0:7

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
  TRISA6 : 1 ;
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
  _TRISA : 7 ;
} ; 

struct 
{
  unsigned int 
  _RA : 7 ;
} ; 

} TRISAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA4 4
#define _TRISA5 5
#define _TRISA6 6

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
#define _RA4 4
#define _RA5 5
#define _RA6 6

// The following are aliases ..  
#define __TRISA 0:7

#define __RA 0:7

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
  : 3,
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

#define _TRISC0 0
#define _TRISC1 1
#define _TRISC2 2
#define _TRISC6 6
#define _TRISC7 7

#define _RC0 0
#define _RC1 1
#define _RC2 2
#define _RC6 6
#define _RC7 7

// The following are aliases ..  
#define __TRISC 0:3

#define __RC 0:3

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
  : 3,
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

#define _TRISC0 0
#define _TRISC1 1
#define _TRISC2 2
#define _TRISC6 6
#define _TRISC7 7

#define _RC0 0
#define _RC1 1
#define _RC2 2
#define _RC6 6
#define _RC7 7

// The following are aliases ..  
#define __TRISC 0:3

#define __RC 0:3

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
//        OSCTUNE
// ------------------------------
unsigned int OSCTUNE@0xf9b ;
union
{

struct 
{
  unsigned int 
  : 7,
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

#define _INTSRC 7

#define _TUN0 0
#define _TUN1 1
#define _TUN2 2
#define _TUN3 3
#define _TUN4 4

// The following are aliases ..  
#define __TUN 0:5

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
  SPPIE : 1 ;
} ; 

} PIE1bits@0xf9d  ;

#define _TMR1IE 0
#define _TMR2IE 1
#define _CCP1IE 2
#define _SSPIE 3
#define _TXIE 4
#define _RCIE 5
#define _ADIE 6
#define _SPPIE 7

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
  SPPIF : 1 ;
} ; 

} PIR1bits@0xf9e  ;

#define _TMR1IF 0
#define _TMR2IF 1
#define _CCP1IF 2
#define _SSPIF 3
#define _TXIF 4
#define _RCIF 5
#define _ADIF 6
#define _SPPIF 7

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
  SPPIP : 1 ;
} ; 

} IPR1bits@0xf9f  ;

#define _TMR1IP 0
#define _TMR2IP 1
#define _CCP1IP 2
#define _SSPIP 3
#define _TXIP 4
#define _RCIP 5
#define _ADIP 6
#define _SPPIP 7

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
  USBIE : 1 ,
  CMIE : 1 ,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _CCP2IE 0
#define _TMR3IE 1
#define _HLVDIE 2
#define _BCLIE 3
#define _EEIE 4
#define _USBIE 5
#define _CMIE 6
#define _OSCFIE 7

#define _LVDIE 2

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
  USBIF : 1 ,
  CMIF : 1 ,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _CCP2IF 0
#define _TMR3IF 1
#define _HLVDIF 2
#define _BCLIF 3
#define _EEIF 4
#define _USBIF 5
#define _CMIF 6
#define _OSCFIF 7

#define _LVDIF 2

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
  USBIP : 1 ,
  CMIP : 1 ,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  LVDIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _CCP2IP 0
#define _TMR3IP 1
#define _HLVDIP 2
#define _BCLIP 3
#define _EEIP 4
#define _USBIP 5
#define _CMIP 6
#define _OSCFIP 7

#define _LVDIP 2

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
  : 2,
  T3CCP2 : 1 ,
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

struct 
{
  unsigned int 
  : 2,
  T3NSYNC : 1 ;
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
#define _T3CCP2 6
#define _RD16 7

#define _T3SYNC 2
#define _T3CKPS0 4
#define _T3CKPS1 5

#define _T3NSYNC 2

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
//        CMCON
// ------------------------------
unsigned int CMCON@0xfb4 ;
union
{

struct 
{
  unsigned int 
  : 3,
  CIS : 1 ,
  C1INV : 1 ,
  C2INV : 1 ,
  C1OUT : 1 ,
  C2OUT : 1 ;
} ; 

struct 
{
  unsigned int 
  CM0 : 1 ,
  CM1 : 1 ,
  CM2 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CM : 3 ;
} ; 

} CMCONbits@0xfb4  ;

#define _CIS 3
#define _C1INV 4
#define _C2INV 5
#define _C1OUT 6
#define _C2OUT 7

#define _CM0 0
#define _CM1 1
#define _CM2 2

// The following are aliases ..  
#define __CM 0:3

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
  CVREF : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CVR : 4 ;
} ; 

} CVRCONbits@0xfb5  ;

#define _CVRSS 4
#define _CVRR 5
#define _CVROE 6
#define _CVREN 7

#define _CVR0 0
#define _CVR1 1
#define _CVR2 2
#define _CVR3 3
#define _CVREF 4

// The following are aliases ..  
#define __CVR 0:4

// ------------------------------
//        CCP1AS
// ------------------------------
unsigned int CCP1AS@0xfb6 ;
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

} CCP1ASbits@0xfb6  ;

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
//        CCP1DEL
// ------------------------------
unsigned int CCP1DEL@0xfb7 ;
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

} CCP1DELbits@0xfb7  ;

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
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xfb7 ;
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

} ECCP1DELbits@0xfb7  ;

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
  DC2B1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP2M : 4 ,
  _DC2B : 2 ;
} ; 

} CCP2CONbits@0xfba  ;

#define _CCP2M0 0
#define _CCP2M1 1
#define _CCP2M2 2
#define _CCP2M3 3
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP1M : 4 ,
  _DC1B : 2 ,
  _P1M : 2 ;
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
  _PCFG : 4 ,
  _VCFG : 2 ;
} ; 

} ADCON1bits@0xfc1  ;

#define _PCFG0 0
#define _PCFG1 1
#define _PCFG2 2
#define _PCFG3 3
#define _VCFG0 4
#define _VCFG1 5

// The following are aliases ..  
#define __PCFG 0:4
#define __VCFG 4:2

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
  GO_DONE : 1 ,
  CHS0 : 1 ,
  CHS1 : 1 ,
  CHS2 : 1 ,
  CHS3 : 1 ;
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

#define _GO_DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5

#define _DONE 1

#define _GO 1

#define _NOT_DONE 1

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
  R_W : 1 ,
  : 2,
  D_A : 1 ;
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
#define _R_NOT_W 2
#define _S 3
#define _P 4
#define _D_NOT_A 5
#define _CKE 6
#define _SMP 7

#define _R_W 2
#define _D_A 5

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
#define _SBOREN 6
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
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  : 4,
  HLVDEN : 1 ,
  IRVST : 1 ,
  : 1,
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

} HLVDCONbits@0xfd2  ;

#define _HLVDEN 4
#define _IRVST 5
#define _VDIRMAG 7

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3

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
unsigned int LVDCON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  : 4,
  HLVDEN : 1 ,
  IRVST : 1 ,
  : 1,
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

} LVDCONbits@0xfd2  ;

#define _HLVDEN 4
#define _IRVST 5
#define _VDIRMAG 7

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3

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

#define _IOFS 2
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
  STKPTR4 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 7,
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
