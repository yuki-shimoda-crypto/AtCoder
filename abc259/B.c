#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	double a, b, d;
	double x, y;

	scanf("%lf%lf%lf", &a, &b, &d);

	x = a * cos((d / 180) * M_PI) - b * sin((d / 180) * M_PI);
	y = a * sin((d / 180) * M_PI) + b * cos((d / 180) * M_PI);

	printf("%lf %lf\n", x, y);

	return (0);
}
