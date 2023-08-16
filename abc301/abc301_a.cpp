// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n;
// 	string	s;
// 	char	win;
// 	int		t, a;
// 
// 	cin >> n >> s;
// 	t = 0;
// 	a = 0;
// 	for (int i = 0; i < n; i++) 
// 	{
// 		if (s[i] == 'T')
// 		{
// 			t++;
// 		}
// 		else
// 		{
// 			a++;
// 		}
// 		if (a < t)
// 		{
// 			win = 'T';
// 		}
// 		else if (a > t)
// 		{
// 			win = 'A';
// 		}
// 	}
// 	cout << win << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void)
{
	int	n;
	string	s;

	cin >> n >> s;
	int	t = 0, a = 0;
	for (int i = 0; i < n; i++) 
	{
		if (s[i] == 'T')
		{
			t++;
		}
		else
		{
			a++;
		}
	}
	if (t > a)
	{
		cout << 'T' << endl;
	}
	else if (t < a)
	{
		cout << 'A' << endl;
	}
	else
	{
		cout << char('A' + 'T' - s.back()) << endl;
	}
	return (0);
}
