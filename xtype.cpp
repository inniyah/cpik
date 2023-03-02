#include "xtype.h"
#include <iostream>
#include <sstream>

#include "centity.h"
#include "utility.h"

using namespace std ;


void  type::deallocate()
{
//    for(unsigned int i = 0 ; i < _params.size() ; ++i)
//        delete _params[i] ;
}

type *type::clone()
{
  type *p = newtype ( _code, _size, _const ) ;
  if ( _subtype )  p->_subtype =  _subtype.clone()  ;

  //   clone function args and their type.
  if ( isFct() )
  {
    for ( unsigned int i = 0 ; i < _params.size() ; ++i )
      p->addFuncParam ( _params[i].clone() ) ;
    p->valist() = valist() ;
  }
  p->_boffset = _boffset ;
  p->_bsize = _bsize ;
  p->_members = _members ;
  p->_structname = _structname ;
  p->_completed = _completed ;
  p->_cnt = 0 ;
  return p ;
}



/** dump a type (debug purpose)  */
void type::dump ( ostream& os )
{
  list<StructMember>::iterator mi ;

  if ( this == 0 )
  {
    os << "NULL type" ;
    return ;
  }

  if ( _const ) os << "const " ;

  switch ( _code )
  {
    case Void:
      os << "void " ; break ;
    case Int:
      os << "int " ; break ;
    case UInt:
      os << "unsigned int " ; break ;
    case Long:
      os << "long " ; break ;
    case ULong:
      os<< "unsigned long " ; break ;
    case LLong:
      os << "long32 " ; break ;
    case ULLong:
      os<< "unsigned long32 " ; break ;
    case Float:
      os<< "float " ; break ;
    case Char:
      os<< "char " ; break ;
    case UChar:
      os<< "unsigned char " ; break ;
    case Ptr:
      os<< "pointer to " ; break ;
    case Array:
      os << "array[" << _size <<"] of " ; break ;
    case Fct:
      os << "function(" <<endl  ;
      for ( unsigned int i = 0 ; i < _params.size() ; ++i )
      {
        _params[i]->dump ( os ) ; cout << " " ;
      }
      os<<") returning " ; break ;

    case ItFct:
      os << "__interrupt__  function(" <<endl  ;
      for ( unsigned int i = 0 ; i < _params.size() ; ++i )
      {
        _params[i]->dump ( os ) ; os << " " ;
      }
      os<<") returning " ; break ;

    case Struct:
      os << "struct " << structName() << endl << "{" << endl ;
      for ( mi = _members.begin() ; mi != _members.end() ; ++mi )
      {
        ( *mi ).dump ( os ) ; os << endl ;
      }

      os << "}" << endl ;
      break ;

    case Union:
      os << "union " << structName() << endl << "{" << endl ;
      for ( mi = _members.begin() ; mi != _members.end() ; ++mi )
      {
        ( *mi ).dump ( os ) ; os << endl ;
      }

      os << "}" << endl ;
      break ;

    case Enum:
      os << "Enum";
      break;

    case EnumMember:
      os << "Enum constant";
      break;

    default:
      os<< "??? (code="<< _code << ")" ; break ;
  }
  if ( _subtype ) _subtype->dump ( os ) ;
  // else cout << endl ;
}
/**     return the final type of a complex type (ie: char if type is char *)
 If type is not complex, return a NULL Ctype  ??? see initialisation of _subtype
*/
Ctype& type::terminaltype()
{
  return _subtype  ? _subtype->terminaltype() : _subtype ;
}

/** No descriptions */
int type::addFuncParam ( Centity e )
{
  _params.push_back ( e ) ;
  return _params.size() ;
}


