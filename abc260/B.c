// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int compar(const void *n1, const void *n2)
// {
// 	if (*(int *)n1 > *(int *)n2)
// 		return (-1);
// 	else if (*(int *)n1 < *(int *)n2)
// 		return (1);
// 	else
// 		return (0);
// }

// int main(void)
// {
// 	int n, x, y, z;
// 	scanf("%d%d%d%d", &n, &x, &y, &z);
// 	int a[n][2], b[n], math[n], eng[n], tot[n];
// 	for (int i = 0; i < n; i++)
// 		scanf("%d", &a[i][0]);
// 	for (int i = 0; i < n; i++)
// 		scanf("%d", &a[i][1]);

// 	for (int i = 0; i < n; i++)
// 		math[i] = a[i][0];

// 	qsort(math, n, sizeof(int), compar);
// 	int ii = 0;
// 	for (int i = 0; ii < x; i++)
// 	{
// 		if (x != 0 && a[i][0] >= math[x - 1])
// 		{
// 			a[i][0] = -1;
// 			a[i][1] = -1;
// 			ii++;
// 		}
// 	}

// 	for (int i = 0; i < n; i++)
// 		eng[i] = a[i][0];
// 	qsort(eng, n, sizeof(int), compar);
// 	ii = 0;
// 	for (int i = 0; ii < y; i++)
// 	{
// 		if (y != 0 && a[i][1] > eng[y] && a[i][1] != -1)
// 		{
// 			a[i][0] = -1;
// 			a[i][1] = -1;
// 			ii++;
// 		}
// 	}


// 	for (int i = 0; i < n; i++)
// 		tot[i] = a[i][0] + a[i][1] ;
// 	qsort(tot, n, sizeof(int), compar);
// 	ii = 0;
// 	for (int i = 0; ii < z; i++)
// 	{
// 		if (z != 0 && a[i][0] + a[i][1] >= tot[z - 1] && a[i][1] != -1)
// 		{
// 			a[i][0] = -1;
// 			a[i][1] = -1;
// 			ii++;
// 		}
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		if (a[i][0] == -1)
// 			printf("%d\n", i + 1);	
// 	}

// 	// for (int i = 0; i < n; i++)
// 	// 	printf("%d, %d\n", a[i][0], a[i][1]);
	
// 	return (0);
// }


#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compar(const void *n1, const void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return (-1);
	else if (*(int *)n1 < *(int *)n2)
		return (1);
	else
		return (0);
}

int main(void)
{
	int n, x, y, z;
	scanf("%d%d%d%d", &n, &x, &y, &z);
	int a[n][2], b[n], math[n], eng[n], tot[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i][0]);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i][1]);

	for (int i = 0; i < n; i++)
		math[i] = a[i][0];

	qsort(math, n, sizeof(int), compar);
	int ii = 0;
	for (int i = 0; ii < x && i < n; i++)
	{
		if (x != 0 && a[i][0] > math[x - 1])
		{
			a[i][0] = -1;
			a[i][1] = -1;
			ii++;
		}
	}
	for (int i = 0; ii < x; i++)
	{
		if (x != 0 && a[i][0] == math[x - 1] && a[i][0] != -1)
		{
			a[i][0] = -1;
			a[i][1] = -1;
			ii++;
		}
	}
	
	
	for (int i = 0; i < n; i++)
		eng[i] = a[i][1];
	qsort(eng, n, sizeof(int), compar);
	ii = 0;
	for (int i = 0; ii < y && i < n; i++)
	{
		if (y != 0 && a[i][1] > eng[y - 1] && a[i][1] != -1)
		{
			a[i][0] = -1;
			a[i][1] = -1;
			ii++;
		}
	}
	for (int i = 0; ii < y; i++)
	{
		if (y != 0 && a[i][1] == eng[y - 1] && a[i][1] != -1)
		{
			a[i][0] = -1;
			a[i][1] = -1;
			ii++;
		}
	}
	
	

	for (int i = 0; i < n; i++)
		tot[i] = a[i][0] + a[i][1] ;
	qsort(tot, n, sizeof(int), compar);
	ii = 0;
	for (int i = 0; ii < z && i < n; i++)
	{
		if (z != 0 && a[i][0] + a[i][1] > tot[z - 1] && a[i][1] != -1)
		{
			a[i][0] = -1;
			a[i][1] = -1;
			ii++;
		}
	}
	for (int i = 0; ii < z; i++)
	{
		if (z != 0 && a[i][0] + a[i][1] == tot[z - 1] && a[i][1] != -1)
		{
			a[i][0] = -1;
			a[i][1] = -1;
			ii++;
		}
	}
	
	

	for (int i = 0; i < n; i++)
	{
		if (a[i][0] == -1)
		{
			printf("%d\n", i + 1);
		}
	}
	

	// for (int i = 0; i < n; i++)
	// 	printf("%d, %d\n", a[i][0], a[i][1]);

	// for (int i = 0; i < n; i++)
	// {
	// 	printf("%d\n", i);
	// }
	// int i = -1;
	// while (++i < n)
	// 	printf("%d\n", i);
	
	return (0);
}
