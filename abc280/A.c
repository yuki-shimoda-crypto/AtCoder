#include <fcntl.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	long long	h, w;
	char		str[100][100];
	long long	count = 0;

	scanf("%lld%lld", &h, &w);
	for (int i = 0; i < h; i++)
	{
		scanf("%s", str[i]);
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (str[i][j] == '#')
				count++;	
		}
	}
	printf("%lld\n", count);
	return (0);
}
