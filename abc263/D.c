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
	
	long long	sum_first = 0;
	long long	sum_l;
	double		average_first;
	for (int i = 0; i < n; i++)
		sum_first += a[i];
	sum_l = n * l;
	if (average_first > sum_l)
	{
		/* code */
	}
	
	return (0);
}