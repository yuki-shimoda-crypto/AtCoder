#include <stdio.h>

int main(void)
{
	char s[101];
	int i, j, flag_upper = 0, flag_lower = 0, flag_duplicate = 1;

	scanf("%s", s);
	i = 0;
	while (s[i] != '\0')
	{
		/* code */
		if ('A' <= s[i] && s[i] <= 'Z')
		{
			flag_upper = 1;
			break;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		/* code */
		if ('a' <= s[i] && s[i] <= 'z')
		{
			flag_lower = 1;
			break;
		}
		i++;
	}
	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		while (s[j] != '\0')
		{
			/* code */
			if (s[i] == s[j])
			{
				flag_duplicate = 0;
				break;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	if ( flag_upper && flag_lower && flag_duplicate)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}
