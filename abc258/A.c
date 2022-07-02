#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int k;
	int hour = 21, minute = 0;

	scanf("%d", &k);

	if (k > 59)
	{
		hour += 1;
		minute = k - 60;
	}
	else
	{
		minute = k;
	}
	
	printf("%d:%02d\n", hour, minute);

	return (0);
}