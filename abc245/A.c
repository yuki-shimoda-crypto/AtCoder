#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int a, b, c, d;
	int t1, t2;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	t1 = a * 60 + b;
	t2 = c * 60 + d + 1;
	if (t1 < t2)
	{
		printf("Takahashi\n")
	}
	else
	{
		printf("Aoki\n")
	}
	
	return (0);
}