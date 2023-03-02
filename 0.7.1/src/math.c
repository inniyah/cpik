/*
        Copyright (C) 2011 Alain.Gibaud alain.gibaud@free.fr
	
	The original code has been adaptated by A.Gibaud for the cpik compiler
	
 	1) Bug fixes in expf()
	2) removing const in passed-by-value formal parameters 
        (there is no reason to do that - excepted if the compiler 
        passes floats by address :-( )
	3) Move float constants to ROM to save RAM space

	The following copyright applies to each function of this file, 
	excepted when specified
*/

/*-------------------------------------------------------------------------
   Copyright (C) 2001, 2002, Jesus Calvino-Fraga, jesusc@ieee.org
 
   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2.1, or (at your option) any
   later version.
 
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License 
   along with this library; see the file COPYING. If not, write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.
 
   As a special exception, if you link this library with other files,
   some of which are compiled with SDCC, to produce an executable,
   this library does not by itself cause the resulting executable to
   be covered by the GNU General Public License. This exception does
   not however invalidate any other reasons why the executable file
   might be covered by the GNU General Public License.
-------------------------------------------------------------------------*/
#include <math.h>
#include <sys/types.h>
#include <errno.h>

#define true 1
#define false 0

// local functions
float sincosf(float x, int iscos);
float tancotf(float x, int iscotan);
float sincoshf(float x, int iscos);

// union for manipulation of float internals
union  float_parts
{
   float f ;
   uint32_t  L ;
   unsigned char b4[4] ;
}  ;

/*-------------------------------------------------------------------------
   asincosf.c - Computes asin or acos of a 32-bit float as outlined in [1]
-------------------------------------------------------------------------*/

/* [1] William James Cody and W.  M.  Waite.  _Software manual for the
   elementary functions_, Englewood Cliffs, N.J.:Prentice-Hall, 1980. */

/* Version 1.0 - Initial release */


#undef P1
#define P1  0.933935835E+0
#undef P2
#define P2 -0.504400557E+0
#undef Q0
#define Q0  0.560363004E+1
#undef Q1
#define Q1 -0.554846723E+1
#undef Q2
#define Q2  0.100000000E+1

#undef P
#define P(g) (P2 * g + P1)
#undef Q
#define Q(g) ((Q2 * g + Q1) * g + Q0)

//
// moves float constants from RAM to ROM
// ugly, but not inefficient
//
float asincosf_a(unsigned int k)
{
	switch(k)
	{
		case 0: return 0. ;
		case 1: return  QUART_PI ;
	}
}

float asincosf_b(unsigned int k)
{
	switch(k)
	{
		case 0: return  HALF_PI. ;
		case 1: return  QUART_PI ;
	}
}

float asincosf(float x, int isacos)
{
   float y, g, r;
   unsigned char i;
   int quartPI = isacos;

//   static float a[2] =  {  0.0, QUART_PI };
//   static float b[2] = { HALF_PI, QUART_PI };

   y = fabsf(x);
   if (y < EPS)
   {
      r = y;
   }
   else
   {
      if (y > 0.5)
      {
         quartPI = !isacos;
         if (y > 1.0)
         {
            errno = EDOM;
            return 0.0;
         }
         g = (0.5 - y) + 0.5;
         g = ldexpf(g, -1);
         y = sqrtf(g);
         y = -(y + y);
      }
      else
      {
         g = y * y;
      }
      r = y + y * ((P(g) * g) / Q(g));
   }
   i = quartPI;
   if (isacos)
   {
      if (x < 0.0)
         r = ( asincosf_b(i)+ r) + asincosf_b(i);
      else
         r = (asincosf_a(i)  - r) + asincosf_a(i);
   }
   else
   {
      r = (r + asincosf_a(i)) + asincosf_a(i) ;
      if (x < 0.0)
         r = -r;
   }
   return r;
}

/*-------------------------------------------------------------------------
   acosf.c - Computes arc cosine of a 32-bit float
-------------------------------------------------------------------------*/

