// #include <iostream>
// #include <climits>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n;
// 
// 	cin >> n;
// 	string	s[n];
// 	int		a[n];
// 	int		min;
// 	int		k;
// 	for (int i = 0; i < n; i++) {
// 		cin >> s[i] >> a[i];
// 	}
// 	min = INT_MAX;
// 	for (int i = 0; i < n; i++) 
// 	{
// 		if (a[i] < min)
// 		{
// 			min = a[i];
// 			k = i;
// 		}
// 	}
// 	for (int i = 0; i < n; i++) 
// 	{
// 		cout << s[(i + k) % n] << endl;
// 	}
// 	return (0);
// }
// 
// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int		n, a[100];
// 	string	s[100];
// 
// 	cin >> n;
// 	for (int i = 0; i < n; i++) 
// 	{
// 		cin >> s[i] >> a[i];
// 	}
// 	pair<int, int> m = {a[0], 0};
// 	for (int i = 0; i < n; i++) 
// 	{
// 		m = min(m, {a[i], i});
// 	}
// 	for (int i = 0; i < n; i++) 
// 	{
// 		cout << s[(m.second + i) % n] << endl;
// 	}
// 	return (0);
// }
// 

#include <iostream>
using namespace std;

int	main(void)
{
	int	n, a[100];
	string	s[100];

	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> s[i] >> a[i];
	}
	pair<int, int>m = {a[0], 0};
	for (int i = 0; i < n; i++) 
	{
		m = min(m, {a[i], i});
	}
	for (int i = 0; i < n; i++) 
	{
		cout << s[(m.second + i) % n] << endl;
	}
	return (0);
}
