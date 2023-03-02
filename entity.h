/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ENTITY_H
#define ENTITY_H

#include "xtype.h"
#include <vector>
#include <string>
#include "initializer.h"
#include "xctype.h"

#include <iostream>
using namespace std ;
/**
 Entity class
 It allows to represent all C objects (plain vars, arrays, functions, litterals, constants)
*/

class Centity ;

class entity
{
    /// initializer for scalar or array types (for function, != 0 means defined)
    // initializer *_initvalues ;
    Initializer _initializer ;
    /// see Class enum  (this member is currently not used)
    int _class ;
    /// see Storage enum
    int _storage ;
    /// absolute if Global, stack relative if Auto, value if Init, not used if Litteral
    int _address_value ;
    /// pointer to type description
    Ctype _type ;
    /// name if variable,
    string _name ;
    /// reference counter
  public:    int _cnt ;

    // entity can only be dynamically allocated
    entity ( const entity& ) ;
    entity() ; // NO default constructor
    entity& operator= ( const entity& ) ;  // NO affectation
    entity ( const std::string& name, int sto, int addr ) :
        _initializer ( ),  _class ( Normal ),_storage ( sto ) ,_address_value ( addr ),
        _type(), _name ( name ), _cnt ( 0 ) {}

  public: // Public methods
    /** No descriptions */
    void dump ( ostream& os=cout );
    /// values for _storage member
    enum Storage { None, Global, Auto, Litteral, Constant, Param } ;
    /// values for _class member
    enum Class { Normal, Static, Extern , Type }  ;

    int& storage() { return _storage ; }
    int& addr/*value*/() { return _address_value ; }
    int& value/*value*/() { return _address_value ; }
    int& theclass() { return _class ; }
    string& name() { return _name ; }

    /**
     return initializer for variables, or values for litterals
    */
    // initializer** getinitializers() { return &_initvalues ; }
    Initializer& getInitializer() { return _initializer ; }
    /**
     return the type of entity
     \see type class
    */
    Ctype& thetype() { return _type ; }
    /**
     Change the type of the entity
    */
    /**
     The only way to create an entity (All ctors are private)
    */
    virtual ~entity() ;

    // to avoid complains about "all private ctors"
    friend void dummy() ;
    /** compute this entity's location. */
    void locate ( int i );
    /** No descriptions */
    virtual string prettyPrint();
    /** No descriptions */
    bool isLValue();
    /**
    Clone an entity (duplicates all members, including type).
    */
    entity * clone();
    /** No descriptions */
    int sizeOf();
    /** No descriptions */
    bool is ( int what );
    /** No descriptions */
    bool isLitteral();
    /** No descriptions */
    bool isLocal();
    /** No descriptions */
    bool isStatic();
    /** No descriptions */
    bool isGlobal();
    /** No descriptions */
    bool isIntegral();
    /** No descriptions */
    bool isInt8();
    /** No descriptions */
    bool isConstant();
    /** No descriptions */
    bool isReadOnly();
    /** No descriptions */
    bool isPointer();
    /** No descriptions */
    bool isArray();
    /** No descriptions */
    bool isFloatingPoint();
    /** No descriptions */
    bool  isBF ( int& size, int& offset ) ;
    /** No descriptions */
    bool isDefined();
    /** No descriptions */
    bool isFct();
    /** No descriptions */
    bool isItFct();
    /** No descriptions */
    bool isPointerToFct();
    /** No descriptions */
    bool isExtern();
    /** No descriptions */
    bool isSigned();
    bool isUnsigned() { return !isSigned(); }
    /** No descriptions */
    bool isType();
    /** No descriptions */
    bool isStruct();
    /** No descriptions */
    bool isUnion();
    /** True if entity is structure or union */
    bool isAgregate();
    /** True if not constant or function */
    bool isVariable();
    /** No descriptions */
    bool isEnumMember();
    bool isPtrToConst();
    friend class Centity ;

} ;
#endif
