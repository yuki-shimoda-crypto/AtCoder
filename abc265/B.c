#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// input
	long long	n, m, t;

	scanf("%lld%lld%lld", &n, &m, &t);
	
	long long	a[n - 1], x[m], y[m];
	long long	room = 0;
	long long	i = 0;

	for (int i = 0; i < n - 1; i++)
		scanf("%lld", &a[i]);
	
	for (int i = 0; i < m; i++)
		scanf("%lld%lld", &x[i], &y[i]);
	//process
	while (1)
	{
		if (room + 1 == n)
		{
			printf("Yes\n");
			return (0);
		}
		if (a[room] < t)
		{
			t -= a[room];
			room++;
			if (x[i] == room + 1)
			{
				t += y[i];
				i++;
			}
		}
		else
			break;
	}
	printf("No\n");

	return (0);
}