// #include <stdio.h>

// int main(void)
// {
// 	int a, b, c;
// 	int max, min;
// 	scanf("%d%d%d", &a, &b, &c);

// 	if (a > b)
// 	{
// 		max = a;
// 		min = b;
// 	}
// 	else
// 	{
// 		max = b;
// 		min = a;
// 	}
// 	if (c > max)
// 		max = c;
// 	if (min > c)
// 		min = c;
// 	printf("%d\n", max - min);
// 	return (0);
// }
#include <stdio.h>

int ft_max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int ft_min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int main(void)
{
	int a, b, c;
	int max, min;
	scanf("%d%d%d", &a, &b, &c);

	max = ft_max(ft_max(a, b), c);
	min = ft_min(ft_min(a, b), c);
	printf("%d\n", max - min);
	return (0);
}
