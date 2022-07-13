#include "main.h"

/**
 * hex_upper - converts decimal to a required base <= 16
 * @num: decimal number
 * Return: converted string
 */
char *hex_upper(int num)
{
	char *rev_str(char *s);
	int i = 0, base = 16;
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
