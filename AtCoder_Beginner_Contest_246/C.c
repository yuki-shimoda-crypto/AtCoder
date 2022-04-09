#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int n, k, x;
	int i, j, sum;

	i = 0;
	j = 0;
	sum = 0;
	scanf("%d %d %d", &n, &k, &x);
	int a[n];
	// a = (int *)malloc(sizeof(int) * n);
	//store numbers
	while (i < n)
	{
		scanf("%d",a[i]);
		// a++;
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
		return 0;

	while (j > 0)
	{
		sum += a[j];
	}
	printf("%ld", sizeof(*a)/sizeof(a[0]));
	printf("%d", sum);

	free(a);
}
