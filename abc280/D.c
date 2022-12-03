#include <fcntl.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


long long	factorial(int i)
{
	long long	ans = 1;

	for (int j = 1; j < i + 1; j++)
	{
		ans *= j;
	}
	return (ans);
}



int main(void)
{
	long long	k;
	long long	tmp;
	int			even, *odd;
	int			j;
	long long	ans;
	int			a;
	long long	tmptmp;


	// input
	scanf("%lld", &k);

	//process
	even = 0;
	tmp = k;
	while (tmp % 2 == 0)
	{
		even++;
		tmp /= 2;
	}
	// three
	int	sqrt_k = sqrt(k);
	odd = calloc(1000000, sizeof(int));
	j = 0;
	for (int i = 3; i <= sqrt_k && tmp; i++)
	{
		while (tmp % i == 0)
		{
			odd[j] = i;
			j++;
			tmp /= i;
		}
	}
	if (!even && !odd[0])
	{
		printf("%lld\n", k);
		return (0);
	}
	if (!odd[0])
	{
		ans = 1;
		for (int i = 1; 0 < even; i++)
		{
			ans *= i;
			tmptmp = i;
			while (tmptmp % 2 == 0)
			{
				even--;
				tmptmp /= 2;
			}
		}
		printf("%lld\n", ans);
		return (0);
	}
	ans = factorial(odd[j - 1]);
	int	index;
	int	kk;
	index = 1;
	while (1)
	{
		kk = 0;
		tmp = ans;
		tmptmp = even;
		while (odd[kk] && tmp)
		{
			tmp /= odd[kk];
			k++;
		}
		while (tmptmp && tmp)
		{
			tmp /= 2;
			tmptmp--;
		}
		if (tmp && !odd[kk] && !tmptmp)
		{
			printf("%lld\n", ans);
		}
		ans *= (odd[j - 1] + index);
		index++;
		// printf("%d\n", index);
		printf("%lld\n", ans);
	}
	
	// printf("%lld\n", ans);
	printf("%d\n", odd[j - 1]);
	// a = odd[j - 1]
	// while (1)
	// {
	// 	j++;
	// 	tmp = ans;
	// 	while (tmp % )
	// 	{
	// 	}
	// 	ans *= a + ;
	// }
	
	// if (ans < k)
	// {
	// 	printf("%lld\n", ans);
	// 	return (0);
	// }
	
	return (0);
}