/**
 Verify the semantics of a declaration and reject semantically incorrect objects
 (ie: array of function, functions returnig arrays, etc..)
*/
const char *type::verifySemantics ( Initializer& init, int storage )
{
  list<StructMember>::iterator  mi ;
  if ( isFct() )
  {
    if ( _subtype->_code == Array ) return "Function returning an array." ;
    if ( _subtype->isFct() ) return "Function returning a function." ;
    for ( unsigned int i = 0 ; i < _params.size() ; ++i )
    {
      if ( _params[i]->thetype()->isFct() )
      {
        // Hummm : Function as function parameter
        // transform function parameter to pointer to function
        Ctype aux ( Ptr ) ;
        aux->_subtype = _params[i]->thetype() ;
        _params[i]->thetype() = aux ;
      }
      Initializer null_ini ;
      const char *status = _params[i]->thetype()->verifySemantics ( null_ini, entity::Param ) ;
      if ( status ) return status ;
    }
    if ( init )
    {
      return "Function with initializer." ;
    }
  }
  else if ( ( _code != Array ) && ( _code != Struct ) && ( _code != Union )  && init.isCompound() )
  {
    //   vector initializer for scalar
    return "Non scalar initializer." ;
  }
  else if ( _code == Array )
  {
    if ( _subtype->isFct() ) return "Array of functions." ;

    if ( _size == 0 )
    {
      if ( storage == entity::Auto ) return "Local automatic arrays must have a dimension." ;
      else if ( storage == entity::Global && init == 0 )
        return "Undimensionned global array without initializer." ;
    }
    if ( storage == entity::Param )
    {
      // arrays parameters are treated as pointers
      _code = Ptr ;
    }
    // verifying array needs a little stuff, so it is done as a separate function
    else if ( init )
      return  verifyArrayInitializers ( init, storage ) ;
  }
  else if ( _code ==  Struct )
  {
    // main issue: self-contained struct
    // NOTE: this case should no occurs if proper tests are made during type definition
    for ( mi = _members.begin()  ; mi != _members.end() ; ++mi )
    {
      Ctype ct = ( *mi ).mtype() ;

      if ( ( ct->isStruct() || ct->isUnion() ) && ct.theType() ==  this )
        return "Self contained structure definition." ;
    }
  }
  Initializer null_ini ;
  return  _subtype ? _subtype->verifySemantics ( null_ini,storage ) : 0 ;
}

/** Verification of initialized arrays */
const char* type::verifyArrayInitializers ( Initializer& init, int storage )
{

  if ( !init.isCompound() )
    return "Invalid initializer." ;  // scalar initializer for array


  // global array dimensionned by initializer
  if ( _size == 0 )
  {
    if ( storage == entity::Global )
    {
      _size = init.compoundSize() ;
    }
  }
  else // dimensionned array
  {
    int size1 =  init.compoundSize() ;
    if ( size1 > _size ) return "Excess elements in array initializer." ;
    else
    {
      while ( size1 < _size )   // add elements to initializer
      {
        Initializer sub = Initializer::makeSubInitializer ( Ctype ( this ) ) ;
        init.add ( sub );
        ++size1 ;
      }
    }
  }
  // verify if each initializer is compatible with type
  if ( subtype() && subtype()->code() == type::Array )
  {
    for ( int i = 0 ; i < init.compoundSize() ; ++i )
    {
      const char *stat = subtype()->verifyArrayInitializers ( init.getSub ( i ),
                         storage ) ;
      if ( stat ) return stat ;
    }
  }
  return 0 ;
}

/** Return the number of bits needed to store an object of this type
    As a special value, 0 is returned if size cannot be computed,
   (typically : functions).
 */
int type::nBits()
{
  int sz, msz ;
  list<StructMember>::iterator mi ;

  switch ( _code )
  {
    case Void:
    default:
      return 0 ;

    case Enum:
    case EnumMember:
    case Int:
    case UInt:
    case Char:
    case UChar:
      /* sizeof(<fct identifier>) returns 1 with gcc and I wonder why
      from my point of view, it should return the same value as sizeof(pointer)
          but I prefer to trust people who are more experienced  than me
         so sizeof(f) == 1 and sizeof(&f) == 2
      */
    case  Fct:
    case  ItFct:
      return 8 ;

    case  Long:
    case  ULong:
    case  Ptr:
      return 16 ;

    case  LLong:
    case  ULLong:
    case  Float:
      return 32 ;

    case Array:
      return ( _size && _subtype ) ? ( _size * _subtype->nBits() ) : 0  ;

    case Struct:
      for ( mi = _members.begin(), sz = 0 ; mi != _members.end() ; ++mi )
      {
        // no alignement issue, so size of struc is sum of members' sizes
        msz = ( *mi ).mtype()->sizeOf() ; // in bytes
        // in case of bifield, the size of the int8 must be counted only once
        // ie: for the first field , (offset == 0)
        // NOTE: for non-bitfield types, offset() is ALWAYS 0
        if ( ( *mi ).mtype()->boffset() == 0 ) sz += msz ;
      }
      return sz * 8 ; // in bits

    case Union:
      for ( mi = _members.begin(), sz = 0 ; mi != _members.end() ; ++mi )
      {
        // size of union is size of its  larger member
        if ( ( *mi ).mtype()->sizeOf() > sz )
          sz = ( *mi ).mtype()->sizeOf()  ;
      }
      return sz * 8 ; // in bits

  }

}
/** return the size of the final type of a type (in bytes) */
int type::finalSize()
{

  switch ( _code )
  {
    case Void:
    case Fct:
    case ItFct:
    default:
      return 0 ;

    case Enum:
    case EnumMember:
    case Int:
    case UInt:
    case Char:
    case UChar:
      return 1 ;

    case  Long:
    case  ULong:
    case  Ptr:
      return 2 ;

    case  LLong:
    case  ULLong:
    case  Float:
      return 4 ;

    case Array:
      return ( _size && _subtype ) ? ( _subtype->finalSize() ) : 0  ;

      // the "final" type of structs is struct itself
    case Struct:
    case Union:
      return nBits() / 8 ;

  }

}

