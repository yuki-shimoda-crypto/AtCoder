#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n, m, num[50];
	int i, j, k, l;
	bool f;

	scanf("%d%d", &n, &m);
	i = 0;
	while (i < n)
	{
		scanf("%d", &num[i]);
		i++;
	}
	f = false;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			k = 0;
			while (k < n)
			{
				l = 0;
				while (l < n)
				{
					if (num[i] + num[j] + num[k] + num[l] == m)
					{
						f = true;
						break;
					}	
					l++;
				}	
				if (f)
					break;
				k++;
			}	
			if (f)
				break;
			j++;
		}
		if (f)
			break;
		i++;
	}
	if (f)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}