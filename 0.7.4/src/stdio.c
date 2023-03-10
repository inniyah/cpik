// IO library for CPIK compiler
/*
;   Copyright (C) 2011, Alain Gibaud   alain.gibaud@free.fr
;
;   This file is part of the CPIK library
;   ------------------------------------------------------- 
;   This library is free software; you can redistribute it and/or modify it
;   under the terms of the GNU General Public License as published by the
;   Free Software Foundation; either version 2.1, or (at your option) any
;   later version.
 
;   This library is distributed in the hope that it will be useful,
;   but WITHOUT ANY WARRANTY; without even the implied warranty of
;   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;   GNU General Public License for more details.
 
;  You should have received a copy of the GNU General Public License 
;   along with this library; see the file COPYING. If not, write to the
;   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
;   MA 02110-1301, USA.
 
;   As a special exception, if you link this library with other files,
;   some of which are compiled with CPIK, to produce an executable,
;   this library does not by itself cause the resulting executable to
;   be covered by the GNU General Public License. This exception does
;   not however invalidate any other reasons why the executable file
;   might be covered by the GNU General Public License.

*/

#include <stdio.h>
#include <limits.h>
#include <errno.h>
#include <rom.h>
#include <float.h>
#include <stdarg.h>

// hooks for I/O redirections
void (*io_putchar)(char c) ; 	// output
char (*io_getchar)() ; 		// input
// constants

/* CR */
#define EOL 13

output_hook set_putchar_vector(output_hook v)
//void (*set_putchar_vector( void (*v)(char)) )(char)
{
   output_hook old = io_putchar;
   // void (*old)(char)  = io_putchar;
   io_putchar = v ;
   return old ;
}
input_hook set_getchar_vector(input_hook v)
// char (*set_getchar_vector( char (*v)()) )()
{
   input_hook old = io_getchar ;
   // char (*old)()  = io_getchar;
   io_getchar = v ;
   return old ;
}

void putchar(char c)
{
   io_putchar(c) ;
}

/*
	(Not so) tiny printf
	The following formats are recognized

	***Standard support:
	%c %s %d %u %x %ld %lu %lx 

	***Support when INT32_IO is defined:
	%lld %%llu %llx

	***Support when FLOAT_IO is defined:
	%f %e %E    (maximum precision)
	%<n>f  %<n>e  %<n>E (precision of n digit after decimal point)
	Attention: 0<=n<=7  , 
        and remember that the float internal representation 
        only allows 6 significant decimal digits.
        
	The total width of the result CANNOT be specified
*/

int printf(const char *fmt, ...)
{
   int count = 0 , prec ;
   char      *addpar;
   char       c ;

   addpar = (char *) & fmt;

   while (c = *fmt++)
   {
      if (c != '%')
      {
         putchar(c);
         ++count ;
      }
      else
      {
         c = *fmt++;
#ifdef FLOAT_IO
         prec = -1 ; // default = full precision
         if( c >= '0' && c <= '9')
         {
            prec = c - '0' ;
            if( ! (c = *fmt++) ) break ;
         }
#endif
         if( c == 'l')
         {
            c = *fmt++;
            if( c == 'd')
            {
               addpar -= 2 ;
               count += outdec(*(long *)addpar);
            }
            else if( c == 'u')
            {
               addpar -= 2 ;
               count += outdecu(*(unsigned long *)addpar);
            }
            else if(c == 'x')
            {
               addpar -= 2 ;
               count += outhex(*(long *)addpar, 'a') ;
            }
#ifdef INT32_IO
            else if( c == 'l') // long long
            {
               c = *fmt++ ;
               if(c == 'x')
               {
                  addpar -= 4 ;
                  count += outhex32(*(unsigned long long *)addpar, 'a') ;
               }
               else if( c == 'u')
               {
                  addpar -= 4 ;
                  count += outdecu32(*(unsigned long long *)addpar);
               }
               else if( c == 'd')
               {
                  addpar -= 4 ;
                  count += outdec32(*( long long *)addpar);
               }
            }
#endif
         }
         else
         {
            if( c == 'd')
            {

               --addpar ;
               count += outdec(*(int *)addpar);
            }
#ifdef FLOAT_IO
            else if( c == 'f')
            {
               addpar -= 4 ;
               count += putfloat(*(float *)addpar,  prec, 'f') ;
            }
            else if( c == 'e' || c == 'E' )
            {
               addpar -= 4 ;
               count += putfloat(*(float *)addpar, prec , c ) ;
            }
#endif
            else if( c == 'u')
            {
               --addpar ;
               count += outdecu(*(unsigned int *)addpar);
            }
            else if(c == 'x')
            {
               --addpar ;
               count += outhex(*(unsigned int *)addpar, 'A') ;
            }
            else if(c == 'c')
            {
               --addpar ;
               putchar(*addpar);
               ++count ;
            }
            else if(c == 's')
            {
               char *q ;
               --addpar ;
               --addpar ;

               for ( q = *(char **)addpar; *q ; ++q )
               {
                  putchar(*q);
                  ++count ;
               }
            }
            else
            {
               putchar('%');
               putchar(c);
               ++count ;
               ++count ;
            }
         }
      }
   }
   return count ;
}