/** No descriptions */
bool type::equal ( Ctype rhs, bool checkConst )
{
  if ( checkConst && _const != rhs->_const ) return false ;
  
  int c1=_code, c2=rhs->_code;
  if ( ( ( c1 == Enum || c1 == EnumMember || c1 == Char || c1 == Int )
         && ( c2 == Enum || c2 == EnumMember || c2 == Char || c2 == Int )
       )
       || ( ( c1 == UChar || c1 == UInt ) && ( c2 == UChar || c2 == UInt ) )
     )
  {
    // beware: int, enum, enum member and char are synonyms
    return true;
  }
  if ( c1 != c2 ) return false ;

  if ( _size != rhs->_size ) return false ;
  if ( ( _subtype && !rhs->_subtype ) || ( !_subtype && rhs->_subtype ) ) return false ;
  if ( _subtype && !_subtype->equal ( rhs->_subtype, checkConst ) ) return false ;
  if ( isFct() )
  {
    if ( _params.size() !=  rhs->_params.size() ) return false ;
    if ( valist() != rhs->valist() ) return false ;

    for ( int i = 0 ; i < ( int ) _params.size() ; ++i )
    {
      if ( !_params[i]->thetype()->equal ( rhs->_params[i]->thetype(), checkConst ) ) return false ;
    }
  }
  if ( isStruct() ) // restrictive equality - handlers must reference same type
  {
//    if ( this != rhs.theType() ) return false ;
// because of duplicating struct descriptors (to permit different constness), we must check the struct names
// but because of typedefs, the members should be checked
    if (structName() != rhs->structName()) return false;
  }
  return true ;
}

/** No descriptions */
string  type::prettyPrint ( const string& decl, const string& name )
{
  int size,offset ;
  string bf ;
  if ( isBitField ( size, offset ) )
  {
    bf += "."+utility::toString ( offset ) +":"+utility::toString ( size ) ;
  }
  bf += " " ;
  if ( _code == Char ) return  "char" + bf +  name + decl ;
  else if ( _code == UChar ) return  "unsigned char" + bf + name + decl ;
  else if ( _code == Int )  return  "int"+ bf + name + decl ;
  else if ( _code == UInt )  return  "unsigned int"+ bf + name + decl ;

  else if ( _code == Long )  return  "long " + name + decl ;
  else if ( _code == ULong )  return  "unsigned long " + name + decl ;
  else if ( _code == LLong )  return  "long32 " + name + decl ;
  else if ( _code == ULLong )  return  "unsigned long32 " + name + decl ;
  else if ( _code == Float )  return  "float " + name + decl ;
  else if ( _code == Void )  return  "void " + name + decl ;
  else if ( _code == Enum || _code == EnumMember )  return  "enum " + name + decl ;
  else if ( _code == Ptr )
  {
    string constness;
    if ( _subtype->constness())
    {
      constness="const ";
    }
    if ( _subtype->code() == Array || _subtype->isFct() )
    {
      return constness + _subtype->prettyPrint ( "(*" + decl + name + ")" ,"" ) ;
    }
    else
    {
      return constness + _subtype->prettyPrint ( "*" + name  + decl ,"" ) ;
    }
  }
  else if ( _code == Array )
  {
    ostringstream s ;
    s << name << "[" << arraySize() << "]" ;
    return (constness()?"const ":"") + _subtype->prettyPrint ( decl + s.str(),"" ) ;
  }
  else if ( isFct() )
  {
    string tmp = name + "(" ;
    for ( int i = 0 ; i < ( int ) _params.size() ; ++i )
    {
      tmp += _params[i]->prettyPrint() ;
      if ( i < ( int ) _params.size()-1 ) tmp +="," ;
    }
    if ( valist() ) tmp += ", ... ";
    tmp += ")" ;
    return _subtype->prettyPrint ( decl+tmp,"" ) ;
  }
  else if ( isStruct() )
  {
    string tmp = string(constness()?"const ":"") + "struct " ;
    tmp += structName() ;
#if 1
    tmp += " { " ;

    list<StructMember>::iterator mi ;
    for ( mi=_members.begin()  ; mi != _members.end() ; ++mi )
    {
      tmp += ( *mi ).mtype()->prettyPrint ( "", ( *mi ).mname() ) ;
      int bsz = ( *mi ).mtype()->bsize() ;
      if ( bsz != 0 )
      {
        tmp += ":" ; tmp += utility::toString ( bsz ) ;
      }
      tmp += " ; " ;
    }
    tmp += "} " ;
#endif
    tmp += " " ;
    tmp += decl ;
    tmp += " " ;
    return tmp ;
  }
  else if ( isUnion() )
  {
    string tmp = string(constness()?"const ":"") + "union " ;
    tmp += structName() ;
#if 0
    tmp += " { " ;

    list<StructMember>::iterator mi ;
    for ( mi=_members.begin()  ; mi != _members.end() ; ++mi )
    {
      tmp += ( *mi ).mtype()->prettyPrint ( "", ( *mi ).mname() ) ;
      tmp += " ; " ;
    }
    tmp += "} " ;
#endif
    tmp += decl ;
    tmp += " " ;
    return tmp ;
  }


  return "";
}

