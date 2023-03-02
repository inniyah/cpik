#include "stdio.h"
#include "stdlib.h"
#include "float.h"
#include "errno.h"
/* used by the macro assert() */
int _assert(long line,char *s)
{
     puts_("AF-L ");
     outdec(line) ;
     puts_(" : ");
     puts(s) ;
     exit(+1) ;
     return 0 ;
}

void exit(int i)
{
	__asm__("\tsleep") ;
}


//
// Apres test, cette fonction est remarquablement bonne (et souple)
// et gere bien les arrondis a l'affichage
// Dommage que l'auteur soit inconnu ..
// De plus, elle est plutot simple, et n'utilise aucune fct mathematique

// Quelques modifs:
// 1) la precision max est obtenue avec prec < 0 (� l'origine :  prec <= 0)
//    ce qui permet d'obtenir zero chiffre apres la virgule lorsque prec == 0
// 2) y est float (au lieu de double), pour des raisons évidentes
//    ça ne nuit pas, semble-il ..
// 3) Le parametre format est E ou e au lieu de F ou f  (inversion des tests)
//    cela permet de le réutiliser pour avoir une impression avec E ou e
// 4) les antiques =+ =* .. etc remplacés par leur équivalent moderne +=
// 5) renvoie l'adr de début du buffer
// 6) Le test (x > 0) est remplacé par (x != 0), puisque, de toute façon
//    x est positif (grace au test juste au dessus)
char * ftoa (float x, char * str, int prec, int format)
{
   /* converts a floating point number to an ascii string */
   /* x is stored into str, which should be at least 30 chars long */
   int ie, i, k, ndig, estyle;
   float y;
   char *str1 = str ;


   ndig = ( prec < 0) ? 7 : (prec > 6 ? 7 : prec + 1);
   estyle = (format == 'e' || format == 'E') ;
   /* print in e format unless last arg is 'f' */
   ie = 0;
   /* if x negative, write minus and reverse */
   if ( x < 0)
   {
      *str++ = '-';
      x = -x;
   }

   /* put x in range 1 <= x < 10 */
   if (x != 0.0)
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
      y /= 10.;
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
      *str++ = '0';
      *str++ = '.';
      if (ndig < 0) ie = ie - ndig; /* limit zeros if underflow */
      for (i = -1; i > ie; i--)
         *str++ = '0';
   }
   for (i = 0; i < ndig; i++)
   {
      k = x;
      *str++ = k + '0';
      if (i == (estyle ? 0 : ie)) /* where is decimal point */
         *str++ = '.';
      x -= (y = k);
      x *= 10.0;
   }

   /* now, in estyle,  put out exponent if not zero */
   if (estyle && ie != 0)
   {
      *str++ = format;
      if (ie < 0)
      {
         ie = -ie;
         *str++ = '-';
      }
      for (k = 100; k > ie; k /= 10);

      for (; k > 0; k /= 10)
      {
         *str++ = ie / k + '0';
         ie = ie % k;
      }
   }
   *str = '\0';
   return str1;
}



//
// strtod.c
//
// Convert string to double
//
// Copyright (C) 2002 Michael Ringgaard. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. Neither the name of the project nor the names of its contributors
//    may be used to endorse or promote products derived from this software
//    without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.
//
// ------------------------------------------------------------------
// The following function is an adaptation of Michael Ringgaard's strtod()
// and uses the same distribution license as the original code
// 					Alain Gibaud, 2011
float strtof(const char *str, char **endptr)
{
   float number;
   long exponent;
   int negative;
   char *p = (char *) str;
   float p10;
   int n;
   int num_digits;
   int num_decimals;

   // Skip leading whitespace
   while ( *p == ' ' || *p == '\t' || *p == '\n' ) p++;

   // Handle optional sign
   negative = 0;
   switch (*p)
   {
   case '-':
      negative = 1; // Fall through to increment position
   case '+':
      p++;
   }

   number = 0.0;
   exponent = 0;
   num_digits = 0;
   num_decimals = 0;

   // Process string of digits
   while (*p >= '0' && *p <= '9')
   {
      number = number * 10.0 + (*p - '0');
      p++;
      num_digits++;
   }

   // Process decimal part
   if (*p == '.')
   {
      p++;

      while ( *p >= '0' && *p <= '9')
      {
         number = number * 10.0 + (*p - '0');
         p++;
         num_digits++;
         num_decimals++;
      }

      exponent -= num_decimals;
   }

   if (num_digits == 0)
   {
      // errno = ERANGE;
      return 0.0;
   }

   // Correct for sign
   if (negative) number = -number;

   // Process an exponent string
   if (*p == 'e' || *p == 'E')
   {
      // Handle optional sign
      negative = 0;
      switch(*++p)
      {
      case '-':
         negative = 1;   // Fall through to increment pos
      case '+':
         p++;
      }

      // Process string of digits
      n = 0;
      while ( *p >= '0' && *p <= '9' )
      {
         n = n * 10 + (*p - '0');
         p++;
      }

      if (negative)
         exponent -= n;
      else
         exponent += n;
   }

   if (exponent < FLT_MIN_EXP  || exponent > FLT_MAX_EXP)
   {
      errno = ERANGE;
      return HUGE_VALF;
   }

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

   //if (number == HUGE_VALF) errno = ERANGE;
   if (endptr) *endptr = p;

   return number;
}

float atof(const char *str)
{
   return strtof(str, 0);
}

int isspace(char c)
{
	switch(c)
	{
		case ' ' : case '\n' : case '\t': return 1 ;
	}
	return 0 ;
}

int isdigit(char c)
{
	// unsigned comparisons are faster
	return (unsigned char)c >= (unsigned char)'0' && (unsigned char)c <= (unsigned char)'9' ;
}

int atoi(const char *s)
{
	int neg , c ;
	unsigned int res ;

	while( isspace(*s) ) ++s ;

	neg = 0 ;	
	switch(*s)
	{	
		case '-' : neg = 1 ;
		case '+' : ++s ;
	}

	for( res = 0 ; isdigit( c = *s )  ; ++s )
		res = res * 10 + (c - '0') ;
	
	return neg ? -res : res ;	
}

long atol(const char *s)
{
	int neg , c ;
	unsigned long res ;

	while( isspace(*s) ) ++s ;

	neg = 0 ;	
	switch(*s)
	{	
		case '-' : neg = 1 ;
		case '+' : ++s ;
	}

	for( res = 0 ; isdigit( c = *s )  ; ++s )
		res = res * 10 + (c - '0') ;
	
	return neg ? -res : res ;	
}

long long  atoll(const char *s)
{
	int neg , c ;
	unsigned long long res ;

	while( isspace(*s) ) ++s ;

	neg = 0 ;	
	switch(*s)
	{	
		case '-' : neg = 1 ;
		case '+' : ++s ;
	}

	for( res = 0 ; isdigit( c = *s )  ; ++s )
		res = res * 10 + (c - '0') ;
	
	return neg ? -res : res ;	
}
