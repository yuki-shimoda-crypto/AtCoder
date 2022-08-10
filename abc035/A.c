#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	w, h;

	scanf("%lld%lld", &w, &h);
	if (w % 16 == 0 && h % 9 == 0)
		printf("16:9\n");
	else
		printf("4:3\n");
	return (0);
}