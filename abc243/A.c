#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int v, a, b, c;
	int f[3], i = -1;
	bool flag = true;

	scanf("%d%d%d%d", &v, &a, &b, &c);
	f[0] = a;
	f[1] = b;
	f[2] = c;
	while (flag)
	{
		i++;
		(v - f[i % 3]) >= 0 ? (v -= f[i % 3]) : (flag = false);
	}
	if (i % 3 == 0)
	{
		printf("F\n");
	}
	else if (i % 3 == 1)
	{
		printf("M\n");
	}
	else
	{
		printf("T\n");
	}
	
	
	return (0);
}