#include "main.h"

/**
 * print_s - A function that prints a string
 * @s: string to print
 * Return: i
 */
int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	i += pstring(str);
	return (i);
}
/**
 * print_c - A function that prints a char
 * @c: character to print
 * Return: 1 (Success)
 */
int print_c(va_list c)
{
	char letter = (char)va_arg(c, int);

	_putchar(letter);
	return (1);
}
/**
 * print_u - A function that prints an unsigned integer
 * @u: unsigned int to print
 * Return: number of printed digits
 */
int print_u(va_list u)
{
	unsigned int num, count = 0;
	char *s;

	num = va_arg(u, int);
	s = tostr(num);
	count += pstring(s);
	return (count);
}
/**
* print_x - A function that prints an ascii char value in
* lowercase hexadecimal
* @x: char to print
* Return: number of printed characters
*/
int print_x(va_list x)
{
	unsigned int count = 0, num;
	char *s;

	num = va_arg(x, unsigned int);
	s = c_base(num, 16);
	count += pstring(s);
	return (count);
}
