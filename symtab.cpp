#include "symtab.h"
#include "utility.h"

#include <stdio.h>
#include <assert.h>

/** -----------------------------------------------------------------
 Search for an entity  in the symbol table stack
*/

Centity Symtab::find ( const std::string &name, int limit )
{
  if( name == "") return 0 ; // empty string never found

  for ( int level = currentLevel() ; level >= limit  ; --level )
  {
    loctab& ltab =  _table[level]  ;
    for ( int i = 0 ; i < ( int ) ltab.size() ; ++i )
    {
      if ( ! ( ltab[i]->isType() )  && ( ltab[i]->name() == name ) ) return ltab[i] ;
    }
  }
  return 0 ;
}
/** -----------------------------------------------------------------
 Search for an entity  in the global symbol table (ie: level 0)
*/

Centity Symtab::findGlobal ( const std::string &name )
{
  if( name == "") return 0 ;

  if ( _table.size() == 0 ) return 0 ; // security (empty global table)
  loctab& ltab =  _table[0]  ;
  for ( int i = 0 ; i < ( int ) ltab.size() ; ++i )
  {
    if ( ! ( ltab[i]->isType() )  && ( ltab[i]->name() == name ) ) return ltab[i] ;
  }
  return 0 ;
}
/** -----------------------------------------------------------------
 Search for an entity  in the symbol table stack
 (** excluding the global (ie: 0) level **)
*/

Centity Symtab::findLocal ( const std::string &name )
{

  return find ( name,1 ) ;
}
/** -----------------------------------------------------------------
 Search for an entity  in the symbol table stack
 (** only in the very local stack level **)
*/

Centity Symtab::findBlock ( const std::string &name )
{
  return find ( name,currentLevel() ) ;
}

/** -----------------------------------------------------------------
 Search for a typedef(ined) type in the symbol table stack
 (note: entity and types share the same table)
*/

Ctype Symtab::findType ( const std::string &name, int limit )
{
  for ( int level = currentLevel() ; level >= limit  ; --level )
  {
    loctab& ltab =  _table[level]  ;
    for ( int i = 0 ; i < ( int ) ltab.size() ; ++i )
    {
      if ( ( ltab[i]->isType() )  && ( ltab[i]->name() == name ) ) return Ctype ( ltab[i]->thetype() ) ;
    }
  }
  return Ctype() ;
}
/** -----------------------------------------------------------------
 Search for a struct or union in the struct table stack
 (note: struct table is distinct from symbol table stack)
 As structs and unions share their namespace, this routine
 can return either a struct or  union (actual type should be
 tested by caller)
*/
Ctype Symtab::findStruct ( const std::string &name, int limit )
{
  map<string, Ctype>::iterator k ;

  for ( int level = currentLevel() ; level >= limit  ; --level )
  {
    loctab& ltab =  _table[level]  ;
    k = ltab.structs.find ( name ) ;
    if ( k != ltab.structs.end() )
      return ( *k ).second ;
  }
  return Ctype() ;
}



Centity Symtab::findLitteral ( const std::string &value )
{
  loctab& ltab =  _table[0]  ;
  for ( int i = 0 ; i < ( int ) ltab.size() ; ++i )
  {
    if ( ltab[i]->name() [0] == '#' )  // prefix for litterals
    {
      Initializer& ini = ltab[i]->getInitializer() ;

      if ( i && ini )
      {
        string s ;
        ini.makeLitteralFromCst ( s ) ;
        if ( s == value )  return ltab[i] ;
      }
    }
  }
  return Centity ( 0 ) ;
}

Centity Symtab::findStatic ( string &name, string& fct )
{
  // make "real" entity name
  string rname = fct+"#"+name ;

  loctab& ltab =  _table[0]  ;
  for ( unsigned int i = 0 ; i < ltab.size() ; ++i )
  {
    if ( ltab[i]->name() == rname ) return ltab[i] ;
  }
  return Centity ( 0 ) ;
}

