#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, a, b;
	char **table;
	bool flag = false;

	scanf("%d%d%d", &n, &a, &b);
	table = (char **)malloc(sizeof(char *) * a * n);
	for (int i = 0; i < a * n; i++)
	{
		*table = (char *)malloc(sizeof(char) * (b * n + 1));
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < b; l++)
				{
					if (flag)
					{
						printf("#");
					}
					else
					{
						printf(".");
					}
				}
				flag = flag ? false : true;
			}
			printf("\n");		
		}
		flag = flag ? false : true;
	}
	
	return (0);
}