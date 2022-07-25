#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n;
	int cmp;
	scanf("%d", &n);
	char s[n][11];
	int num[n];
	for (int i = 0; i < n; i++)
		scanf("%s", s[i]);
	for (int i = 0; i < n; i++)
		num[i] = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i - 1; -1 < j; j--)
		{
			if (strcmp(s[i], s[j]) == 0)
			{
				num[i] = num[j] + 1;
				break;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		if (num[i])
			printf("%s(%d)\n", s[i], num[i]);
		else
			printf("%s\n", s[i]);
	}
	
	
	return (0);
}