#include "main.h"

/**
 * _printf - function prints a formated input string
 * @format: list of arguments to printing
 * Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list fmt;
	unsigned int counter = 0;

	if (format == NULL)
		return (-1);
	va_start(fmt, format);
	for (; *format; format++)
	{
		if (*format != '%')
		{
			_putchar(*format);
			counter++;
			continue;
		}
		else if (*format == '%')
		{
			switch (*++format)
			{
			case 's':
				counter += print_s(fmt);
			break;
			case 'c':
				counter += print_c(fmt);
			break;
			case 'd':
				counter += print_d(fmt);
			break;
			case 'u':
				counter += print_u(fmt);
			break;
			case 'i':
				counter += print_i(fmt);
			break;
			case 'o':
				counter += print_o(fmt);
			break;
			case 'X':
				counter += print_X(fmt);
			break;
			case 'x':
				counter += print_x(fmt);
			break;
			case '%':
				counter += write(1, "%", 1);
			break;
			default:
				counter += write(1, "%", 1);
				counter += write(1, format, 1);
			break;
			}

		}
	}
	va_end(fmt);
	return (counter);
}
