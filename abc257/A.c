#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, x;
	char *s;

	scanf("%d%d", &n, &x);
	s = (char *)malloc(sizeof(char) * (n * 26 + 1));
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s[i * n + j] = 'A' + i;
		}
		
	}
	printf("%c\n", s[x - 1]);
	return (0);
}
