#include <stdio.h>

int main(void)
{
	int s;

	scanf("%d", &s);
	if (s < 100)
		printf("000%d\n", s / 10);
	else if (s < 1000)
		printf("00%d\n", s / 10);
	else
		printf("0%d\n", s / 10);
	return (0);
}