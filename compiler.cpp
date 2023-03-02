/***************************************************************************
                          compiler.cpp  -  description
                             -------------------
    begin                : sam nov 20 2004
    copyright            : (C) 2004 by Gibaud Alain
    email                : alain.gibaud@free.fr
 ***************************************************************************/

#include "compiler.h"
#include <iostream>
#include <sstream>
using namespace std ;

#include "ctype.h"
#include "codegen.h"
#include "flatten.h"
#include "utility.h"
#include "portability.h"
#include "assembler_optimizer.h"


Compiler::Compiler()
    : lexer_() , parser_()  , fl_ ( 0 ) , cg_ ( 0 ), uniqueID_ ( 0 ),
      version_ ( "0.7.4" ), uniqueLitID_ ( 0 )
{
    inFileName = outFileName = justFileName = "" ;
    // 16 first bytes are reserved for Compiler
    //  globalsBaseAddr = 0x10 ;
    assembler_ = new Assembler;
}


Compiler::~Compiler()
{
    delete cg_ ;
    delete fl_ ;
    delete assembler_ ;
}

/** No descriptions */
const char  *Compiler::parseCommandLine ( int argc, char **argv )
{
    int k ;
    outFileName  =   inFileName = justFileName = "" ;
    linker_.deviceName() = "p18f1220" ;
    justCompile = false ;
    justVersion = false ;
    justAssembly = false ;
    keepUnusefulFiles = false ;

    includePaths().clear() ;
    linker_.libPaths().clear() ;
    debugOpt() = 0 ;


    romSize=65536; // default value, will be fixed when device name will be known


    for ( k=1 ; k < argc ; ++k )
    {
        string w ( argv[k] ) ;
        if ( w == "-o" )
        {
            if ( k+1 < argc )
                outFileName = argv[++k] ;
            else
                return "Missing output file name" ;
        }
        else if ( w == "-p" )
        {
            if ( k+1 < argc )
            {
                linker_.deviceName() = argv[++k] ;
                if ( linker_.deviceName().substr ( 0,3 ) != "p18" )
                    return "Bad device name (this compiler generates code for pic18 devices only)" ;
                // fetch rom size
                // Note: memory size checks are disabled if no device is specified
                int min,max ;
                if ( linker_.getDeviceMap ( "page" ,  min,  max ) )
                {
                    romSize=max-min+1 ;
                }
            }
            else
                return "Missing device name" ;
        }
        else if ( w == "-I" )
        {
            if ( k+1 < argc )
            {
                stringList lp = utility::explode ( argv[++k], ',' ) ;
                for ( unsigned int i = 0 ; i < lp.size() ; ++i )
                {
                    includePaths().push_back ( lp[i] );
                }
            }
            else
                return "Missing include path" ;
        }
        else if ( w == "-L" )
        {
            if ( k+1 < argc )
            {
                stringList lp = utility::explode ( argv[++k], ',' ) ;
                for ( unsigned int i = 0 ; i < lp.size() ; ++i )
                {
                    linker_.libPaths().push_back ( lp[i] );
                }
            }
            else
                return "Missing library path" ;
        }
        else if ( string ( w,0,2 ) == "-D" )
        {
            // to be passed to cpp
            defines_.push_back ( string ( w,2 ) ) ;
        }
        else if ( w == "-c" )
        {
            // just compile
            justCompile = true ;
        }
        else if ( w == "-v" )
        {
            justVersion = true ;
        }
        else if ( w == "-a" )
        {
            justAssembly = true ;
        }
        else if ( w == "-k" )
        {
            keepUnusefulFiles = true ;
        }
        else if ( w == "-A" )
        {
            if ( k+1 < argc )
            {
                assembler_->setProgramPath ( argv[++k] );
            }
            else
                return "Missing assembler executable name" ;
        }
        else if ( w.substr ( 0,2 ) == "-d" )
        {
            istringstream iss ( w.substr ( 2 ) ) ;
            int d ;
            if ( ! ( iss >> d ) )
                return "Bad arg for -d option" ;
            debugOpt() |= d ; // several - d option allowed : values are ORed
        }
        else if ( justCompile || utility::isCfile ( w ) )
        {
            if ( inFileName != "" )
                return "Compiling more than one C file is not allowed" ;
            inFileName = w ;
            justCompile = true ;
        }
        else if ( justAssembly || utility::fileExt ( w ) =="asm" )
        {
            inFileName=w;
            justAssembly = true;
        }
        else
        {
            // link - add one object file
            linker_.objfiles().push_back ( w ) ;
        }


    }

    if ( justCompile )
    {
        // compilation
        if ( inFileName == "" )
        {
            return "No input file specified in command line" ;
        }
        // extract file name witout extension (path might be still present)
        string nakedFileName = inFileName ;
        size_t i = nakedFileName.rfind ( "." ) ;
        if ( i != string::npos ) nakedFileName.erase ( i ) ;

        if ( outFileName == "" )
        {
            outFileName = nakedFileName + ".slb" ;
        }

        // remove path from file name
        justFileName =  nakedFileName ;
        i = justFileName.rfind ( Portability::dirSeparator() ) ;
        if ( i != string::npos ) justFileName.erase ( 0,i+1 ) ;

    }
    else if ( justAssembly )
    {
        if ( inFileName == "" )
        {
            return "No input file specified in command line" ;
        }
        string nakedFileName = inFileName ;
        size_t i = nakedFileName.rfind ( "." ) ;
        if ( i != string::npos ) nakedFileName.erase ( i ) ;

        if ( outFileName == "" )
        {
            outFileName = nakedFileName + ".hex" ;
        }
    }
    else
    {
        // link
        if ( outFileName == "" )   outFileName = "a.asm" ;
        linker_.outfile() =  outFileName ;
        // add current dir at the end of lib paths
        linker_.libPaths().push_back ( "." );
    }

    return 0 ;
}

