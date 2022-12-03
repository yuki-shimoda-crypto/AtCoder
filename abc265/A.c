#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	n, cx = 0, cy = 0;
	double		x, y;

	scanf("%lf%lf%lld", &x, &y, &n);
	if (x > y / 3)
	{
		while (n > 0)
		{
			if (n >= 3)
			{
				cy++;
				n -= 3;	
			}
			else
			{
				cx++;
				n--;
			}
		}
		printf("%lld\n", (long long)x * cx +(long long)y * cy);
	}
	else
	{
		while (n)
		{
			cx++;
			n--;
		}
		printf("%lld\n", (long long)x * cx +(long long)y * cy);
	}

	return (0);
}