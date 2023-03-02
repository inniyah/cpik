/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*
	Author: Alain Gibaud 2012-2013
	alain.gibaud@free.fr
*/
#include "processor.h"


bool processor::extract_registers( ifstream& input)
{
    string line ;
    bool found ;
    char w1[80], w2[80],w3[80];
    int min = 0xFFFF ;

    for( found = false ; !found &&  getline(input,line,'\n')  ; )
    {
        if( line.find(";----- Register Files",0) != string::npos) found = true   ;
    }
    if( ! found ) return false ;

    istream::pos_type prevline = input.tellg() ;

    for( found = false ;getline(input,line,'\n')  ; prevline = input.tellg() )
    {
        if( (sscanf(line.c_str(), ";-----%*s%s", w1) == 1)  && (w1 == string("Bits")))
        {
            input.seekg(prevline) ; // go back to previous line because it's the beginning of BF description
            break ;
        }

        if(  empty(line) ) continue  ;

        if( sscanf(line.c_str(), "%s%s%s",  w1,w2,w3) == 3 )
        {
            if( w1[0] == ';' ) continue ;
            if( w2 == string("EQU") )
            {
                int val ;
                if( sscanf(w3,"H'%x'", &val) == 1)
                {
                    regs.push_back( reg(w1,val) ) ;
                    found = true ;
                    if( val < min) min = val ;
                }
            }
        }
    }
    if( found)
    {
        firstsfr = min ;
        //   cout << "\n//\n// start of SFRs block\n//" << endl ;
        //   cout << "#pragma firstsfr 0x" << hex << min << endl ;
    }
    return found ;
}


bool processor::empty(const string& line)
{
    for(int i = 0 ; i < (int) line.size() ; ++i)
    {
        if( line[i] != ' '  && line[i] != '\t' &&  line[i]  != '\r' && line[i]  != '\n' ) return false ;
    }
    return true ;
}



bool processor::extract_bits( ifstream& input  )
{
    string line ;
    bool found ;
    char w1[80], w2[80],w3[80] , reg[80], newreg[80], c;
    bfblock block ;
    int nbw ;

    *reg = 0 ; *newreg = 0 ;
    for(found= false ;  getline(input,line,'\n') ; )
    {
        // end of bit section ?
 	if( line.substr(0,23)  == ";       RAM Definitions" )
	{
	  break ;
	}
        // debut de registre ?
        else if( sscanf(line.c_str(), ";----- %s Bits %c", newreg , &c) == 2 )
        {
	    // terminer le bloc en cours, s'il y en a un 
	    // normalement, les blocs sont terminés par une ligne blanche
            int k = index(reg) ;
            if( k != -1 && block.size() )
            {
	      string err= block.checkSanity() ;
	      if( err != "") cout << " **** " <<  err << endl ;
	      regs[k].push_back(block.sort_by_offset()  )  ;
	      block.clear() ; 	      
	    }
            strcpy(reg, newreg) ; // save current register's name
        }
        // commentaire, ou definition de bit
        else  if( (nbw=sscanf(line.c_str(), "%s%s%s",  w1,w2,w3)) == 3 )
        {
            if( w1[0] == ';' )
                continue ;
            if( w2 == string("EQU") )
            {
                int val ;
                if( sscanf(w3,"H'%x'", &val) == 1)
                {
		    // create new bit field
                    block.push_back(bf(w1,val) ) ;
                }
                found = true ;
            }
        }
        // ligne blanche = fin de bloc de bits
        else if( empty( line ) && block.size()   )
	{
	    // sort and save block 
	    string err= block.checkSanity() ;
	    if( err  != "") cout << " **** " <<  err << endl ;
	    int k = index(reg) ; 			
	    regs[k].push_back(block.sort_by_offset()  )  ;
	    block.clear() ; 
	}
    }

    return found ;
}

