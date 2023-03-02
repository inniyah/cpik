#ifndef DEVICE
#define DEVICE p18lf27j13
#define p18lf27j13

// ======================================
//         PROCESSOR : p18lf27j13
// ======================================

// This file has been automatically generated from Microchip's "p18lf27j13.inc" file.
// with the inc2h-v3 utility.             Please do not edit.
// Do not use with cpik versions < V0.7. Please report problems to the author.
// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)

// Note: SFRs from 0xeb8 to 0xf5f are not reachable via access bank
#pragma firstsfr 0xf60
// ------------------------------
//        ADCTRIG
// ------------------------------
unsigned int ADCTRIG@0xeb8 ;
union
{

struct 
{
  unsigned int 
  SRC0 : 1 ,
  SRC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  TRIGSEL0 : 1 ,
  TRIGSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _SRC : 2 ;
} ; 

struct 
{
  unsigned int 
  _TRIGSEL : 2 ;
} ; 

} ADCTRIGbits@0xeb8  ;

#define _SRC0 0
#define _SRC1 1

#define _TRIGSEL0 0
#define _TRIGSEL1 1

// The following are aliases ..  
#define __SRC 0:2

#define __TRIGSEL 0:2

// ------------------------------
//        PD0
// ------------------------------
unsigned int PD0@0xeb9 ;
union
{

struct 
{
  unsigned int 
  ADCMD : 1 ,
  SPI1MD : 1 ,
  SPI2MD : 1 ,
  UART1MD : 1 ,
  UART2MD : 1 ,
  ECCP1MD : 1 ,
  ECCP2MD : 1 ,
  ECCP3MD : 1 ;
} ; 

struct 
{
  unsigned int 
  PMDADC : 1 ,
  PMDMSSP1 : 1 ,
  PMDMSSP2 : 1 ,
  PMDUART1 : 1 ,
  PMDUART2 : 1 ,
  PMDECCP1 : 1 ,
  PMDECCP2 : 1 ,
  PMDECCP3 : 1 ;
} ; 

} PD0bits@0xeb9  ;

#define _ADCMD 0
#define _SPI1MD 1
#define _SPI2MD 2
#define _UART1MD 3
#define _UART2MD 4
#define _ECCP1MD 5
#define _ECCP2MD 6
#define _ECCP3MD 7

#define _PMDADC 0
#define _PMDMSSP1 1
#define _PMDMSSP2 2
#define _PMDUART1 3
#define _PMDUART2 4
#define _PMDECCP1 5
#define _PMDECCP2 6
#define _PMDECCP3 7

// ------------------------------
//        PMDIS0
// ------------------------------
unsigned int PMDIS0@0xeb9 ;
union
{

struct 
{
  unsigned int 
  ADCMD : 1 ,
  SPI1MD : 1 ,
  SPI2MD : 1 ,
  UART1MD : 1 ,
  UART2MD : 1 ,
  ECCP1MD : 1 ,
  ECCP2MD : 1 ,
  ECCP3MD : 1 ;
} ; 

struct 
{
  unsigned int 
  PMDADC : 1 ,
  PMDMSSP1 : 1 ,
  PMDMSSP2 : 1 ,
  PMDUART1 : 1 ,
  PMDUART2 : 1 ,
  PMDECCP1 : 1 ,
  PMDECCP2 : 1 ,
  PMDECCP3 : 1 ;
} ; 

} PMDIS0bits@0xeb9  ;

#define _ADCMD 0
#define _SPI1MD 1
#define _SPI2MD 2
#define _UART1MD 3
#define _UART2MD 4
#define _ECCP1MD 5
#define _ECCP2MD 6
#define _ECCP3MD 7

#define _PMDADC 0
#define _PMDMSSP1 1
#define _PMDMSSP2 2
#define _PMDUART1 3
#define _PMDUART2 4
#define _PMDECCP1 5
#define _PMDECCP2 6
#define _PMDECCP3 7

// ------------------------------
//        PD1
// ------------------------------
unsigned int PD1@0xeba ;
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

struct 
{
  unsigned int 
  : 1,
  PMDTMR1 : 1 ,
  PMDTMR2 : 1 ,
  PMDTMR3 : 1 ,
  PMDTMR4 : 1 ,
  PMDRTCC : 1 ,
  PMDCTMU : 1 ;
} ; 

} PD1bits@0xeba  ;

#define _TMR1MD 1
#define _TMR2MD 2
#define _TMR3MD 3
#define _TMR4MD 4
#define _RTCCMD 5
#define _CTMUMD 6

#define _PMDTMR1 1
#define _PMDTMR2 2
#define _PMDTMR3 3
#define _PMDTMR4 4
#define _PMDRTCC 5
#define _PMDCTMU 6

// ------------------------------
//        PMDIS1
// ------------------------------
unsigned int PMDIS1@0xeba ;
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

struct 
{
  unsigned int 
  : 1,
  PMDTMR1 : 1 ,
  PMDTMR2 : 1 ,
  PMDTMR3 : 1 ,
  PMDTMR4 : 1 ,
  PMDRTCC : 1 ,
  PMDCTMU : 1 ;
} ; 

} PMDIS1bits@0xeba  ;

#define _TMR1MD 1
#define _TMR2MD 2
#define _TMR3MD 3
#define _TMR4MD 4
#define _RTCCMD 5
#define _CTMUMD 6

#define _PMDTMR1 1
#define _PMDTMR2 2
#define _PMDTMR3 3
#define _PMDTMR4 4
#define _PMDRTCC 5
#define _PMDCTMU 6

// ------------------------------
//        PD2
// ------------------------------
unsigned int PD2@0xebb ;
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
  : 1,
  TMR8MD : 1 ;
} ; 

struct 
{
  unsigned int 
  PMDCMP1 : 1 ,
  PMDCMP2 : 1 ,
  PMDCMP3 : 1 ,
  PMDTMR5 : 1 ,
  PMDTMR6 : 1 ,
  : 1,
  PMDTMR8 : 1 ;
} ; 

} PD2bits@0xebb  ;

#define _CMP1MD 0
#define _CMP2MD 1
#define _CMP3MD 2
#define _TMR5MD 3
#define _TMR6MD 4
#define _TMR8MD 6

#define _PMDCMP1 0
#define _PMDCMP2 1
#define _PMDCMP3 2
#define _PMDTMR5 3
#define _PMDTMR6 4
#define _PMDTMR8 6

// ------------------------------
//        PMDIS2
// ------------------------------
unsigned int PMDIS2@0xebb ;
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
  : 1,
  TMR8MD : 1 ;
} ; 

struct 
{
  unsigned int 
  PMDCMP1 : 1 ,
  PMDCMP2 : 1 ,
  PMDCMP3 : 1 ,
  PMDTMR5 : 1 ,
  PMDTMR6 : 1 ,
  : 1,
  PMDTMR8 : 1 ;
} ; 

} PMDIS2bits@0xebb  ;

#define _CMP1MD 0
#define _CMP2MD 1
#define _CMP3MD 2
#define _TMR5MD 3
#define _TMR6MD 4
#define _TMR8MD 6

#define _PMDCMP1 0
#define _PMDCMP2 1
#define _PMDCMP3 2
#define _PMDTMR5 3
#define _PMDTMR6 4
#define _PMDTMR8 6

// ------------------------------
//        PD3
// ------------------------------
unsigned int PD3@0xebc ;
union
{

struct 
{
  unsigned int 
  : 1,
  CCP4MD : 1 ,
  CCP5MD : 1 ,
  CCP6MD : 1 ,
  CCP7MD : 1 ,
  CCP8MD : 1 ,
  CCP9MD : 1 ,
  CCP10MD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  PMDCCP4 : 1 ,
  PMDCCP5 : 1 ,
  PMDCCP6 : 1 ,
  PMDCCP7 : 1 ,
  PMDCCP8 : 1 ,
  PMDCCP9 : 1 ,
  PMDCCP10 : 1 ;
} ; 

} PD3bits@0xebc  ;

#define _CCP4MD 1
#define _CCP5MD 2
#define _CCP6MD 3
#define _CCP7MD 4
#define _CCP8MD 5
#define _CCP9MD 6
#define _CCP10MD 7

#define _PMDCCP4 1
#define _PMDCCP5 2
#define _PMDCCP6 3
#define _PMDCCP7 4
#define _PMDCCP8 5
#define _PMDCCP9 6
#define _PMDCCP10 7

