#include "printf.h"

/**
* pstring: prints a string
* @b: string to be printed
* Return: number of printed char
*/
void pstring(char *b)
{
	while (*b)
	{
		_putchar(*b);
		b++;
	}
}
/**
* _printf - prints to the stdout using format specifiers
* @format: formated string
* @...: other arguments
* Return: number of printed charracters
*/
int _printf(const char *format, ...)
{
	va_list str;
	char *sbuff;
	int i = 0;

	va_start(str, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			i++;
		}
		else
		{
			switch (*(++format))
			{
				case 'c':
					_putchar(va_arg(str, int));
					i++;
					break;
				case 's':
					sbuff = va_arg(str, char *);
					i += strlen(sbuff);
					pstring(sbuff);
					break;
				default:
					_putchar(*format);
					i++;
					break;
			}
		}
		format++;
	}
	va_end(str);
	return (i);
}
