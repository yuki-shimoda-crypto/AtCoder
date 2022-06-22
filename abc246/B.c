#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	double d;

	scanf("%d %d", &a, &b);
	d = sqrt(a * a + b * b);
	printf("%lf %lf\n", a/d, b/d);

}