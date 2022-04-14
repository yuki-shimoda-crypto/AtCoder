#include <stdio.h>

int main(void)
{
	int n, a[1000], i = 0, sum = 0, average;
	scanf("%d", &n);

	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	while (--i >= 0)
		sum += a[i];
	// while (i > 0)
	// {
	// 	i--;
	// 	sum += a[i];
	// }
	average = sum / n;
	while (++i < n)
	{
		if (a[i] >= average)
			printf("%d\n", a[i] - average);
		else
			printf("%d\n", average - a[i]);
		// i++;
	}
	return (0);
}
