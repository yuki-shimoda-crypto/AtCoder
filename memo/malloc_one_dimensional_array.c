#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str;
	int n = 3;

	str = (char *)malloc(sizeof(char) * (n + 1));
	for (int i = 0; i < n; i++)
		str[i] = 'a' + i;
	printf("%s\n", str);
	return (0);
}