#ifndef FUN_H

#define FUN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct print
{
    char *s;
    int(*f)(int);
} fun_t;

char *tostr(int num);
char *rev_str(char *);
#endif
