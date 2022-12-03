#include <fcntl.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	long long	n;
	scanf("%lld", &n);
	long long	nums[n + 1];
	
	nums[0] = 0;
	for (int i = 1; i < n + 1; i++)
	{
		scanf("%lld", &nums[i]);
	}
	int i = 0;
	while (i < n)
	{
		printf("%lld ", nums[i + 1] - nums[i]);
		i++;
	}
	

	return (0);
}
