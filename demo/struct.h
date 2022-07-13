#ifndef STRUCT_H

#define STRUCT_H

#include <stdio.h>

typedef struct print
{
	char *s;
	int(*f)(int);
} fun_t;

int _add(int);
int _sub(int);
int _div(int);
int _print(char *firm);

#endif
