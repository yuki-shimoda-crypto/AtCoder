#include <stdio.h>

// int main(void)
// {
// 	int x = 5;

// 	if (x == 5)
// 	{
// 		int y = 10;
// 		printf("%d", x + y);
// 	}
// 	printf("%d\n", x);
// 	// printf("%d\n", y);
// 	return (0);
// }

// int main(void)
// {
// 	int x = 5;

// 	printf("%d\n", x);
// 	if (x == 5)
// 	{
// 		printf("%d\n", x);
// 		char x[7] = "string";
// 		printf("%s\n", x);
// 	}
// 	printf("%d\n", x);
// 	return (0);
// }

int main(void)
{
	int num, price, per_num;
	char text[21];

	scanf("%d", &num);

	if (num == 1)
	{
		scanf("%d %d", &price, &per_num);
		printf("%d\n", price * per_num);
		return (0);
	}

	scanf("%s", text);
	scanf("%d %d", &price, &per_num);
	printf("%s!\n%d\n", text, price * per_num);
	return (0);
}