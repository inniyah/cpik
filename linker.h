/***************************************************************************
                          linker.h  -  description
                             -------------------
    begin                : lun avr 25 2005
    copyright            : (C) 2005 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/


#ifndef LINKER_H
#define LINKER_H

#include "stringlist.h"

#include <map>
#include <string>
#include <iostream>
#include <fstream>
using namespace std ;
/**
  *@author Gibaud Alain
  */

class Linker
{
    stringList  _objfiles , _libpaths ;
    string      _outfile ;
    map<string,int> _refs ;
    map<string, vector<string> > _inits ;
    vector<string> _idata;
    vector<string> _udata;
    vector<string> _code;
    vector<string> _cdata;
    // ifstream _in ;
    ofstream _out ;
    /**  */
    string _devicename;
  public:
    enum LinkState { Needed = 1 , Found = 2  } ;
    enum Tag { NormalLine, StartOfDefinition, EndOfDefinition, Reference, InitData };
    stringList& objfiles() { return _objfiles ; }
    string& outfile() { return _outfile ; }
    Linker();
    ~Linker();
    /** request ref symbol */
    void request ( const string& ref ) ;
    /** mark ref symbol as satisfied */
    void satisfy ( const string& ref ) ;
    /** true if ref symbol is requested */
    bool isNeeded ( const string& ref ) ;
    /** returns the list of undefined symbols */
    stringList undefinedList() ;
    /** perform link edition */
    const char *doLink() ;
    /** perform link edition for file f ,
    return the number of references satisfied
    */
    int link1 ( const string& f );
    /** extract tag from a line
    return :
      0=normal line,
      1=start of definition,
      2=end of definition,
      3=reference
      4=init data
    */
    enum Tag decodeTag ( const string& line, string& tag, vector<string>& data, vector<string> **segment=NULL ) ;
    /** No descriptions */
    const char * makeProlog();
    /** No descriptions */
    string& deviceName();
    /** No descriptions */
    bool includeFile ( const string& name );
    /** No descriptions */
    const char * makeEpilog();
    /** Do ome pass link, and returns the number of satisfied symbols
    */
    int doOnePassLink();
    /** No descriptions */
    stringList& libPaths();
    /** No descriptions */
    void makeUdataClear();
    void makeInitializationTable();
    void outSegment ( vector<string> &s );
    bool isFound ( const string& n );
    /**
      True if symbol already loaded
    */
    int countZeroes ( vector<string> &vals, int from, int step );
    /**
     bool getDeviceMap(const string& key, int& min, int& max) ;

     search for information about a specific memory zone specified by key
     in the lnk device file
     returns true is information found, else false
     Valid memory zones are: 
	page idlocs config devid eedata accessram gpr0... accesssfr
    */
    bool getDeviceMap ( const string& key, int& min, int& max ) ;
};

#endif
