#include "main.h"

/**
*
*/
int s_print(va_list s)
{
        char *sent = va_arg(s, char *);
        int count = 0;

        if (sent == NULL)
                sent = "(null)";
        count += pstring(sent);
}
/**
*
*/
int c_print(va_list c)
{
        char alphnum = va_arg(c, int);
        int i = 0;

        _putchar(alphnum);
        i++;
        return (i);
}

/**
*
*/
int b_print(va_list b)
{
        int count = 0, binary;
        char *s

        binary = va_arg(b, int);
        binary = c_base(binary, 2);
        s = tostr(binary);
        count += pstring(s);
        return (count);
}
/**
*
*/
int
