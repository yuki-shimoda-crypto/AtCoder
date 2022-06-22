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

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	int n, m;
// 	// char board[n + 1][n + 1];
// 	char **board;
// 	int i, j, tmp1, tmp2;

// 	scanf("%d %d", &n, &m);
// 	// allocate memory block
// 	board = (char **)malloc(sizeof(char *) * (n + 1));
// 	i = 0;
// 	while (i < n + 1)
// 	{
// 		board[i] = (char *)malloc(sizeof(char) * (n + 1));
// 		i++;
// 	}

// 	i = 0;
// 	while (i < n)
// 	{
// 		j = 0;
// 		while (j < n)
// 		{
// 			board[i][j] = '-';
// 			j++;
// 		}
// 		board[i][j] = '\0';
// 		i++;
// 	}

// 	i = 0;
// 	while (i < m)
// 	{
// 		scanf("%d %d", &tmp1, &tmp2);
// 		board[tmp1 - 1][tmp2 - 1] = 'o';
// 		board[tmp2 - 1][tmp1 - 1] = 'x';
// 		i++;
// 	}
// 	i = 0;
// 	while (i < n)
// 	{
// 		j = 0;
// 		while (j < n)
// 		{
// 			if (j == n - 1)
// 				printf("%c\n", board[i][j]);
// 			else
// 				printf("%c ", board[i][j]);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }


// sample_code
// #include <stdio.h>

// int main(void) {
//   int n, m;
//   scanf("%d%d", &n, &m);
  
//   char res[n][n];
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       res[i][j] = '-';
//     }
//   }
  
//   int a[m], b[m];
//   for (int i = 0; i < m; i++) {
//     scanf("%d%d", &a[i], &b[i]);
    
//     int A, B;
//     A = a[i] - 1;
//     B = b[i] - 1;
//     res[A][B] = 'o';
//     res[B][A] = 'x';
//   }
  
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       if (j == n - 1) printf("%c\n", res[i][j]);
//       else printf("%c ", res[i][j]);
//     }
//   }
// }



// sample_code
#include <stdio.h>
 
int data[128][128];
 
int main(void) {
	int N, M;
	int i, j;
	if (scanf("%d%d", &N, &M) != 2) return 1;
	for (i = 0; i < M; i++) {
		int A, B;
		if (scanf("%d%d", &A, &B) != 2) return 1;
		data[A][B] = 1;
		data[B][A] = 2;
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			printf("%c%c", "-ox"[data[i][j]], " \n"[j == N]);
		}
	}
	return 0;
}
