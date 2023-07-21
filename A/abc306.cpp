// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int		n;
// 	string	s;
// 
// 	cin >> n >> s;
// 	for (int i = 0; i < n; i++) 
// 	{
// 		cout << s[i] << s[i];
// 		if (i == n - 1)
// 		{
// 			cout << endl;
// 		}
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void)
{
	int	n;
	string	s;

	cin >> n >> s;
	for (auto &letter: s) 
	{
		cout << letter << letter;
	}
	cout << endl;
}