const char *Compiler::go()
{
    const char *err = 0 ;
    if ( justVersion )
    {
        // if -v present, all other options are ignored
        printVersion() ;
    }
    else if ( justCompile )
    {
        err = compile() ;
    }
    else if ( justAssembly )
    {
        err = assembly ( inFileName, outFileName ) ;
    }
    else
    {
        err = link() ;
    }
    return err ;
}

const char *Compiler::link()
{
    return  linker_.doLink() ;
}

const char *Compiler::assembly ( string in, string out )
{
    return  assembler_->doAssembly ( in,out ) ;
}

/**  */
const char *Compiler::compile()
{
    static char diag[512] ;
    // preprocess input file
    FILE *f ;
    string cmd ( "cpp " ) , psource ( inFileName+".c" )  ;
    // make integer-like version from dot-notation version
    // (will allows user code to perform lexical comparison of versions numbers__)
    string vers ,v = version() ;
    for ( unsigned int i = 0 ; i < v.size() ; ++i )
        if ( v[i] != '.' )
            vers+= v[i] ;

    // add __CPIK__ macro
    cmd += "-D__CPIK__=" ;
    cmd += vers ;
    cmd += " " ;

    // add defines, if any
    for ( unsigned int k = 0 ; k < defines_.size() ; ++k )
    {
        cmd += "-D" ;
        cmd += defines_[k] ;
        cmd += " " ;
    }
    // add input file name
    cmd += utility::quote ( inFileName )  ;
    cmd += " " ;
    cmd += utility::quote ( psource )  ;
    cmd += " " ;

    // add default include path
    // allows to install simultaneously several version of the compiler,
    // with different libraries and headers
    includePaths().push_back ( Portability::cpikIncludeDir() ) ;

    for ( unsigned int i=0 ; i < includePaths().size() ; ++i )
    {
        string icmd ;
        icmd += "-I" ;
        icmd +=  includePaths() [i]  ;
        cmd += utility::quote ( icmd )  ;
        cmd += " " ;
    }

    //cout << "invoking cpp  : " << cmd << endl ;

    f = popen ( cmd.c_str(), "r" ) ;
    if ( f == 0 )  return "cpp preprocessor not available." ;

    while ( fgets ( diag, 511, f ) != 0 )
    {
        cerr << diag  ;
    }
    int stat = pclose ( f ) ;

    if ( stat != 0 )
    {
        sprintf ( diag,"Preprocessing error - return code %d", stat ) ;
        return diag ;
    }

    // source file is successfully preprocessed,
    // open preprocessed file
    in_.open ( psource.c_str() ) ;
    if ( !in_.is_open() )
    {
        sprintf ( diag, "Can't open intermediate file - %s", psource.c_str() ) ;
        return diag ;
    }

    // open output file
    out_.open ( outFileName.c_str() ) ;
    if ( ! out_.is_open() )
    {
        sprintf ( diag,"Can't open output file - %s", outFileName.c_str() ) ;
        in_.close( ) ;
        return diag ;
    }
    // create flattener
    fl_ = new Flatten ;

    // create code generator
    cg_ = new CodeGen ;

    // connect lexer to input and flattener flows
    lexer_.connect( ) ;


    // prepare symbol table
    symtab_.enterContext() ;

    int errCount = parser_.parse() ;

    outputGlobals() ;
    outputConfig() ;
    outputIdlocs() ;
    cg_->emitTxt ( "\tEND\n" ) ;

    // symtab_.prettyPrint(std::cout) ;

    out_.close() ;
    in_.close() ;

    // remove the .c.c file
    if( !keepUnusefulFiles )
    {
        remove(psource.c_str() ) ;
        // if errors, the .slb file is corrupted : remove it
        if(  errCount ) remove(outFileName.c_str() ) ;
    }

    sprintf ( diag,"%d error%s.",  errCount , errCount > 1 ? "s" : "" ) ;
    return  errCount ? diag : 0;
}

