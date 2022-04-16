// #include <stdio.h>

// int main(void)
// {
// 	int a[3][4] = {{7, 4, 0, 8}, {2, 0, 3, 5}, {6, 1, 7, 0}};
// 	int i , j, count;
// 	count = 0;
// 	i = 0;
// 	while (i < 3)
// 	{
// 		j = 0;
// 		while (j < 4)
// 		{
// 			if (a[i][j] == 0)
// 				count++;
// 			j++;
// 		}
// 		i++;
// 	}
// 	printf("%d\n", count);
// 	return (0);
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;
	char **board;
	int i, j;

	scanf("%d %d", &n, &m);
	board = (int **)malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < m)
	{
		board[i] = (int *)malloc(sizeof(int) * (n + 1));
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			board[i][j] = '-';
			j++;
		}
		i++;
	}

}