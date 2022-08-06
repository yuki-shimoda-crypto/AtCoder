#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long	n;
	scanf("%lld", &n);
	long long	p[n];
	for (int i = 0; i < n - 1; i++)
		scanf("%lld", &p[i]);
	
	long long	tmp = n;
	long long	flag = 0;
	while (p[n - 2] != 1)
	{
		n = p[n - 2];
		flag++;
	}
	printf("%lld\n", flag + 1);
	return (0);
}