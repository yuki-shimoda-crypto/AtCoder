#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// input
	long long	h, w;
	long long	i, j, count = 0;

	scanf("%lld%lld", &h, &w);

	char		g[h][w + 1];
	for (i = 0; i < h; i++)
		scanf("%s", g[i]);

	//process
	i = 0;
	j = 0;
	while (1)
	{
		if (g[i][j] == 'U' && i != 0)
		{
			i -= 1;
			count++;
		}
		else if (g[i][j] == 'D' && i != h - 1)
		{
			i += 1;
			count++;
		}
		else if (g[i][j] == 'L' && j != 0)
		{
			j -= 1;
			count++;
		}
		else if (g[i][j] == 'R' && j != w - 1)
		{
			j += 1;
			count++;
		}
		else
		{
			printf("%lld %lld\n", i + 1, j + 1);
			break;
		}
		if (count == 250000)
		{
			printf("%d\n", -1);
			return (0);
		}
	}
		
	return (0);
}