/** No descriptions C18 */
void Compiler::outputGlobals()
{
    for ( int i = 0 ; i < ( int ) symtab_[0].size() ; ++i )
    {
        Centity e =  symtab_[0][i] ;
        Ctype t = e->thetype() ;

        if ( !t->isFct() && ! ( e->isExtern() ) && ! ( e->isType() ) )
        {
            cg_->emitGlobalSymbol ( e ) ;
        }
    }
}
/** No descriptions */
Lexer * Compiler::lexer()
{
    return &lexer_ ;
}
/** No descriptions */
Parser * Compiler::parser()
{
    return &parser_ ;
}
/** No descriptions */
Flatten *& Compiler::flattener()
{
    return fl_ ;
}
/** No descriptions */
CodeGen *& Compiler::codegen()
{
    return cg_ ;
}
/** No descriptions */
Symtab * Compiler::symtab()
{
    return &symtab_ ;
}
/** No descriptions */
ofstream& Compiler::out()
{
    return out_ ;
}
/** No descriptions */
ifstream& Compiler::in()
{
    return in_ ;
}
/** No descriptions */
string Compiler::nakedFileName()
{
    return justFileName ;
}
/** No descriptions */
string Compiler::currentFunctionName()
{
    return parser_.curFct()->currentFunctionName() ;
}
/** No descriptions */
string Compiler::uniqueSuffix()
{
    return utility::toString ( uniqueID_++ );
}
/** Make an unique label with the form

L18_<source_file_name>_<current_function_name>_<unique_number>
 */
string Compiler::uniqueLabel()
{
    string u ="L18_" ;
    //u += justFileName ;
    //su += "_" ;
    u += currentFunctionName() ;
    u += "_" ;
    u += uniqueSuffix() ;

    return u ;
}
/** No descriptions */
multimap<string,string>& Compiler::pragmas()
{
    return pragmas_ ;
}

/**
 * return the specified pragma value,
 * or an empty string if this pragma is not present
 * (Note: for multi valued pragmas, only returns the first occurence)
 */
string Compiler::pragma( const string& key)
{
    string r ;
    multimap<string, string>::iterator v ;
    v = pragmas_.find(key) ;
    if( v != pragmas_.end() )
        r = v->second ;
    return r ;
}

