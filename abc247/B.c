#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] - s2[i] == 0)
		return (1);
	return (0);
}

int main(void)
{
	int n;
	char *s, *t;
	int i, j, flag_s, flag_t;

	scanf("%d", &n);
	s = (char *)malloc(sizeof(char) * 11 * n);
	t = (char *)malloc(sizeof(char) * 11 * n);

	i = 0;
	while (i < n)
	{
		scanf("%s %s", &s[i], &t[i]);
		i++;
	}

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			// if ((ft_strcmp(&s[i], &s[j]) || ft_strcmp(&s[i], &t[j])) && (ft_strcmp(&t[i], &s[j]) || ft_strcmp(&t[i], &t[j])))
			if (!(strcmp(&s[i], &s[j]) || strcmp(&s[i], &t[j])) && !(strcmp(&t[i], &s[j]) || strcmp(&t[i], &t[j])))
			{
				printf("No\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	printf("Yes\n");
	return (0);
}

// int cmpchar(const void *n1, const void *n2)
// {
// 	if (*(char *)n1 > *(char *)n2)
// 		return -1;
// 	else if (*(char *)n1 < *(char *)n2)
// 		return 1;
// 	else
// 		return (0);
// }

// int main(void)
// {
// 	int n;
// 	char *s, *t;
// 	int i, j, flag_s, flag_t;

// 	i = 0;
// 	s = (char *)malloc(sizeof(char) * 11 * n);
// 	t = (char *)malloc(sizeof(char) * 11 * n);

// 	scanf("%d", &n);
// 	while (i < n)
// 	{
// 		scanf("%s %s", &s[i], &t[i]);
// 		i++;
// 	}

// 	qsort(s, n, sizeof(char) * 11, cmpchar);
// 	qsort(t, n, sizeof(char) * 11, cmpchar);

// 	j = 0;
// 	flag_s = 1;
// 	while (j < n - 1)
// 	{
// 		if (s[j] == s[j + 1])
// 		{
// 			flag_s = 0;
// 			break;
// 		}
// 		j++;	
// 	}

// 	j = 0;
// 	flag_t = 1;
// 	while (j < n - 1)
// 	{
// 		if (t[j] == t[j + 1])
// 		{
// 			flag_t = 0;
// 			break;
// 		}
// 		j++;	
// 	}

// 	if (flag_s || flag_t)
// 	{
// 		printf("Yes\n");
// 		return (0);
// 	}

// 	printf("No\n");
// 	return (0);
// }
