#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if ((a == 1 && b == 10) || (a == 10 && b == 1))
		printf("Yes\n");
	else if (abs(a - b) == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}