#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void *n1, const void *n2)
{
	return *(int *)n2 - *(int *)n1;
}

int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n], b[k], c[n];
    // input a, b
    for(int i = 0;i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0;i < k; i++)
        scanf("%d", &b[i]);
    // copy a to c
    for(int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
	qsort(a, n, sizeof(int), cmpnum);
    for (int i = 0; i < k; i++)
    {
        if (c[b[i] - 1] == a[0])
        {
            printf("Yes\n");
            return (0);
        }
    }
    printf("No\n");
    return (0);
}
