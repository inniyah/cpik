//
// C++ Implementation: Numeric
//
// Description:
//
//
// Author: Alain Gibaud <alain.gibaud@free.fr>, (C) 2011
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "Numeric.h"
#include "utility.h"
#include "centity.h"

Numeric::Numeric ( Centity& c )
{
  value_ = c->value() ;
  is_float_ = c->isFloatingPoint() ;
  is_unsigned_ = c->isUnsigned() ;
  is_nan_ = false ;
}


Numeric::Numeric ( const Numeric& n )
{
  value_ = n.value_  ;
  is_float_ = n.is_float_ ;
  is_unsigned_ = n.is_unsigned_ ;
  is_nan_ = false ;
}

Numeric::Numeric ( int32_t x )
{
  value_ = x  ;
  is_float_ = false ;
  is_unsigned_ = false ;
  is_nan_ = false ;
}

Numeric::Numeric ( uint32_t x )
{
  value_ = x  ;
  is_float_ = false ;
  is_unsigned_ = true ;
  is_nan_ = false ;
}

Numeric::Numeric ( float x )
{
  value_ = utility::reinterpretToI32 ( x )  ;
  is_float_ = true ;
  is_unsigned_ = false ;
  is_nan_ = false ;
}

Numeric::Numeric ()
{
  is_nan_ = true ;
}


/**
 As the name says
*/
bool Numeric::isFloat() const
{
  return is_float_ ;
}

/**
 As the name says
*/
bool Numeric::isUnsigned() const
{
  return is_unsigned_ ;
}

/**
 As the name says
*/
bool Numeric::isNan() const
{
  return is_nan_ ;
}

/**
 As the name says
*/
Numeric::operator bool() const
{
  return !is_nan_ ;
}

/**
 Returns the internal form of the Numeric
*/
int32_t  Numeric::value() const
{
  return value_ ;
}

/**
 Return the Numeric as an  int32_t
*/
Numeric::operator int32_t() const
{
  if ( isFloat () )
    return ( int32_t ) utility::reinterpretToFloat ( value_ ) ;
  else
    return value_ ;
}
/**
 Return the Numeric as an  uint32_t
*/
Numeric::operator uint32_t() const
{
  if ( isFloat () )
    return ( uint32_t ) utility::reinterpretToFloat ( value_ ) ;
  else
    return value_ ;
}

/**
 Return the Numeric as a float
*/
Numeric::operator float() const
{
  if ( isFloat () )
    return utility::reinterpretToFloat ( value_ ) ;
  else if ( isUnsigned() )
    return ( float ) ( uint32_t ) value_ ;
  else
    return ( float ) value_ ;
}
/**
 Universal * operator
*/
Numeric Numeric::operator* ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return Numeric ( ( float ) ( *this ) * ( float ) r ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) * ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) * ( int32_t ) r ) ;
}

/**
 Universal / operator
*/
Numeric Numeric::operator/ ( const Numeric& r ) const
{
  if ( ( float ) r == 0.0F )
  {
    if ( isFloat() || r.isFloat() )
      return Numeric ( 3.40282347e+38F ) ;
    else  if ( isUnsigned() || r.isUnsigned() )
      return Numeric ( ( uint32_t ) 0xFFFFFFFF ) ;
    return Numeric ( ( int32_t ) 0x7FFFFFFF ) ;
  }
  if ( isFloat() || r.isFloat() )
    return Numeric ( ( float ) ( *this ) / ( float ) r ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) / ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) / ( int32_t ) r ) ;
}

/**
 Universal + operator
*/
Numeric Numeric::operator+ ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return Numeric ( ( float ) ( *this ) + ( float ) r ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) + ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) + ( int32_t ) r ) ;
}
/**
 Universal - operator
*/
Numeric Numeric::operator- ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return Numeric ( ( float ) ( *this ) - ( float ) r ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) - ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) - ( int32_t ) r ) ;
}

