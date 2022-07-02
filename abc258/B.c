#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long main(void)
{
	long n, **a, *num;

	scanf("%ld", &n);
	num = (long *)malloc(sizeof(long) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &num[i]);
	}
	
	a = (long **)malloc(sizeof(long *) * n);
	for (long i = 0; i < n; i++)
		a[i] = (long *)malloc(sizeof(long) * n);
	
	for (long i = 0; i < n; i++)
	{
		for (long j = n - 1; -1 < j; j--)
		{
			a[i][j] = num[i] % 10;
			num[i] /= 10;
		}
	}

	
	
	return (0);
}


	// for (long i = 0; i < n; i++)
	// {
	// 	for (long j = 0; j < n; j++)
	// 	{
	// 		printf("%ld", a[i][j]);
	// 	}
	// 	printf("\n");
	// }