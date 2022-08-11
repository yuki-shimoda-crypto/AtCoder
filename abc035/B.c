#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char	s[100001];
	int	t;
	int	x = 0;
	int	y = 0;
	int	q = 0;
	int min;

	scanf("%s", s);
	scanf("%d", &t);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i]== 'U')
			y++;
		else if (s[i]== 'D')
			y--;
		else if (s[i]== 'R')
			x++;
		else if (s[i]== 'L')
			x--;
		else
			q++;
	}
	if (t == 1)
		printf("%d\n", abs(x) + abs(y) + q);
	else
	{
		min = abs(x) + abs(y) - q;
		if (min < 0 && min % 2 == 0)
			printf("%d\n", 0);
		else if (min < 0 && min % 2 == -1)
			printf("%d\n", 1);
		else
			printf("%d\n", min);
	}
	return (0);
}