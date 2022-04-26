#include <stdio.h>
#include <stdlib.h>

void dfs(int x, int y, char **map, int n, int m)
{
	map[x][y] = '.';

	for (int dx = -1; dx <= 1; dx++)
	{
		for (int dy = -1; dy <= 1; dy++)
		{
			int nx = dx + x, ny = dy + y;
			if (0 <= nx && nx < n && 0 <= ny && ny < m && map[nx][ny] == 'W')
				dfs(nx, ny, map, n, m);
		}
	}
	return ;
}

int main(void)
{
	int n, m;
	char **map;
	int res = 0;

	// input
	scanf("%d%d", &n, &m);
	map = (char **)malloc(sizeof(char *) * n);
	for (int i = 0; i < m; i++)
		map[i] = (char *)malloc(sizeof(char *) * (m + 1));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf(" %c", &map[i][j]);
	}
	// search
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 'W')
			{
				dfs(i, j, map, n, m);
				res++;
			}
		}
	}
	printf("%d\n", res);
	return (0);
}

// 10
// 12
// W........WW.
// .WWW.....WWW
// ....WW...WW.
// .........WW.
// .........W..
// ..W......W..
// .W.W.....WW.
// W.W.W.....W.
// .W.W......W.
// ..W.......W.