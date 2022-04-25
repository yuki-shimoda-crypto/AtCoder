int ft_fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return ft_fibonacci(n - 1) + ft_fibonacci(n - 2);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_fibonacci(5));
}