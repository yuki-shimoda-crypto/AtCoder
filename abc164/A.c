#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	l, r;
	char		str[] = "atcoder";
	scanf("%lld%lld", &l, &r);
	for (long long i = l - 1; i < r; i++)
		printf("%c", str[i]);
	printf("\n");
	return (0);
}