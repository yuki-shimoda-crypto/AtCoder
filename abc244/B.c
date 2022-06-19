#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, flag, x, y;
	char *t;

	scanf("%d", &n);
	t = (char *)malloc(sizeof(char) * n);
	scanf("%s", t);
	i = 0;
	x = 0;
	y = 0;
	flag = 0;
	while (i < n)
	{
		if (t[i] == 'R')
		{
			flag += 1;
		}
		else if (flag % 4 == 0)
			x += 1;
		else if (flag % 4 == 1)
			y -= 1;
		else if (flag % 4 == 2)
			x -= 1;
		else
			y += 1;
		i++;
	}
	printf("%d %d\n", x, y);
	return (0);
}