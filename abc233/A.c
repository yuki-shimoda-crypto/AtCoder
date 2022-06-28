#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int x, y, stamp = 0;

	scanf("%d%d", &x, &y);
	while (y - x > 0)
	{
		stamp++;
		x += 10;
	}
	printf("%d\n", stamp);

	return (0);
}
