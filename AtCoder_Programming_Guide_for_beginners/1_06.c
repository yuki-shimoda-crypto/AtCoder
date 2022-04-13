#include <stdio.h>

int main(void)
{
	int a, b;
	char op;

	scanf("%d %d", &a, &b);
	scanf(" %c", &op);

	if (op == "+")
		printf("%d\n", a + b);
	else if (op == "-")
		printf("%d\n", a - b);
	else if (op == "*")
		printf("%d\n", a * b);
	else if (op == "/" && b != 0)
		printf("%d\n", a / b);
	else
		printf("error");
	return (0);
}