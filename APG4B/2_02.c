// #include <stdio.h>

// int main(void)
// {
// 	int a[3], b[3], i, j;
// 	i = 0;
// 	while (i < 3)
// 	{
// 		scanf("%d", &a[i]);
// 		i++;
// 	}
// 	j = 0;
// 	while (j < 3)
// 	{
// 		scanf("%d", &b[j]);
// 		j++;
// 	}
// 	while (--i >= 0)
// 	{
// 		j = 3;
// 		while (--j >= 0)
// 		{
// 			if (a[i] == b[j])
// 			{
// 				printf("YES\n");
// 				return (0);
// 			}
// 		}
// 	}
// 	printf("No\n");
// 	return (0);
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, s, *a, *p, i, j, count;
	
	scanf("%d %d", &n, &s);
	a = (int *)malloc(sizeof(int) * n);
	p = (int *)malloc(sizeof(int) * n);
	i = -1;
	while (++i < n)
		scanf("%d", &a[i]);
	i = -1;
	while (++i < n)
		scanf("%d", &p[i]);
	count = 0;
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
		{
			if (a[i] + p[j] == s)
				count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
