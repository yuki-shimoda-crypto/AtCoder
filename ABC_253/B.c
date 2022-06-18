#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(void)
{
    int h, w;
    scanf("%d%d", &h, &w);
    char s[h][w + 1];
    int x1, y1, x2, y2;
    int flag;
    int len;

    for (int i = 0; i < h; i++)
    {
        scanf("%s", s[i]);        
    }

    flag = 0;
    for (int  i = 0; i < h ; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == 'o')
            {
                x1 = i;
                y1 = j;
                s[i][j] = '-';
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    flag = 0;
    for (int  i = 0; i < h ; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == 'o')
            {
                x2 = i;
                y2 = j;
                s[i][j] = '-';
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    
    len = abs(x1 - x2) + abs(y1 - y2);

    printf("%d\n", len);
    return (0);
}
