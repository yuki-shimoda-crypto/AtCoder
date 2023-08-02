#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b, c;
	int	ans = 0;
	string	s, t;

	cin >> a >> b >> c;
	if (a <= b && b <= c) {
		cout << "Yes" << endl;
	} else if (a >= b && b >= c) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return (0);
}
