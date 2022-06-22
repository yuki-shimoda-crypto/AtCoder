#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpnum(const void *n1, const void *n2)
{
	return *(int *)n1 - *(int *)n2;
}

int main(void)
{
    int n, k;
    int tmp, flag = 1;
    // insert
    scanf("%d%d", &n, &k);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    // change
    for (int i = 0; i < n - k; i++)
    {
        if (a[i] > a[i + k] && i + k < n)
        {
            tmp = a[i];
            a[i] = a[i + k];
            a[i + k] = tmp;
        }
    }
	qsort(b, n, sizeof(int), cmpnum);
    
    // compare
	for (int i = 0 ; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
    
    return (0);
}
        // printf("%d ", 1);
        // j = 1;
        // while (j < flag)
        // {
        //     table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
        //     printf("%d ", table[i][j]);
        //     j ++;
        // }
        // if (i == 0)
        // printf("\n");
        // else
        // printf("%d\n", 1);
        // flag++;


// #include <stdio.h>
// #include <stdlib.h>


// int cmpnum(const void * n1, const void * n2)
// {
// 	if (*(int *)n1 > *(int *)n2)
// 		return 1;
// 	else if (*(int *)n1 < *(int *)n2)
// 		return -1;
// 	else
// 		return 0;
// }

// int main(void)
// {
// 	int num[10] = {60, 10, 50, 30, 80, 40, 20, 90, 70, 0};

// 	return 0;
// }

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