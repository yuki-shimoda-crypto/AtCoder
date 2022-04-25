#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f, x;
	int tmp1 = 0, tmp2 = 0;
	int y;

	scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &x);
	y = x;
	while (0 < x)
	{
		if (a < x)
		{
			tmp1 += a * b;
			x -= a;
		}
		else if (0 < x)
		{
			tmp1 += x * b;
			x -= x;
		}
		x -= c;
	}

	while (0 < y)
	{
		if (d < y)
		{
			tmp2 += d * e;
			y -= d;
		}
		else if (0 < y)
		{
			tmp2 += y * e;
			y -= y;
		}
		y -= f;
	}
	
	if (tmp1 < tmp2)
		printf("Aoki\n");
	else if (tmp1 > tmp2)
		printf("Takahashi\n");	
	else
		printf("Draw\n");
	return (0);

	
	
}