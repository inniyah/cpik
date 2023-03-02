#ifndef ERRNO_H
#define ERRNO_H
//
// errno is manually placed a addr 1 for simplicity 
// might be changed in the future
// 
int errno@1 ;
//
// Codes used in math and stdlib libraries
// (to be continued ..)
//
#define EDOM 		33
#define ERANGE 		34
#define EFPOS		35
#define ERRMAX		36

#endif
