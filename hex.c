#include "main.h"

/**
 * oct_hex - converts decimal to base 8 or 16
 * @num: decimal number
 * Return: converted string
 */
char *oct_hex(unsigned int num, unsigned int base)
{
	char *rev_str(char *s);
	unsigned int i = 0;
	char buff[100];
	char *ptr;

	while (num > 0)
	{
		buff[i] = num % base;
		if (buff[i] >= 0 && buff[i] <= 9)
		{
			buff[i] += '0';
			i++;
		}
		else
		{
			buff[i] = (buff[i] - 10 + 'A');
			i++;
		}
		num /= base;
	}
	buff[i] = '\0';
	rev_str(buff);
	ptr = buff;
	return (ptr);
}
/**
 * print_o - A function that prints an unsigned
 * int in octal notation
 * @o: unsigned int to print
 * Return: number of printed digits
 */
int print_o(va_list o)
{
	unsigned int num, count = 0;
	char *s;

	num = va_arg(o,  unsigned int);
	s = oct_hex(num, 8);
	count += pstring(s);
	return (count);
}
/**
 * print_X - A function that prints an ascii char value in
 * lowercase hexadecimal
 * @X: char to print
 * Return: number of printed characters
 */
int print_X(va_list X)
{
	unsigned int count = 0, num;
	char *s;

	num = va_arg(X, unsigned int);
	s = oct_hex(num, 16);
	count += pstring(s);
	return (count);
}
