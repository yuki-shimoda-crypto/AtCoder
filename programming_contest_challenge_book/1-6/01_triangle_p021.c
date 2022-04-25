// #include <stdio.h>
// #include <stdlib.h>

// int cmpnum(const void *n1, const void *n2)
// {
// 	if (*(int *)n1 < *(int *)n2)
// 		return 1;
// 	else if (*(int *)n1 > *(int *)n2)
// 		return -1;
// 	else
// 		return 0;
// }

// int main(void)
// {
// 	int n, a[100];
// 	int i, first, second, third;

// 	scanf("%d", &n);
// 	if (n < 3)
// 	{
// 		printf("%d\n", 0);
// 		return (0);
// 	}
// 	i = 0;
// 	while (i < n)
// 	{
// 		scanf("%d", &a[i]);
// 		i++;
// 	}
// 	qsort(a, n, sizeof(int), cmpnum);
// 	first = a[0];
// 	second = a[1];
// 	third = a[2];
// 	i = 3;
// 	while (i < n)
// 	{
// 		if (first > second + third)
// 		{
// 			first = second;
// 			second = third;
// 			third = a[i];
// 		}
// 		else
// 			break;
// 		i++;
// 	}
// 	if (first > second + third)
// 	{
// 		printf("%d\n", 0);
// 		return (0);
// 	}
// 	else
// 		printf("%d\n", first + second + third);
// 	return (0);
// }


#include <stdio.h>

int ft_max(int a, int b)
{
	return (a > b) ? a : b;
}

int main(void)
{
	int n, a[101], ans = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int len = a[i] + a[j] + a[k];
				int max = ft_max(a[i], ft_max(a[j], a[k]));
				int rest = len - max;
				if (max < rest)
					ans = ft_max(ans, len);
			}
		}
	}
	printf("%d\n", ans);
	return (0);
}