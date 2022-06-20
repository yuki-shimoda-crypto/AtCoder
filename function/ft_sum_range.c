// add from a to b
int ft_sum_range(int a, int b)
{
	if (a == b)
		return (a);
	return ft_sum_range(a, b - 1) + b;
}

// int ft_sum_range(int a, int b)
// {
// 	int total;

// 	if (a == b)
// 		return (a);
// 	total = ft_sum_range(a, b - 1);
// 	return total + b;
// }