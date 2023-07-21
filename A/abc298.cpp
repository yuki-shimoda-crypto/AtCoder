#include <iostream>
using namespace std;

int	main(void)
{
	int	n, a, b;
	string	s;

	cin >> n >> s;
	int	g = 0, p = 0;
	for (int i = 0; i < n; i++) 
	{
		if (s[i] == 'o')
		{
			g++;
		}
		else if (s[i] == 'x')
		{
			p++;
		}
	}
	if (0 < g && p == 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return (0);
}