// ------------------------------
//        PMDIS3
// ------------------------------
unsigned int PMDIS3@0xebc ;
union
{

struct 
{
  unsigned int 
  : 1,
  CCP4MD : 1 ,
  CCP5MD : 1 ,
  CCP6MD : 1 ,
  CCP7MD : 1 ,
  CCP8MD : 1 ,
  CCP9MD : 1 ,
  CCP10MD : 1 ;
} ; 

struct 
{
  unsigned int 
  : 1,
  PMDCCP4 : 1 ,
  PMDCCP5 : 1 ,
  PMDCCP6 : 1 ,
  PMDCCP7 : 1 ,
  PMDCCP8 : 1 ,
  PMDCCP9 : 1 ,
  PMDCCP10 : 1 ;
} ; 

} PMDIS3bits@0xebc  ;

#define _CCP4MD 1
#define _CCP5MD 2
#define _CCP6MD 3
#define _CCP7MD 4
#define _CCP8MD 5
#define _CCP9MD 6
#define _CCP10MD 7

#define _PMDCCP4 1
#define _PMDCCP5 2
#define _PMDCCP6 3
#define _PMDCCP7 4
#define _PMDCCP8 5
#define _PMDCCP9 6
#define _PMDCCP10 7

// ------------------------------
//        PPSCON
// ------------------------------
unsigned int PPSCON@0xebf ;
union
{

struct 
{
  unsigned int 
  IOLOCK : 1 ;
} ; 

} PPSCONbits@0xebf  ;

#define _IOLOCK 0

// ------------------------------
//        RPOR0
// ------------------------------
unsigned int RPOR0@0xec0 ;
// ------------------------------
//        RPOR1
// ------------------------------
unsigned int RPOR1@0xec1 ;
// ------------------------------
//        RPOR2
// ------------------------------
unsigned int RPOR2@0xec2 ;
// ------------------------------
//        RPOR3
// ------------------------------
unsigned int RPOR3@0xec3 ;
// ------------------------------
//        RPOR4
// ------------------------------
unsigned int RPOR4@0xec4 ;
// ------------------------------
//        RPOR5
// ------------------------------
unsigned int RPOR5@0xec5 ;
// ------------------------------
//        RPOR6
// ------------------------------
unsigned int RPOR6@0xec6 ;
// ------------------------------
//        RPOR7
// ------------------------------
unsigned int RPOR7@0xec7 ;
// ------------------------------
//        RPOR8
// ------------------------------
unsigned int RPOR8@0xec8 ;
// ------------------------------
//        RPOR9
// ------------------------------
unsigned int RPOR9@0xec9 ;
// ------------------------------
//        RPOR10
// ------------------------------
unsigned int RPOR10@0xeca ;
// ------------------------------
//        RPOR11
// ------------------------------
unsigned int RPOR11@0xecb ;
// ------------------------------
//        RPOR12
// ------------------------------
unsigned int RPOR12@0xecc ;
// ------------------------------
//        RPOR13
// ------------------------------
unsigned int RPOR13@0xecd ;
// ------------------------------
//        RPOR14
// ------------------------------
unsigned int RPOR14@0xece ;
// ------------------------------
//        RPOR15
// ------------------------------
unsigned int RPOR15@0xecf ;
// ------------------------------
//        RPOR16
// ------------------------------
unsigned int RPOR16@0xed0 ;
// ------------------------------
//        RPOR17
// ------------------------------
unsigned int RPOR17@0xed1 ;
// ------------------------------
//        RPOR18
// ------------------------------
unsigned int RPOR18@0xed2 ;
// ------------------------------
//        RPINR1
// ------------------------------
unsigned int RPINR1@0xee1 ;
// ------------------------------
//        RPINR2
// ------------------------------
unsigned int RPINR2@0xee2 ;
// ------------------------------
//        RPINR3
// ------------------------------
unsigned int RPINR3@0xee3 ;
// ------------------------------
//        RPINR4
// ------------------------------
unsigned int RPINR4@0xee4 ;
// ------------------------------
//        RPINR6
// ------------------------------
unsigned int RPINR6@0xee6 ;
// ------------------------------
//        RPINR15
// ------------------------------
unsigned int RPINR15@0xee7 ;
// ------------------------------
//        RPINR7
// ------------------------------
unsigned int RPINR7@0xee8 ;
// ------------------------------
//        RPINR8
// ------------------------------
unsigned int RPINR8@0xee9 ;
// ------------------------------
//        RPINR9
// ------------------------------
unsigned int RPINR9@0xeea ;
// ------------------------------
//        RPINR12
// ------------------------------
unsigned int RPINR12@0xef2 ;
// ------------------------------
//        RPINR13
// ------------------------------
unsigned int RPINR13@0xef3 ;
// ------------------------------
//        RPINR14
// ------------------------------
unsigned int RPINR14@0xef4 ;
// ------------------------------
//        RPINR16
// ------------------------------
unsigned int RPINR16@0xef7 ;
// ------------------------------
//        RPINR17
// ------------------------------
unsigned int RPINR17@0xef8 ;
// ------------------------------
//        RPINR21
// ------------------------------
unsigned int RPINR21@0xefc ;
// ------------------------------
//        RPINR22
// ------------------------------
unsigned int RPINR22@0xefd ;
// ------------------------------
//        RPINR23
// ------------------------------
unsigned int RPINR23@0xefe ;
// ------------------------------
//        RPINR24
// ------------------------------
unsigned int RPINR24@0xeff ;
// ------------------------------
//        CCP10CON
// ------------------------------
unsigned int CCP10CON@0xf00 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP10M : 4 ,
  _DC10B : 2 ;
} ; 

} CCP10CONbits@0xf00  ;

#define _CCP10M0 0
#define _CCP10M1 1
#define _CCP10M2 2
#define _CCP10M3 3
#define _DC10B0 4
#define _DC10B1 5

// The following are aliases ..  
#define __CCP10M 0:4
#define __DC10B 4:2

// ------------------------------
//        CCPR10L
// ------------------------------
unsigned int CCPR10L@0xf01 ;
// ------------------------------
//        CCPR10H
// ------------------------------
unsigned int CCPR10H@0xf02 ;
// ------------------------------
//        CCP9CON
// ------------------------------
unsigned int CCP9CON@0xf03 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP9M : 4 ,
  _DC9B : 2 ;
} ; 

} CCP9CONbits@0xf03  ;

#define _CCP9M0 0
#define _CCP9M1 1
#define _CCP9M2 2
#define _CCP9M3 3
#define _DC9B0 4
#define _DC9B1 5

// The following are aliases ..  
#define __CCP9M 0:4
#define __DC9B 4:2

// ------------------------------
//        CCPR9L
// ------------------------------
unsigned int CCPR9L@0xf04 ;
// ------------------------------
//        CCPR9H
// ------------------------------
unsigned int CCPR9H@0xf05 ;
// ------------------------------
//        CCP8CON
// ------------------------------
unsigned int CCP8CON@0xf06 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP8M : 4 ,
  _DC8B : 2 ;
} ; 

} CCP8CONbits@0xf06  ;

#define _CCP8M0 0
#define _CCP8M1 1
#define _CCP8M2 2
#define _CCP8M3 3
#define _DC8B0 4
#define _DC8B1 5

// The following are aliases ..  
#define __CCP8M 0:4
#define __DC8B 4:2

// ------------------------------
//        CCPR8L
// ------------------------------
unsigned int CCPR8L@0xf07 ;
// ------------------------------
//        CCPR8H
// ------------------------------
unsigned int CCPR8H@0xf08 ;
// ------------------------------
//        CCP7CON
// ------------------------------
unsigned int CCP7CON@0xf09 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP7M : 4 ,
  _DC7B : 2 ;
} ; 

} CCP7CONbits@0xf09  ;

#define _CCP7M0 0
#define _CCP7M1 1
#define _CCP7M2 2
#define _CCP7M3 3
#define _DC7B0 4
#define _DC7B1 5

// The following are aliases ..  
#define __CCP7M 0:4
#define __DC7B 4:2

// ------------------------------
//        CCPR7L
// ------------------------------
unsigned int CCPR7L@0xf0a ;
// ------------------------------
//        CCPR7H
// ------------------------------
unsigned int CCPR7H@0xf0b ;
// ------------------------------
//        CCP6CON
// ------------------------------
unsigned int CCP6CON@0xf0c ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCP6M : 4 ,
  _DC6B : 2 ;
} ; 

} CCP6CONbits@0xf0c  ;

#define _CCP6M0 0
#define _CCP6M1 1
#define _CCP6M2 2
#define _CCP6M3 3
#define _DC6B0 4
#define _DC6B1 5

// The following are aliases ..  
#define __CCP6M 0:4
#define __DC6B 4:2

