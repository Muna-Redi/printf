#ifndef MAIN_H

#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_ft;

int _printf(const char *format, ...);
int (*check(const char *format))(va_list);
char *rev_str(char *s);
char *c_base(int num, int base);
char *tostr(long int num);
int pstring(char *b);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);

#endif /* MAIN_H */
