#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void *n1, const void *n2)
{
	return *(int *)n1 - *(int *)n2;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int s[n][10], time[10][n];
    // input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
            scanf("%d", &s[i][j]);
    }
    // zero
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < n; j++)
            time[i][n] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (s[j][k] == i)
                {
                    time[i][j] = k;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
	    qsort(time[i], 10, sizeof(int), cmpnum);
    return (0);
}
