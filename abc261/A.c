#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int l1, r1, l2, r2;

	scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
	// if (r1 - l2 > 0)
	// 	printf("%d\n", r1 - l2);
	// else
	// 	printf("%d\n", 0);

	if (l2 <= l1 && r1 <= r2)
		printf("%d\n", abs(r1 - l1));
	else if (r1 <= l2)
		printf("%d\n", 0);
	else if (l1 <= l2 && r1 <= r2)
		printf("%d\n", abs(r1 - l2));
	else if (l1 <= l2 && r1 > r2)
		printf("%d\n", abs(r2 - l2));
	else if (l1 > l2 && l1 <= r2)
		printf("%d\n", abs(l1 - r2));
	else
		printf("%d\n", 0);
	

	return (0);
}