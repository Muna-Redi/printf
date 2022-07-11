#include "printf.h"

/**
 * tostr - converts int to string
 * @int - number to be converted
 * Return: the sring
 */
char *tostr(int num)
{
	int reducer = 10, i = 0, b = 0;
	char *buff, *str;

	buff = malloc(100 * sizeof(char));
	str = malloc(100 * sizeof(char));
	while (num > 0)
	{
		buff[i] = ((num % reducer) + '0');
		num /= reducer;
		i++;
	}
	buff[i] = '\0';
	i--;
	for (; i >= 0; i--)
	{
		str[b] = buff[i];
		b++;
	}
	str[b] = '\0';
	return (str);
	free(buff);
	free(str);
}

/**
 * c_base - converts decimal to a required base <= 16
 * @base: base required
 * @num: decimal number
 * Return: converted string
 */
char *c_base(int num, int base)
{
	char *rev_str(char *s);
	int i = 0;
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
/** rev_str - reverses a string
 * @s: string to be reversed
 * Return: pointer to str
 */
char *rev_str(char *s)
{
	int n = 0, r, p, x;
	char i;

	while (s[n] != '\0')
		n++;

	r = n - 1;
	p = r;
	x = p / 2;
	while (p >= x)
	{
		if (p > x)
		{
			i = s[p];
			s[p] = s[r - p];
			s[r - p] = i;
		}
		else if (p == x)
		{
			s[p] = s[p];
		}
		p--;
	}
	return(s);
}