int xprintf(const char *fmt,...)
{
   va_list ap ;
   int count = 0 , prec ;
   char       c ;
   long kl ;
   float kf ;
   long long kll ;

   va_start(ap,fmt) ;

   while (c = *fmt++)
   {
      if (c != '%')
      {
         putchar(c);
         ++count ;
      }
      else
      {
         c = *fmt++;
#ifdef FLOAT_IO
         prec = -1 ; // default = full precision
         if( c >= '0' && c <= '9')
         {
            prec = c - '0' ;
            if( ! (c = *fmt++) ) break ;
         }
#endif
         if( c == 'l')
         {
            c = *fmt++;
            if( c == 'd')
            {
               count += outdec(va_arg(ap, long));
            }
            else if( c == 'u')
            {
                count += outdecu(va_arg(ap,unsigned long) );
            }
            else if(c == 'x')
            {
              count += outhex( va_arg(ap, long)  , 'a') ;
            }
#ifdef INT32_IO
            else if( c == 'l') // long long
            {
               c = *fmt++ ;
               if(c == 'x')
               {
                  count += outhex32( va_arg(ap, unsigned long long)  , 'a') ;
               }
               else if( c == 'u')
               {
                   count += outdecu32(va_arg(ap, unsigned long long));
               }
               else if( c == 'd')
               {
                  count += outdec32(va_arg(ap, long long));
               }
            }
#endif
         }
         else
         {
            if( c == 'd')
            {
               count += outdec(va_arg(ap, int ));
            }
#ifdef FLOAT_IO

            else if( c == 'f')
            {
               count += putfloat( va_arg(ap, float )  ,  prec, 'f') ;
            }
            else if( c == 'e' || c == 'E' )
            {
               count += putfloat(   va_arg(ap, float )    , prec , c ) ;
            }
#endif
            else if( c == 'u')
            {
               count += outdecu(va_arg(ap, unsigned int) );
            }
            else if(c == 'x')
            {
               count += outhex( va_arg(ap, unsigned int)  , 'a') ;
            }
            else if(c == 'c')
            {
               putchar(va_arg(ap, char )) ;
               ++count ;
            }
            else if(c == 's')
            {
               char *q ;
               for ( q = va_arg(ap, char* )  ; *q ; ++q )
               {
                  putchar(*q);
                  ++count ;
               }
            }
            else
            {
               putchar('%');
               putchar(c);
               count += 2 ;
            }
         }
      }
   }
   return count ;
}
/*
 
	This version of printf uses a format that is located in
	ROM, and accessed using a ROM accessor
	See printf to know  allowed format specifications
 	TODO : needs to be edited to use va_list
	(For the sake of  consistency  only, this code being almost equivalent
	to a code that uses va_list)
*/