float acosf(float x)
{
   if (x == 1.0)       return 0.0;
   else if (x == -1.0) return PI;
   else if (x == 0.0)  return HALF_PI;
   else                return asincosf(x, true);
}

/*-------------------------------------------------------------------------
   asinf.c - Computes asin(x)
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

float asinf(float x)
{

   if (x == 1.0)       return  HALF_PI;
   else if (x == -1.0) return -HALF_PI;
   else if (x == 0.0)  return 0.0;
   else                return asincosf(x, false);
}

/*-------------------------------------------------------------------------
   atan2f.c - Computes atan2(x) where x is a 32-bit float.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

float atan2f(float x, float y)
{
   float r;

   if ((x == 0.0) && (y == 0.0))
   {
      errno = EDOM;
      return 0.0;
   }

   if(fabsf(y) >= fabsf(x))
   {
      r = atanf(x / y);
      if(y < 0.0) r += (x >= 0 ? PI : -PI);
   }
   else
   {
      r = -atanf(y / x);
      r += (x < 0.0 ? -HALF_PI : HALF_PI);
   }
   return r;
}

/*-------------------------------------------------------------------------
   atanf.c - Computes arctan of a 32-bit float as outlined in [1]
-------------------------------------------------------------------------*/

/* [1] William James Cody and W.  M.  Waite.  _Software manual for the
   elementary functions_, Englewood Cliffs, N.J.:Prentice-Hall, 1980. */

/* Version 1.0 - Initial release */

#undef P0
#define P0 -0.4708325141E+0
#undef P1
#define P1 -0.5090958253E-1
#undef Q0
#define Q0  0.1412500740E+1
#undef Q1
#define Q1  0.1000000000E+1

#undef P
#define P(g,f) ((P1*g+P0)*g*f)
#undef Q
#define Q(g) (Q1*g+Q0)

#undef K1
#define K1  0.2679491924 /* 2-sqrt(3) */
#undef K2
#define K2  0.7320508076 /* sqrt(3)-1 */
#undef K3
#define K3  1.7320508076 /* sqrt(3)   */


float atanf_a(unsigned int k)
{
	switch(k)
	{
		case 0: return  0.0 ;
		case 1: return  0.5235987756 ;
		case 2: return  1.5707963268 ;
		case 3: return  1.0471975512 ;
	}
}

float atanf(float x)
{
   float f, r, g;
   int n = 0;
//   static float a[] = {  0.0, 0.5235987756, 1.5707963268, 1.0471975512 };

   f = fabsf(x);
   if(f > 1.0)
   {
      f = 1.0 / f;
      n = 2;
   }
   if(f > K1)
   {
      // f = ((K2 * f - 1.0) + f) / (K3 + f); // fixed for sdcc
      // What it is actually wanted is this more accurate formula,
      // but SDCC optimizes it and then it does not work:
      f = (((K2 * f - 0.5) - 0.5) + f) / (K3 + f); // original, works with cpik
      n++;
   }
   if(fabsf(f) < EPS) r = f;
   else
   {
      g = f * f;
      r = f + P(g, f) / Q(g);
   }
   if(n > 1) r = -r;
   r += atanf_a(n);
   if(x < 0.0) r = -r;
   return r;
}

/*-------------------------------------------------------------------------
   ceilf.c - Returns the integer larger or equal than x
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

float ceilf(float x)
{
   int32_t r = x ;

   if (r < 0)
      return r;
   else
      return (r + ((r < x) ? 1 : 0));
}
/*-------------------------------------------------------------------------
   cosf.c - Computes cos(x) where x is a 32-bit float.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */


