// determine if n is a prime number
// if n is a prime number return 1
// else return 0
int is_prime_from_two(int n, int i, int *flag)
{
	if (n / i < i)
		return 0;
	if (n % i == 0)
	{
		*flag = 0;
		return 0;
	}
	return is_prime_from_two(n, i + 1, flag);
}

int is_prime(int n)
{
	int flag;

	flag = 1;
	if (n < 2)
		return 0;
	else if (n == 2)
		return 1;
	is_prime_from_two(n, 2, &flag);
	if (flag == 1)
		return 1;
	return 0;
}

// #include <stdio.h>
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
