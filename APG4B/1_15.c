// #include <stdio.h>

// int main(void)
// {
// 	int n, a[10], b[10], c[10], i = 0, j;
// 	int sum_a = 0, sum_b = 0, sum_c = 0;
// 	scanf("%d", &n);
// 	while (i < 3)
// 	{
// 		j = 0;
// 		while (j < n)
// 		{
// 			if (i == 0)
// 			{
// 				scanf("%d", &a[j]);
// 				sum_a += a[j];
// 			}
// 			else if (i == 1)
// 			{
// 				scanf("%d", &b[j]);
// 				sum_b += b[j];
// 			}
// 			else
// 			{
// 				scanf("%d", &c[j]);
// 				sum_c += c[j];
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	printf("%d\n", sum_a * sum_b * sum_c);
// 	return (0);
// }


#include <stdio.h>
#include <stdlib.h>

int ft_sum(int *a, int n)
{
	int sum = 0, i = 0;
	while (i < n)
	{
		sum += a[i];
		i++;
	}
	return sum;
}

int *ft_input(int *a, int n)
{
	int i = 0;
	a = (int *)malloc(sizeof(int) * n);
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	return a;
}

int main(void)
{
	int n;
	
	scanf("%d", &n);

	int *a = ft_input(a, n);
	int *b = ft_input(b, n);
	int *c = ft_input(c, n);

	int sum_a = ft_sum(a, n);
	int sum_b = ft_sum(b, n);
	int sum_c = ft_sum(c, n);

	printf("%d\n", sum_a * sum_b * sum_c);
	return (0);
}
