#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int		n;
	scanf("%d", &n);
	int		len_str;
	char	s[n + 1];
	int		i;
	bool	flag = true;
	
	scanf("%s", s);
	len_str = strlen(s);

	for (i = 0; i < len_str; i++)
	{
		if (s[i] != s[len_str - i - 1] && flag)
		{
			flag = false;
			s[i] = 'A';
			s[i + 1] = 'B';
			i = 0;
			continue;
		}
		if (s[i] != s[len_str - i - 1])
		{
			break;
		}
	}
	if (i == len_str)
		printf("Yes\n");
	else	
		printf("No\n");
	

	return (0);
}