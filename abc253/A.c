#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && b >= c)
    {
        printf("Yes\n");
        return (0);
    }
    if (a <= b && b <= c)
    {
        printf("Yes\n");
        return (0);
    }
    printf("No\n");
    return (0);
}