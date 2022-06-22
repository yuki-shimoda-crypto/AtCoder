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

// #include <stdio.h>
// #include <stdlib.h>

// char *reverse_array(char *str)
// {
// 	int i;
// 	i = 0;

	
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, *p;
	int i;

	scanf("%d", &n);
	p = (int *)malloc(sizeof(int) * n);
	i =  0;
	while (i < n - 1)
	{
		scanf("%d", p[i]);
		i++;
	}
	

}


#include <stdio.h>
#include <stdlib.h>

    // x番の組織が親組織に提出する枚数を返す
    // childrenは組織の関係を表す2次元配列(参照渡し)
    int count_report_num(vector<vector<int>> &children, int x) {
      // ベースケース
      if (children.at(x).size() == 0) {
        // 子組織から受け取ることは無いので1枚であることが確定している
        return 1;
      }
     
      // 再帰ステップ
      int sum = 0;
      for (int c : children.at(x)) {
        sum += count_report_num(children, c);
      }
      sum += 1;  // x番の組織の報告書の枚数(1枚)を足す
      return sum;
    }
     
    // これ以降の行は変更しなくてよい
     
    int main(void) {
      int N;
      scanf("%d", &N);
     
      p[n];  // 各組織の親組織を示す配列
      p[0] = -1;  // 0番組織の親組織は存在しないので-1を入れておく
      for (int i = 1; i < N; i++) {
        cin >> p.at(i);
		scanf("%d", &p);
      }
     
      // 組織の関係から2次元配列を作る
      vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
      for (int i = 1; i < N; i++) {
        int parent = p.at(i);  // i番の親組織の番号
        children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
      }
     
      // 各組織について、答えを出力
      for (int i = 0; i < N; i++) {
        cout << count_report_num(children, i) << endl;
      }
    }