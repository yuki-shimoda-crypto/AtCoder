// #include <iostream>
// using namespace std;
// 
// int main(void)
// {
// 	int	n, p, q;
// 
// 	cin >> n >> p >> q;
// 	int	d[n];
// 	int	min = p;
// 	for (size_t i = 0; i < n; i++)
// 	{
// 		cin >> d[i];
// 	}
// 	
// 
// 	for (size_t i = 0; i < n; i++)
// 	{
// 		if (q + d[i] < min)
// 			min = q + d[i];
// 	}
// 	cout << min << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void)
{
	int	n, p, q;
	int	d_min, d;

	cin >> n >> p >> q;
	d_min = p;
	for (size_t i = 0; i < n; i++)
	{
		cin >> d;
		d_min = min(d_min, q + d);
	}
	cout << d_min << endl;
}
