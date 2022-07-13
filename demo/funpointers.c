#include "struct.h"

int _add(int num)
{
	int a = 2, sum = 0;

	sum = a + num;
	printf("%d\n", sum);
	return (sum);
}
int _sub(int num)
{
	int b = 2, ans = 0;

	ans = num - b;
	printf("%d\n", ans);
	return (ans);
}
int _div(int num)
{
	int c = 2, dv = 0;

	dv = num / 2;
	printf("%d\n", dv);
	return (dv);
}
