#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int l, r;
	char s[100001];

	scanf("%d%d", &l, &r);
	scanf("%s", s);

	for (int i = 0; i < l - 2; i++)
	{
		printf("%c", s[i]);
	}
	
	for (int i = r - 1; l - 1 < i; i--)
	{
		printf("%c", s[i]);
	}

	for (int i = r; i < l - 2; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
	return (0);
}