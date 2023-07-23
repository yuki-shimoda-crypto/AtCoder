// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n;
// 	long	a, b, i;
// 	string	s;
// 
// 	cin >> a >> b;
// 	if (a % b == 0)
// 	{
// 		i = a / b;
// 	}
// 	else
// 	{
// 		i = a / b + 1;
// 	}
// 	cout << i << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void)
{
	int	n;
	string	s;
	long	a, b;

	cin >> a >> b;
	cout << (a + b - 1) / b << endl;
	return (0);
}
