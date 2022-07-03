#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	double a, b, c, x;

	scanf("%lf%lf%lf%lf", &a, &b, &c, &x);

	if (a >= x)
	{
		printf("%lf\n", 1.0);
	}
	else if (b >= x)
	{
		printf("%lf\n", c/(b - a));
	}
	else
		printf("%lf\n", 0.0);
	
	return (0);
}