/**
Insert entity at the current symbol level
flag global is used to force insertion at global level :
useful for litterals or static variables
*/
const char  *Symtab::insertEntity ( Centity v, bool global )
{

  // special processing if symbol is a typedef entry
  if ( v->isType() ) return insertType ( v ) ;

  // negative array size ?
  if ( v->isArray() && v->sizeOf()<0 )
  {
    return utility::setMessage ( "Invalid size of array '" + v->name() +"'." ) ;
   }

  // verify unicity
  Centity e ;

  if ( !global && currentLevel() != 0 )  // verify local symbol
  {
    if ( ( e=findLocal ( v->name() ) ) != 0 )
    {
      Centity e1 = findBlock ( v->name() ) ;
      if ( e1 && e->storage() == entity::Auto )
      {
        return utility::setMessage ( "Conflicting type for '" + v->name() +"'." ) ;
      }
      else  if ( e->storage() == entity::Param )
      {
        return utility::setMessage ( "Declaration of '" + v->name() +"' shadows a parameter." ) ;
      }
      else
      {
        return utility::setMessage ( "Declaration of '" + v->name() +"' shadows a local var." ) ;
      }
    }
    int adr = _table[currentLevel() ].add ( v ) ;
    v->locate ( adr ) ;  // update frame relative address
  }
  else  // verify global symbol
  {
    if ( ( e=find ( v->name() ) ) != 0 )
    {
      // int code = v->thetype()->code()  ;
      if ( v->thetype()->isFct() || v->thetype()->isVariable() )
      {
        int i ;
        string entity_description=v->thetype()->isFct()?"function":"variable";
        switch ( verifyFunctionSymbol ( e, v ) )
        {
          default:
          case 0 :  // decl. follows definition or another decl.
            // delete v ; // ignore it
            return 0 ;
          case 1 :  // definition follows declaration
            i = _table[0].findIndex ( e ) ; // just replace decl. with def.
            // delete _table[0][i] ;
            _table[0][i] = v ;
            return 0 ;
          case 2 :
            return utility::setMessage ( "Definition mismatch for "+entity_description+" '"+v->name() +"'." ) ;
          case 3:
            return utility::setMessage ( "Duplicate definition of "+entity_description+" '"+v->name() +"'." ) ;
        }
      }
      else
      {
        return utility::setMessage ( "Duplicate symbol '"+v->name() +"'." ) ;
      }

    }
    else
    {
      _table[0].add ( v ) ;  // glob symbols do not need to be located
    }
  }
  return 0 ;
}

/**
Insert type at the current symbol level
*/
const char  *Symtab::insertType ( Centity v )
{

  // verify unicity
  Centity e ;
  Ctype t ;
  int level = currentLevel() ;

  if ( ( t=findType ( v->name(), level ) ) != 0 )
    return utility::setMessage ( "Conflicting typedef for '" + v->name() +"'." ) ;
  else if ( ( e=find ( v->name() , level ) ) != 0 )
    return utility::setMessage ( "'" + v->name() + "' redeclared as different kind of symbol." ) ;
  else
  {
    _table[ level ].add ( v ) ;  // glob symbols do not need to be located
  }

  return 0 ;
}

/**
 Insert a structure or union at the current symbol level
 Because the type already contains a name, no name needed
*/
const char  *Symtab::insertStruct ( Ctype stype )
{

  // verify unicity
  Ctype t ;
  int level = currentLevel() ;

  if ( !stype->isStruct() && !stype->isUnion() )
    return utility::setMessage ( "Internal error : cannot insert non-struct item in struct table" ) ;

  string name = stype->structName() ;

  if ( ( t=findStruct ( name , level ) ) != 0 )
  {
    if ( t->isStruct() )
    {
      if ( stype->isStruct() )
        return utility::setMessage ( "Redefinition of 'struct " + name +"'." ) ;
      else if ( stype->isUnion() )
        return utility::setMessage ( "Redefinition of 'union " + name +"'." ) ;
      else
        return utility::setMessage ( "'"+name+"' defined as wrong kind of tag." ) ;
    }
  }
  else
  {
    _table[ level ].structs[name] = stype ;
  }

  return 0 ;
}

