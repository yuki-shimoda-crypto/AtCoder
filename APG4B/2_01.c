#include <stdio.h>

int main(void)
{
	int a[5], i;
	i = 0;
	while (i < 5)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (a[i] == a[i + 1])
		{
			printf("YES\n");
			return (0);
		}
		i++;
	}
	printf("NO\n");
	return (0);
}
