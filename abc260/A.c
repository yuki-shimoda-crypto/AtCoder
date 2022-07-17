#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[4];
	scanf("%s", s);
	if (s[0] != s[1])
	{
		if (s[0] != s[2])
		{
			printf("%c\n", s[0]);
			return (0);
		}
	}
	if (s[1] != s[0])
	{
		if (s[1] != s[2])
		{
			printf("%c\n", s[1]);
			return (0);
		}
	}
	if (s[2] != s[1])
	{
		if (s[2] != s[0])
		{
			printf("%c\n", s[2]);
			return (0);
		}
	}
	else
		printf("%d\n", -1);
	

	return (0);
}