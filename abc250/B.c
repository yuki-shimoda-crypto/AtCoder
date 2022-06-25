// 解答見た
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_tiles(int n, char **tiles)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
					tiles[i][j] = '.';
				else
					tiles[i][j] = '#';
			}
			
			
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
					tiles[i][j] = '#';
				else
					tiles[i][j] = '.';
			}
			
		}
	}
	return ;
}

int main(void)
{
	int n, a, b;
	char **tiles;
	char **table;

	scanf("%d%d%d", &n, &a, &b);

	tiles = (char **)malloc(sizeof(char *) * n);
	for (int i = 0; i < n; i++)
		tiles[i] = (char *)malloc(sizeof(char) * (n + 1));
	
	table = (char **)malloc(sizeof(char *) * a * n);
	for (int i = 0; i < a * n; i++)
		table[i] = (char *)malloc(sizeof(char) * (b * n + 1));

	ft_tiles(n, tiles);

	for (int i = 0; i < a * n; i++)
	{
		for (int j = 0; j < b * n; j++)
			table[i][j] = tiles[i / a][j / b];
	}

	for (int i = 0; i < a * n; i++)
	{
		printf("%s\n", table[i]);
	}
	return (0);
}
