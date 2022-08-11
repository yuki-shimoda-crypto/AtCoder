#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	n;
	long long	total;
	
	scanf("%lld", &n);
	total = 1;
	for (int i = 0; i < n; i++)
		total *= 2;
	if (total > n * n)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}