int RFprintf(ROMF_i8_t fmt,...)
{
   int count = 0, i = 0 , prec ;
   char      *addpar;
   char       c ;

   addpar = (char *) & fmt;

   while (c = fmt(i++) )
   {
      if (c != '%')
      {
         putchar(c);
         ++count ;
      }
      else
      {
         c = fmt(i++) ;
#ifdef FLOAT_IO
         prec = -1 ; // default = full precision
         if( c >= '0' && c <= '9')
         {
            prec = c - '0' ;
            if( ! (c = fmt(i++) ) ) break ;
         }
#endif
         if( c == 'l')
         {
            c = fmt(i++);
            if( c == 'd')
            {
               addpar -= 2 ;
               count += outdec(*(long *)addpar);
            }
            else if( c == 'u')
            {
               addpar -= 2 ;
               count += outdecu(*(unsigned long *)addpar);
            }
            else if(c == 'x')
            {
               addpar -= 2 ;
               count += outhex(*(long *)addpar, 'a') ;
            }
#ifdef INT32_IO
            else if( c == 'l') // long long
            {
               c = fmt(i++) ;
               if(c == 'x')
               {
                  addpar -= 4 ;
                  count += outhex32(*(unsigned long long *)addpar, 'a') ;
               }
               else if( c == 'u')
               {
                  addpar -= 4 ;
                  count += outdecu32(*(unsigned long long *)addpar);
               }
               else if( c == 'd')
               {
                  addpar -= 4 ;
                  count += outdec32(*( long long *)addpar);
               }
            }
#endif
         }
         else
         {
            if( c == 'd')
            {
               --addpar ;
               count += outdec(*(int *)addpar);
            }
#ifdef FLOAT_IO
            else if( c == 'f')
            {
               addpar -= 4 ;
               count += putfloat(*(float *)addpar,  prec , 'f' )   ;
            }
            else if( c == 'e' ||  c == 'E' )
            {
               addpar -= 4 ;
               count += putfloat(*(float *)addpar, prec , c ) ;
            }
#endif
            else if( c == 'u')
            {
               --addpar ;
               count += outdecu(*(unsigned int *)addpar);
            }
            else if(c == 'x')
            {
               --addpar ;
               count += outhex(*(unsigned int *)addpar, 'A') ;
            }
            else if(c == 'c')
            {
               --addpar ;
               putchar(*addpar);
               ++count ;
            }
            else if(c == 's')
            {
               char *q ;
               --addpar ;
               --addpar ;

               for ( q = *(char **)addpar; *q ; ++q )
               {
                  putchar(*q);
                  ++count ;
               }
            }
            else
            {
               putchar('%');
               putchar(c);
               ++count ;
               ++count ;
            }
         }
      }
   }
   return count ;
}

/* Output 16 bit integer as an unsigned long
   digits from 10 to 15 (A to F) are 
     - uppercase if up is 'A'
     - lowercase if up is 'a'
*/
int outhex(unsigned long n, char up)
{
   int       c,  flag , k , count;


   for (count = 0, flag = 0, k = 12  ; k >= 0 ; k -= 4 )
   {
      c = (n >> k) ;
      c &= 0xF;
      if (  c || !k  || flag  )
      {
         c = (c >= 10) ? c - 10 + up : c + '0' ;
         flag = 0xFF ;
         putchar(c);
         ++count ;
      }
   }
   return count ;
}


/* Output 32 bit integer as an unsigned long long
   digits from 10 to 15 (A to F) are 
     - uppercase if up is 'A'
     - lowercase if up is 'a'
*/
int outhex32(unsigned long long n, char up)
{
   int       c, flag = 0, k = 28, count;

   for (count = 0 ; k >= 0 ;k -= 4 )
   {
      c = (n >> k) & 0xF;
      if ( c || !k  || flag)
      {
         flag = 0xFF ;
         c = (c >= 10) ? c - 10 + up : c + '0' ;
         putchar(c);
         ++count ;
      }
   }
   return count ;
}



int outdec(long snumber)
{
   int count ;

   if( snumber < 0)
   {
      putchar('-');
      if( snumber == -32768L)
         count = outdecu(32768UL) ;
      else
         count = outdecu(-snumber) ;
   }
   else
      count = outdecu(snumber) ;
   return count ;
}

int outdecu(unsigned long number)
{
   unsigned long k = 10000 ;
   unsigned int  zs = 0;
   int count = 0 ;
   int  c;

   while (k >= 1U)
   {
      c = number / k + '0';
      if ((c != '0') || (k == 1U) || zs)
      {
         zs = -1;
         putchar(c);
         ++count ;
      }
      number %=  k;
      k /= 10;
   }
   return count ;
}
int outdec32(long long snumber)
{
   int count ;

   if( snumber < 0)
   {
      putchar('-');
      if( snumber == LLONG_MIN)
         count = outdecu32(-LLONG_MIN ) ;
      else
         count = outdecu32(-snumber) ;
   }
   else
      count = outdecu32(snumber) ;
   return count ;
}

