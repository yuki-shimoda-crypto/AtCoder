#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
// 	int n;
// 	scanf("%d", &n);
// 	char s[n];

// 	scanf("%s", s);
// 	printf("%c\n", s[n - 1]);
// 	return 0;
// }

int main(void)
{
	int n;
	char *s;

	scanf("%d", &n);
	s = (char *)malloc(sizeof(char) * (n + 1));
	scanf("%s", s);
	printf("%c\n", s[n - 1]);
	return 0;
}