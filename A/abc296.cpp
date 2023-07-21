// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n, a, b;
// 	string	s;
// 
// 	cin >> n >> s;
// 	if (n == 1)
// 	{
// 		cout << "Yes" << endl;
// 		return (0);
// 	}
// 	for (int i = 0; i < n - 1; i++) 
// 	{
// 		if (s[i] == 'M' && s[i + 1] == 'M')
// 		{
// 			cout << "No" << endl;
// 			return (0);
// 		}
// 		else if (s[i] == 'F' && s[i + 1] == 'F')
// 		{
// 			cout << "No" << endl;
// 			return (0);
// 		}
// 	}
// 	cout << "Yes" << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void)
{
	int	n, a, b;
	string	s;

	cin >> n >> s;
	for (int i = 0; i < n - 1; i++) 
	{
		if (s[i] == s[i + 1])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}
