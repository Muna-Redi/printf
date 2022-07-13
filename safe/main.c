#include "main.h"
#include <stdio.h>

int main ()
{
    int a = 0;
    char s[] = "hi dear";

    a += pstring(s);
    printf("\n%d\n", a);
    return(0);
}
