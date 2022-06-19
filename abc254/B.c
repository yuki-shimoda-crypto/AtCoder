#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    int i, j, flag = 0, table[30][30];
    scanf("%d", &n);
    // zero or 1
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (j == 0 || i == j)
                table[i][j] = 1;
            else
                table[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", 1);
        j = 1;
        while (j < flag)
        {
            table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
            printf("%d ", table[i][j]);
            j ++;
        }
        if (i == 0)
        printf("\n");
        else
        printf("%d\n", 1);
        flag++;
    }
    return (0);
}