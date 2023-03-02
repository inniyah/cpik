#ifndef STDLIB_H
#define STDLIB_H

#undef NULL
#define NULL 0L
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1


int _assert(long line,char *s) ;
void exit(int i) ;

int isspace(char c);
int isdigit(char c);

char 	*ftoa (float x, char * str, int prec, int format);
float 	strtof(const char *str, char **endptr);
float 	atof(const char *str) ;
int 	atoi(const char *str) ;
long 	atol(const char *str) ;
long long  atoll(const char *str) ;
#endif

