/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*
	Author: Alain Gibaud
	alain.gibaud@free.fr
*/

#include  "bf.h"
#include <ctype.h>

/*
	Search for sequence of bits that can be merged in a unique bit field
	ex: INT0 0:1 INT1 1:1 INT2 2:1 could be merged to INT 0:3
	Note: a sequence must begin with bit #0 and bit numbers must be sequential
	return: true when at least one bit field has been created, else false
*/
bool bfblock::make_alias( bfblock& alias)
{
    string oldprefix  ;
    int oldoffset =  0;
    alias.clear() ;
    for(int i = 0 ; i < (int) size() ; ++i)
    {
        string& name = (*this)[i].name  ;
        if( name .size() >= 2 )
        {
            char n = name[name.size()-1] ;
            char  m = name[name.size()-2] ;
            // testing m avoids to consider AN10 or similar
            if(  n >= '0' && n <= '7' && !( m >= '0' && m <= '9' ))
            {
                string  prefix(name,0, name.size()-1) ;
                // avoids name collision with stupid bit definitions coming with MPLABX
                // (and gputils 1.0.0)
                prefix = "_"+prefix ;

                int offset =  (*this)[i].offset ;
                if( prefix != oldprefix && n == '0' )
                {   // create new BF
                    oldprefix = prefix ;
                    oldoffset = offset ;
                    alias.push_back(bf(prefix,oldoffset,1)) ;
                }
                else if( (prefix == oldprefix)  && (offset == oldoffset + 1) )
                {   // append to existing BF
                    bf& b  = alias[alias.size()-1] ;
                    b.size += (*this)[i].size ;
                    oldoffset = offset ;
                }
            }
        }
    }
    // aliases  that use ALL 8 bits or are only 1 bit long are not useful, remove them
    if( alias.size() && (alias[alias.size()-1].size == 8 || alias[alias.size()-1].size == 1 ) ) alias.pop_back() ;
    return alias.size() != 0 ;
}
//
// Sanity check for a block
// return an empty string  of OK
// and an error message if bit-fields overlap
//
string bfblock::checkSanity() 
{
  char image = 0 ;
  for( unsigned int i = 0 ; i < size() ; ++i)
  {
    bf& field = (*this)[i] ;
    for(int  b = field.offset ; b < (field.offset + field.size) ; ++b)
    {
      char mask = 1 << b ;
      if( image & mask ) 
	return "Bit " + field.name + " overlaps a previous bit-field. Please fix the .inc file !" ;
      image |= mask ;
    }
  }
  return "" ;
}


bool reg::make_aliases( )
{
    bfblock block ;
    bool r = false ;
    for(int i = 0 ; i < (int) size() ; ++i)
    {
        if( (*this)[i].make_alias(block))
        {
            aliases.push_back(block)  ;
            r = true ;
        }
    }
    return r ;
}


bfblock&  bfblock::sort_by_offset()
{
    for(unsigned int i = 0 ; i < size()-1 ; ++i)
    {
        for(unsigned int j = i+1 ; j < size() ; ++j)
        {
            if( (*this)[i].offset > (*this)[j].offset)
            {
                bf t =  (*this)[i] ;
                (*this)[i] =  (*this)[j] ;
                (*this)[j] = t ;
            }
        }
    }
    return *this ;
}

/*
	Remove BF that have the same offset as previous BF
	and transfert them in a new block
	Return : true when a new block has been created in b1
	
	Permet de separer les bits en differents paquets, pour former les 
	differentes structures.
	C'est ceci qui provoquait le bug lors de la fabrication des alias.
	car un bit peut etre (de)place dans la "mauvaise" structure 
	formant ainsi un trou.
	Cette methode n'est plus utilisée
*/
bool bfblock::make_unique(bfblock & other)
{
    bool r = false ;
    other.clear() ;

    for(unsigned int i = 0; i < size()-1 ; ++i)
    {
        for(unsigned int k = i +1 ; k < size() ; ++k)
        {
            if( (*this)[i].offset == (*this)[k].offset)
            {   // transfert  k
                other.push_back((*this)[k]) ;
                for(unsigned int m = k ; m < size() -1  ; ++m)
                    (*this)[m] = (*this)[m+1] ;
                 pop_back() ;
                --k;
                r = true ;
            }
        }
    }
    return r ;
}

//
// It's a pity to be obliged to define struct members in uppercase letters
// like macros !! This is the price to pay to be compatible with Microchip's C18
//
ostream& operator<<(ostream& os, const  bfblock& block)
{
    int oldoffset = 0 ;

    if( block.printmode & 1)
    {
        os << "struct \n{\n  unsigned int \n" ;

        for(int i = 0 ; i < (int)block.size() ; ++i)
        {
            const bf&  b = block[i] ;
            if( b.offset > oldoffset )
            {
                os << "  : " << (b.offset - oldoffset)  << ",\n" ;
                oldoffset = b.offset ;
            }
            os <<"  " <<  b.name << " : " << b.size ;
            oldoffset +=  b.size  ;
            if( i == (int)block.size() -1) os << " ;\n" ;
            else os << " ,\n" ;
        }
        os << "} ; \n\n" ;
    }

    if( block.printmode & 2)
    {
        for(int i = 0 ; i < (int)block.size() ; ++i)
        {
            const bf&  b = block[i] ;

            os << "#define " << ("_"+b.name) <<" " <<  b.offset ;
            if( b.size != 1) os << ":"<<b.size ;
            os << endl ;
        }
        os << endl ;
    }

    return os ;
}


string bfblock::upper(const string& s)
{
    string r ;
    for(unsigned int i = 0 ; i < s.size() ; ++i)
    {
        r += toupper(  s[i]  ) ;
    }
    return r ;
}
string bfblock::lower(const string& s)
{
    string r ;
    for(unsigned int i = 0 ; i < s.size() ; ++i)
    {
        r += tolower(  s[i]  );
    }
    return r ;
}
