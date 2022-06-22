#include <stdio.h>

// int main(void)
// {
// 	char a[] = "こんにちは";
// 	printf("%s\n", a);
// 	printf("こんにちは\n");
// 	return (0);
// }

int main(void)
{
	int i = 0, sum = 1;
	char str[101];
	scanf("%s", str);
	
	while (str[i] != '\0')
	{
		if (str[i] == '+')
			sum++;
		if (str[i] == '-')
			sum--;
		i++;		
	}
	printf("%d\n", sum);
	return (0);
}
