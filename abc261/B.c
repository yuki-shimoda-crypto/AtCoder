#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n;
	bool flag = false;
	scanf("%d", &n);

	char A[n][n + 1];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", A[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j && A[i][j] != '-')
			{
				flag = true;
				break;
			}
			else if (A[i][j] == 'D' && A[j][i] != 'D')
			{
				flag = true;
				break;
			}
			else if (A[i][j] == 'W' && A[j][i] != 'L')
			{
				flag = true;
				break;
			}
			else if (A[i][j] == 'L' && A[j][i] != 'W')
			{
				flag = true;
				break;
			}
			else
				;
			
		}
		if (flag)
			break;	
	}
	if (flag)
		printf("%s\n", "incorrect");
	else
		printf("%s\n", "correct");
	
	return (0);
}