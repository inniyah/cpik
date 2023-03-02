#include "compiler.h"

Compiler c18  ;


int main ( int argc, char **argv )
{

	const char *err = 0 ;

	if ( argc == 1 )
		c18.usage (  )   ;
	else if ( ( err=c18.parseCommandLine ( argc, argv ) ) == 0 )
	{
		if ( ( err = c18.go() ) != 0 )
		{
			cerr << err << endl ;
		}
	}
	else
		cerr << err << endl ;

	return err != 0 ;
}
