#include <iostream>
using namespace std;

int	main(void)
{
	int	n, a, b;
	int	c[300];
	string	s;

	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) 
	{
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) 
	{
		if (a + b == c[i])
		{
			cout << i + 1 << endl;
		}
	}
	return (0);
}
