#include <stdio.h>
#include <string.h>

int main (void)
{
    char s[500001];
    char t[500001];
    scanf("%s", s);
    scanf("%s", t);
    size_t i = 0;
    for (; s[i] == t[i]; i++)
    {}
    printf("%zu" ,i + 1);
    return (0);
}