float cosf(float x)
{
   if (x == 0.0) return 1.0;
   return sincosf(x, 1);
}
/*-------------------------------------------------------------------------
   coshf.c - Computes cosh(x) where x is a 32-bit float.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

float coshf(float x)
{
   return sincoshf(x, 1);
}

#undef P0
#define P0      0.2499999995E+0
#undef P1
#define P1      0.4160288626E-2
#undef Q0
#define Q0      0.5000000000E+0
#undef Q1
#define Q1      0.4998717877E-1

#undef P
#define P(z) ((P1*z)+P0)
#undef Q
#define Q(z) ((Q1*z)+Q0)

#undef C1
#define C1       0.693359375
#undef C2
#define C2      -2.1219444005469058277e-4

#undef BIGX
#define BIGX    88.72283911  /* ln(HUGE_VALF) */
#undef EXPEPS
#define EXPEPS  1.0E-7       /* exp(1.0E-7)=0.0000001 */
#undef K1
#define K1      1.4426950409 /* 1/ln(2) */
//
// Modified by A.Gibaud
// the variable y has been suppressed
// to take advantage of non const parameter
// fix a bug in overflow (<0 and >0 cases were inverted)
//
float expf(float x)
{
   int n;
   float xn, g, r, z;
   int sign = 0;

   if(x < 0.0)
   {
      x = -x;
      sign = 1;
   }

   if(x < EXPEPS) return 1.0;

   if(x > BIGX)
   {
      if(sign)
      {
         return 0.0;
      }
      else
      {
         errno = ERANGE;
         return HUGE_VALF ;
      }
   }

   z = x * K1;
   n = z;

   if(n < 0) --n;
   if(z - n >= 0.5) ++n;
   xn = n;
   g = ((x - xn * C1)) - xn * C2;
   z = g * g;
   r = P(z) * g;
   r = 0.5 + (r / (Q(z) - r));

   n++;
   z = ldexpf(r, n);


   if(sign)
      return 1.0 / z;
   else
      return z;
}
/*-------------------------------------------------------------------------
   fabsf.c - Returns the absolute value of a 32-bit float.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */
/*
	++Gib, modified to avoid useless 32 bit AND
*/
float fabsf(float x)
{
   /*
      union float_parts fl;
    
      fl.f = x;
      fl.b4[3] &= 0x7f;
      return fl.f;
   */
   // because  args are passed  by value
   // there is no problem to change the formal param
   __asm__("\tbcf INDF0,7,0") ;
   return x ;
}

/*-------------------------------------------------------------------------
   floorf.c - Returns the integer smaller or equal than x
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

float floorf (float x)
{
   int32_t r = x ;

   if (r <= 0)
      return (r + ((r > x) ? -1 : 0));
   else
      return r;
}

/*-------------------------------------------------------------------------
   frexpf.c - Returns the exponent and mantisa of a 32 bit float.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */
// TODO analyze and re-write this code
float frexpf(float x, int *pw2)
{
#if 0
   original code
   union float_long fl;
   int i;

   fl.f = x;
   /* Find the exponent (power of 2) */
   i  = ( fl.l >> 23) & 0x000000ff;
   i -= 0x7e;
   *pw2 = i;
   fl.l &= 0x807fffff; /* strip all exponent bits */
   fl.l |= 0x3f000000; /* mantissa between 0.5 and 1 */
   return(fl.f);
#endif
   union  float_parts fl ;
   long int i ; // TODO should works with an int (allows to remove & 0x000000ff)
   fl.f = x ;

   /* Find the exponent (power of 2) */
   i  = ( fl.L >> 23) & 0x000000ff;
   i -= 0x7e; 
   *pw2 = i;
   fl.L &= 0x807fffff; /* strip all exponent bits */
   fl.L |= 0x3f000000; /* mantissa between 0.5 and 1 */
   return fl.f ;

}
/*-------------------------------------------------------------------------
   ldexpf.c - Build a float from a mantisa and exponent.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

float ldexpf(float x, int pw2)
{
   union float_parts fl;
   int32_t e;

   fl.f = x;

   e = (fl.L >> 23) & 0x000000ff;
   e += pw2;
   fl.L = ((e & 0xff) << 23) | (fl.L & 0x807fffff);

   return(fl.f);
}
/*-------------------------------------------------------------------------
   log10f.c - Computes the base 10 log of a 32 bit float.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

float log10f(float x)
{
   return logf(x)*0.4342944819;
}
/*-------------------------------------------------------------------------
   logf.c - Computes the natural log of a 32 bit float as outlined in [1].
-------------------------------------------------------------------------*/

