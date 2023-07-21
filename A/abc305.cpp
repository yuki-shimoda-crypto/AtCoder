// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n;
// 	string	s;
// 
// 	cin >> n;
// 	if (n % 5 == 0)
// 	{
// 		cout <<	n << endl;
// 	}
// 	else
// 	{
// 		if (n % 5 < 3)
// 		{
// 			cout << n - n % 5 << endl;
// 		}
// 		else
// 		{
// 			cout << n + 5 - n % 5 << endl;
// 		}
// 	}
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n;
// 	string	s;
// 
// 	cin >> n;
// 	cout << (round(n / 5.0)) * 5 << endl;
// 	return (0);
// }
//

#include <iostream>
using namespace std;

int	main(void)
{
	int	n;
	string	s;

	cin >> n;
	cout << ((n + 2) / 5)* 5 << endl;
	return (0);
}
