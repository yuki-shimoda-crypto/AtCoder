#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	char str[4];
	int len = 0;
	int num = 0;
	int i = 0;

	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++)
		len++;
	while (num < 6)
	{
		printf("%s", str);
		num += len;   
	}
		printf("\n");
		
    return (0);
}
