#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void *n1, const void *n2)
{
	return *(int *)n1 - *(int *)n2;
}

// int cmpnum(const void * n1, const void * n2)
// {
// 	if (*(int *)n1 > *(int *)n2)
// 		return 1;
// 	else if (*(int *)n1 < *(int *)n2)
// 		return -1;
// 	else
// 		return 0;
// }

int main(void)
{
	int num[10] = {60, 10, 50, 30, 80, 40, 20, 90, 70, 0};

	qsort(num, 10, sizeof(int), cmpnum);
	for (int i = 0 ; i < 10; i++)
		printf("%d\n", num[i]);
	return 0;
}

// #include <stdlib.h>
// void qsort(
//   void *base, size_t num, size_t size,
//   int (*compare)(const void *a, const void *b)
// );
// first-argument	base	Array to be sorted
// second-argument	num		Number of array elements
// third-argument	size	Array element size
// fourth-argument	compare	Comparison function (callback function)

// Comparison function
// int (*compare)(const void *a, const void *b)
// return
// 第一引数の方が大きい	正の値
// 両方の引数が等しい	0
// 第一引数の方が小さい	負の値



