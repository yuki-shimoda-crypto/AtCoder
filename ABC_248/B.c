// #include <stdio.h>

// int main(void)
// {
// 	int a, b, k, i;
	
// 	scanf("%d %d %d", &a, &b, &k);
// 	i = 0;
// 	while (a < b)
// 	{
// 		a *= k;
// 		i++;
// 	}
// 	printf("%d\n", i);
// 	return (0);
// }

#include <stdio.h>

int main(void)
{
	unsigned int a, b, k, i;
	
	if (scanf("%d %d %d", &a, &b, &k) )
	;
	i = 0;
	while (a < b)
	{
		a *= k;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
