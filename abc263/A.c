#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	a, b, c, d, e;
	long long	num[5];
	long long	flag = 0;
	long long	flag_four = 0;

	scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e);
	num[0] = a;
	num[1] = b;
	num[2] = c;
	num[3] = d;
	num[4] = e;
	for (long long i = 0; i < 5; i++)
	{
		flag_four = 0;
		for (long long j = i + 1; j < 5; j++)
		{
			if (num[i] == num[j] && num[i] != 0 && num[j] != 0)
			{

				num[j] = 0;
				flag++;
				flag_four++;
				if (flag_four == 2)
					break;
			}
		}
	}
	if (flag == 3)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}