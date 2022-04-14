#include <stdio.h>

// int main(void)
// {
// 	int i = 0;
// 	while (i < 3)
// 	{
// 		printf("while:i = %d\n", i);
// 		i++;
// 	}

// 	for (i = 0; i < 3; i++)
// 		printf("for:i = %d\n", i);
	
// 	return (0);
// }

int main(void)
{
	int n, a, b;
	char *op;

	scanf_s("%d%d", &n, &a);
	printf("n = %d, a = %d\n", n, a);
	for (int i = 0; i < n; i++)	
	{
		scanf_s("%c %d", op, &b);
		printf("op = %c, b = %d\n", *op, b);
		if (*op == '+')
		{
			a += b;
			printf("%d:%d\n", i, a);
		}
		else if (*op == '-')
		{
			a -= b;
			printf("%d:%d\n", i, a);
		}
		else if (*op == '*')
		{
			a *= b;
			printf("%d:%d\n", i, a);
		}
		else if (*op == '/' && b != 0)
		{
			a /= b;
			printf("%d:%d\n", i, a);
		}
		else
		{	
			printf("error\n");
			break;
		}
	}
	return (0);
}