/* [1] William James Cody and W.  M.  Waite.  _Software manual for the
   elementary functions_, Englewood Cliffs, N.J.:Prentice-Hall, 1980. */

/* Version 1.0 - Initial release */

/*Constants for 24 bits or less (8 decimal digits)*/
#undef A0
#define A0 -0.5527074855E+0
#undef B0
#define B0 -0.6632718214E+1
#undef A
#define A(w) (A0)
#undef B
#define B(w) (w+B0)

#undef C0
#define C0  0.70710678118654752440
#undef C1
#define C1  0.693359375 /*355.0/512.0*/
#undef C2
#define C2 -2.121944400546905827679E-4

float logf(float x)
{
   float Rz;
   float f, z, w, znum, zden, xn;
   int n;

   if (x <= 0.0)
   {
      errno = EDOM;
      return 0.0;
   }
   f = frexpf(x, &n);
   znum = f - 0.5;
   if (f > C0)
   {
      znum -= 0.5;
      zden = (f * 0.5) + 0.5;
   }
   else
   {
      n--;
      zden = znum * 0.5 + 0.5;
   }
   z = znum / zden;
   w = z * z;

   Rz = z + z * (w * A(w) / B(w));
   xn = n;
   return ((xn*C2 + Rz) + xn*C1);
}
/*-------------------------------------------------------------------------
   modff.c - Returns both the integer and fraction of a float.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */
//
// note from A.Gibaud
// does not work if the integer part cannot be encoded
// in an init32_t
// TODO find a better way to extract the integer part
float modff(float x, float * y)
{
   *y = (int32_t)x;
   return (x -*y);
}
/*-------------------------------------------------------------------------
   powf.c - Computes x**y where x and y are 32-bit floats.
            WARNING: less that 6 digits accuracy.
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */
//
// Note from A.Gibaud
// this  implementation in known to be inaccurate
// but is short ...
float powf(float x, float y)
{
   if(y == 0.0) return 1.0;
   if(y == 1.0) return x;
   if(x <= 0.0) return 0.0;
   return expf(logf(x) * y);
}

/*-------------------------------------------------------------------------
   sincosf.c - Computes sin or cos of a 32-bit float as outlined in [1]
-------------------------------------------------------------------------*/

/* [1] William James Cody and W.  M.  Waite.  _Software manual for the
   elementary functions_, Englewood Cliffs, N.J.:Prentice-Hall, 1980. */

/* Version 1.0 - Initial release */

#undef r1
#define r1      -0.1666665668E+0
#undef r2
#define r2       0.8333025139E-2
#undef r3
#define r3      -0.1980741872E-3
#undef r4
#define r4       0.2601903036E-5

/* PI=C1+C2 */
#undef C1
#define C1       3.140625
#undef C2
#define C2       9.676535897E-4

/*A reasonable value for YMAX is the int part of PI*B**(t/2)=3.1416*2**(12)*/
#undef YMAX
#define YMAX     12867.0

float sincosf(float x, int iscos)
{
   float y, f, r, g, XN;
   int N;
   int sign;

   if(iscos)
   {
      y = fabsf(x) + HALF_PI;
      sign = 0;
   }
   else
   {
      if(x < 0.0)
      {
         y = -x;
         sign = 1;
      }
      else
      {
         y = x;
         sign = 0;
      }
   }

   if(y > YMAX)
   {
      errno = ERANGE;
      return 0.0;
   }

   /*Round y/PI to the nearest integer*/
   N = ((y * iPI) + 0.5); /*y is positive*/

   /*If N is odd change sign*/
   if(N&1) sign = !sign;

   XN = N;
   /*Cosine required? (is done here to keep accuracy)*/
   if(iscos) XN -= 0.5;

   y = fabsf(x);
   r = (int)y;
   g = y - r;
   f = ((r - XN * C1) + g) - XN * C2;

   g = f * f;
   if(g > EPS2) //Used to be if(fabsf(f)>EPS)
   {
      r = (((r4 * g + r3) * g + r2) * g + r1) * g;
      f += f * r;
   }
   return (sign ? -f : f);
}



