#include "main.h"

/**
*print_s - prints a string
@s: unknown string argument
Return: an int
*/
int print_s(va_list s)
{
	int count = 0;
	char *sent = va_arg(s, char *);

	count += pstring(sent);
	return(count);
}
/**
*print_c - prints character
@c: unkown char argument
Return: an int
*/
int print_c(va_list c)
{
	int count = 0;
	char letter = va_arg(c, int);

	count = 1;
	_putchar(letter);
	return (count);
}
/**
* print_b - prints binary numbers
* @b: unknown argument
* Return: int
*/
int print_b(va_list b)
{
	int a, count = 0;
	char *s;

	a = va_arg(b, int);
	s = c_base(a, 2);
	pstring(s);
	count += strlen(s);
	return (count);
}
/**
 * print_d - prints a decimal integer
 * @d: unknown int argument
 * Return: int
 */
int print_d(va_list d)
{
	int num, count = 0;
	char *s;

	num = va_arg(d, int);
	s = tostr(num);
	count += pstring(s);
	return(count);
}
/**
 * print_i - prints an int
 * @i: int argument
 * Return: int
 */
int print_i(va_list i)
{
	int num, count = 0;
	char *s;

	num = va_arg(i, int);
	s = tostr(num);
	count += pstring(s);
	return(count);
}