// ------------------------------
//        CCPR6L
// ------------------------------
unsigned int CCPR6L@0xf0d ;
// ------------------------------
//        CCPR6H
// ------------------------------
unsigned int CCPR6H@0xf0e ;
// ------------------------------
//        CCP5CON
// ------------------------------
unsigned int CCP5CON@0xf0f ;
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

} CCP5CONbits@0xf0f  ;

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
//        CCPR5L
// ------------------------------
unsigned int CCPR5L@0xf10 ;
// ------------------------------
//        CCPR5H
// ------------------------------
unsigned int CCPR5H@0xf11 ;
// ------------------------------
//        CCP4CON
// ------------------------------
unsigned int CCP4CON@0xf12 ;
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

} CCP4CONbits@0xf12  ;

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
//        CCPR4L
// ------------------------------
unsigned int CCPR4L@0xf13 ;
// ------------------------------
//        CCPR4H
// ------------------------------
unsigned int CCPR4H@0xf14 ;
// ------------------------------
//        CCP3CON
// ------------------------------
unsigned int CCP3CON@0xf15 ;
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

} CCP3CONbits@0xf15  ;

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
//        CCPR3L
// ------------------------------
unsigned int CCPR3L@0xf16 ;
// ------------------------------
//        CCPR3H
// ------------------------------
unsigned int CCPR3H@0xf17 ;
// ------------------------------
//        ECCP3DEL
// ------------------------------
unsigned int ECCP3DEL@0xf18 ;
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

} ECCP3DELbits@0xf18  ;

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
//        ECCP3AS
// ------------------------------
unsigned int ECCP3AS@0xf19 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSS3BD : 2 ,
  _PSS3AC : 2 ,
  _ECCP3AS : 3 ;
} ; 

} ECCP3ASbits@0xf19  ;

#define _PSS3BD0 0
#define _PSS3BD1 1
#define _PSS3AC0 2
#define _PSS3AC1 3
#define _ECCP3AS0 4
#define _ECCP3AS1 5
#define _ECCP3AS2 6
#define _ECCP3ASE 7

// The following are aliases ..  
#define __PSS3BD 0:2
#define __PSS3AC 2:2
#define __ECCP3AS 4:3

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
  STRSYNC : 1 ,
  : 1,
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
//        T8CON
// ------------------------------
unsigned int T8CON@0xf1b ;
union
{

struct 
{
  unsigned int 
  T8CKPS0 : 1 ,
  T8CKPS1 : 1 ,
  TMR8ON : 1 ,
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

} T8CONbits@0xf1b  ;

#define _T8CKPS0 0
#define _T8CKPS1 1
#define _TMR8ON 2
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
unsigned int PR8@0xf1c ;
// ------------------------------
//        TMR8
// ------------------------------
unsigned int TMR8@0xf1d ;
// ------------------------------
//        T6CON
// ------------------------------
unsigned int T6CON@0xf1e ;
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

} T6CONbits@0xf1e  ;

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
unsigned int PR6@0xf1f ;
// ------------------------------
//        TMR6
// ------------------------------
unsigned int TMR6@0xf20 ;
// ------------------------------
//        T5GCON
// ------------------------------
unsigned int T5GCON@0xf21 ;
union
{

struct 
{
  unsigned int 
  T5GSS0 : 1 ,
  T5GSS1 : 1 ,
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
  : 3,
  T5GGO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  NOT_T5DONE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T5DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T5GSS : 2 ;
} ; 

} T5GCONbits@0xf21  ;

#define _T5GSS0 0
#define _T5GSS1 1
#define _T5GVAL 2
#define _T5GGO_NOT_T5DONE 3
#define _T5GSPM 4
#define _T5GTM 5
#define _T5GPOL 6
#define _TMR5GE 7

#define _T5GGO 3

#define _NOT_T5DONE 3

#define _T5DONE 3

// The following are aliases ..  
#define __T5GSS 0:2

// ------------------------------
//        T5CON
// ------------------------------
unsigned int T5CON@0xf22 ;
union
{

struct 
{
  unsigned int 
  TMR5ON : 1 ,
  RD16 : 1 ,
  NOT_T5SYNC : 1 ,
  T5OSCEN : 1 ,
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

} T5CONbits@0xf22  ;

#define _TMR5ON 0
#define _RD16 1
#define _NOT_T5SYNC 2
#define _T5OSCEN 3
#define _T5CKPS0 4
#define _T5CKPS1 5
#define _TMR5CS0 6
#define _TMR5CS1 7

// The following are aliases ..  
#define __T5CKPS 4:2
#define __TMR5CS 6:2

// ------------------------------
//        TMR5L
// ------------------------------
unsigned int TMR5L@0xf23 ;
// ------------------------------
//        TMR5H
// ------------------------------
unsigned int TMR5H@0xf24 ;
// ------------------------------
//        CM3CON
// ------------------------------
unsigned int CM3CON@0xf25 ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM3CONbits@0xf25  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

// ------------------------------
//        RTCVALL
// ------------------------------
unsigned int RTCVALL@0xf3a ;
// ------------------------------
//        RTCVALH
// ------------------------------
unsigned int RTCVALH@0xf3b ;
// ------------------------------
//        PADCFG1
// ------------------------------
unsigned int PADCFG1@0xf3c ;
union
{

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

} PADCFG1bits@0xf3c  ;

#define _RTSECSEL0 1
#define _RTSECSEL1 2

// The following are aliases ..  
#define __RTSECSEL 1:2

// ------------------------------
//        REFOCON
// ------------------------------
unsigned int REFOCON@0xf3d ;
union
{

struct 
{
  unsigned int 
  RODIV0 : 1 ,
  RODIV1 : 1 ,
  RODIV2 : 1 ,
  RODIV3 : 1 ,
  ROSEL : 1 ,
  ROSSLP : 1 ,
  : 1,
  ROON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RODIV : 4 ;
} ; 

} REFOCONbits@0xf3d  ;

#define _RODIV0 0
#define _RODIV1 1
#define _RODIV2 2
#define _RODIV3 3
#define _ROSEL 4
#define _ROSSLP 5
#define _ROON 7

// The following are aliases ..  
#define __RODIV 0:4

// ------------------------------
//        RTCCAL
// ------------------------------
unsigned int RTCCAL@0xf3e ;
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

} RTCCALbits@0xf3e  ;

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
unsigned int RTCCFG@0xf3f ;
union
{

struct 
{
  unsigned int 
  RTCPTR0 : 1 ,
  RTCPTR1 : 1 ,
  RTCOE : 1 ,
  HALFSEC : 1 ,
  RTCSYNC : 1 ,
  RTCWREN : 1 ,
  : 1,
  RTCEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RTCPTR : 2 ;
} ; 

} RTCCFGbits@0xf3f  ;

#define _RTCPTR0 0
#define _RTCPTR1 1
#define _RTCOE 2
#define _HALFSEC 3
#define _RTCSYNC 4
#define _RTCWREN 5
#define _RTCEN 7

// The following are aliases ..  
#define __RTCPTR 0:2

// ------------------------------
//        ODCON3
// ------------------------------
unsigned int ODCON3@0xf40 ;
union
{

struct 
{
  unsigned int 
  SPI1OD : 1 ,
  SPI2OD : 1 ,
  : 5,
  CTMUDS : 1 ;
} ; 

} ODCON3bits@0xf40  ;

#define _SPI1OD 0
#define _SPI2OD 1
#define _CTMUDS 7

// ------------------------------
//        ODCON2
// ------------------------------
unsigned int ODCON2@0xf41 ;
union
{

struct 
{
  unsigned int 
  U1OD : 1 ,
  U2OD : 1 ,
  CCP9OD : 1 ,
  CCP10OD : 1 ;
} ; 

} ODCON2bits@0xf41  ;

#define _U1OD 0
#define _U2OD 1
#define _CCP9OD 2
#define _CCP10OD 3

// ------------------------------
//        ODCON1
// ------------------------------
unsigned int ODCON1@0xf42 ;
union
{

struct 
{
  unsigned int 
  ECCP1OD : 1 ,
  ECCP2OD : 1 ,
  ECCP3OD : 1 ,
  CCP4OD : 1 ,
  CCP5OD : 1 ,
  CCP6OD : 1 ,
  CCP7OD : 1 ,
  CCP8OD : 1 ;
} ; 

} ODCON1bits@0xf42  ;

#define _ECCP1OD 0
#define _ECCP2OD 1
#define _ECCP3OD 2
#define _CCP4OD 3
#define _CCP5OD 4
#define _CCP6OD 5
#define _CCP7OD 6
#define _CCP8OD 7

