#include <iostream>
using namespace std;

int	main(void) {
	size_t	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> n;
	while (n % 2 == 0) {
		n /= 2;
	}
	while (n % 3 == 0) {
		n /= 3;
	}
	if (n == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return (0);
}
