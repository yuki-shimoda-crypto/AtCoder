#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
	int	s;
	int	before;

	before = INT_MIN;
	for (size_t i = 0; i < 8; i++)
	{
		cin >> s;
		if (!(before <= s))
			break ;
		if (!(100 <= s && s <= 675))
			break ;
		if (s % 25 != 0)
			break ;
		before = s;
		if (i == 7)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
