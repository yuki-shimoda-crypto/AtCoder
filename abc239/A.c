#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long h;

	scanf("%ld", &h);
	printf("%f\n", sqrt(h * (12800000 + h)));
	return (0);
}