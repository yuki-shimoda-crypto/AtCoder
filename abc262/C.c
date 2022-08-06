// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int compar(const void *n1, const void *n2)
// {
// 	if (*(long long *)n1 > *(long long *)n2)
// 		return (1);
// 	else if (*(long long *)n1 < *(long long *)n2)
// 		return (-1);
// 	else
// 		return (0);
// }

// int main(void)
// {
// 	long long	n;
// 	scanf("%lld", &n);
// 	long long	a[n];
// 	long long	tmp[n];
// 	for (long i = 0; i < n; i++)
// 		scanf("%lld", &a[i]);
// 	for (long i = 0; i < n; i++)
// 		tmp[i] = a[i];
// 	qsort(tmp, n, sizeof(long long), compar);
// 	for (long i = 0; i < n; i++)
// 	{
// 		if (i + 1 == tmp[i])
// 			j++;
// 	}
// 	printf("%lld\n", j);
// 	return (0);
// }

#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	n;
	scanf("%lld", &n);
	long long	a[n];
	long long	count = 0;
	long long	counthalf = 0;
	for (long i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	for (long long i = 0; i < n; i++)
		if (i + 1 == a[i])
			count++;
	// printf("%lld\n", count);
	for (long long i = 0; i < n; i++)
	{
		if (i + 1 == a[a[i] - 1])
			counthalf++;
	}
	printf("%lld\n", (counthalf - count) / 2 + (count * (count - 1)) / 2);

	return (0);
}