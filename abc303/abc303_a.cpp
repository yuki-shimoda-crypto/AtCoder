#include <iostream>
using namespace std;

int	main(void)
{
	int	n;
	string	s, t;

	cin >> n >> s >> t;
	for (int i = 0; i < n; i++) 
	{
		if (s[i] == t[i])
		{
			continue ;
		}
		else if (s[i] == '0' && t[i] == 'o')
		{
			continue ;
		}
		else if (s[i] == '1' && t[i] == 'l')
		{
			continue ;
		}
		else if (s[i] == 'o' && t[i] == '0')
		{
			continue ;
		}
		else if (s[i] == 'l' && t[i] == '1')
		{
			continue ;
		}
		else
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}