void Symtab::enterContext()
{
  loctab v ;
  if ( currentLevel() == -1 ) // begin global table
    v.nextAddr = 0x10 ;
  else if ( currentLevel() == 0 ) // enter function
    v.nextAddr = 0 ;
  else
    v.nextAddr = _table[currentLevel() ].nextAddr ; //enter new block

  _table.push_back ( v ) ;
}


bool Symtab::quitContext()
{
  int level = currentLevel() ;
  if ( level >= 0 )
  {
    loctab& ltab =  _table[level]  ;
    for ( int i = 0 ; i < ( int ) ltab.size()  ; ++i )
    {
      // parameters entity must not be deallocated
      // because (as they are part of function signature)
      // they will be removed with this function.
      Centity e =   ltab[i] ;
      // if( e && e->storage() != entity::Param) delete e;
    }
    _table.pop_back() ;     // remove local vars
    assert ( currentLevel() == level -1 ) ;
    return true ;
  }
  return false ;
}


Symtab::~Symtab()
{
  while ( currentLevel() >= 0 ) quitContext() ;
}



/*
  verify various conditions before inserting a function 'v'
  into the global table, when a synonymous function 'e' already exists

  0 = v is a declaration compatible with e (e can be either a decl. or a def.)
  1 = v is a definition and e is a declaration (v and e are compatibles)
  3 = v and e are both definitions  (v and e are compatibles)
  2 = v and e are incompatible
*/
int Symtab::verifyFunctionSymbol ( Centity e, Centity v )
{
  // TODO make *X and X[] equivalent types
  if ( e->thetype() == v->thetype() )
  {
    if ( v->isExtern() ) return 0 ;
    if ( !v->isExtern()  && e->isExtern() ) return 1 ;
    return 3 ;
  }
  return 2 ;
}

/** No descriptions */
int Symtab::currentLevel()
{
  return _table.size() -1 ;
}

int Symtab::loctab::findIndex ( const std::string &name )
{
  for ( int i = 0 ; i < ( int ) loct.size() ; ++i )
    if ( loct[i]->name() == name ) return i ;
  return -1 ;
}
int Symtab::loctab::findIndex ( Centity e )
{
  for ( int i = 0 ; i < ( int ) loct.size() ; ++i )
    if ( loct[i] == e ) return i ;
  return -1 ;
}

/** No descriptions */
void Symtab::dump ( const char *s )
{
  std::cout <<" *** Begin " << s << std::endl ;
  for ( int level = 0 ; level <= currentLevel(); ++level )
  {
    std::cout << "("<<level<<")"<<std::endl ;
    for ( int i = 0 ; i < ( int ) _table[level].size() ; ++i )
    {
      _table[level][i]->dump() ;
      std::cout << endl ;
    }
  }
  std::cout <<" *** End "  << s << std::endl ;
}

/** No descriptions */
void Symtab::prettyPrint ( ostream& o )
{
  o <<" *** Begin "  << std::endl ;
  for ( int level = 0 ; level <= currentLevel(); ++level )
  {
    o << "("<<level<<")"<<std::endl ;
    for ( int i = 0 ; i < ( int ) _table[level].size() ; ++i )
    {
      o << _table[level][i]->prettyPrint() << ";" << endl ;
    }
  }
  o <<" *** End "   << std::endl ;
}
/** No descriptions */
Symtab::loctab& Symtab::operator[] ( int i )
{
  return _table[i] ;
}
/** No descriptions */
size_t Symtab::size()
{
  return _table.size() ;
}
/** return the current size (in bytes) of the local data pool.
Local data pool contains function parameters and local variables.
Due to blocks nesting and possible data local to these blocks,
local data pool can grow and shrink during function compilation.  */
int Symtab::localDataPoolSize()
{
  if ( _table.size() == 0 ) return 0 ;
  return _table[_table.size() - 1].nextAddr ;
}
