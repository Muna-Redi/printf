#include <stdio.h>
#include <string.h>
#include "fun.h"

int main()
{
    int a = 0, i = 0, b = 0, len, g = -10045;
    char s[] = "Hello babe"; char *r;

    len = strlen(s);
    b += putchar(s[2]);
    printf("\nb cme as %d\n", b);
    a += strlen(s);
    printf("a has value %d\n", a);
    printf("len = `%d\n", a);
    i += printf("%c", s[6]);
    printf("len = %d\n", i);
    r = tostr(g);
    printf("a has value %s\n", r);
    return (0);
}
