#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, m, x, t, d;
	int len;

	scanf("%d%d%d%d%d", &n, &m, &x, &t, &d);
	
	if (m >= x)
	{
		printf("%d\n", t);
		return (0);
	}
	
	len = t - (x - m) * d;
	printf("%d\n", len);
	return (0);
}