// ------------------------------
//        ALRMVALL
// ------------------------------
unsigned int ALRMVALL@0xf44 ;
// ------------------------------
//        ALRMVALH
// ------------------------------
unsigned int ALRMVALH@0xf45 ;
// ------------------------------
//        ALRMRPT
// ------------------------------
unsigned int ALRMRPT@0xf46 ;
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

} ALRMRPTbits@0xf46  ;

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
unsigned int ALRMCFG@0xf47 ;
union
{

struct 
{
  unsigned int 
  ALRMPTR0 : 1 ,
  ALRMPTR1 : 1 ,
  AMASK0 : 1 ,
  AMASK1 : 1 ,
  AMASK2 : 1 ,
  AMASK3 : 1 ,
  CHIME : 1 ,
  ALRMEN : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ALRMPTR : 2 ,
  _AMASK : 4 ;
} ; 

} ALRMCFGbits@0xf47  ;

#define _ALRMPTR0 0
#define _ALRMPTR1 1
#define _AMASK0 2
#define _AMASK1 3
#define _AMASK2 4
#define _AMASK3 5
#define _CHIME 6
#define _ALRMEN 7

// The following are aliases ..  
#define __ALRMPTR 0:2
#define __AMASK 2:4

// ------------------------------
//        ANCON0
// ------------------------------
unsigned int ANCON0@0xf48 ;
union
{

struct 
{
  unsigned int 
  PCFG0 : 1 ,
  PCFG1 : 1 ,
  PCFG2 : 1 ,
  PCFG3 : 1 ,
  PCFG4 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _PCFG : 5 ;
} ; 

} ANCON0bits@0xf48  ;

#define _PCFG0 0
#define _PCFG1 1
#define _PCFG2 2
#define _PCFG3 3
#define _PCFG4 4

// The following are aliases ..  
#define __PCFG 0:5

// ------------------------------
//        ANCON1
// ------------------------------
unsigned int ANCON1@0xf49 ;
union
{

struct 
{
  unsigned int 
  PCFG8 : 1 ,
  PCFG9 : 1 ,
  PCFG10 : 1 ,
  PCFG11 : 1 ,
  PCFG12 : 1 ,
  : 2,
  VBGEN : 1 ;
} ; 

} ANCON1bits@0xf49  ;

#define _PCFG8 0
#define _PCFG9 1
#define _PCFG10 2
#define _PCFG11 3
#define _PCFG12 4
#define _VBGEN 7

// ------------------------------
//        DSWAKEL
// ------------------------------
unsigned int DSWAKEL@0xf4a ;
union
{

struct 
{
  unsigned int 
  DSPOR : 1 ,
  : 1,
  DSMCLR : 1 ,
  DSRTC : 1 ,
  DSWDT : 1 ,
  DSULP : 1 ,
  : 1,
  DSFLT : 1 ;
} ; 

} DSWAKELbits@0xf4a  ;

#define _DSPOR 0
#define _DSMCLR 2
#define _DSRTC 3
#define _DSWDT 4
#define _DSULP 5
#define _DSFLT 7

// ------------------------------
//        DSWAKEH
// ------------------------------
unsigned int DSWAKEH@0xf4b ;
union
{

struct 
{
  unsigned int 
  DSINT0 : 1 ;
} ; 

} DSWAKEHbits@0xf4b  ;

#define _DSINT0 0

// ------------------------------
//        DSCONL
// ------------------------------
unsigned int DSCONL@0xf4c ;
union
{

struct 
{
  unsigned int 
  RELEASE : 1 ,
  DSBOR : 1 ,
  ULPWDIS : 1 ;
} ; 

} DSCONLbits@0xf4c  ;

#define _RELEASE 0
#define _DSBOR 1
#define _ULPWDIS 2

// ------------------------------
//        DSCONH
// ------------------------------
unsigned int DSCONH@0xf4d ;
union
{

struct 
{
  unsigned int 
  RTCWDIS : 1 ,
  DSULPEN : 1 ,
  : 5,
  DSEN : 1 ;
} ; 

} DSCONHbits@0xf4d  ;

#define _RTCWDIS 0
#define _DSULPEN 1
#define _DSEN 7

// ------------------------------
//        DSGPR0
// ------------------------------
unsigned int DSGPR0@0xf4e ;
// ------------------------------
//        DSGPR1
// ------------------------------
unsigned int DSGPR1@0xf4f ;
// ------------------------------
//        CCPTMRS2
// ------------------------------
unsigned int CCPTMRS2@0xf50 ;
union
{

struct 
{
  unsigned int 
  C8TSEL0 : 1 ,
  C8TSEL1 : 1 ,
  C9TSEL0 : 1 ,
  : 1,
  C10TSEL0 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C8TSEL : 2 ,
  _C9TSEL : 1 ;
} ; 

} CCPTMRS2bits@0xf50  ;

#define _C8TSEL0 0
#define _C8TSEL1 1
#define _C9TSEL0 2
#define _C10TSEL0 4

// The following are aliases ..  
#define __C8TSEL 0:2
#define __C9TSEL 2

// ------------------------------
//        CCPTMRS1
// ------------------------------
unsigned int CCPTMRS1@0xf51 ;
union
{

struct 
{
  unsigned int 
  C4TSEL0 : 1 ,
  C4TSEL1 : 1 ,
  C5TSEL0 : 1 ,
  : 1,
  C6TSEL0 : 1 ,
  : 1,
  C7TSEL0 : 1 ,
  C7TSEL1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _C4TSEL : 2 ,
  _C5TSEL : 1 ,
  : 1,
  _C6TSEL : 1 ,
  : 1,
  _C7TSEL : 2 ;
} ; 

} CCPTMRS1bits@0xf51  ;

#define _C4TSEL0 0
#define _C4TSEL1 1
#define _C5TSEL0 2
#define _C6TSEL0 4
#define _C7TSEL0 6
#define _C7TSEL1 7

// The following are aliases ..  
#define __C4TSEL 0:2
#define __C5TSEL 2
#define __C6TSEL 4
#define __C7TSEL 6:2

// ------------------------------
//        CCPTMRS0
// ------------------------------
unsigned int CCPTMRS0@0xf52 ;
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

} CCPTMRS0bits@0xf52  ;

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
//        CVRCON
// ------------------------------
unsigned int CVRCON@0xf53 ;
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
  _CVR : 4 ;
} ; 

} CVRCONbits@0xf53  ;

#define _CVR0 0
#define _CVR1 1
#define _CVR2 2
#define _CVR3 3
#define _CVRSS 4
#define _CVRR 5
#define _CVROE 6
#define _CVREN 7

// The following are aliases ..  
#define __CVR 0:4

// ------------------------------
//        DMABCH
// ------------------------------
unsigned int DMABCH@0xf66 ;
// ------------------------------
//        DMABCL
// ------------------------------
unsigned int DMABCL@0xf67 ;
// ------------------------------
//        RXADDRH
// ------------------------------
unsigned int RXADDRH@0xf68 ;
// ------------------------------
//        RXADDRL
// ------------------------------
unsigned int RXADDRL@0xf69 ;
// ------------------------------
//        TXADDRH
// ------------------------------
unsigned int TXADDRH@0xf6a ;
// ------------------------------
//        TXADDRL
// ------------------------------
unsigned int TXADDRL@0xf6b ;
// ------------------------------
//        CMSTAT
// ------------------------------
unsigned int CMSTAT@0xf70 ;
union
{

struct 
{
  unsigned int 
  COUT1 : 1 ,
  COUT2 : 1 ,
  COUT3 : 1 ;
} ; 

} CMSTATbits@0xf70  ;

#define _COUT1 0
#define _COUT2 1
#define _COUT3 2

// ------------------------------
//        CMSTATUS
// ------------------------------
unsigned int CMSTATUS@0xf70 ;
union
{

struct 
{
  unsigned int 
  COUT1 : 1 ,
  COUT2 : 1 ,
  COUT3 : 1 ;
} ; 

} CMSTATUSbits@0xf70  ;

#define _COUT1 0
#define _COUT2 1
#define _COUT3 2

// ------------------------------
//        SSP2CON2
// ------------------------------
unsigned int SSP2CON2@0xf71 ;
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

} SSP2CON2bits@0xf71  ;

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
unsigned int SSP2CON1@0xf72 ;
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

} SSP2CON1bits@0xf72  ;

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
unsigned int SSP2STAT@0xf73 ;
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

} SSP2STATbits@0xf73  ;

