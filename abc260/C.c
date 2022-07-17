#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long x;
long y;

long blue(long lv, long n);
long red(long lv, long n);

// long ft_for(long n)
// {
// 	return 1;
// 	for (long i = 0; i < n; i++)
// 	{
// 		blue(n - 1);
// 	}

// }

// long blue(long n, long m)
// {
// 	if (n == 1)
// 	return red(n - 1)  + blue(n - 1);
// }

// long red(long n, long m)
// {
// 	return red(n - 1) + blue(n);
// }

// long main(void)
// {
// 	long n;

// 	scanf("%ld%ld%ld", &n, &x, &y);


// 	return (0);
// }



long blue (long lv, long n)
{
	if (lv == 2)
		return n * y;
	return red(lv - 1, n) + blue(lv - 1,  n * y);
}
long red (long lv, long n)
{
	if (lv == 2)
		return blue(lv,  n * x);
	return red(lv - 1, n) + blue(lv,  n * x);
}

// long red (long lv, long n)
// {
// 	if (lv == 1)
// 		return x;
// 	return red(lv - 1, n) + blue(lv,  n * x);
// }

// long blue (long lv, long n)
// {
// 	if (lv == 1)
// 		return y;
// 	return red(lv - 1, n) + blue(lv - 1, n * y);
// }

int main(void)
{
	long n;

	scanf("%ld%ld%ld", &n, &x, &y);
	if (n < 2)
		printf("%d\n", 0);
	else
		printf("%ld\n", red(n, 1));
	

	return (0);
}
