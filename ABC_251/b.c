#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	int n, w;
	scanf("%d%d", &n, &w);
	int a[n];
	int flag[w + 1];
	int num;
	int ans;

	for (int i = 0; i < w + 1; i++)
		flag[i] = 0;

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < n; i++)
	{
		num = a[i];
		if (num <= w)
			flag[num] = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			num = a[i] + a[j];
			if (num <= w)
				flag[num] = 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				num = a[i] + a[j] + a[k];
				if (num <= w)
					flag[num] = 1;
			}
		}
	}

	ans = 0;
	for (int i = 1; i < w + 1; i++)
	{
		if (flag[i] == 1)
			ans++;
	}
	printf("%d\n", ans);

    return (0);
}
