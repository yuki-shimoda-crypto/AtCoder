#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int 	r, c;
	scanf("%d%d", &r, &c);
	int		table[15][15];

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
			table[i][j] = 0;
	}

	for (int i = 1; i < 14; i++)
		table[1][i] = 1;
	for (int i = 3; i < 12; i++)
		table[3][i] = 1;
	for (int i = 5; i < 10; i++)
		table[5][i] = 1;

	for (int i = 7; i < 8; i++)
		table[7][i] = 1;

	for (int i = 5; i < 10; i++)
		table[9][i] = 1;
	for (int i = 3; i < 12; i++)
		table[11][i] = 1;
	for (int i = 1; i < 14; i++)
		table[13][i] = 1;


	for (int i = 1; i < 14; i++)
		table[i][1] = 1;
	for (int i = 3; i < 12; i++)
		table[i][3] = 1;
	for (int i = 5; i < 10; i++)
		table[i][5] = 1;

	for (int i = 7; i < 8; i++)
		table[i][7] = 1;

	for (int i = 5; i < 10; i++)
		table[i][9] = 1;
	for (int i = 3; i < 12; i++)
		table[i][11] = 1;
	for (int i = 1; i < 14; i++)
		table[i][13] = 1;

	if (table[r - 1][c - 1] == 1)
		printf("white\n");
	else
		printf("black\n");
	return (0);
}