#include "main.h"

/**
 * _printf - function that prints using soecified formats
 * @format: list of arguments to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list rep;
	int (*f)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(rep, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = check(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(rep);
				continue;
			}
		}
		i++;
	}
	va_end(rep);
	return (counter);
}
