#include "main.h"

/**
* pstring: prints a string
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
* _printf - prints to the stdout using format specifiers
* @format: formated string
* @...: other arguments
* Return: number of printed charracters
*/
int _printf(const char *format, ...)
{
	va_list str;
	int(*f)(va_list);
	char *sbuff;
	int i = 0;

	va_start(str, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			i++;
			++format;
			continue;
		}
		else
		{
			if (*(++format) == '%')
			{
				_putchar('%');
				i++;
				++format;
				++format;
				continue;
			}
			else
			{
				f = check(++format);
				if (f == NULL)
					return (-1);
				format++;
				format++;
				i += f(str);
				continue;
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
