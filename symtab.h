/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef SYMTAB_H
#define SYMTAB_H

#include "centity.h"
#include <stack>
#include <utility>
#include <string>
#include <map>

using namespace std ;

/**
 Symbol table class.
  This table is a vector, with context limits for management
  of local symbol tables (functions and nested blocks).
*/
class Symtab
{
    class loctab // local table
    {
      public:
        // local entities table
        vector<Centity> loct ;
        int nextAddr ; // offset for the next entity
        Centity & operator[] ( int n ) { return loct[n] ; }
        unsigned int size() { return loct.size() ; }
        loctab ( int next=0 ) : nextAddr ( next ) {}
        int  add ( Centity v )
        {
          int k = nextAddr ;
          loct.push_back ( v ) ;
          // some entity are typdefined type, and do not comsume any memory space
          if ( !v->isType() && !v->isEnumMember() )
          {
            int plus = v->thetype()->nBits() /8 ;
            nextAddr += plus ;
          }
          return k ;
        }
        int findIndex ( const string &name ) ;
        int findIndex ( Centity e ) ;


        // local struct(ures) table
        map<string, Ctype> structs ;
    } ;

    /// symbol table
    vector<loctab>  _table ;
  public:
    /** search for a structure type "name"
    \return handler to the type found, or NULL handler if not found
    */
    Ctype findStruct ( const std::string &name, int limit = 0 ) ;

    /** search for a type "name"
    \return symbol address or handler to 0 if not found
    */
    Ctype findType ( const std::string &name, int limit = 0 ) ;
    /** search for a symbol "name"
    \return symbol address or 0 if not found
    */
    Centity find ( const std::string &name, int limit = 0 ) ;
    /** search for a symbol "name" in the local
        scope (ie: same function)
    \return symbol address or 0 if not found
    */
    /**
      Search for an entity  in the global symbol table (ie: level 0)
      \return symbol address or 0 if not found
    */
    Centity findGlobal ( const std::string &name ) ;

    Centity findLocal ( const std::string &name ) ;
    /** search for a symbol "name" in the very local
        scope (ie: same block)
    \return symbol address or 0 if not found
    */
    Centity findBlock ( const std::string &name ) ;
    /** insert a new symbol into table
    */

    /** search for a litteral at global level
    return NULL Centity is not found
    */
    Centity findLitteral ( const std::string &value ) ;

    /** search for a static entity name  attached to function fct */
    Centity findStatic ( string &name, string& fct )  ;

    /** insert a new entity into symbol table */
    const char *insertEntity ( Centity v, bool global=false ) ;
    /** insert a new type into symbol table */
    const char *insertType ( Centity v ) ;
    /** insert a new struct into struct table */
    const char  *insertStruct ( Ctype stype ) ;
#if 0
    /** insert a new typedef defined type */
//  const char *insertType( const string& name, const Ctype& newtype) ;

    /** find a typedef defined type from current level to (and including) limit level
    - return a null Ctype if not found */
//  Ctype getType(   const string& name, int limit = 0  ) ;
#endif
    /** push a new context onto the context stack */
    void enterContext() ;
    /** quit the current context
    \return false if the current context is context 0
    */
    bool quitContext() ;
    /** lock a context (ie: prevent from inserting a new symbol)
    Note: A context cannot be unlocked, just quited
    */
    ~Symtab() ;
    /** Dump symbol table for debugging purpose */
    void dump ( const char *s="" );
    /** return current block level (global objects are at level 0) */
    int currentLevel();
    /** verify various conditions before inserting a function 'v'
    into the global table, when a synonymous function 'e' already exists */
    int verifyFunctionSymbol ( Centity e, Centity v ) ;
    /** No descriptions */
    void prettyPrint ( ostream& o ) ;
    /** No descriptions */
    Symtab::loctab& operator[] ( int i );
    /** No descriptions */
    size_t size();
    /** return the current size (in bytes) of the local data pool.
    Local data pool contains function parameters and local variables.
    Due to blocks nesting and possible data local to these blocks,
    local data pool can grow and shrink during function compilation.  */
    int localDataPoolSize();
} ;
#endif