/**
    Generates __config section if #pragma _CONFIG are used for
    defining config bits.
    This pragma is still supporded for backward-compatibility but
    #pragma CONFIG is now the normal way to define config bits
    See outputNewStyleConfig()
*/
const char * Compiler::outputConfig()
{
    bool noconfig = true ;
    string key ;
    string config = "__CONFIG " ;

    // search for config pragmas
    for ( int i=1 ; noconfig && i <= 7 ;++i )
    {
        if ( pragmas().find ( "_CONFIG"+utility::toString ( i ) +"L" ) != pragmas().end() ) noconfig = false ;
        if ( pragmas().find ( "_CONFIG"+utility::toString ( i ) +"H" ) != pragmas().end() ) noconfig = false ;
    }
    if ( noconfig ) return outputNewStyleConfig()   ;

    // generate __config psect
    cg_->emitTxt ( ";<+__config>" ) ;
    // search for config pragmas
    for ( int i=1 ; i <= 7 ;++i )
    {
        key = "_CONFIG"+utility::toString ( i ) +"L" ;
        multimap<string,string>::iterator ikey = pragmas().find ( key ) ;
        if ( ikey != pragmas().end() )
            cg_->emitTxt ( "\t"+config+key+", "+ (*ikey).second ) ;

        key = "_CONFIG"+utility::toString ( i ) +"H" ;
        ikey = pragmas().find ( key ) ;
        if ( ikey != pragmas().end() )
            cg_->emitTxt ( "\t"+config+key+", "+ (*ikey).second  ) ;

    }
    cg_->emitTxt ( ";<->" ) ;
    return 0 ;
}

/**
    Generates __config section if #pragma CONFIG are used for
    defining config bits
*/
const char * Compiler::outputNewStyleConfig()
{
    // search for config pragmas
    if ( pragmas().find ( "config") == pragmas().end()  ) return 0  ;

    // generate __config psect
    cg_->emitTxt ( ";<+__config>" ) ;
    // search for config pragmas
    pair< multimap<string,string>::iterator,  multimap<string,string>::iterator> range  ;
    range =  pragmas().equal_range( "config" ) ;

    multimap<string,string>::iterator ikey1 = range.first , ikey2 = range.second ;

    for (   ;  ikey1 != ikey2  ; ++ikey1  )
    {
        cg_->emitTxt ( "\tCONFIG "+(*ikey1).second ) ;
    }
    cg_->emitTxt ( ";<->" ) ;
    return 0 ;
}


/** Generates __idlocs section if #pragma are used for
defining id data */
const char * Compiler::outputIdlocs()
{
    bool noid = true ;
    string key ;

    // search for idlocs pragmas
    for ( int i=0 ; noid && i <= 7 ;++i )
    {
        if ( pragmas().find ( "_IDLOC"+utility::toString ( i ) ) != pragmas().end() ) noid = false ;
    }
    if ( noid ) return 0 ;

    // generate __idlocs  psect
    cg_->emitTxt ( ";<+__idlocs>" ) ;
    // search for config pragmas
    for ( int i=0 ; i <= 7 ;++i )
    {
        key = "_IDLOC"+utility::toString ( i ) ;
        multimap<string,string>::iterator ikey = pragmas().find ( key ) ;
        if ( ikey != pragmas().end() )
            cg_->emitTxt ( "\t__IDLOCS " + key +", "+ (*ikey).second  ) ;
    }
    cg_->emitTxt ( ";<->" ) ;
    return 0 ;
}

stringList& Compiler::includePaths()
{
    return includepaths_ ;
}


void  Compiler::printVersion()
{
    cout << "cpik C compiler " ;
    cout << "(v" << version() << ")" ;
    cout << " for pic18 devices from Microchip" << endl <<
            "by Alain Gibaud (alain.gibaud@free.fr) and Josef Pavlik\n"
            "see http://pikdev.free.fr." << endl << endl ;
}

