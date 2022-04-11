#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n;
	int s[65535];

	scanf("%d", n);
	s[0] = 1;

	return 0;




	
}

int num(int index)
{
	if (index == 1)
	{
		return 1;
	}
	else
	{
		while (index >= 1)
		{
			return(num(index -1) * pow(10 , index))
		}
		
	}
}