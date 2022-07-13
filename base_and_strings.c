#include "main.h"

/**
* tostr - converts int to string
* @num: number to be converted
* Return: the sring
*/
char *tostr(long int num)
{
	int reducer = 10, i = 0, b = 0, flag = 0;
	char *buff;

	buff =  malloc(100 * sizeof(char));
	while (num > 0 || num <= -1)
	{
		if (num <= -1)
		{
			num *= -1;
			buff[0] = '-';
			i++;
			flag += 1;
			continue;
		}
		buff[i] = ((num % reducer) + '0');
		i++;
		num /= reducer;
	}
	buff[i] = '\0';
	i--;
	if (flag == 1)
		rev_str(&(buff[++b]));
	else
		rev_str(buff);
	return (buff);
	free(buff);
}

/**
 * c_base - converts decimal to a required base <= 16
 * @num: decimal number
 * @base: base required
 * Return: converted string
 */
char *c_base(unsigned int num, unsigned int base)
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
			buff[i] = (buff[i] - 10 + 'a');
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
 * rev_str - reverses a string
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
	return (s);
}
