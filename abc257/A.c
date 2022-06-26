#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, x;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	scanf("%d%d", &n, &x);
	printf("%c\n", alphabet[x/n + 1]);
	return (0);
}