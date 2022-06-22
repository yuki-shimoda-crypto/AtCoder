#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
	int h, w, r, c;
	scanf("%d%d%d%d", &h, &w, &r, &c);
	if (h == 1 && w == 1)
		printf("%d\n", 0);
	else if ((h == 1 &&(c == 1 || c == w)) || (w == 1 &&(r == 1 || r == h)))
		printf("%d\n", 1);
	else if (h == 1 || w == 1)
		printf("%d\n", 2);
	else if ((r == 1 || r == h) && (c == 1 || c == w))
		printf("%d\n", 2);
	else if (r == 1 || r == h || c == 1 || c == w)
		printf("%d\n", 3);
	else
		printf("%d\n", 4);
    return (0);
}

int a(void)
{
	int a;
	return 1;
}
