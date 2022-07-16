#ifndef MAIN_H

#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
char *rev_str(char *s);
char *c_base(unsigned int num, unsigned int base);
char *oct_hex(unsigned int num, unsigned int base);
int print_X(va_list X);
int print_x(va_list x);
int print_b(va_list b);
int print_d(va_list i);
int print_i(va_list i);
int pstring(char *b);
int print_o(va_list o);
int print_u(va_list u);
int print_c(va_list c);
int print_s(va_list s);
int pstring(char *b);
char *tostr(long int num);
int pstring(char *b);
int _putchar(char c);

#endif /* MAIN_H */
