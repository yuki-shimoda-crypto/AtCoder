// search x

int binary_search(int x, int *num, int n)
{
	// The range of x is num[l], num[l + 1] ... num[r - 1], num[r] 
	int l = 0, r = n;
	while (r - l > 0)
	{
		int i = (l + r) / 2;
		if (num[i] == x)
			return 1;
		else if (num[i] < x)
			l = i + 1;
		else
			r = i;		
	}
	return 0;
}

// #include <stdio.h>
// int main(void)
// {
// 	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int find;

// 	find = 3;
// 	if (binary_search(find, a, 10))
// 		printf("found %d\n", find);
// 	else
// 		printf("not found %d\n", find);

// 	find = 100;
// 	if (binary_search(find, a, 10))
// 		printf("found %d\n", find);
// 	else
// 		printf("not found %d\n", find);
// 	return (0);
// }
