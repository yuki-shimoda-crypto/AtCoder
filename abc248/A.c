#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	char s[10];
	i = 0;
	while (i < 9)
	{
		scanf("%c", &s[i]);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		sum += s[i] - '0';
		i++;
	}
	printf("%d\n", 45 - sum);
	return (0);
}
