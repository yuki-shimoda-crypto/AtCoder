int ft_factorial(int n)
{
	if (n == 0)
		return (1);
	return n * ft_factorial(n - 1);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_factorial(5));
	return (0);
}