bool processor::extract_processor( ifstream& input  )
{
    string line ;
    bool found ;
    char w1[80], w2[80]   ;


    for( found= false ; !found && getline(input,line,'\n') ; )
    {
        if( sscanf(line.c_str(), "%s __18%s",w1, w2) == 2 )
        {
            if( w1 != string("IFNDEF")) continue ;
            found = true ;
            string namef = "p18" +  bfblock::lower(w2) ;
	    name = bfblock::lower(name) ; // force the output to be in lowercase letters
            if( namef != name) cout << "processor " << namef << " found, but doesn't match the file name  "<< name << endl ;
       }
    }
    return found ;
}

void processor::make_H(ostream& out)
{

    out << "#ifndef DEVICE\n" ;
    out << "#define DEVICE " << name << "\n" ;
    out << "#define " << name << "\n" ;
    out << endl ;
    out << "// ======================================" << endl ;
    out << "//         PROCESSOR : " << name << "\n" ;
    out << "// ======================================" << endl << endl  ;
    out << "// This file has been automatically generated from Microchip's \"" << name << ".inc\" file." << endl ;
    out << "// with the inc2h-v3 utility.             Please do not edit." << endl ;
    out << "// Do not use with cpik versions < V0.7. Please report problems to the author." << endl ;
    out << "// (C) Alain Gibaud  2012-2013    (alain.gibaud@free.fr)"<< endl << endl ;

    if( (accfirstsfr ==  firstsfr) || accfirstsfr == -1  )
    {
      out << "// Note; All SFRs are reachable via access bank" << endl ; 
      out << "#pragma firstsfr 0x" << hex << firstsfr   << dec << endl ;
    }
    else
    {
      if( accfirstsfr > firstsfr) 
	out << "// Note: SFRs from 0x" << hex <<  firstsfr 
        << " to 0x" << (accfirstsfr-1) << " are not reachable via access bank" << dec << endl;
      else
	out << "// Note; All SFRs are reachable via access bank" << endl ;
      
      out << "#pragma firstsfr 0x" << hex << accfirstsfr << dec  << "\n" ;
    }
 
    for(unsigned int i = 0 ; i < regs.size() ; ++i)
    {
        out << regs[i].setmode(printmode) ;
    }
    out << "#endif\n" ;
}

ostream& operator<<(ostream& out, const  reg& r)
{
    out << "// ------------------------------\n";
    out << "//        " << r.name << "\n"  ;
    out << "// ------------------------------\n";

    out << "unsigned int " << r.name << "@0x" << hex << r.value  << " ;" << endl ;


    if( r.size() )
    {
        //  standard BF
        if( r.printmode & 1 )
        {
            out << "union\n{\n\n" ;

            for(unsigned int b = 0 ; b < r.size() ; ++b)
            {
                out << r[b].setmode(1);
            }

            if( r.aliases.size()  )
            {
                out << "// The following are aliases ..  \n" ;
                for(unsigned int b = 0 ; b < r.aliases.size() ; ++b)
                {
                    out << r.aliases[b].setmode(1) ;
                }
            }
            out << "} " << r.name << "bits@0x" << hex << r.value  << dec << "  ;\n\n" ;
        }

        // explicit BF
        if( r.printmode & 2 )
        {
            for(unsigned int b = 0 ; b < r.size() ; ++b)
            {
                out << r[b].setmode(2)  ;
            }

            if( r.aliases.size()  )
            {
                out << "// The following are aliases ..  \n" ;
                for(unsigned int b = 0 ; b < r.aliases.size() ; ++b)
                {
                    out << r.aliases[b].setmode(2)  ;
                }
            }
        }


    }
    return out ;
}

void processor::make_aliases( )
{
    for(unsigned int i = 0 ; i < regs.size() ; ++i)
    {
        regs[i].make_aliases() ;
    }
}


int processor::index(const string& N)
{
    for(int i = 0 ; i < (int)regs.size() ; ++i)
        if(regs[i].name == N) return i ;
    return -1 ;
}

