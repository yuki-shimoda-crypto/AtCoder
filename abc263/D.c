#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	n, l, r;
	scanf("%lld%lld%lld", &n, &l, &r);
	long long	a[n];
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	
	long long	sum_left[n];
	long long	sum_right[n];
	sum_left[0] = 0;
	sum_right[0] = 0;
	for (long long i = 1; i < n + 1; i++)
	{
		sum_left[i] = l + sum_left[i - 1]
		sum_right[i] = l + sum_right[i - 1]
	}
	return (0);
}