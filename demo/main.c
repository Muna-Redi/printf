#include "struct.h"

int (*check(char *r))(int)
{
	int i= 0;
	fun_t p[] = {
		{"a", _add},
		{"s", _sub},
		{"d", _div},
		{NULL, NULL}
	};

	while (p[i].s != NULL)
	{
		if (*(p[i].s) == *r)
			break;
		i++;
	}
	return (p[i].f);
}
int _print(char *firm)
{
	int b = 5, i;
	int (*f)(int);

	while (*firm)
	{
		f = check(firm);
		if (f == NULL)
			putchar(*firm);
		else
		{
			f(b);
		}
		firm++;
		i++;
	}
	return(i);
}
int main()
{
	char s[] = "Hardfus";

	_print(s);
	printf("%s\n", s);
	return (0);
}
