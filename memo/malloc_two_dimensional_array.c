#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char **str;
	int n = 3, m = 4;

	str = (char **)malloc(sizeof(char *) * (n));
	for (int i = 0; i < n; i++)
		str[i] = (char *)malloc(sizeof(char) * (m + 1));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			str[i][j] = 'a' + i + j;
	}
	for (int i = 0; i < n; i++)
		printf("%s\n", str[i]);
	return (0);
}