/**
 Universal >> operator
*/
Numeric Numeric::operator>> ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return Numeric() ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) >> ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) >> ( int32_t ) r ) ;
}

/**
 Universal << operator
*/
Numeric Numeric::operator<< ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return  Numeric( ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) << ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) << ( int32_t ) r ) ;
}
/**
 Universal << operator
*/
Numeric Numeric::operator% ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return  Numeric( ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) % ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) % ( int32_t ) r ) ;
}


/**
 Universal < operator
*/
Numeric Numeric::operator< ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return Numeric ( ( float ) ( *this ) < ( float ) r ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) < ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) < ( int32_t ) r ) ;
}
/**
 Universal <= operator
*/
Numeric Numeric::operator<= ( const Numeric& r ) const
{
  return Numeric ( ! ( ( *this ) > r ) ) ;
}
/**
 Universal > operator
*/
Numeric Numeric::operator> ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return Numeric ( ( float ) ( *this ) > ( float ) r ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) > ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) > ( int32_t ) r ) ;
}
/**
 Universal >= operator
*/
Numeric Numeric::operator>= ( const Numeric& r ) const
{
  return Numeric ( ! ( ( *this ) < r ) ) ;
}

/**
 Universal == operator
*/
Numeric Numeric::operator== ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return Numeric ( ( float ) ( *this ) == ( float ) r ) ;
  else if ( isUnsigned() || r.isUnsigned() )
    return Numeric ( ( uint32_t ) ( *this ) == ( uint32_t ) r ) ;
  return  Numeric ( ( int32_t ) ( *this ) == ( int32_t ) r ) ;
}
/**
 Universal != operator
*/
Numeric Numeric::operator!= ( const Numeric& r ) const
{
  return Numeric ( ! ( ( *this ) == r ) ) ;
}
/**
 Universal & operator
*/
Numeric Numeric::operator& ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return  Numeric( ) ;
  return  Numeric ( ( int32_t ) ( *this ) & ( int32_t ) r ) ;
}
/**
 Universal | operator
*/
Numeric Numeric::operator| ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return  Numeric( ) ;
  return  Numeric ( ( int32_t ) ( *this ) | ( int32_t ) r ) ;
}
/**
 Universal ^ operator
*/
Numeric Numeric::operator^ ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return  Numeric( ) ;
  return  Numeric ( ( int32_t ) ( *this ) ^ ( int32_t ) r ) ;
}
/**
 Universal && operator
*/
Numeric Numeric::operator&& ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return  Numeric( ) ;
  return  Numeric ( ( int32_t ) ( *this ) && ( int32_t ) r ) ;
}

/**
 Universal || operator
*/
Numeric Numeric::operator|| ( const Numeric& r ) const
{
  if ( isFloat() || r.isFloat() )
    return  Numeric( ) ;
  return  Numeric ( ( int32_t ) ( *this ) || ( int32_t ) r ) ;
}
/**
 Universal ! operator
 Also defined for float
*/
Numeric Numeric::operator! ( ) const
{
  return  Numeric ( ! ( int32_t ) ( *this ) ) ;
}
/**
 Universal - operator
*/
Numeric Numeric::operator- ( ) const
{
  if ( isFloat() )
    return  Numeric ( - ( float ) ( *this ) ) ;
  return  Numeric ( - ( int32_t ) ( *this ) ) ;
}
/**
 Universal ~ operator
*/
Numeric Numeric::operator~ ( ) const
{
  if ( isFloat() )
    return  Numeric( ) ;
  return  Numeric ( ~ ( int32_t ) ( *this ) ) ;
}
/**
 Cast the current value to the type of x,
 and set x to this value
*/
void Numeric::castTo ( Numeric& x ) const
{
  if ( x.isFloat() )
    x.value_ = utility::reinterpretToI32 ( ( float ) ( *this ) ) ;
  else if ( x.isUnsigned() )
    x.value_= ( uint32_t ) ( *this ) ;
  else
    x.value_ = ( int32_t ) ( *this ) ;
}


