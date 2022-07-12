#include "main.h"
/**
* pstring: prints a string
* @b: string to be printed      
* Return: number of printed ch  
*/                              
void pstring(char *b)
{
	while (*b)
	{
		_putchar(*b);
		b++;
	}
}
