#include "main.h"

/**
<<<<<<< HEAD:safe/_printf.c
* pstring: prints a string
* @b: string to be printed
* Return: number of printed char
*/
int pstring(char *b)
{
        int i = 0;

        while (*b)
        {
		    _putchar(*b);
		    b++;
            i++;
        }
        return (i);
}
/**
* _printf - prints to the stdout using format specifiers
* @format: formated string
* @...: other arguments
* Return: number of printed charracters
*/
=======
 * _printf - function that prints using soecified formats
 * @format: list of arguments to print
 * Return: Number of characters printed
 */
>>>>>>> refs/remotes/origin/master:_printf.c
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
