#include "main.h"

/**
* pstring -  prints a string
* @b: string to be printed
* Return: number of printed char
*/
int pstring(char *b)
{
	int a = 0;

	while (*b)
	{
		_putchar(*b);
		b++;
		a++;
	}
	return (a);
}
/**
 * print_i - A function that prints a base 10 integer
 * @i: integer to print
 * Return: number of printed digits
 */
int print_i(va_list i)
{

	int num, count = 0;
	char *s;

	num = va_arg(i, int);
	s = tostr(num);
	count += pstring(s);
	return (count);
}
/**
 * print_d - A function that prints a decimal base 10
 * @d: base 10 integer to print
 * Return: number of printed digits
 */
int print_d(va_list d)
{
	int num, count = 0;
	char *s;

	num = va_arg(d, int);
	s = tostr(num);
	count += pstring(s);
	return (count);
}
/**
 * print_b - A function that prints an unsigned int i binary notation
 * @b: unsigned int to print
 * Return: number of printed digits
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
