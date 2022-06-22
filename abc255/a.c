#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int r, c;
	int a[2][2];

	scanf("%d%d", &r, &c);
	scanf("%d", &a[0][0]);
	scanf("%d", &a[0][1]);
	scanf("%d", &a[1][0]);
	scanf("%d", &a[1][1]);

	printf("%d\n", a[r - 1][c - 1]);
    return (0);
}