// #include <stdio.h>

// int sum(int n)
// {
// 	if (n == 0)
// 		return (0);
// 	int total;

// 	total = sum(n - 1);
// 	return total + n;
// }

// int main(void)
// {
// 	int n;
	
// 	scanf("%d", &n);
// 	printf("%d\n", sum(n));
// 	return (0);
// }

// #include <stdio.h>

// int ft_sum_range(int a, int b)
// {
// 	int total;

// 	if (a == b)
// 		return (b);
// 	total = ft_sum_range(a + 1, b);
// 	return total + a;
// }

// int ft_sum_range(int a, int b)
// {
// 	if (a == b)
// 		return (a);
// 	return ft_sum_range(a, b - 1) + b;
// }

// int main(void)
// {
// 	int total;

// 	total = ft_sum_range(0, 10);
// 	printf("%d\n", total);
// 	return (0);
// }

// #include <stdio.h>

// int ft_array_sum(int *array, int begin, int end)
// {
// 	if (begin == end)
// 		return (array[begin]);
// 	return ft_array_sum(array, begin + 1, end) + array[begin];
// }

// int main(void)
// {
// 	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// 	printf("%d\n", ft_array_sum(array, 0, 9));
// 	return (0);	
// }

// #include <stdio.h>

// int is_prime_from_two(int n, int i, int *flag)
// {
// 	if (n / i < i)
// 		return 0;
// 	if (n % i == 0)
// 	{
// 		*flag = 0;
// 		return 0;
// 	}
// 	return is_prime_from_two(n, i + 1, flag);
// }

// int is_prime(int n)
// {
// 	int flag;

// 	flag = 1;
// 	if (n < 2)
// 		return 0;
// 	else if (n == 2)
// 		return 1;
// 	is_prime_from_two(n, 2, &flag);
// 	if (flag == 1)
// 		return 1;
// 	return 0;
// }

// int main(void)
// {
// 	int n;

// 	scanf("%d", &n);
// 	if (is_prime(n))
// 		printf("%d is prime\n", n);
// 	else
// 		printf("%d is not prime\n", n);
// 	return (0);
// }

#include <stdio.h>

char *reverse_array(char *str)
{
	int i;
	i = 0;

	
}

int main(void)
{

}
