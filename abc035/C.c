#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// input
	long long	n, q;
	scanf("%lld%lld", &n, &q);
	long long	l[q], r[q];
	for (int i = 0; i < q; i++)
		scanf("%lld%lld", &l[i], &r[i]);

	for (int i = 0; i < q; i++)
	{
		l[i] = l[i] % n;
		r[i] = r[i] % n;
	}
	// process
	long long	osero = 0;
	long long	tmp = 0;
	long long	tmp_first = 0;
	long long	tmp_second = 0;
	for (int i = 0; i < q; i++)
	{
		tmp_first = 0;
		tmp_first = ~tmp_first;
		tmp_first = tmp_first << (l[i]);
		tmp_first = osero & tmp_first;
		tmp_first = ~tmp_first;
		tmp = 0;
		tmp = ~tmp;
		tmp = tmp << (l[i]);
		tmp_first = tmp & tmp_first;

		tmp_second = 0;
		tmp_second = ~tmp_second;
		tmp_second = tmp_second >> (64 - r[i]);
		tmp_second = osero & tmp_second;
		tmp_second = ~tmp_second;
		tmp = 0;
		tmp = ~tmp;
		tmp = tmp >> (64 - r[i]);
		tmp_second = tmp & tmp_second;

		osero = tmp_first | tmp_second;
	}

	// output	
	printf("%lld\n", osero);

	return (0);
}

// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	// input
// 	long long	n, q;
// 	scanf("%lld%lld", &n, &q);
// 	long long	l[q], r[q];
// 	for (int i = 0; i < q; i++)
// 		scanf("%lld%lld", &l[i], &r[i]);

// 	// process
// 	char	osero[n + 1];
// 	for (int i = 0; i < n; i++)
// 		osero[i] = '0';
// 	for (int i = 0; i < q; i++)
// 	{
// 		for (int j = (int)l[i] - 1; j < (int)r[i]; j++)
// 		{
// 			if (osero[j] == '0')
// 				osero[j] = '1';
// 			else
// 				osero[j] = '0';
// 		}
// 	}
// 	osero[n] = '\0';

// 	// output	
// 	printf("%s\n", osero);

// 	return (0);
// }