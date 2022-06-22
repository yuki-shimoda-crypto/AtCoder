#include <stdio.h>

int main(void)
{
	int x, a, b;

	scanf("%d %d %d", &x, &a, &b);
	x += 1;
	printf("%d\n", x);
	x *= a + b;
	printf("%d\n", x);
	x *= x;
	printf("%d\n", x);
	x -= 1;
	printf("%d\n", x);
	return (0);
}