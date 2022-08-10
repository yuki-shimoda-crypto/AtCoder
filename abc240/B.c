#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// input
	long long	n;
	scanf("%lld", &n);
	long long	a[n];
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	// process
	long long	count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
				break;
			if (j == n - 1)
				count++;
		}
	}
	count++;
	printf("%lld\n", count);
	return (0);
}