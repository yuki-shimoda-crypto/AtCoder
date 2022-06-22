#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int) n; i++)
#define rep2(i, s, n) for (int i = s; i < (int) n; i++)

// int main(void)
// {
// 	rep(i, 3)
// 	{
// 		printf("i = %d\n", i);
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	int n, sum, tmp;

// 	scanf("%d", &n);
// 	sum = 0;
// 	rep(i, n)
// 	{
// 		scanf("%d", &tmp);
// 		sum += tmp;
// 	}
// 	printf("%d\n", sum);
// 	return (0);
// }

// int main(void)
// {
// 	rep(i, 5)
// 	{
// 		printf("i = %d\n", i);
// 		if (i ==3)
// 		{
// 			break;
// 		}
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	rep(i, 5)
// 	{
// 		if (i ==3)
// 		{
// 			continue;
// 		}
// 		printf("i = %d\n", i);
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	int s = 1, n = 4;

// 	rep(i, n - s)
// 	{
// 		printf("i = %d\n", i + s);
// 	}
	
// 	rep2(i, 1, 4)
// 	{
// 		printf("i = %d\n", i);
// 	}
	
// 	return (0);
// }

// int main(void)
// {
// 	rep(i, 3)
// 	{
// 		rep(j, 3)
// 		{
// 			printf("i = %d, j = %d\n", i, j);
// 		}
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	int n = 5;
// 	rep(i, n)
// 	{
// 		printf("i = %d, n = %d\n", i, n);
// 		n--;
// 		i++;
// 	}
// 	return (0);
// }

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("A:");
	while (0 < a)
	{
		printf("]");
		a--;
	}
	printf("\n");

	printf("B:");
	while (0 < b)
	{
		printf("]");
		b--;
	}
	printf("\n");
}