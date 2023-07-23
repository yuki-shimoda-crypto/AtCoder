// #include <iostream>
// using namespace std;
// 
// int	main(void)
// {
// 	int	n, a, b;
// 	string	s;
// 
// 	cin >> n >> s;
// 	int	before, after, aster;
// 	bool	f_before = false;
// 	for (int i = 0; i < n; i++) 
// 	{
// 		if (s[i] == '*')
// 		{
// 			aster = i;
// 		}
// 		else if (s[i] == '|' && f_before == false)
// 		{
// 			before = i;
// 			f_before = true;
// 		}
// 		else if (s[i] == '|' && f_before == true)
// 		{
// 			after = i;
// 		}
// 	}
// 	if (before < aster && aster < after)
// 	{
// 		cout << "in" << endl;
// 	}
// 	else
// 	{
// 		cout << "out" << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void)
{
	int	n, a, b;
	string	s;

	cin >> n >> s;
	int	v_first = -1, v_second, star;
	for (int i = 0; i < n; i++) 
	{
		if (s[i] == '|' && v_first < 0)
		{
			v_first = i;
		}
		else if (s[i] == '|')
		{
			v_second = i;
		}
		if (s[i] == '*')
		{
			star = i;
		}
	}
	if (v_first < star && star < v_second)
	{
		cout << "in" << endl;
	}
	else
	{
		cout << "out" << endl;
	}
	return (0);
}
