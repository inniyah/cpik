
#include "entity.h"
#include "locator.h"

#include <sstream>
using namespace std ;
/** No descriptions */
void entity::dump ( ostream &os )
{
	if ( isType() )
	{
		os << "typedef " ;
	}
	else
	{
		switch ( _storage )
		{
			case Auto:
				os << "auto "; break ;
			case Global:
				os << "global "; break ;
			case Litteral:
				os << "litteral "; break ;
			case Param:
				os << "parameter "; break ;
			case Constant:
				os << "constant "; break ;
			default:
				os << "<unknown> ";
				os << "PANIC : dump() aborted" << endl ;
				return ;
				break ;
		}
	}
	os << flush ;
	os << _name << " : " ;
	os << flush ;
	_type->dump ( os ) ;
	if ( !isType() )
	{
		os << flush ;
		if ( ! _initializer.isEmpty()  )
		{
			if ( ! _type->isFct() )
			{
				os << " = " ; 
				_initializer.dump(os) ;
			}
			else  // defined function
				os << " = {} " ;
			//std::cout << std::endl ;
		}
		os << flush ;
		os << " (ADDR/VALUE = 0x" << std::hex << _address_value << std::dec << ")";
	}
	os << flush ;
	//cout << std::endl ;
}

/** set this entity's location (relative to the stack frame)
 */
void entity::locate ( int adr )
{
	if ( _storage == Auto || _storage == Param )
		_address_value  = adr ;
}
/** No descriptions */
string entity::prettyPrint()
{
	string decl ;

	decl += thetype()->prettyPrint ( decl, name() ) ;
	// add addr info

	if ( _address_value != -1 )
	{
		// -1 means undefined address
		ostringstream s ;
		s << "@" << _address_value ;
		decl += s.str() ;
	}
	if ( isExtern() ) decl = "extern " + decl ;	
	else if( isType()) decl = "typedef " + decl ;

	return decl;
}

entity::~entity()
{
	// delete _initvalues ;
}
/** No descriptions */
bool entity::isLValue()
{
	return
	  ( _storage == Auto ||
	    _storage == Global ||
	    _storage == Param ) && thetype()->isLValue();
}
/**
  Clone an entity (duplicate all its members, including its type,
  but excluding its initializer)
 */
entity *entity::clone()
{
	entity *ne =new entity( name(),storage(),value() ) ; 
	ne->_class = _class ;
        // type must be cloned
	ne->_type =   _type.clone() ; 
	return ne ;
}
/** No descriptions */
int entity::sizeOf()
{
	int sz = 0 ;
	if ( thetype() ) sz =  thetype()->nBits()  / 8 ;
	return sz ;
}
/** No descriptions */
bool entity::is ( int what )
{
	return what == _storage ;
}
/** No descriptions */
bool entity::isConstant()
{
	return  _storage == Constant ;
}
/** No descriptions */
bool entity::isReadOnly()
{
	return thetype() && thetype()->isConst() ;	
}

/** No descriptions */
bool entity::isGlobal()
{
	return  _storage == Global ;
}
bool entity::isStatic()
{
	return  _storage == Static ;
}
/** No descriptions */
bool entity::isLocal()
{
	return  _storage == Auto || _storage == Param;
}
/** No descriptions */
bool entity::isLitteral()
{
	return  _storage == Litteral ;
}
/** No descriptions */
bool entity::isPointer()
{
	return thetype()->isPointer() ;
}
/** No descriptions */
bool entity::isIntegral()
{
	return thetype()->isIntegral() ;
}
/** No descriptions */
bool entity::isInt8()
{
	return thetype()->isInt8() ;
}
/** No descriptions */
bool entity::isArray()
{
	return thetype()->isArray() ;
}
/** No descriptions */
bool entity::isBF(int& size, int& offset)
{
	return thetype()->isBitField(size,offset) ;
}
/** No descriptions */
bool entity::isExtern()
{
	return _class == Extern ;
}
/** No descriptions */
bool entity::isFct()
{
	return thetype()->isFct() ;
}
/** No descriptions */
bool entity::isItFct()
{
	return thetype()->isItFct() ;
}
/** No descriptions */
bool entity::isPointerToFct()
{
	return isPointer() && thetype()->subtype()->isFct() ;
}
/** No descriptions */
bool entity::isSigned()
{
	return thetype()->isSigned() ;
}
/** No descriptions */
bool entity::isFloatingPoint()
{
	return thetype()->isFloatingPoint() ;
}
/** No descriptions */
bool entity::isType()
{
	return _class == Type ;
}
/** No descriptions */
bool entity::isStruct()
{
	return thetype()->isStruct() ;
}
/** No descriptions */
bool entity::isUnion()
{
	return thetype()->isUnion() ;
}
/** No descriptions */
bool entity::isAgregate()
{
	return thetype()->isUnion() || thetype()->isStruct();
}
/** True if not constant or function
 */
bool entity::isVariable()
{
	return ! ( isFct() || isConstant() ) ;
}

bool entity::isEnumMember()
{
    return thetype()->isEnumMember();
}
