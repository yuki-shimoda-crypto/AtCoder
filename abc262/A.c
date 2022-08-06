#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	y;
	scanf("%lld", &y);

	if (y % 4 == 2)
	{
		printf("%lld\n", y);
	}
	else if (y % 4 == 1)
	{
		printf("%lld\n", y + 1);
		/* code */
	}
	else if (y % 4 == 0)
	{

		printf("%lld\n", y + 2);
		/* code */
	}
	else
	{
		printf("%lld\n", y + 3);
		/* code */
	}
	
	return (0);
}