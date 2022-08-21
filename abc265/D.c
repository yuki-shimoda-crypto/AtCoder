#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// input
	long long	n, p, q, r;
	
	scanf("%lld%lld%lld%lld", &n, &p, &q, &r);

	long long	a[n];

	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	// process
	long long	tp, tq, tr;
	
	for (int i = 0; i < n; i++)
	{
		if (tp < p)
		{
			tp += a[i];
		}
		else if (tp > p)
		{
			
		}
		else
		{
			/* code */
		}
		
	}
	return (0);
}