int outdecu32(unsigned long long number)
{
   unsigned long long k = 1000000000ULL ;
   unsigned int  zs = 0;
   int count = 0 ;
   int  c;

   while (k >= 1ULL)
   {
      c = number / k + '0';
      if ((c != '0') || (k == 1U) || zs)
      {
         zs = -1;
         putchar(c);
         ++count ;
      }
      number %=  k;
      k /= 10 ;
   }
   return count ;
}

int puts(const char *p)
{
   int count = puts_(p) ;
   putchar('\n') ;
   return count + 1 ;
}

int RFputs(ROMF_i8_t p)
{
   int count = RFputs_(p) ;
   putchar('\n') ;
   return count + 1 ;
}

int puts_(const char *p)
{
   int count = 1 ;

   for( ; *p ; ++p)
   {
      putchar(*p) ;
      ++count ;
   }
   return count ;
}

int RFputs_(ROMF_i8_t p)
{
   int count = 0 ;

   for( ; p(count) ; ++count)
   {
      putchar(p(count) );
   }
   return ++count ;
}

/* --------------------------------------------------------------------------
	INPUT
*/
/*
; Lecture d'un caractere sur la console, sans echo
; int c; 
; c = getch() ;
; retourne le caractere lu (ou $FFFF si fin de fichier)
; le caractere est lu comme un unsigned char, et renvoye comme un long
*/
#define CTRL_D  4U
#define CTRL_Z  26U
#define DEL	127U
#define BS	8U

long getch()
{
   unsigned int c = io_getchar() ;
   if( c == CTRL_D || c == CTRL_Z) return EOF ;
   if( c == EOL ) c = '\n' ;
   return c ;
}

long getche()
{
   long c = getch() ;
   if( c != EOF) putchar( c)  ;
   return c ;
}

// void crlf()
// {
// 	putchar(0xD) ;
// 	putchar(0xA) ;
// }

/*
; +++++++++++++++++++++++++++++++++++++++++++++
; char p[nmax];
; int nmax , n , *eof_flag;
; n = fillbuf(char p[],int nmax, int *eof_flag) ;
; renvoie le nombre de caracteres lus
; eof_flag est positionne si la ligne est validee par un EOF
; (EOF == CTRL-Z ou CTRL-D)
; retour si on a lu nmax caracteres, 
;        ou si on a lu un newline, 
;        ou EOF
; PAS DE DELIMITEUR DE FIN DE LIGNE
; le backspace est gere 
*/


unsigned int fillbuf(char p[], unsigned int nmax, int *eof_flag)
{
   unsigned int cpt ;
   long c ;

   --nmax ; // reserve for nul
   *eof_flag = 0 ;

   for( cpt = 0 ; cpt < nmax ; )
   {
      c = getch() ;

      if( c == EOF )
      {
         *eof_flag = 1 ;
         putchar('\n') ;
         break ;
      }
      else if( c == DEL && cpt >= 1U )
      {
         putchar(BS) ;
         putchar(' ') ;
         putchar(BS) ;
         cpt-- ;
      }
      else
      {
         putchar( p[cpt++] = c ) ;
         if(c == '\n') break ;
      }
   }
   p[cpt] = 0 ;
   return cpt ;
}


char *gets(char *t)
{
   char c , *oldt = t;

   while( (c = getchar()) != '\n')
      * t++ = c ;
   *t = 0 ;
   return oldt ;
}

#define EOFSTATE 1
#define IO_BUF_SIZE 80

char      io_buf[IO_BUF_SIZE] ;      /* input buffer */
int       io_count = 0,              /* number of char not read yet */
                     io_status = 0;  /* 1 if EOF found, else 0 */
char     *io_ptr;                    /* points to next char to be read */
/* ------------------------------------------------------------------
*/
long getchar()
{
   if (io_count <= 0 && io_status != EOFSTATE)
      io_count = fillbuf(io_ptr = io_buf, IO_BUF_SIZE , &io_status);
   /*
   NOTE: le flag EOF est efface chaque fois que getchar() renvoie EOF
   */
   return io_count <= 0   ? (io_status = 0, EOF)
          : (--io_count, (*io_ptr++) );

}

