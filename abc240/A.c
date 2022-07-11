#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int a[10];
	int tmp = 0;

	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < 3; i++)
	{
		tmp = a[tmp];
	}
	printf("%d\n", tmp);
	

	return (0);
}