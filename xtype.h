
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef __TYPR_H
#define __TYPR_H
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
using namespace std ;

#include "xctype.h"

class entity ;
class Centity ;
class Initializer ;

#include "centity.h"
#include "structmember.h"

class type
{
    int _code ,              // see Code enum
    _const ,                 // 1 if const
    _valist,                 // 1 if function accept variable argument-list
    _size ;                  // size of arrays (in elements)
    // bitfield coding - only significant when type == 8 bit integer
    int  _bsize,             // != 0 if bitfield
         _boffset ;          // bit offset (significant when _bsize != 0)

    Ctype _subtype ;                // link to subtype (ex: array of array)

    vector<Centity>      _params ;  // functions parameters list
    list<StructMember>   _members ; // structures members list
    string      _structname ;       // structures name
    bool            _completed ;    // true if a struct definition is closed
    unsigned int   _cnt ;           // reference counter

    type() ;                           // NO default constructor
    type& operator= ( const type& ) ;  // NO affectation allowed
    type ( int what, int size, int constness=0 )
    {
        _code = what ; _const = constness ; _size = size  ; _valist = 0 ;
        _bsize = 0 ; _boffset = 0 ;
        _cnt = 0 ;
    }
    type ( const type& ) ;
public:
    friend class Ctype ;
    friend class entity ;

    /// codes for builtin types
    enum Code
    {
        Void,
        Char, UChar,
        Int, UInt,
        Long, ULong,
        LLong, ULLong,
        Float ,
        Ptr,
        Array, Fct, ItFct, Struct, Union,
        Enum, EnumMember
    } ;

    bool is ( int what ) { return _code == what ; }

    Ctype& subtype() { return _subtype ; }
    list<StructMember>& members() { return _members ; }

    // this is the only way to allocate a type
    static type *newtype ( int what, int size = 0 , int constness=0 )
    {
        return new type ( what,size, constness ) ;
    }

    virtual ~type() ;
    void  deallocate() ;

    type *clone() ;

    friend void dummy() ;

    /** Dump function for debugging purposes  */
    void dump ( ostream& os=cout );
    /** return the the final type (always a predefined type) */
    Ctype& terminaltype();

    /** accessors/setters  */
    int& constness() { return _const ; }
    vector<Centity>& funcParams() { return _params ; }
    int& code() { return _code ; }
    int& valist() { return _valist ; }
    int& arraySize() { return _size ; }
    int& enumValue() { return _size ; }
    string& structName() { return _structname ; }
    bool& completed() { return _completed ; }
    int& bsize() { return _bsize ; }
    int& boffset() { return _boffset ; }


    int addFuncParam ( Centity e );
    bool addStructMember ( StructMember& sm );
    StructMember *getMember ( const string& mname ) ;

    /** Verify the semantics of a declaration and reject semantically incorrect objects
    (ie: array of function, functions returnig arrays, etc..)
    */
    const char* verifySemantics ( Initializer& , int allocation_class );

    /** No descriptions */
    const char* verifyArrayInitializers ( Initializer& , int storage ) ;
    /** Return the number of bits needed to store an object of this type
    As a special value, -1 is returned if size cannot be computed,
    (typically : functions).
    */

    int nBits()  ;
    int finalSize()   ;

    /** No descriptions */
    // .... TODO: default value fo checkConst needs more investigations
    bool equal ( Ctype rhs, bool checkConst=false ) ;

    /** No descriptions */
    virtual string prettyPrint ( const string& decl, const string& name );
    /** true is type is bitfield - may serve as accessor for size and offset */
    bool isBitField ( int& bsize , int& boffset ) ;
    /** No descriptions */
    bool isIntegral() ;
    /** true if 8 bit integer */
    bool isInt8() ;
    /** No descriptions */
    bool isFloatingPoint() ;
    /** No descriptions */
    bool isNumeric() ;
    /** No descriptions */
    bool isUnsigned() ;
    /** No descriptions */
    bool isSigned() ;
    /** No descriptions */
    bool isConst() ;
    /** No descriptions */
    bool isBool() ;
    /** No descriptions */
    bool compatible ( Ctype t );
    /** No descriptions */
    int maxValue();
    /** No descriptions */
    int minValue();
    /** true if type is array or pointer */
    bool isDereferencable() ;
    /** True if function or pointer to function */
    bool isCallable() ;
    /** return a number representing type precedence
    (needed for type promotion in expression)
    */
    int precedence()  ;
    /** No descriptions */
    bool isPointer() ;
    bool isPointerToFct() ;

    /** No descriptions */
    bool isLValue() ;
    /** 0 if not dereferencable, else, the size of the referenced entity */
    int scaleFactor() ;
    /** No descriptions */
    int sizeOf() ;
    /** No descriptions */
    bool isArray() ;
    /** No descriptions */
    bool isFct() ;
    /** No descriptions */
    bool isItFct()  ;
    /** No descriptions */
    bool isVoid() ;
    /** No descriptions */
    bool isStruct()  ;
    /** No descriptions */
    bool isUnion()  ;
    /** No descriptions */
    bool isVariable() ;
    /** No descriptions */
    bool isEnum() ;
    bool isEnumMember();

    /** Change ordinary function to interrupt handler */
    void setItHandler();

    bool isPtrToConst()
    {
        return isPointer() && subtype()->constness();
    }
    bool isPtrToNonConst()
    {
        return isPointer() && !subtype()->constness();
    }
    bool isConstArray()
    {
        return isArray() && constness();
    }


} ;

#endif

