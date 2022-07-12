#include "main.h"

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
				case 'd':
					sbuff = va_arg(str, int);
					i += _print_int((long)(sbuff));
					break;
				case 'i':
					sbuff = va_arg(str, int);
					i += _print_int((long)(sbuff));
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
