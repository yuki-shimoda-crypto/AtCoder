#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[200001], t[200001], u[200001];
	int len_s, len_t;
	bool flag = true; 

	scanf("%s%s", s, t);

	int j = 0;
	for (int i = 0; i < strlen(t); i++)
	{
		if (s[j] == t[i])
		{
			u[i] = t[i];
			j++;
			continue;
		}
		else if (s[j - 2] == s[j - 1] && s[j - 1] == t[i] && i >= 2)
		{
			u[i] = t[i];
			continue;
		}
		else
		{
			flag = false;
			break;
		}
	}
	if (flag)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}
