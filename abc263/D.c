#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long	ft_min(long long x, long long y)
{
	return x > y ? y : x;
}

int compar(const void *n1, const void *n2)
{
	if (*(long long *)n1 > *(long long *)n2)
		return (1);
	else if (*(long long *)n1 < *(long long *)n2)
		return (-1);
	else
		return (0);
}

int main(void)
{
	//input
	long long	n, l, r;
	scanf("%lld%lld%lld", &n, &l, &r);
	long long	a[n];
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	
	// process
	long long	sum_left[n + 1];
	long long	sum_right[n + 1];
	long long	sum_total[n + 1];
	sum_left[0] = 0;
	sum_right[0] = 0;
	for (long long i = 1; i < n + 1; i++)
	{
		sum_left[i] = ft_min(sum_left[i - 1] + a[i - 1], l * i);
		sum_right[i] = ft_min(sum_right[i - 1] + a[n - i], r * i);
	}
	for (int i = 0; i < n + 1; i++)
		sum_total[i] = sum_left[i] + sum_right[n - i];
	
	// output
	qsort(sum_total, n + 1, sizeof(long long), compar);
	printf("%lld\n", sum_total[0]);
	return (0);
}
