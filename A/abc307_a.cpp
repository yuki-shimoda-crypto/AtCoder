// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n;
// 	int	d;
// 	int	total;
// 
// 	cin >> n;
// 	total = 0;
// 	for (int i = 0; i < 7 * n; i++) 
// 	{
// 		cin >> d;
// 		total += d;
// 		if (i % 7 == 6)
// 		{
// 			cout << total;
// 			if (i != 7 * n - 1)
// 			cout << ' ';
// 			total = 0;
// 		}
// 	}
// 	cout <<	endl;
// 	return (0);
// }
// 

#include <iostream>
#include <vector>
using namespace std;

int	main(void)
{
	int	n;
	int	sum;

	cin >> n;
	vector<int>	d(7 * n);
	for (int i = 0; i < 7 * n; i++) 
	{
		cin >> d[i];
	}
	for (int i = 0; i < n; i++) 
	{
		sum = 0;
		for (int j = 0; j < 7; j++) 
			sum += d[7 * i + j];
		if (i == n - 1)
			cout << sum << endl;
		else
			cout << sum << ' ';
	}
}
if ()
{
}
else
{
}
