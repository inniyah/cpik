//
// C++ Interface: Numeric
//
// Description:
// Abstraction layer for computing the value of a constant expressions
// Some operators are defined for FP/integer mixed expressions,
// (+ - * / < <= > >= == !=)
// and some other only works for pure  integers expressions
// In the latter case, the evaluator return a NAN (Not A Numeric)
// when the arguments are not integers
// so the calling code is able to skip the folding.
//
// Author: Alain Gibaud <alain.gibaud@free.fr>, (C) 2011
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef NUMERIC_H
#define NUMERIC_H
#include <stdint.h>
class Centity ;

/**
 @author Alain Gibaud <alain.gibaud@free.fr>
*/
class Numeric
{
    int32_t value_ ;
    bool    is_float_ ;
    bool    is_unsigned_ ;
    bool    is_nan_ ; // Not a numeric ie: operator cannot be applied
  public:
    Numeric ( Centity& c1 );
    Numeric ( const Numeric& n );
    Numeric ( int32_t x );
    Numeric ( uint32_t x );
    Numeric ( float x );
    Numeric ( );

    bool isFloat() const ;
    bool isUnsigned() const ;
    bool isNan() const ;
    operator int32_t() const ;
    operator uint32_t() const ;
    operator float() const ;
    operator bool() const ; // true if not a nan
    int32_t value() const;

    // assignment operator
    Numeric& operator=( const Numeric& n );

    // binary  operators
    Numeric operator* ( const Numeric& ) const ;
    Numeric operator/ ( const Numeric& ) const ;
    Numeric operator+ ( const Numeric& ) const ;
    Numeric operator- ( const Numeric& ) const ;
    Numeric operator<< ( const Numeric& ) const ;
    Numeric operator>> ( const Numeric& ) const ;
    Numeric operator% ( const Numeric& ) const ;
    Numeric operator< ( const Numeric& ) const ;
    Numeric operator<= ( const Numeric& ) const ;
    Numeric operator> ( const Numeric& ) const ;
    Numeric operator>= ( const Numeric& ) const ;
    Numeric operator== ( const Numeric& ) const ;
    Numeric operator!= ( const Numeric& ) const ;
    Numeric operator& ( const Numeric& ) const ;
    Numeric operator| ( const Numeric& ) const ;
    Numeric operator^ ( const Numeric& ) const ;
    Numeric operator&& ( const Numeric& ) const ;
    Numeric operator|| ( const Numeric& ) const ;

    // unary operators
    Numeric operator! (  ) const ;
    Numeric operator~ (  ) const ;
    Numeric operator- (  ) const ;

    // cast for constants
    void castTo(Numeric& ) const ;


};

#endif
