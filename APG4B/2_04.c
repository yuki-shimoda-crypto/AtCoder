#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int table[9][9];
	int i, j, correct_count = 0, wrong_count = 0;

	// insert
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			// if (scanf("%d", &table[i][j]) != 2) return 1;
			scanf("%d", &table[i][j]);
			j++;
		}
		i++;
	}

	// check
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (table[i][j] == (i + 1) * (j + 1))
				correct_count++;
			else
				wrong_count++;
			j++;
		}
		i++;
	}

	// print
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			// printf("%d%c",  (i + 1) * (j + 1), " \n"[j == 8]);
			printf("%d%c",  (i + 1) * (j + 1), j == 8 ? '\n' : ' ');
			j++;
		}
		i++;
	}
	printf("%d\n%d\n", correct_count, wrong_count);
	return (0);
}
