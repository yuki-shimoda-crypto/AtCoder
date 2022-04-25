#include <stdio.h>
#include <stdlib.h>

int ft_min(int a, int b)
{
	return (a > b) ? b : a;
}

int ft_max(int a, int b)
{
	return (a > b) ? a : b;
}

int main(void)
{
	int l, n, *x;
	int min = 0, max = 0;

	scanf("%d%d", &l, &n);
	x = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);
	// find min
	// All ants face near the edge
	for (int i = 0; i < n; i++)
		min = ft_max(min, ft_min(x[i], l  - x[i]));
	// find max
	for (int i = 0; i < n; i++)
		max = ft_max(max,ft_max(x[i], l  - x[i]));
	printf("min = %d\n", min);
	printf("max = %d\n", max);
	return (0);
}