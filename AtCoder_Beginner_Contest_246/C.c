#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int n, k, x;
	int *a;
	int i, j;

	i = 0;
	j = 0;
	scanf("%d %d %d", n, k, x);
	a = (int *)malloc(sizeof(int) * n);
	while (i < n)
	{
		scanf("%d",a[i]);
		i++;
	}
	while (k > 0)
	{
		while (a[j] >= x && k > 0)
		{
			a[j] -= x;
			k--;
		}
		j++;
	}
	
	

	
}