/*-------------------------------------------------------------------------
   sincoshf.c - Computes sinh or cosh of a 32-bit float as outlined in [1]
-------------------------------------------------------------------------*/

/* Version 1.0 - Initial release */

#undef P0
#define P0 -0.713793159E+1
#undef P1
#define P1 -0.190333999E+0
#undef Q0
#define Q0 -0.428277109E+2
#undef Q1
#define Q1  0.100000000E+1

#undef P
#define P(z) (P1*z+P0)
#undef Q
#define Q(z) (Q1*z+Q0)

#undef K1
#define K1 0.69316101074218750000E+0 /* ln(v)   */
#undef K2
#define K2 0.24999308500451499336E+0 /* v**(-2) */
#undef K3
#define K3 0.13830277879601902638E-4 /* v/2-1   */

//WMAX is defined as ln(HUGE_VALF)-ln(v)+0.69
#undef WMAX
#define WMAX 44.93535952E+0
//WBAR 0.35*(b+1)
#undef WBAR
#define WBAR 1.05
#undef YBAR
#define YBAR 9.0 /*Works for me*/

float sincoshf(float x, int iscosh)
{
   float y, w, z;
   int sign;

   if (x < 0.0)
   {
      y = -x;
      sign = 1;
   }
   else
   {
      y = x;
      sign = 0;
   }

   if ((y > 1.0) || iscosh)
   {
      if(y > YBAR)
      {
         w = y - K1;
         if (w > WMAX)
         {
            errno = ERANGE;
            z = HUGE_VALF;
         }
         else
         {
            z = expf(w);
            z += K3 * z;
         }
      }
      else
      {
         z = expf(y);
         w = 1.0 / z;
         if(!iscosh) w = -w;
         z = (z + w) * 0.5;
      }
      if(sign) z = -z;
   }
   else
   {
      if (y < EPS)
         z = x;
      else
      {
         z = x * x;
         z = x + x * z * P(z) / Q(z);
      }
   }
   return z;
}

/*-------------------------------------------------------------------------
   sinf.c - Computes sin(x) where x is a 32-bit float.
-------------------------------------------------------------------------*/

float sinf(float x)
{
   if (x == 0.0) return 0.0;
   return sincosf(x, 0);
}
/*-------------------------------------------------------------------------
   sinhf.c - Computes sinh(x) where x is a 32-bit float.
-------------------------------------------------------------------------*/

float sinhf(float x)
{
   return sincoshf(x, 0);
}
/*-------------------------------------------------------------------------
   tancotf.c - Computes tan or cot of a 32-bit float as outlined in [1]
-------------------------------------------------------------------------*/

/* [1] William James Cody and W.  M.  Waite.  _Software manual for the
   elementary functions_, Englewood Cliffs, N.J.:Prentice-Hall, 1980. */

#undef P0
#define P0  0.100000000E+1
#undef P1
#define P1 -0.958017723E-1
#undef Q0
#define Q0  0.100000000E+1
#undef Q1
#define Q1 -0.429135777E+0
#undef Q2
#define Q2  0.971685835E-2

#undef C1
#define C1  1.5703125
#undef C2
#define C2  4.83826794897E-4

#undef P
#define P(f,g) (P1*g*f+f)
#undef Q
#define Q(g) ((Q2*g+Q1)*g+Q0)

//A reasonable choice for YMAX is the integer part of B**(t/2)*PI/2:
#undef YMAX
#define YMAX 6433.0

