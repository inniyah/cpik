#ifndef LIMITS_H
#define LIMITS_H

/* integer limits values for cpik pic18 compiler V0.5.x and higher */

/* Number of bits in a `char'.	*/
#  define CHAR_BIT	8

/* Minimum and maximum values a `signed char' can hold.  */
#  define SCHAR_MIN	(-128)
#  define SCHAR_MAX	127

/* Maximum value an `unsigned char' can hold.  (Minimum is 0.)  */
#  define UCHAR_MAX	255

/* Minimum and maximum values a `char' can hold.  */
#   define CHAR_MIN	SCHAR_MIN
#   define CHAR_MAX	SCHAR_MAX

/* Minimum and maximum values a `signed short int' can hold.  */
#  define SHRT_MIN	SCHAR_MIN
#  define SHRT_MAX	SCHAR_MAX

/* Maximum value an `unsigned short int' can hold.  (Minimum is 0.)  */
#  define USHRT_MAX	UCHAR_MAX

/* Minimum and maximum values a `signed int' can hold.  */
#  define INT_MIN	(-INT_MAX - 1)
#  define INT_MAX	127

/* Maximum value an `unsigned int' can hold.  (Minimum is 0.)  */
#  define UINT_MAX	65535U

/* Minimum and maximum values a `signed long int' can hold.  */
#  define LONG_MAX	32767L
#  define LONG_MIN	(-LONG_MAX - 1L)

/* Maximum value an `unsigned long int' can hold.  (Minimum is 0.)  */
#   define ULONG_MAX	65535UL

/* Minimum and maximum values a `signed long long int' can hold.  */
#   define LLONG_MAX	2147483647LL
#   define LLONG_MIN	(-LLONG_MAX - 1LL)

/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0.)  */
#   define ULLONG_MAX	4294967295ULL

#endif

