#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long	n, m;
	scanf("%ld%ld", &n, &m);

	for (long a = 1; a < m + 1; a++)
	{
		if (n == 1)
			{
				printf("%ld\n", a);
				continue;
			}
		for (long b = a + 1; b < m + 1; b++)
		{
			if (n == 2)
				{
					printf("%ld %ld\n", a, b);
					continue;
				}
			for (long c = b + 1; c < m + 1; c++)
			{
				if (n == 3)
					{
						printf("%ld %ld %ld\n", a, b, c);
						continue;
					}
				for (long d = c + 1; d < m + 1; d++)
				{
					if (n == 4)
						{
							printf("%ld %ld %ld %ld\n", a, b, c, d);
							continue;
						}
					for (long e = d + 1; e < m + 1; e++)
					{
						if (n == 5)
							{
								printf("%ld %ld %ld %ld %ld\n", a, b, c, d, e);
								continue;
							}
						for (long f = e + 1; f < m + 1; f++)
						{
							if (n == 6)
								{
									printf("%ld %ld %ld %ld %ld %ld\n", a, b, c, d, e, f);
									continue;
								}
							for (long g = f + 1; g < m + 1; g++)
							{
								if (n == 7)
									{
										printf("%ld %ld %ld %ld %ld %ld %ld\n", a, b, c, d, e, f, g);
										continue;
									}
								for (long h = g + 1; h < m + 1; h++)
								{
									if (n == 8)
										{
											printf("%ld %ld %ld %ld %ld %ld %ld %ld\n", a, b, c, d, e, f, g, h);
											continue;
										}
									for (long i = h + 1; i < m + 1; i++)
									{
										if (n == 9)
											{
												printf("%ld %ld %ld %ld %ld %ld %ld %ld %ld\n", a, b, c, d, e, f, g, h, i);
												continue;
											}
										for (long j = i + 1; j < m + 1; j++)
										{
											printf("%ld %ld %ld %ld %ld %ld %ld %ld %ld %ld\n", a, b, c, d, e, f, g, h, i, j);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (0);
}