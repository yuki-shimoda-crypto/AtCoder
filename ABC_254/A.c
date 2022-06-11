#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n % 100 < 10)
    {
        printf("0");
    }
    printf("%d\n", n % 100);
}