#define _BF 0
#define _UA 1
#define _R_NOT_W 2
#define _S 3
#define _P 4
#define _D_NOT_A 5
#define _CKE 6
#define _SMP 7

// ------------------------------
//        SSP2ADD
// ------------------------------
unsigned int SSP2ADD@0xf74 ;
// ------------------------------
//        SSP2MSK
// ------------------------------
unsigned int SSP2MSK@0xf74 ;
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

} SSP2MSKbits@0xf74  ;

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
unsigned int SSP2BUF@0xf75 ;
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
  _T4CKPS : 2 ,
  : 1,
  _T4OUTPS : 4 ;
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
#define __T4CKPS 0:2
#define __T4OUTPS 3:4

// ------------------------------
//        PR4
// ------------------------------
unsigned int PR4@0xf77 ;
// ------------------------------
//        TMR4
// ------------------------------
unsigned int TMR4@0xf78 ;
// ------------------------------
//        T3CON
// ------------------------------
unsigned int T3CON@0xf79 ;
union
{

struct 
{
  unsigned int 
  TMR3ON : 1 ,
  RD16 : 1 ,
  NOT_T3SYNC : 1 ,
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

} T3CONbits@0xf79  ;

#define _TMR3ON 0
#define _RD16 1
#define _NOT_T3SYNC 2
#define _T3OSCEN 3
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
unsigned int TMR3@0xf7a ;
// ------------------------------
//        TMR3L
// ------------------------------
unsigned int TMR3L@0xf7a ;
// ------------------------------
//        TMR3H
// ------------------------------
unsigned int TMR3H@0xf7b ;
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
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

} BAUDCON2bits@0xf7c  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

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
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

} BAUDCONbits@0xf7e  ;

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
  TXCKP : 1 ,
  RXDTP : 1 ,
  RCIDL : 1 ,
  ABDOVF : 1 ;
} ; 

} BAUDCON1bits@0xf7e  ;

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
unsigned int BAUDCTL@0xf7e ;
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

} BAUDCTLbits@0xf7e  ;

#define _ABDEN 0
#define _WUE 1
#define _BRG16 3
#define _TXCKP 4
#define _RXDTP 5
#define _RCIDL 6
#define _ABDOVF 7

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
  : 1,
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
  C1INA : 1 ,
  C2INA : 1 ,
  VREF_MINUS : 1 ,
  VREF_PLUS : 1 ,
  : 1,
  NOT_SS1 : 1 ,
  CLKO : 1 ,
  CLKI : 1 ;
} ; 

struct 
{
  unsigned int 
  RP0 : 1 ,
  RP1 : 1 ,
  CVREF : 1 ,
  C1INB : 1 ,
  : 1,
  HLVDIN : 1 ;
} ; 

struct 
{
  unsigned int 
  ULPWU : 1 ,
  VBG : 1 ,
  C2INB : 1 ,
  : 2,
  RP2 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  C3INB : 1 ,
  : 2,
  C1INC : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  C1IND : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _RA : 4 ;
} ; 

struct 
{
  unsigned int 
  _AN : 4 ;
} ; 

struct 
{
  unsigned int 
  _RP : 2 ;
} ; 

} PORTAbits@0xf80  ;

#define _RA0 0
#define _RA1 1
#define _RA2 2
#define _RA3 3
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

#define _C1INA 0
#define _C2INA 1
#define _VREF_MINUS 2
#define _VREF_PLUS 3
#define _NOT_SS1 5
#define _CLKO 6
#define _CLKI 7

#define _RP0 0
#define _RP1 1
#define _CVREF 2
#define _C1INB 3
#define _HLVDIN 5

#define _ULPWU 0
#define _VBG 1
#define _C2INB 2
#define _RP2 5

#define _C3INB 2
#define _C1INC 5

#define _C1IND 2

// The following are aliases ..  
#define __RA 0:4

#define __AN 0:4

#define __RP 0:2

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
  AN12 : 1 ,
  AN10 : 1 ,
  AN8 : 1 ,
  AN9 : 1 ,
  KBI0 : 1 ,
  KBI1 : 1 ,
  KBI2 : 1 ,
  KBI3 : 1 ;
} ; 

struct 
{
  unsigned int 
  INT0 : 1 ,
  RTCC : 1 ,
  CTED1 : 1 ,
  CTED2 : 1 ,
  SCL2 : 1 ,
  SDA2 : 1 ,
  PGC : 1 ,
  PGD : 1 ;
} ; 

struct 
{
  unsigned int 
  RP3 : 1 ,
  C3INC : 1 ,
  C2INC : 1 ,
  RP6 : 1 ,
  RP7 : 1 ,
  RP8 : 1 ,
  RP9 : 1 ,
  RP10 : 1 ;
} ; 

struct 
{
  unsigned int 
  C3IND : 1 ,
  RP4 : 1 ,
  REFO : 1 ,
  C3INA : 1 ,
  CCP4 : 1 ,
  CCP5 : 1 ,
  CCP6 : 1 ,
  CCP7 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  RP5 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 4,
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

#define _AN12 0
#define _AN10 1
#define _AN8 2
#define _AN9 3
#define _KBI0 4
#define _KBI1 5
#define _KBI2 6
#define _KBI3 7

#define _INT0 0
#define _RTCC 1
#define _CTED1 2
#define _CTED2 3
#define _SCL2 4
#define _SDA2 5
#define _PGC 6
#define _PGD 7

#define _RP3 0
#define _C3INC 1
#define _C2INC 2
#define _RP6 3
#define _RP7 4
#define _RP8 5
#define _RP9 6
#define _RP10 7

#define _C3IND 0
#define _RP4 1
#define _REFO 2
#define _C3INA 3
#define _CCP4 4
#define _CCP5 5
#define _CCP6 6
#define _CCP7 7

#define _RP5 2

// The following are aliases ..  
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
  AN11 : 1 ,
  SCL1 : 1 ,
  SDA1 : 1 ,
  RP16 : 1 ,
  TX1 : 1 ,
  RX1 : 1 ;
} ; 

struct 
{
  unsigned int 
  T1CKI : 1 ,
  RP12 : 1 ,
  CTPLS : 1 ,
  RP14 : 1 ,
  RP15 : 1 ,
  SDO1 : 1 ,
  CK1 : 1 ,
  DT1 : 1 ;
} ; 

struct 
{
  unsigned int 
  RP11 : 1 ,
  CCP8 : 1 ,
  RP13 : 1 ,
  SCK1 : 1 ,
  SDI1 : 1 ,
  : 1,
  CCP9 : 1 ,
  CCP10 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  C2IND : 1 ,
  : 3,
  RP17 : 1 ,
  RP18 : 1 ;
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
#define _AN11 2
#define _SCL1 3
#define _SDA1 4
#define _RP16 5
#define _TX1 6
#define _RX1 7

#define _T1CKI 0
#define _RP12 1
#define _CTPLS 2
#define _RP14 3
#define _RP15 4
#define _SDO1 5
#define _CK1 6
#define _DT1 7

#define _RP11 0
#define _CCP8 1
#define _RP13 2
#define _SCK1 3
#define _SDI1 4
#define _CCP9 6
#define _CCP10 7

#define _C2IND 2
#define _RP17 6
#define _RP18 7

// ------------------------------
//        HLVDCON
// ------------------------------
unsigned int HLVDCON@0xf85 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _HLVDL : 4 ;
} ; 

} HLVDCONbits@0xf85  ;

#define _HLVDL0 0
#define _HLVDL1 1
#define _HLVDL2 2
#define _HLVDL3 3
#define _HLVDEN 4
#define _IRVST 5
#define _BGVST 6
#define _VDIRMAG 7

// The following are aliases ..  
#define __HLVDL 0:4

// ------------------------------
//        DMACON2
// ------------------------------
unsigned int DMACON2@0xf86 ;
union
{

struct 
{
  unsigned int 
  INTLVL0 : 1 ,
  INTLVL1 : 1 ,
  INTLVL2 : 1 ,
  INTLVL3 : 1 ,
  DLYCYC0 : 1 ,
  DLYCYC1 : 1 ,
  DLYCYC2 : 1 ,
  DLYCYC3 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _INTLVL : 4 ,
  _DLYCYC : 4 ;
} ; 

} DMACON2bits@0xf86  ;

#define _INTLVL0 0
#define _INTLVL1 1
#define _INTLVL2 2
#define _INTLVL3 3
#define _DLYCYC0 4
#define _DLYCYC1 5
#define _DLYCYC2 6
#define _DLYCYC3 7

// The following are aliases ..  
#define __INTLVL 0:4
#define __DLYCYC 4:4

