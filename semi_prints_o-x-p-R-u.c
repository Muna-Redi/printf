#include "main.h"

/**
*
*/
int o_print(va_list o)
{
	int count = 0, num;
	char *s;
	
	num = va_arg(o, int);
	s = c_base(num, 8);
	count += pstring(s);
	return(count);
}
/**
*
*/
int X_print(va_list X)
{
	int count = 0, num;
	char *s;
	
	num = va_arg(X, int);
	s = hex_upper(num);
	count += pstring(s);
	return (count);
}
/**
*
*/
int x_print(va_list x)
{
	int count = 0, num;
	char *s;
	
	num = va_arg(x, int);
	s = c_base(num, 16);
	count += pstring(s);
	return (count);
}
