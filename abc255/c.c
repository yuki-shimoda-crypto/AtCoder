#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
    long x, a, d, n;
	scanf("%ld%ld%ld%ld", &x, &a, &d, &n);

	// if (abs(x - a) < d)
	// {
	// 	printf("%ld\n", x - a);
	// 	return (0);
	// }

	// now = n / 2;
	// for (long i = 0; pow(2, i) < n; i++)
	// {
	// 	num = a + d * (now);
	// 	if (num >= x)
	// 		now += n / pow(2, i + 1);
	// 	else
	// 		now -= n / pow(2, i + 1);
	// }
	// printf("%ld\n", x - (a + d * now));





	long num;
	long min = 0;
	long max = n - 1;
	long mid;

	while (min <= max)
	{

		mid = (min + max) / 2;
		num = a + d * mid;
		if (x == num)
		{
			printf("%d\n", 0);
			return 0;
		}
		if (abs(d) > abs(x - num))
			break;
		if (d >= 0)
		{
			if (num < x)
			{
				min = mid + 1;
			}
			else
			{
				max = mid - 1;
			}
		}
		else
		{
			if (num > x)
			{
				min = mid + 1;
			}
			else
			{
				max = mid - 1;
			}
		}

	}
	if (x < 0 && d >= 0)
		x += d;
	if (x < 0 && d < 0)
		x -= d;

	if (x >= num)
		printf("%ld\n", x - num);
	else
		printf("%ld\n", num - x);	
	
	// while (x - a < len)
	// {
	// 	len = 
	// }
	
	// long b[n], 
	// int a[k];
	// int x[n], y[n];
	// double r = 0;
	// double tmp;
	// double l_min;

	// for (int i = 0; i < k; i++)
	// 	scanf("%d", &a[i]);
	
	// for (int i = 0; i < n; i++)
	// 	scanf("%d%d", &x[i], &y[i]);

	// for (int i = 0; i < n; i++)
	// {
	// 	l_min = INT_MAX;
	// 	for(int j = 0; j < k; j++)
	// 	{
	// 		tmp = sqrt(pow(x[i] - x[a[j] - 1], 2) + pow(y[i] - y[a[j] - 1], 2));
	// 		if (l_min > tmp)
	// 			l_min = tmp;
	// 	}
	// 	if (r < l_min)
	// 		r = l_min;
	// }

	// printf("%lf\n", r);
    return (0);
}
