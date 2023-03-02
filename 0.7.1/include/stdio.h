#ifndef _STDIO_H
#define _STDIO_H
#include <rom.h>
/*
	stdio.h for cpik
	Please see pdf documentation for details
	
*/
typedef void (*output_hook)(char) ;
typedef char (*input_hook)() ;

output_hook set_putchar_vector(output_hook) ;
input_hook set_getchar_vector(input_hook) ;

/* ----------------------------------------------------------------
 output functions 
*/
void putchar(char c) ;
int puts(char *p) ; 	/* with \n */
int puts_(char *p) ; 	/* without \n */

/* low-level hex printing */
int outhex(unsigned long n, char up) ;
int outhex32(unsigned long long  n, char up) ;

/* low-level decimal printing */
int outdec(long snumber);
int outdecu(unsigned long number);
int outdec32(long long  snumber);
int outdecu32(unsigned long long number);


/* low-level float printing  */
/* prec=nb of digit after decimal point, format=E or e or f */
int putfloat (float x, int prec, int format);

/* standard printf  */
int printf(const char *fmt,...) ;

/* -------------------------------------------------------------
	input functions 
*/
/* low-level, char oriented */
long getchar() ;
long getch() ;
long getche() ;
unsigned int fillbuf(char p[],unsigned int nmax, int *eof_flag);
char *gets(char *t) ;
long ungetchar(long c) ;
void skipwchar();


/* low-level, int oriented */
int getlong(long *pn,int base); /* 16 bit */
int getlong32(long long *pn,int base); /* 32 bit */

/* low-level, float oriented */
int getfloat(float *) ;

/* standard scanf */
int scanf(const char *,...) ;

// various helpers
int isblank(char c) ; 
int digit(char c, int base);

#define EOF (-1)
#ifndef NULL
#define NULL 0
#endif


// experimental
int _RIputs_() ;
#define RIputs(txt) _RIputs_() ; \
ROM_TXT(txt) ;

int RFputs(ROMF_i8_t ra) ;
int RFputs_(ROMF_i8_t ra) ;
int RFprintf(ROMF_i8_t fmt,...) ;
int RFscanf(ROMF_i8_t fmt,...) ;
#endif



