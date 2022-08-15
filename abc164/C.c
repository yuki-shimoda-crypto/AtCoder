#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(void)
{
	// input
	long long	h1, w1, h2, w2;
	long long	col_num;
	bool		finish;

	scanf("%lld%lld", &h1, &w1);
	long long	a[h1][w1];
	for (int i = 0; i < h1; i++)
		for (int j = 0; j < w1; j++)
			scanf("%lld", &a[i][j]);
	
	scanf("%lld%lld", &h2, &w2);
	long long	b[h2][w2];
	for (int i = 0; i < h2; i++)
		for (int j = 0; j < w2; j++)
			scanf("%lld", &b[i][j]);
	
	long long	flag[h2][w2];
	long long	col[w2];


	// process
	finish = false;
	for (int i = 0; i < h1; i++)
	{
		for (int j = 0; j < w1; j++)
		{
			col_num = 0;
			if(a[i][j] == b[0][0])
			{
				bzero(flag, sizeof(long long) * h2 * w2);
				for (int l = j; l < w1; l++)
				{
					if (a[i][l] == b[0][col_num])
						flag[0][col_num] = 1;
					col_num++;
					if (col_num == w2 - 1)
						break;
				}
				for (int k = 0; k < h1; k++)
				{
					for (int l = 0; l < w1; l++)
					{
						/* code */
					}
				}
			}
			if (finish)
				break;
		}
		if (finish)
			break;
	}
	return (0);
}