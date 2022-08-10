#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	// input
	long long	n;
	scanf("%lld", &n);
	long long	a[n];
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	// process
	long long	count = 1;
	bool		appeared;
	qsort(a, n, sizeof(long long), compar);
	for (int i = 0; i < n - 1; i++)
		if (a[i] != a[i + 1])
			count++;
	printf("%lld\n", count);
	return (0);
}
// int main(void)
// {
// 	// input
// 	long long	n;
// 	scanf("%lld", &n);
// 	long long	a[n];
// 	for (int i = 0; i < n; i++)
// 		scanf("%lld", &a[i]);

// 	// process
// 	long long	count = 0;
// 	bool		appeared;
// 	for (int i = 0; i < n; i++)
// 	{
// 		appeared = false;
// 		for (int j = 0 ; j < i; j++)
// 		{
// 			if (a[i] == a[j])
// 			{
// 				appeared = true;
// 				break;
// 			}
// 		}
// 		if (!appeared)
// 			count++;
// 	}
// 	printf("%lld\n", count);
// 	return (0);
// }
// int main(void)
// {
// 	// input
// 	long long	n;
// 	scanf("%lld", &n);
// 	long long	a[n];
// 	for (int i = 0; i < n; i++)
// 		scanf("%lld", &a[i]);

// 	// process
// 	long long	count = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = i + 1; j < n; j++)
// 		{
// 			if (a[i] == a[j])
// 				break;
// 			if (j == n - 1)
// 				count++;
// 		}
// 	}
// 	count++;
// 	printf("%lld\n", count);
// 	return (0);
// }