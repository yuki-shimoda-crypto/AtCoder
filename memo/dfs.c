#include <stdio.h>
#include <stdlib.h>

int dfs(int sum, int i, int *a, int k, int n)
{
	if (i == n)
		return sum == k;
	// using a[i]
	if (dfs(sum + a[i], i + 1, a, k, n))
		return 1;
	// not using a[i]
	if (dfs(sum, i + 1, a, k, n))
		return 1;
	return (0);
}

int main(void)
{
	int n, *a, k;
	int sum = 0;

	scanf("%d", &n);
	a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &k);
	if (dfs(sum, 0, a, k, n))
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}