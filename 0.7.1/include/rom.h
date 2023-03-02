#ifndef ROM_H
#define ROM_H
/*
	Support for access to ROM-located data 
*/
typedef int (*ROMF_i8_t)(unsigned int) ;
typedef unsigned int (*ROMF_ui8_t)(unsigned int) ;
typedef long  (*ROMF_i16_t)(unsigned int) ;
typedef unsigned long (*ROMF_ui16_t)(unsigned int) ;

typedef void (*ROMptr)()  ;


/*
	aliases for TBLPTR, TOS , PRODH/L and TABLAT
*/
char *tblptr@0xFF6 ;
char *tos@0xFFD ;
unsigned  int tosl@0xFFD ;
unsigned  int tblptru@0xFF8 ;
unsigned  int tblptrl@0xFF6 ;
unsigned  int tablat@0xFF5 ;
unsigned  long prodhl@0xFF3 ;
unsigned  int prodl@0xFF3 ;

#include <interrupt.h>

// defines byte data in ROM, that can be accessed by an automatically defined function
// example:  ROMF_DATA8(foo,"1,2,3,4,5,'A','B'") 
// foo(5) returns 65 that is the ASCII code of 'A'
// Memory cost : the data size plus 6 words.
#define ROMF_DATA8(name, data) int name(unsigned int index)\
{ \
	__asm__("\tmovlw	HIGH " #name "_rom8data" ); \
	__asm__("\tmovwf	TBLPTRH,0") ; \
	__asm__("\tmovlw	LOW " #name "_rom8data" ); \
	__asm__("\tmovwf	TBLPTRL,0") ; \
\
	__asm__("\tgoto	getROM8indexed") ;\
	__asm__(";<?getROM8indexed>") ;\
	__asm__(#name"_rom8data") ;\
	__asm__("\tDB "data) ;\
}
#define ROMF_DATA8U(name, data) unsigned ROMF_DATA8(name,data)

#define ROMF_TXT(name, data) int name(unsigned int index)\
{ \
	__asm__("\tmovlw	HIGH " #name "_rom8data" ); \
	__asm__("\tmovwf	TBLPTRH,0") ; \
	__asm__("\tmovlw	LOW " #name "_rom8data" ); \
	__asm__("\tmovwf	TBLPTRL,0") ; \
\
	__asm__("\tgoto	getROM8indexed") ;\
	__asm__(";<?getROM8indexed>") ;\
	__asm__(#name"_rom8data") ;\
	__asm__("\tDA " #data) ;\
}

// defines word data in ROM
#define ROMF_DATA16(name, data) long name(unsigned int index)\
{ \
	__asm__("\tmovlw	HIGH " #name "_rom16data" ); \
	__asm__("\tmovwf	TBLPTRH,0") ; \
	__asm__("\tmovlw	LOW " #name "_rom16data" ); \
	__asm__("\tmovwf	TBLPTRL,0") ; \
\
	__asm__("\tgoto	getROM16indexed") ;\
	__asm__(";<?getROM16indexed>") ;\
	__asm__(#name"_rom16data") ;\
	__asm__("\tDW "data) ;\
}

#define ROMF_DATA16U(name, data) unsigned ROMF_DATA16(name,data)

// put a text in program ROM 
// no symbol is attached to this text
#define ROM_TXT(txt) \
	__asm__("\tDA " #txt) ;
	
#define ROM_BYTES(data) \
	__asm__("\tDB "data) ;

#define ROM_WORDS(data) \
	__asm__("\tDW "data) ;

#define ROM_ENTRY(name) void name()

//
// macros to access data located at return address
//	
//	__asm__(" bcf 	RCON,GIE,0") ;\
//	__asm__(" bsf 	RCON,GIE,0") ;
#define PREPARE_ROM_ACCESS \
	__asm__(" bsf 	EECON1,EEPGD,0") ;\
	__asm__(" bcf 	EECON1,CFGS,0") ;\
	__asm__(" movff TOSU,TBLPTRU") ;\
	__asm__(" movff TOSH,TBLPTRH") ;\
	__asm__(" movff TOSL,TBLPTRL") ;
 
#define READ_ROMBYTE \
	__asm__(" TBLRD *+") ;\
	__asm__(" movff TABLAT,PRODL") ;

#define READ_ROMWORD \
	__asm__(" TBLRD *+") ;\
	__asm__(" movff TABLAT,PRODL") ;\
	__asm__(" TBLRD *+") ;\
	__asm__(" movff TABLAT,PRODH") ;

#define INC_TOS \
	__asm__(" incf TOSL,F,0") ;\
	__asm__(" movlw 0") ;\
	__asm__(" addwfc TOSH,F,0") ;\
	__asm__(" addwfc TOSU,F,0") ;

#define ALIGN_TOS \
	__asm__(" btfss TOSL,0,0") ;\
	__asm__(" bra  $+10") ;\
	INC_TOS ; 

#define FINISH_ROM_ACCESS \
	__asm__(" btfsc TBLPTRL,0,0") ;\
	__asm__(" TBLRD *+ ; an extra read, just for alignment") ;\
	__asm__(" movf TBLPTRU,W,0") ;  __asm__(" movwf TOSU,0") ; \
	__asm__(" movf TBLPTRH,W,0") ;  __asm__(" movwf TOSH,0") ; \
	__asm__(" movf TBLPTRL,W,0") ;  __asm__(" movwf TOSL,0") ; 

#define ROM_POINTER(p) _make_rom_pointer_(p)	;
void _make_rom_pointer_(ROMptr) ;
#endif