/** No descriptions */
const char * Compiler::usage()
{
    printVersion() ;
    cout << "Please note that cpik is both a compiler and a linker." << endl  ;
    cout << "In addition, it can invoke gpasm for global optimization of jumps." << endl << endl ;
    cout << "Compiler usage:" << endl ;
    cout << "cpik [-c] [-v] [-k] [-DSYMBOL[=VALUE]] [-o output_slb_file] [-p device_name] [-I include_path[,include_path]] [-d<value>] input_c_file" << endl ;
    cout << "      Option summary:" << endl ;
    cout << "-c : compile only .c file to .slb file" << endl ;
    cout << "-v : print version number and exit" << endl ;
    cout << "-k : keep output from preprocessor (.c.c file) and .slb file, even when compilation fails" << endl ;
    cout << "     This option is for debugging purpose only. The default is to remove unuseful files." << endl ;
    cout << "      Examples:" << endl ;
    cout << "cpik -v" << endl ;
    cout << "cpik -c -DFLOAT_SUPPORT -o prog.slb -p p18f2525 prog.c" << endl ;
    cout << "cpik -p p18f2525 prog.c" << endl ;
    cout << "cpik -p p18f2525 -DVERSION=3 -I "<< Portability::cpikIncludeDir() << ",mydir"
         << " prog.c" << endl ;

    cout << endl << "Linker usage:" << endl ;
    cout << "cpik [-v] [-o output_asm_file] [-p device_name] [-L library_path[,library_path]] input_slb_file [input_slb_files] " << endl  ;
    cout << "      examples:" << endl ;
    cout << "cpik -o prog.asm prog.slb" << endl ;
    cout << "cpik -o prog.asm -p 18f2525 -L " << Portability::cpikLibDir() << " stdio.slb prog.slb" << endl ;

    cout << endl << "Assembler usage:" << endl ;
    cout << "cpik -a [-o output_hex_file] [-p device_name] [-A gpasm_executable_path] [-d<value>] input_asm_file" << endl ;
    cout << "      example:" <<endl;
#if (defined(_WIN32) || defined(__WIN32__)) && !defined(__CYGWIN__)
    cout << "cpik -a -o prog.hex -A \"C:\\Program Files\\gputils\\bin\\gpasm.exe\" prog.asm" << endl;
#else
    cout << "cpik -a -o prog.hex -A /usr/local/bin/gpasm prog.asm" << endl;
#endif
    return 0 ;
}
/** Access to debug option
Return the current debug state
1 = abstract machine code before peephole optimizer
2 = abstract machine code after peephole optimizer
4 = local entities
8 = expression before any processings
16 = expression after all  processings
*/
int & Compiler::debugOpt()
{
    return debugOpt_ ;
}
/** No descriptions */
string Compiler::getPragma ( const string& p )
{
    string r ;
    multimap<string, string>::iterator f = pragmas().find ( p ) ;
    if ( f !=  pragmas().end() )  r = ( *f ).second ;
    return r ;
}
void Compiler::removePragma ( const string& p )
{
    pragmas().erase(p) ;
}

string Compiler::version ( const string& n )
{
    if ( n != "" ) version_ = n ;
    return version_ ;
}

/*!
    \fn Compiler::uniqueLiteralName()
 */
string Compiler::uniqueLiteralName()
{
    string u = "#" ;
    u += secureNakedFileName() ;
    u += "_" ;
    u += utility::toString ( uniqueLitID_++ ) ;
    return u ;
}


/*!
    \fn Compiler::secureNakedFileName()
 Encode nasty filenames in order to remove + - BLANK ( ) characters
 */
string  Compiler::secureNakedFileName()
{
    string s = nakedFileName() , r ;
    for ( unsigned int i = 0 ; i < s.size() ; ++i )
    {
        char c = s[i] ;
        if ( c == ' ' || c == '(' || c == ')' || c == '-' || c == '+' || c == '\t' || c == ',' )
        {
            r += '#' ;
            r += utility::toHexString ( ( int ) c ) ;
        }
        else
            r += c ;
    }
    return r ;
}
/*
 * returns the list of the registers to be seved before executing an ISR
 * as specified by the #pragma SAVED_REGS
 * white spaces are trimmed during the parsing, so
 * expressions found cannot contain any blank
 */

vector<string> Compiler::getSavedRegs()
{
    vector<string> r ;

    multimap<string,string>::iterator k = pragmas().find("saved_regs") ;
    if( k == pragmas().end()) return r ;

    // OK, the pragma exists
    string line = k->second ;
    // split line in words
    string w ;
    for(unsigned int i=0; i < line.size() ; ++i)
    {
        char c = line[i] ;
        if( c == ' ' || c == '\t' ) continue ;
        if( c == ',')
        {
            r.push_back(w); w.clear() ;
        }
        else
            w += c ;
    }
    if( w != "") r.push_back(w) ;
    return r ;
}

/*
 * Insert a new  pragma entry
 * Note: Several occurences of the config pragma can exist,
 * but other pragmas must be unique, so old values are removed
 * in case of multiple occurences.
 */

void Compiler::insertPragma(const string& key, const string& value)
{
    if( key != "config" )
    {
        // erase an eventual  previous definition
        multimap<string,string>::iterator found = pragmas().find(key) ;
        if( found !=  pragmas().end() )
        {
            // remove entry
            pragmas().erase(found);
        }

    }
    pragmas().insert(pair<string,string>(key,value)) ;
}
