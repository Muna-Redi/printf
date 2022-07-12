#include "main.h"
/**
 * _print_int - prints an integar
 *
 * @var : variable to be printed
 *
 * Return : length of printed characters
 *
 */
int _print_int(long int var)
{
	int i, count = 0;

	if (var < 0)
	{
		_putchar('-');
		count += 1;
		var = -var;
	
	}
	if (var / 10)
		count += _print_int(var / 10);
	_putchar(var % 10 + '0');
	count += 1;
	return (count);
}