long ungetchar(long c)
{
   if (io_count < IO_BUF_SIZE && c != EOF)
   {
      ++io_count;
      return *--io_ptr = c;
   }
   return EOF;
}

/*
   scanf : recognized format specifications are  %c %d %s %x %u %ld %lx %lu %lld %llu %llx
	TODO: use va_list
*/
int scanf(const char *f,...)
{
   char      **arg = &f;
   int       c, neg, cnt ;
   int       n  ;   /* number of formats honoured */
   long      k  ;   /* character red */
   char     *p ;
   long long k32 ;


   for (n = 0 ; c = *f++ ; )
   {
      if (c != '%')
      {
         k = getchar();
         if (c != (int)k)
            return n;
      }
      else
      {
         c = *f++ ;
         {
            if( c == 0)
               return n;
            else if( c == 'c')
            {
               k = getchar() ;
               if( k == EOF ) break ;
               --arg ;
               **arg = k ;
               ++n;
            }
            else if(c == 'd' || c == 'u')
            {
               if( getlong(&k, 10) == 0) break ;
               --arg ;
               *((int *)*arg) = k;
               ++n;
            }
            else if(c == 'x' )
            {
               if( getlong(&k, 16) == 0) break ;
               --arg ;
               *((int *)*arg) = k;
               ++n;
            }
#ifdef FLOAT_IO
            else if(c == 'f' )
            {
               float ff ;
               if( ! getfloat(&ff) ) break ;
               --arg ;
               *((float *)*arg) = ff;
               ++n;
            }
#endif
            else if( c == 'l')
            {
               c = *f++ ;
               if(c == 'd' || c == 'u')
               {
                  if( getlong(&k, 10) == 0) break ;
                  --arg ;
                  *((long *)*arg) = k;
                  ++n;
               }
               else if(c == 'x')
               {
                  if( getlong(&k, 16) == 0) break ;
                  --arg ;
                  *((long *)*arg) = k;
                  ++n;
               }
#ifdef INT32_IO
               else if( c == 'l')
               {
                  c = *f++ ;
                  if(c == 'd' || c == 'u')
                  {
                     if( getlong32(&k32, 10) == 0) break ;
                     --arg ;
                     *((long long *)*arg) = k32;
                     ++n;
                  }
                  else if(c == 'x' )
                  {
                     if( getlong32(&k32, 16) == 0) break ;
                     --arg ;
                     *((long long *)*arg) = k32;
                     ++n;
                  }
               }
#endif

            }
            else if (c == 's')
            {
               --arg ;
               skipwchar() ;
               for( p = *arg  ; ((k = getchar()) != EOF)  && !isblank(k)  ; ++p) *p = k ;
               ungetchar(k) ;
               *p = 0 ;
               if( p == *arg) break ;
               ++n ;
            }
         }
      }
   }
   return n;
}