// ------------------------------
//        OSCCON2
// ------------------------------
unsigned int OSCCON2@0xf87 ;
union
{

struct 
{
  unsigned int 
  : 2,
  PRISD : 1 ,
  SOSCGO : 1 ,
  SOSCDRV : 1 ,
  : 1,
  SOSCRUN : 1 ;
} ; 

} OSCCON2bits@0xf87  ;

#define _PRISD 2
#define _SOSCGO 3
#define _SOSCDRV 4
#define _SOSCRUN 6

// ------------------------------
//        DMACON1
// ------------------------------
unsigned int DMACON1@0xf88 ;
union
{

struct 
{
  unsigned int 
  DMAEN : 1 ,
  DLYINTEN : 1 ,
  DUPLEX0 : 1 ,
  DUPLEX1 : 1 ,
  RXINC : 1 ,
  TXINC : 1 ,
  SSCON0 : 1 ,
  SSCON1 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 2,
  _DUPLEX : 2 ,
  : 2,
  _SSCON : 2 ;
} ; 

} DMACON1bits@0xf88  ;

#define _DMAEN 0
#define _DLYINTEN 1
#define _DUPLEX0 2
#define _DUPLEX1 3
#define _RXINC 4
#define _TXINC 5
#define _SSCON0 6
#define _SSCON1 7

// The following are aliases ..  
#define __DUPLEX 2:2
#define __SSCON 6:2

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
  : 1,
  LATA5 : 1 ,
  LATA6 : 1 ,
  LATA7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _LATA : 4 ;
} ; 

} LATAbits@0xf89  ;

#define _LATA0 0
#define _LATA1 1
#define _LATA2 2
#define _LATA3 3
#define _LATA5 5
#define _LATA6 6
#define _LATA7 7

// The following are aliases ..  
#define __LATA 0:4

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
//        PIE4
// ------------------------------
unsigned int PIE4@0xf8e ;
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

} PIE4bits@0xf8e  ;

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
unsigned int PIR4@0xf8f ;
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

} PIR4bits@0xf8f  ;

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
unsigned int IPR4@0xf90 ;
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

} IPR4bits@0xf90  ;

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
unsigned int PIE5@0xf91 ;
union
{

struct 
{
  unsigned int 
  TMR1GIE : 1 ,
  TMR5GIE : 1 ,
  TMR5IE : 1 ,
  TMR6IE : 1 ,
  TMR8IE : 1 ,
  CM3IE : 1 ;
} ; 

} PIE5bits@0xf91  ;

#define _TMR1GIE 0
#define _TMR5GIE 1
#define _TMR5IE 2
#define _TMR6IE 3
#define _TMR8IE 4
#define _CM3IE 5

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
  : 1,
  TRISA5 : 1 ,
  TRISA6 : 1 ,
  TRISA7 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _TRISA : 4 ;
} ; 

} TRISAbits@0xf92  ;

#define _TRISA0 0
#define _TRISA1 1
#define _TRISA2 2
#define _TRISA3 3
#define _TRISA5 5
#define _TRISA6 6
#define _TRISA7 7

// The following are aliases ..  
#define __TRISA 0:4

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
//        T3GCON
// ------------------------------
unsigned int T3GCON@0xf97 ;
union
{

struct 
{
  unsigned int 
  T3GSS0 : 1 ,
  T3GSS1 : 1 ,
  T3GVAL : 1 ,
  T3GGO_T3DONE : 1 ,
  T3GSPM : 1 ,
  T3GTM : 1 ,
  T3GPOL : 1 ,
  TMR3GE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T3GGO : 1 ;
} ; 

struct 
{
  unsigned int 
  : 3,
  T3DONE : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _T3GSS : 2 ;
} ; 

} T3GCONbits@0xf97  ;

#define _T3GSS0 0
#define _T3GSS1 1
#define _T3GVAL 2
#define _T3GGO_T3DONE 3
#define _T3GSPM 4
#define _T3GTM 5
#define _T3GPOL 6
#define _TMR3GE 7

#define _T3GGO 3

#define _T3DONE 3

// The following are aliases ..  
#define __T3GSS 0:2

// ------------------------------
//        PIR5
// ------------------------------
unsigned int PIR5@0xf98 ;
union
{

struct 
{
  unsigned int 
  TMR1GIF : 1 ,
  TMR5GIF : 1 ,
  TMR5IF : 1 ,
  TMR6IF : 1 ,
  TMR8IF : 1 ,
  CM3IF : 1 ;
} ; 

} PIR5bits@0xf98  ;

#define _TMR1GIF 0
#define _TMR5GIF 1
#define _TMR5IF 2
#define _TMR6IF 3
#define _TMR8IF 4
#define _CM3IF 5

// ------------------------------
//        IPR5
// ------------------------------
unsigned int IPR5@0xf99 ;
union
{

struct 
{
  unsigned int 
  TMR1GIP : 1 ,
  TMR5GIP : 1 ,
  TMR5IP : 1 ,
  TMR6IP : 1 ,
  TMR8IP : 1 ,
  CM3IP : 1 ;
} ; 

} IPR5bits@0xf99  ;

#define _TMR1GIP 0
#define _TMR5GIP 1
#define _TMR5IP 2
#define _TMR6IP 3
#define _TMR8IP 4
#define _CM3IP 5

// ------------------------------
//        T1GCON
// ------------------------------
unsigned int T1GCON@0xf9a ;
union
{

struct 
{
  unsigned int 
  T1GSS0 : 1 ,
  T1GSS1 : 1 ,
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
  : 3,
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _T1GSS : 2 ;
} ; 

} T1GCONbits@0xf9a  ;

#define _T1GSS0 0
#define _T1GSS1 1
#define _T1GVAL 2
#define _T1GGO_NOT_T1DONE 3
#define _T1GSPM 4
#define _T1GTM 5
#define _T1GPOL 6
#define _TMR1GE 7

#define _T1GGO 3

#define _NOT_T1DONE 3

#define _T1DONE 3

// The following are aliases ..  
#define __T1GSS 0:2

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
//        RCSTA2
// ------------------------------
unsigned int RCSTA2@0xf9c ;
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

} RCSTA2bits@0xf9c  ;

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
  LVDIE : 1 ,
  BCL1IE : 1 ,
  : 1,
  CM1IE : 1 ,
  CM2IE : 1 ,
  OSCFIE : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  HLVDIE : 1 ,
  BCLIE : 1 ;
} ; 

} PIE2bits@0xfa0  ;

#define _CCP2IE 0
#define _TMR3IE 1
#define _LVDIE 2
#define _BCL1IE 3
#define _CM1IE 5
#define _CM2IE 6
#define _OSCFIE 7

#define _HLVDIE 2
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
  LVDIF : 1 ,
  BCL1IF : 1 ,
  : 1,
  CM1IF : 1 ,
  CM2IF : 1 ,
  OSCFIF : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  HLVDIF : 1 ,
  BCLIF : 1 ;
} ; 

} PIR2bits@0xfa1  ;

#define _CCP2IF 0
#define _TMR3IF 1
#define _LVDIF 2
#define _BCL1IF 3
#define _CM1IF 5
#define _CM2IF 6
#define _OSCFIF 7

#define _HLVDIF 2
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
  LVDIP : 1 ,
  BCL1IP : 1 ,
  : 1,
  CM1IP : 1 ,
  CM2IP : 1 ,
  OSCFIP : 1 ;
} ; 

struct 
{
  unsigned int 
  : 2,
  HLVDIP : 1 ,
  BCLIP : 1 ;
} ; 

} IPR2bits@0xfa2  ;

#define _CCP2IP 0
#define _TMR3IP 1
#define _LVDIP 2
#define _BCL1IP 3
#define _CM1IP 5
#define _CM2IP 6
#define _OSCFIP 7

#define _HLVDIP 2
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
  TMR3GIE : 1 ,
  CTMUIE : 1 ,
  TMR4IE : 1 ,
  TX2IE : 1 ,
  RC2IE : 1 ,
  BCL2IE : 1 ,
  SSP2IE : 1 ;
} ; 

} PIE3bits@0xfa3  ;

#define _RTCCIE 0
#define _TMR3GIE 1
#define _CTMUIE 2
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
  RTCCIF : 1 ,
  TMR3GIF : 1 ,
  CTMUIF : 1 ,
  TMR4IF : 1 ,
  TX2IF : 1 ,
  RC2IF : 1 ,
  BCL2IF : 1 ,
  SSP2IF : 1 ;
} ; 

} PIR3bits@0xfa4  ;

