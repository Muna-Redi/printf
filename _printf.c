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
	    for (; *format; forma++)
	    {
		    if (*format != '%')
		    {
			    _putchar(*format);
			    counter++;
			    continue;
		    }
		    switch (*++format) {
		    case 's':
				    counter += print_s(fmt);
		    break;
		    case 'c':
				    counter += print_c(fmt);
		    break;
		    case 'd':
				    counter += print_d(fmt);
		    break;
		    default:
				    _putchar(*++format);
				    counter++;
            break;
		    }
	va_end(fmt);
	return (counter);
}