/*
   RFscanf : recognized format specifications are  %c %d %s %x %u %ld %lx %lu %lld %llu %llx
   Not tested
   TODO - convert the code to va_arg 
*/
int RFscanf(ROMF_i8_t f, ...)
{
   char      **arg = (char **) & f;
   int       c, neg, cnt, kf ;
   int       n  ;   /* number of formats honoured */
   long      k  ;   /* character red */
   char     *p ;
   long long k32 ;


   for (kf = 0, n = 0 ; c = f(kf++)  ; )
   {
      if (c != '%')
      {
         k = getchar();
         if (c != (int)k)
            return n;
      }
      else
      {
         c = f(kf++) ;
         {
            if( c == 0)
               return n;
            else if( c == 'c')
            {
               k = getchar() ;
               if( k == EOF ) break ;
               --arg ;
               **arg = k ;
               ++n;
            }
            else if(c == 'd' || c == 'u')
            {
               if( getlong(&k, 10) == 0) break ;
               --arg ;
               *((int *)*arg) = k;
               ++n;
            }
            else if(c == 'x' )
            {
               if( getlong(&k, 16) == 0) break ;
               --arg ;
               *((int *)*arg) = k;
               ++n;
            }
#ifdef FLOAT_IO
            else if(c == 'f' )
            {
               float ff ;
               if( ! getfloat(&ff) ) break ;
               --arg ;
               *((float *)*arg) = ff;
               ++n;
            }
#endif
            else if( c == 'l')
            {
               c = f(kf++) ;
               if(c == 'd' || c == 'u')
               {
                  if( getlong(&k, 10) == 0) break ;
                  --arg ;
                  *((long *)*arg) = k;
                  ++n;
               }
               else if(c == 'x')
               {
                  if( getlong(&k, 16) == 0) break ;
                  --arg ;
                  *((long *)*arg) = k;
                  ++n;
               }
#ifdef INT32_IO
               else if( c == 'l')
               {
                  c = f(kf++) ;
                  if(c == 'd' || c == 'u')
                  {
                     if( getlong32(&k32, 10) == 0) break ;
                     --arg ;
                     *((long long *)*arg) = k32;
                     ++n;
                  }
                  else if(c == 'x' )
                  {
                     if( getlong32(&k32, 16) == 0) break ;
                     --arg ;
                     *((long long *)*arg) = k32;
                     ++n;
                  }
               }
#endif

            }
            else if (c == 's')
            {
               --arg ;
               skipwchar() ;
               for( p = *arg  ; ((k = getchar()) != EOF)  && !isblank(k)  ; ++p) *p = k ;
               ungetchar(k) ;
               *p = 0 ;
               if( p == *arg) break ;
               ++n ;
            }
         }
      }
   }
   return n;
}

void skipwchar()
{
   long       k;

   while ( isblank(k = getchar()) ) ;
   ungetchar(k);
}

int isblank(int c)
{
   return c == ' ' || c == '\n' || c == '\t' ;
}

int getlong(long *pn, int base)
{
   long  r ;
   int c, cnt, k , neg;

   skipwchar();
   k = getchar() ;
   if( k == EOF ) return 0 ;
   neg = (k == '-') ? 1 : (ungetchar(k), 0);
   for (cnt = r = 0 ; (k = digit(c = getchar(), base)) != -1 ; ++cnt)
   {
      r = (r * base) + k ;
   }
   ungetchar(c) ;
   if (cnt == 0) return 0 ;
   *pn =  neg ? - r : r ;
   return 1 ;
}

int getlong32(long long *pn, int base)
{
   unsigned long long r ;
   int c, cnt, k , neg;

   skipwchar();
   k = getchar() ;
   if( k == EOF ) return 0 ;
   neg = (k == '-') ? 1 : (ungetchar(k), 0);
   for (cnt = 0, r = 0; (k = digit(c = getchar(), base)) != -1 ; ++cnt)
   {
      r = (r * base) + k ;
   }
   ungetchar(c) ;
   if (cnt == 0) return 0 ;
   *pn =  neg ? -r : r ;
   return 1 ;
}

int digit(char c, int base)
{
   if( c >= '0' && c <= '9')
      c -= '0' ;
   else if( c >= 'a' && c <= 'z')
      c -= 'a' - 10 ;
   else if( c >= 'A' && c <= 'Z')
      c -= 'A' - 10 ;
   else
      c = -1 ;

   if( c >= base) c = -1 ;

   return c ;
}


int _RIputs_()
{

   PREPARE_ROM_ACCESS ;
   READ_ROMBYTE ;
   while( prodl )
   {
      putchar( prodl ) ;
      READ_ROMBYTE ;
   }
   FINISH_ROM_ACCESS ;
   return 0 ;
}


/*
   converts a floating point number to an ascii string 
   that is immediatly written to standard output

   returns the number of chars written
*/


