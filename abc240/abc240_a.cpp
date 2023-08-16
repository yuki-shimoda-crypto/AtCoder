#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> a >> b;
	if (a == b - 1) {
		cout << "Yes" << endl;
	} else if (a == 1 && b == 10) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return (0);
}
