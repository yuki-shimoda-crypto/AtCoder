#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, w;
    char **s;
    int x1 = 1000, y1 = 1000, x2 = 1000, y2 = 1000;
    // input
    scanf("%d%d", &h, &w);
    s = (char **)malloc(sizeof(char *) * h);
    for (int i = 0; i < w; i++)
        *s = (char *)malloc(sizeof(char) * (w + 1));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            scanf("%c", &s[i][j]);
    }
    //     for (int i = 0; i < h; i++)
    // {
    //     for (int j = 0; j < w; j++)
    //     {
    //         if (j == 2)
    //             printf("%c\n", s[i][j]);
    //         else
    //             printf("%c", s[i][j]);
    //     }
    // }
// printf("%c\n", s[1][0]);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == 'o')
            {
                x1 = i;
                y1 = j;
                s[i][j] = '-';
                break;
            }
            if (x1 == i)
                break;
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == 'o')
            {
                x2 = i;
                y2 = j;
                s[i][j] = '-';
                break;
            }
            if (x2 == i)
                break;
        }
    }
printf("%d\n", x1);
printf("%d\n", y1);
printf("%d\n", x2);
printf("%d\n", y2);

    printf("%d\n", abs(x2 - x1) + abs(y2 - y1));
}
