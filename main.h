#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>

#include <stdlib.h>

#include <string.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;


int _putchar(char c);
int pstring(char *b);
int _printf(const char *format, ...);
char *tostr(long int num);
char *rev_str(char *);
char *c_base(int num, int base);
int print_o(va_list o);
int print_x(va_list X);
int print_u(va_list u);
int print_b(va_list b);
int print_i(va_list i);
int print_x(va_list x);
int print_s(va_list s);
int print_c(va_list c);
int print_d(va_list d);
int (*check(const char *format))(va_list);
char *hex_upper(int num);

#endif
