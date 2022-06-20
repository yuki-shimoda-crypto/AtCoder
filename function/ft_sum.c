// add from 0 to n
int sum(int n)
{
	if (n == 0)
		return (0);
	return sum(n - 1) + n;
}

// #include <stdio.h>
// int sum(int n)
// {
// 	int total;
	
// 	if (n == 0)
// 		return (0);
// 	total = sum(n - 1);
// 	return total + n;
// }
