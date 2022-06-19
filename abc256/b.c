#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int a[n];
	char table[5];
	int p = 0;

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < 4; i++)
		table[i] = '-';

	for (int i = 0; i < n; i++)
	{
		table[0] = 'o';
		for (int j = 3; j >= 0; j--)
		{
			if (table[j] == 'o')
			{
				table[j] = '-';
				if (j + a[i] < 4)
				{
					table[j + a[i]] = 'o';
				}
				else
					p++;
			}
		}
	}
	printf("%d\n", p);
	
    return (0);
}
