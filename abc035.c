#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	n, q;
	int			i;
	scanf("%lld%lld", &n, &q);

	long long	l[q], r[q];
	long long	table[n];
	char		output[n];
	for (i = 0; i < q; i++)
		scanf("%lld%lld", &l[i], &r[i]);
	memset(table, 0, sizeof(long long) * n);
	for (i = 0; i < q; i++)
	{
		table[l[i] - 1] += 1;
		table[r[i]] -= 1;
	}
	for (i = 1; i < n; i++)
		table[i] += table[i - 1];
	for (i = 0; i < n; i++)
	{
		if (table[i] % 2 == 0)
			output[i] = '0';
		else
			output[i] = '1';
	}
	output[i] = '\0';
	printf("%s\n", output);
	return (0);
}
