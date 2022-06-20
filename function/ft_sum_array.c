// add from array[first] to array[end]
int ft_array_sum(int *array, int begin, int end)
{
	if (begin == end)
		return (array[begin]);
	return ft_array_sum(array, begin + 1, end) + array[begin];
}

// #include <stdio.h>
// int main(void)
// {
// 	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// 	printf("%d\n", ft_array_sum(array, 0, 9));
// 	return (0);	
// }