#include "main.h"

int main()
{
        int count = 0, number = 16;
        char *r;

        r = c_base(number, 2);
        count += pstring(r);
        return (count);
}
