#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
    int n, k;
	scanf("%d%d", &n, &k);
	int a[k];
	int x[n], y[n];
	double r = 0;
	double tmp;
	double l_min;

	for (int i = 0; i < k; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < n; i++)
		scanf("%d%d", &x[i], &y[i]);

	for (int i = 0; i < n; i++)
	{
		l_min = INT_MAX;
		for(int j = 0; j < k; j++)
		{
			tmp = sqrt(pow(x[i] - x[a[j] - 1], 2) + pow(y[i] - y[a[j] - 1], 2));
			if (l_min > tmp)
				l_min = tmp;
		}
		if (r < l_min)
			r = l_min;
	}

	printf("%lf\n", r);
    return (0);
}