type::~type()
{
  deallocate() ;
}

bool type::isInt8()
{
  return   _code == Char ||
           _code == UChar||
           _code == Int  ||
           _code == UInt  ;
}

/** No descriptions */
bool type::isIntegral()
{
  return   _code == Char ||
           _code == UChar||
           _code == Int  ||
           _code == UInt ||
           _code == Long ||
           _code == ULong ||
           _code == LLong ||
           _code == ULLong ||
           _code == Enum ||
           _code == EnumMember
           ;
}

bool type::isFloatingPoint()
{
  return  _code == Float ;
}

bool type::isNumeric()
{
  return isIntegral() || isFloatingPoint() ;
}

/** No descriptions */
bool type::isUnsigned()
{
  return (
           _code == UChar||
           _code == UInt ||
           _code == ULong ||
           _code == ULLong ) ;
}
/** No descriptions */
bool type::isSigned()
{
  return (
           _code == Char||
           _code == Int ||
           _code == Long ||
           _code == LLong ||
           _code == Float ) ;
}
/** No descriptions */
bool type::isBool()
{
  // float are usable as bool
  return isNumeric() || isDereferencable() ;
}

/** true if type is const */
bool type::isConst()
{
  return _const  ;
}

/** true when type is bitfield - may serve as accessor for size and offset */
bool type::isBitField ( int& bsize , int& boffset )
{
  bsize = _bsize ;
  boffset = _boffset ;
  return ( _code == Int || _code == UInt || _code == Char || _code == UChar )
         && _bsize != 0 ;
}

/** No descriptions */
bool type::compatible ( Ctype t )
{
  if ( !t ) return false ;

  if ( isNumeric() && t->isNumeric() ) return true ;

  if (
    isDereferencable() && t->isDereferencable()
    && subtype()->equal ( t->subtype() ) ) return true  ;

  // naked function id can be used as ptr to functions of same type
  //if( isPointer() && t->isFct() && subtype()->equal(t) ) return true ;

  /* any pointer is compatible with void * */
  if ( isDereferencable() &&  subtype()->isVoid() && t->isDereferencable() ) return true ;

  if ( isStruct() && t->isStruct() )
  {
    if ( this->equal ( t ) ) return true ;
    // type descriptor are not equal - just test name compatibility
    if ( structName() == t->structName() ) return true ;
  }

  return false ;

}
/** No descriptions */
/* TODO: does FP number need the minValue() and maxValue() func ?? */

int type::maxValue()
{
  int v ;
  switch ( _code )
  {
    case Char:
    case Int: v = 127 ; break ;
    case UChar:
    case UInt: v = 255 ; break ;
    case Long: v = 32767 ;  break ;
    case ULong:
    case Ptr: v = 65535 ;  break ;
    case LLong: v = 2147483647L ; break ;
    case ULLong: v = 4294967295UL ; break ;
    case Float: v = utility::reinterpretToI32 ( 3.40282347e32F ) ; break ;
    default: v = 0 ; break ;
  }
  return v ;
}
/** No descriptions */
int type::minValue()
{
  int v ;
  switch ( _code )
  {
    case Char:
    case Int: v = -128 ;   break ;
    case UChar:
    case UInt: v = 0 ; break ;
    case Long: v = -32768 ;  break ;
    case ULong: v = 0 ; break ;
    case LLong: v =  -2147483647L-1L ;  break ;
    case Float: v = utility::reinterpretToI32 ( 1.17549435e-38F ) ; break ;
    case ULLong: v = 0 ; break ;
    case Ptr: v = 0 ; break ;
    default: v = 0 ; break ;
  }
  return v ;
}
/** true if type is array or pointer */
bool type::isDereferencable()
{
  return is ( Ptr ) || is ( Array ) ;
}
/** True if function or pointer to function */
bool type::isCallable()
{
  return isFct() || ( is ( Ptr ) && _subtype && _subtype->isFct() ) ;
}

