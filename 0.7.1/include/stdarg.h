#ifndef STDARGS_H
#define STDARGS_H



typedef char *va_list ;

#define va_start(AP,AR) (AP) = (char*)(&(AR)) 
#define va_end(AP)  
//  elegant but code is longer (could be optimized)
//#define va_arg(AP, TYPE) ( *(TYPE*) ((AP)-=sizeof(TYPE)) ) 
// ugly, but code is shorter
#define va_arg(AP, TYPE) ( (AP)-=sizeof(TYPE),  *(TYPE*) (AP) ) 
#endif