#define _RTCCIF 0
#define _TMR3GIF 1
#define _CTMUIF 2
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
  RTCCIP : 1 ,
  TMR3GIP : 1 ,
  CTMUIP : 1 ,
  TMR4IP : 1 ,
  TX2IP : 1 ,
  RC2IP : 1 ,
  BCL2IP : 1 ,
  SSP2IP : 1 ;
} ; 

} IPR3bits@0xfa5  ;

#define _RTCCIP 0
#define _TMR3GIP 1
#define _CTMUIP 2
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
  : 1,
  WR : 1 ,
  WREN : 1 ,
  WRERR : 1 ,
  FREE : 1 ,
  WPROG : 1 ;
} ; 

} EECON1bits@0xfa6  ;

#define _WR 1
#define _WREN 2
#define _WRERR 3
#define _FREE 4
#define _WPROG 5

// ------------------------------
//        EECON2
// ------------------------------
unsigned int EECON2@0xfa7 ;
// ------------------------------
//        TXSTA2
// ------------------------------
unsigned int TXSTA2@0xfa8 ;
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

} TXSTA2bits@0xfa8  ;

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
//        TXREG2
// ------------------------------
unsigned int TXREG2@0xfa9 ;
// ------------------------------
//        RCREG2
// ------------------------------
unsigned int RCREG2@0xfaa ;
// ------------------------------
//        SPBRG2
// ------------------------------
unsigned int SPBRG2@0xfab ;
// ------------------------------
//        RCSTA
// ------------------------------
unsigned int RCSTA@0xfac ;
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
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADEN : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RC9 : 1 ,
  SPEN1 : 1 ;
} ; 

struct 
{
  unsigned int 
  RX9D1 : 1 ,
  : 2,
  ADDEN1 : 1 ,
  : 2,
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
  RX91 : 1 ;
} ; 

} RCSTAbits@0xfac  ;

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _RCD8 0
#define _OERR1 1
#define _FERR1 2
#define _ADEN 3
#define _CREN1 4
#define _SREN1 5
#define _RC9 6
#define _SPEN1 7

#define _RX9D1 0
#define _ADDEN1 3
#define _NOT_RC8 6

#define _RC8_9 6

#define _RX91 6

// ------------------------------
//        RCSTA1
// ------------------------------
unsigned int RCSTA1@0xfac ;
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
  OERR1 : 1 ,
  FERR1 : 1 ,
  ADEN : 1 ,
  CREN1 : 1 ,
  SREN1 : 1 ,
  RC9 : 1 ,
  SPEN1 : 1 ;
} ; 

struct 
{
  unsigned int 
  RX9D1 : 1 ,
  : 2,
  ADDEN1 : 1 ,
  : 2,
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
  RX91 : 1 ;
} ; 

} RCSTA1bits@0xfac  ;

#define _RX9D 0
#define _OERR 1
#define _FERR 2
#define _ADDEN 3
#define _CREN 4
#define _SREN 5
#define _RX9 6
#define _SPEN 7

#define _RCD8 0
#define _OERR1 1
#define _FERR1 2
#define _ADEN 3
#define _CREN1 4
#define _SREN1 5
#define _RC9 6
#define _SPEN1 7

#define _RX9D1 0
#define _ADDEN1 3
#define _NOT_RC8 6

#define _RC8_9 6

#define _RX91 6

// ------------------------------
//        TXSTA
// ------------------------------
unsigned int TXSTA@0xfad ;
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
  TRMT1 : 1 ,
  BRGH1 : 1 ,
  SENDB1 : 1 ,
  SYNC1 : 1 ,
  TXEN1 : 1 ,
  TX8_9 : 1 ,
  CSRC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  TX9D1 : 1 ,
  : 5,
  NOT_TX8 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TX91 : 1 ;
} ; 

} TXSTAbits@0xfad  ;

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SENDB 3
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

#define _TXD8 0
#define _TRMT1 1
#define _BRGH1 2
#define _SENDB1 3
#define _SYNC1 4
#define _TXEN1 5
#define _TX8_9 6
#define _CSRC1 7

#define _TX9D1 0
#define _NOT_TX8 6

#define _TX91 6

// ------------------------------
//        TXSTA1
// ------------------------------
unsigned int TXSTA1@0xfad ;
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
  TRMT1 : 1 ,
  BRGH1 : 1 ,
  SENDB1 : 1 ,
  SYNC1 : 1 ,
  TXEN1 : 1 ,
  TX8_9 : 1 ,
  CSRC1 : 1 ;
} ; 

struct 
{
  unsigned int 
  TX9D1 : 1 ,
  : 5,
  NOT_TX8 : 1 ;
} ; 

struct 
{
  unsigned int 
  : 6,
  TX91 : 1 ;
} ; 

} TXSTA1bits@0xfad  ;

#define _TX9D 0
#define _TRMT 1
#define _BRGH 2
#define _SENDB 3
#define _SYNC 4
#define _TXEN 5
#define _TX9 6
#define _CSRC 7

#define _TXD8 0
#define _TRMT1 1
#define _BRGH1 2
#define _SENDB1 3
#define _SYNC1 4
#define _TXEN1 5
#define _TX8_9 6
#define _CSRC1 7

#define _TX9D1 0
#define _NOT_TX8 6

#define _TX91 6

// ------------------------------
//        TXREG
// ------------------------------
unsigned int TXREG@0xfae ;
// ------------------------------
//        TXREG1
// ------------------------------
unsigned int TXREG1@0xfae ;
// ------------------------------
//        RCREG
// ------------------------------
unsigned int RCREG@0xfaf ;
// ------------------------------
//        RCREG1
// ------------------------------
unsigned int RCREG1@0xfaf ;
// ------------------------------
//        SPBRG
// ------------------------------
unsigned int SPBRG@0xfb0 ;
// ------------------------------
//        SPBRG1
// ------------------------------
unsigned int SPBRG1@0xfb0 ;
// ------------------------------
//        CTMUICON
// ------------------------------
unsigned int CTMUICON@0xfb1 ;
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

} CTMUICONbits@0xfb1  ;

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
unsigned int CTMUCONL@0xfb2 ;
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

} CTMUCONLbits@0xfb2  ;

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
//        CTMUCONH
// ------------------------------
unsigned int CTMUCONH@0xfb3 ;
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

} CTMUCONHbits@0xfb3  ;

#define _CTTRIG 0
#define _IDISSEN 1
#define _EDGSEQEN 2
#define _EDGEN 3
#define _TGEN 4
#define _CTMUSIDL 5
#define _CTMUEN 7

// ------------------------------
//        CCP2CON
// ------------------------------
unsigned int CCP2CON@0xfb4 ;
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

} CCP2CONbits@0xfb4  ;

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
unsigned int ECCP2CON@0xfb4 ;
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

} ECCP2CONbits@0xfb4  ;

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
unsigned int CCPR2@0xfb5 ;
// ------------------------------
//        CCPR2L
// ------------------------------
unsigned int CCPR2L@0xfb5 ;
// ------------------------------
//        CCPR2H
// ------------------------------
unsigned int CCPR2H@0xfb6 ;
// ------------------------------
//        ECCP2DEL
// ------------------------------
unsigned int ECCP2DEL@0xfb7 ;
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

} ECCP2DELbits@0xfb7  ;

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
//        PWM2CON
// ------------------------------
unsigned int PWM2CON@0xfb7 ;
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

} PWM2CONbits@0xfb7  ;

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
//        ECCP2AS
// ------------------------------
unsigned int ECCP2AS@0xfb8 ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSS2BD : 2 ,
  _PSS2AC : 2 ,
  _ECCP2AS : 3 ;
} ; 

} ECCP2ASbits@0xfb8  ;

#define _PSS2BD0 0
#define _PSS2BD1 1
#define _PSS2AC0 2
#define _PSS2AC1 3
#define _ECCP2AS0 4
#define _ECCP2AS1 5
#define _ECCP2AS2 6
#define _ECCP2ASE 7

// The following are aliases ..  
#define __PSS2BD 0:2
#define __PSS2AC 2:2
#define __ECCP2AS 4:3

// ------------------------------
//        PSTR2CON
// ------------------------------
unsigned int PSTR2CON@0xfb9 ;
union
{

struct 
{
  unsigned int 
  STRA : 1 ,
  STRB : 1 ,
  STRC : 1 ,
  STRD : 1 ,
  STRSYNC : 1 ,
  P2DC5 : 1 ,
  CMPL0 : 1 ,
  CMPL1 : 1 ;
} ; 

struct 
{
  unsigned int 
  P2DC0 : 1 ,
  P2DC1 : 1 ,
  P2DC2 : 1 ,
  P2DC3 : 1 ,
  P2DC4 : 1 ,
  : 1,
  P2DC6 : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  : 6,
  _CMPL : 2 ;
} ; 

struct 
{
  unsigned int 
  _P2DC : 5 ;
} ; 

} PSTR2CONbits@0xfb9  ;