/** return a number representing type precedence
(used for type promotion in numeric expressions)
 */
int type::precedence()
{
  switch ( _code )
  {
    case Char:
    case Int:
      return 1;
    case UChar:
    case UInt:
      return 2 ;
    case Long:
      return 3 ;
    case ULong:
      return 4 ;
    case LLong:
      return 5 ;
    case ULLong:
      return 6 ;
    case Float:
      return 7 ;
  }
  return -1 ;
}
/** No descriptions */
bool type::isPointer()
{
  return is ( Ptr ) ;
}

/** No descriptions */
bool type::isLValue()
{
  bool r = true ;

  if ( isArray() || isFct() /* || isConst()  */ ) r = false ;

  return r ;
}
/** No descriptions */
int type::scaleFactor()
{
  int factor = 0 ;
  if ( isPointer() )
  {
    factor = subtype()->sizeOf() ;
  }
  else if ( isArray() )
  {
    // TODO: verify this point .. I suppose sizeOf() is the correct result
    factor = subtype()->sizeOf()  ;
  }
  else if ( isStruct() || isUnion() )
  {
    factor = sizeOf() ; // TODO does it make sense  (should be 0) ?
  }
  return factor ;
}
/** No descriptions */
int type::sizeOf()
{
  return nBits() / 8 ;
}
/** No descriptions */
bool type::isFct()
{
  return  is ( Fct )   ||  is ( ItFct )  ;
}
/** No descriptions */
bool type::isItFct()
{
  return   is ( ItFct )  ;
}
/** No descriptions */
bool type::isArray()
{
  return is ( Array ) ;
}
/** No descriptions */
bool type::isVoid()
{
  return is ( Void ) ;
}
/** Change ordinary function to interrupt handler */
void type::setItHandler()
{
  if ( isFct() ) _code = ItFct ;
}
/**
    add a structure member to structure (or union)
    as side-effect, update offset of the member

 return: true when OK
 false when the member already exists
 */
bool  type::addStructMember ( StructMember& sm )
{
  int k = sizeOf();
  sm.moffset() = isStruct() ? k : 0 ; // union -> null offset
  // since bit-fields share the same byte, the address of contiguous bf
  // are the same as the addr of the first bf of the group
  if ( sm.mtype()->boffset() != 0 ) --sm.moffset() ;

  // avoid duplicate members
  list<StructMember>::iterator i ;
  string name = sm.mname() ;
  for ( i = _members.begin() ; i != _members.end() ; ++i )
  {
    if ( ( ( *i ).mname() == name )  && ( name != "<anonymous>" ) )
      return false ;
  }

  _members.push_back ( sm ) ;
  return true  ;
}

/** No descriptions */
bool type::isStruct()
{
  return is ( Struct ) ;
}
/** No descriptions */
bool type::isUnion()
{
  return is ( Union ) ;
}

bool type::isVariable()
{
  return isIntegral() ||
         is ( Float )    ||
         is ( Ptr )      ||
         is ( Array ) || is ( Struct ) || is ( Union );

}

bool type::isEnum()
{
  return is ( Enum );
}

bool type::isEnumMember()
{
  return is ( EnumMember );
}

/** return a pointer to member 'mname', or NULL if it doesn't exist */
StructMember *type::getMember ( const string &mname )
{
  list<StructMember>::iterator mi ;
  StructMember * result ;

  if ( !isStruct()  && !isUnion() ) return  0 ;

  for ( mi = _members.begin()  ; mi != _members.end()  ; ++mi )
  {
    if ( ( *mi ).mname() == mname )
    {
      return & ( *mi ) ;
    }
  }

  // member not found,
  // if current type  is union search in anonymous structs/unions
  // offset of returned member will be OK, because all members of
  // an union have a nul offset
  if ( isUnion() )
  {
    for ( mi = _members.begin()  ; mi != _members.end()  ; ++mi )
    {
      Ctype subt = ( *mi ).mtype() ;
      if ( ( subt->isStruct() || subt->isUnion() ) && ( ( *mi ).mname() == "<anonymous>" ) )
      {
        // Note: an union may contains several anonymous structs
        if ( ( result =  subt->getMember ( mname ) ) ) return result  ;
      }
    }
  }
  return 0;
}