int  putfloat (float x, int prec, int format)
{
   int ie, i, k, ndig, estyle, cnt ;
   float y;


   cnt = 0 ;
   ndig = ( prec < 0) ? 7 : (prec > 6 ? 7 : prec + 1);
   estyle = (format == 'e' || format == 'E') ;
   /* print in e format unless last arg is 'f' */
   ie = 0;
   /* if x negative, write minus and reverse */
   if ( x < 0)
   {
      putchar( '-' );
      ++cnt ;
      x = -x;
   }

   /* put x in range 1 <= x < 10 */
   if (x  != 0.0)
   {
      while (x < 1.0)
      {
         x *= 10.0;
         ie--;
      }
   }

   while (x >= 10.0)
   {
      x /= 10.0;
      ie++;
   }

   /* in f format, number of digits is related to size */
   if (!estyle) ndig += ie;

   /* round. x is between 1 and 10 and ndig will be printed to
             right of decimal point so rounding is ... */
   for (y = i = 1; i < ndig; i++)
      y /=  10.;
   x += y / 2.;

   if (x >= 10.0) /* repair rounding disasters */
   {
      x = 1.0 ;
      ie++;
   }

   /* now loop.  put out a digit (obtain by multiplying by
   10, truncating, subtracting) until enough digits out */
   /* if NOT estyle, and leading zeros, they go out special */
   if (!estyle && ie < 0)
   {
      putchar('0');
      putchar('.'); cnt += 2 ;
      if (ndig < 0) ie = ie - ndig; /* limit zeros if underflow */
      for (i = -1; i > ie; i--)
      {
         putchar( '0' );
         ++cnt ;
      }
   }
   for (i = 0; i < ndig; i++)
   {
      k = x;
      putchar( k + '0' ) ;
      ++cnt ;
      if (i == (estyle ? 0 : ie)) /* where is decimal point */
      {
         putchar('.');
         ++cnt ;
      }
      x -= (y = k);
      x *= 10.0;
   }

   /* now, in estyle,  put out exponent if not zero */
   if (estyle && ie != 0)
   {
      putchar( format ); 
      ++cnt ;
      if (ie < 0)
      {
         ie = -ie;
         putchar( '-' ); 
         ++cnt ;
      }
      for (k = 100; k > ie; k /= 10);

      for (; k > 0; k /= 10)
      {
         putchar( ie / k + '0' ); 
         ++cnt ;
         ie = ie % k;
      }
   }
   return cnt ;
}
/* -------------------------------------------------------
	Reads a float from the standard input, and store it
	in the float pointed to by pf
 
	Returns: The number of digits 
	(0 means that the read has failed)
*/
int  getfloat(float *pf )
{
   float number;
   long exponent;
   int negative;
   float p10;
   int n;
   int num_digits;
   int num_decimals;
   int c ;

   // Skip leading whitespace
   while ( (c = getchar()) == ' ' ||  c == '\t' || c == '\n' )  ;

   // Handle optional sign
   negative = 0;
   switch (c)
   {
   case '-':
      negative = 1; // Fall through to increment position
   case '+':
      break ;
   default:
      ungetchar(c) ;
      break ;
   }

   number = 0.0;
   exponent = 0;
   num_digits = 0;
   num_decimals = 0;

   // Process string of digits
   while ( (c = getchar()) >= '0' && c <= '9')
   {
      number = number * 10.0 + (c - '0');
      num_digits++;
   }

   // Process decimal part
   if (c  == '.')
   {
      while ( (c = getchar()) >= '0' && c <= '9')
      {
         number = number * 10.0 + (c - '0');
         num_digits++;
         num_decimals++;
      }
      exponent -= num_decimals;
   }

   if (num_digits == 0)
   {
      errno = ERANGE;
      *pf = 0.0 ;
      return 0 ;
   }

   // Correct for sign
   if (negative) number = -number;

   // Process an exponent string
   if (c == 'e' || c == 'E')
   {
      // Handle optional sign
      negative = 0;
      c = getchar() ;
      switch(c)
      {
      case '-':
         negative = 1;   // Fall through to increment pos
      case '+':
         break ;
      default:
         ungetchar(c) ;
         break ;
      }

      // Process string of digits
      n = 0;
      while ( (c = getchar()) >= '0' &&  c <= '9' )
      {
         n = n * 10 + (c - '0');
      }

      if (negative)
         exponent -= n;
      else
         exponent += n;
   }
   if (exponent < FLT_MIN_EXP  || exponent > FLT_MAX_EXP)
   {
       errno = ERANGE;
      *pf = HUGE_VALF ;
   }
   else
   {
      // Scale the result
      p10 = 10.;
      n = exponent;
      if (n < 0) n = -n;
      while (n)
      {
         if (n & 1)
         {
            if (exponent < 0)
               number /= p10;
            else
               number *= p10;
         }
         n >>= 1;
         p10 *= p10;
      }
      if (number == HUGE_VALF) errno = ERANGE;
      *pf = number ;
   }

   return num_digits ;
}