float tancotf(float x, int iscotan)
{
   float f, g, xn, xnum, xden;
   int n;

   if (fabsf(x) > YMAX)
   {
      errno = ERANGE;
      return 0.0;
   }

   /*Round x*2*PI to the nearest integer*/
   n = (x * TWO_O_PI + (x > 0.0 ? 0.5 : -0.5)); /*works for +-x*/
   xn = n;

   xnum = (int)x;
   xden = x - xnum;
   f = ((xnum - xn * C1) + xden) - xn * C2;

   if (fabsf(f) < EPS)
   {
      xnum = f;
      xden = 1.0;
   }
   else
   {
      g = f * f;
      xnum = P(f, g);
      xden = Q(g);
   }

   if(n&1)
      //xn is odd
   {
      if(iscotan) return (-xnum / xden);
      else return (-xden / xnum);
   }
   else
   {
      if(iscotan) return (xden / xnum);
      else return (xnum / xden);
   }
}
/*-------------------------------------------------------------------------
   tanf.c - Computes tan(x) where x is a 32-bit float.
-------------------------------------------------------------------------*/
float tanf(float x)
{
   return tancotf(x, 0);
}

/*-------------------------------------------------------------------------
   cotf.c - Computes cot(x) where x is a 32-bit float.
-------------------------------------------------------------------------*/
float cotf(float x)
{
   float y;

   y = fabsf(x);
   if (y < 1.0E-30) //This one requires more thinking...
   {
      errno = ERANGE;
      if (x < 0.0)
         return -HUGE_VALF;
      else
         return + HUGE_VALF;
   }
   return tancotf(x, 1);
}

/*-------------------------------------------------------------------------
   tanhf.c - Computes tanh(x) where x is a 32-bit float as outlined in [1].
-------------------------------------------------------------------------*/

/* [1] William James Cody and W.  M.  Waite.  _Software manual for the
   elementary functions_, Englewood Cliffs, N.J.:Prentice-Hall, 1980. */

#undef P0
#define P0 -0.8237728127E+0
#undef P1
#define P1 -0.3831010665E-2
#undef Q0
#define Q0  0.2471319654E+1
#undef Q1
#define Q1  0.1000000000E+1

/* ln(3)/2 */
#undef K1
#define K1  0.5493061443E+0
/* SBIG=[ln(2)+(t+1)*ln(B)]/2 */
#undef SBIG
#define SBIG 9.01091

#undef P
#define P(g) ((P1*g+P0)*g)
#undef Q
#define Q(g) (Q1*g+Q0)

float tanhf(float x)
{
   float f, g, r;

   f = fabsf(x);
   if(f > SBIG) r = 1.0;
   else if(f > K1)
   {
      r = 0.5 - 1.0 / (expf(f + f) + 1.0);
      r += r;
   }
   else if(f < EPS) r = f;
   else
   {
      g = f * f;
      r = f + f * (P(g) / Q(g));
   }
   if(x < 0.0) r = -r;
   return r;
}

/*-------------------------------------------------------------------------
   sqrtf.c - Computes square root of a 32-bit float as outlined in [1]
-------------------------------------------------------------------------*/

/* [1] William James Cody and W.  M.  Waite.  _Software manual for the
   elementary functions_, Englewood Cliffs, N.J.:Prentice-Hall, 1980. */

float sqrtf(float x)
{
   float f, y;
   int n;

   if (x == 0.0) return x;
   else if (x == 1.0) return 1.0;
   else if (x < 0.0)
   {
      errno = EDOM;
      return 0.0;
   }
   f = frexpf(x, &n);
   y = 0.41731 + 0.59016 * f; /*Educated guess*/
   /*For a 24 bit mantisa (float), two iterations are sufficient*/
   y += f / y;
   y = ldexpf(y, -2) + f / y; /*Faster version of 0.25 * y + f/y*/

   if (n&1)
   {
      y *= 0.7071067812;
      ++n;
   }
   return ldexpf(y, n / 2);
}

