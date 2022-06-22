#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void *n1, const void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return -1;
	else if (*(int *)n1 < *(int *)n2)
		return 1;
	else
		return (0);
}

int main(void)
{
	int n, k, x;
	int *a;
	int i, j, sum;

	i = 0;
	j = 0;
	sum = 0;
	scanf("%d %d %d", &n, &k, &x);
	a = (int *)malloc(sizeof(int) * n);

	// store numbers
	while (i < n)
	{
		// scanf("%d", a);
		scanf("%d", &a[i]);
		// a += 4;
		i++;
	}

	while (k > 0 && j < n)
	{
		while (a[j] >= x && k > 0 && j < n)
		{
			a[j] -= x;
			k--;
		}
		j++;
	}

	if (k > n)
	{
		printf("%d\n", 0);
		return (0);
	}

	qsort(a, n, sizeof(int), cmpnum);
	i = 0;
	while (k > 0)
	{
		a[i] = 0;
		k--;
		i++;
	}

	j = 0;
	while (j < n)
	{
		sum += a[j];
		j++;
	}

	printf("%d\n", sum);

	free(a);
	return (0);
}