#define _STRA 0
#define _STRB 1
#define _STRC 2
#define _STRD 3
#define _STRSYNC 4
#define _P2DC5 5
#define _CMPL0 6
#define _CMPL1 7

#define _P2DC0 0
#define _P2DC1 1
#define _P2DC2 2
#define _P2DC3 3
#define _P2DC4 4
#define _P2DC6 6

// The following are aliases ..  
#define __CMPL 6:2

#define __P2DC 0:5

// ------------------------------
//        CCP1CON
// ------------------------------
unsigned int CCP1CON@0xfba ;
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

} CCP1CONbits@0xfba  ;

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
unsigned int ECCP1CON@0xfba ;
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

} ECCP1CONbits@0xfba  ;

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
unsigned int CCPR1@0xfbb ;
// ------------------------------
//        CCPR1L
// ------------------------------
unsigned int CCPR1L@0xfbb ;
// ------------------------------
//        CCPR1H
// ------------------------------
unsigned int CCPR1H@0xfbc ;
// ------------------------------
//        ECCP1DEL
// ------------------------------
unsigned int ECCP1DEL@0xfbd ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _P1DC : 7 ;
} ; 

} ECCP1DELbits@0xfbd  ;

#define _P1DC0 0
#define _P1DC1 1
#define _P1DC2 2
#define _P1DC3 3
#define _P1DC4 4
#define _P1DC5 5
#define _P1DC6 6
#define _P1RSEN 7

// The following are aliases ..  
#define __P1DC 0:7

// ------------------------------
//        PWM1CON
// ------------------------------
unsigned int PWM1CON@0xfbd ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _P1DC : 7 ;
} ; 

} PWM1CONbits@0xfbd  ;

#define _P1DC0 0
#define _P1DC1 1
#define _P1DC2 2
#define _P1DC3 3
#define _P1DC4 4
#define _P1DC5 5
#define _P1DC6 6
#define _P1RSEN 7

// The following are aliases ..  
#define __P1DC 0:7

// ------------------------------
//        ECCP1AS
// ------------------------------
unsigned int ECCP1AS@0xfbe ;
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

// The following are aliases ..  
struct 
{
  unsigned int 
  _PSS1BD : 2 ,
  _PSS1AC : 2 ,
  _ECCP1AS : 3 ;
} ; 

} ECCP1ASbits@0xfbe  ;

#define _PSS1BD0 0
#define _PSS1BD1 1
#define _PSS1AC0 2
#define _PSS1AC1 3
#define _ECCP1AS0 4
#define _ECCP1AS1 5
#define _ECCP1AS2 6
#define _ECCP1ASE 7

// The following are aliases ..  
#define __PSS1BD 0:2
#define __PSS1AC 2:2
#define __ECCP1AS 4:3

// ------------------------------
//        PSTR1CON
// ------------------------------
unsigned int PSTR1CON@0xfbf ;
union
{

struct 
{
  unsigned int 
  STRA : 1 ,
  STRB : 1 ,
  STRC : 1 ,
  STRD : 1 ,
  STRSYNC : 1 ,
  : 1,
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

} PSTR1CONbits@0xfbf  ;

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
//        WDTCON
// ------------------------------
unsigned int WDTCON@0xfc0 ;
union
{

struct 
{
  unsigned int 
  SWDTEN : 1 ,
  ULPSINK : 1 ,
  ULPEN : 1 ,
  DS : 1 ,
  VBGOE : 1 ,
  ULPLVL : 1 ,
  LVDSTAT : 1 ,
  REGSLP : 1 ;
} ; 

struct 
{
  unsigned int 
  SWDTE : 1 ;
} ; 

} WDTCONbits@0xfc0  ;

#define _SWDTEN 0
#define _ULPSINK 1
#define _ULPEN 2
#define _DS 3
#define _VBGOE 4
#define _ULPLVL 5
#define _LVDSTAT 6
#define _REGSLP 7

#define _SWDTE 0

// ------------------------------
//        ADCON1
// ------------------------------
unsigned int ADCON1@0xfc1 ;
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
  ADCAL : 1 ,
  ADFM : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _ADCS : 3 ,
  _ACQT : 3 ;
} ; 

} ADCON1bits@0xfc1  ;

#define _ADCS0 0
#define _ADCS1 1
#define _ADCS2 2
#define _ACQT0 3
#define _ACQT1 4
#define _ACQT2 5
#define _ADCAL 6
#define _ADFM 7

// The following are aliases ..  
#define __ADCS 0:3
#define __ACQT 3:3

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
  VCFG0 : 1 ,
  VCFG1 : 1 ;
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
  _CHS : 4 ,
  _VCFG : 2 ;
} ; 

} ADCON0bits@0xfc2  ;

#define _ADON 0
#define _GO_NOT_DONE 1
#define _CHS0 2
#define _CHS1 3
#define _CHS2 4
#define _CHS3 5
#define _VCFG0 6
#define _VCFG1 7

#define _GO_DONE 1

#define _DONE 1

#define _GO 1

#define _NOT_DONE 1

// The following are aliases ..  
#define __CHS 2:4
#define __VCFG 6:2

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
  I2C_START : 1 ,
  I2C_STOP : 1 ,
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
  : 2,
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
#define _I2C_START 3
#define _I2C_STOP 4
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
  I2C_START : 1 ,
  I2C_STOP : 1 ,
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
  : 2,
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
#define _I2C_START 3
#define _I2C_STOP 4
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
#define _I2C_DAT 5

// ------------------------------
//        SSP1ADD
// ------------------------------
unsigned int SSP1ADD@0xfc8 ;
// ------------------------------
//        SSP1MSK
// ------------------------------
unsigned int SSP1MSK@0xfc8 ;
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

} SSP1MSKbits@0xfc8  ;

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
  _T2CKPS : 2 ,
  : 1,
  _T2OUTPS : 4 ;
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

#define _TMR1ON 0
#define _RD16 1
#define _NOT_T1SYNC 2
#define _T1OSCEN 3
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
  : 1,
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
#define _IPEN 7

#define _BOR 0
#define _POR 1
#define _PD 2
#define _TO 3
#define _RI 4
#define _CM 5

// ------------------------------
//        CM2CON
// ------------------------------
unsigned int CM2CON@0xfd1 ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM2CONbits@0xfd1  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

// ------------------------------
//        CM2CON1
// ------------------------------
unsigned int CM2CON1@0xfd1 ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM2CON1bits@0xfd1  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

// ------------------------------
//        CM1CON
// ------------------------------
unsigned int CM1CON@0xfd2 ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM1CONbits@0xfd2  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

// ------------------------------
//        CM1CON1
// ------------------------------
unsigned int CM1CON1@0xfd2 ;
union
{

struct 
{
  unsigned int 
  CCH0 : 1 ,
  CCH1 : 1 ,
  CREF : 1 ,
  EVPOL0 : 1 ,
  EVPOL1 : 1 ,
  CPOL : 1 ,
  COE : 1 ,
  CON : 1 ;
} ; 

// The following are aliases ..  
struct 
{
  unsigned int 
  _CCH : 2 ,
  : 1,
  _EVPOL : 2 ;
} ; 

} CM1CON1bits@0xfd2  ;

#define _CCH0 0
#define _CCH1 1
#define _CREF 2
#define _EVPOL0 3
#define _EVPOL1 4
#define _CPOL 5
#define _COE 6
#define _CON 7

// The following are aliases ..  
#define __CCH 0:2
#define __EVPOL 3:2

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
  : 1,
  OSTS : 1 ,
  IRCF0 : 1 ,
  IRCF1 : 1 ,
  IRCF2 : 1 ,
  IDLEN : 1 ;
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
#define _OSTS 3
#define _IRCF0 4
#define _IRCF1 5
#define _IRCF2 6
#define _IDLEN 7

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
  SP0 : 1 ,
  SP1 : 1 ,
  SP2 : 1 ,
  SP3 : 1 ,
  SP4 : 1 ,
  : 1,
  STKUNF : 1 ,
  STKFUL : 1 ;
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
  _SP : 5 ;
} ; 

} STKPTRbits@0xffc  ;

#define _SP0 0
#define _SP1 1
#define _SP2 2
#define _SP3 3
#define _SP4 4
#define _STKUNF 6
#define _STKFUL 7

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
