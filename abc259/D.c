#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long n, sx, sy, tx, ty;
	long *x, *y, *r;

	scanf("%ld%ld%ld%ld%ld", &n, &sx, &sy, &tx, &ty);

	x = (long *)malloc(sizeof(long) * n);
	y = (long *)malloc(sizeof(long) * n);
	r = (long *)malloc(sizeof(long) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%ld%ld%ld", &x[i], &y[i], &r[i]);
	}
	

	return (0);
}