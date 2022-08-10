#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void)
// {
// 	long long	x;
// 	scanf("%lld", &x);
// 	if (x < 0 && x % 10 != 0)
// 		printf("%lld\n", x / 10 - 1);
// 	else
// 		printf("%lld\n", x / 10);
// 	return (0);
// }

// 切り捨て除算
int main(void)
{
	long long	x;
	scanf("%lld", &x);
	printf("%lld\n", x / 10 - (x % 10 < 0));
	return (0);
}
