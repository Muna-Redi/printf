#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>

#include <stdlib.h>

#include <string.h>

/**
* struct semi_print - this contain function pointer for printing in diff
*formats
*@spec: this holds the specified format
*@funct: function for printing
*/

typedef struct semi_print
{
        char *spec;
        int (*fptr)(va_list);
} semi_print;

int _putchar(char c);
int _printf(const char *format, ...);
char *tostr(int num);
char *rev_str(char *);
char *c_base(int num, int base);
int pstring(char *b);

#endif
