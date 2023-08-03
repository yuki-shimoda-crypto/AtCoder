#include <iostream>
using namespace std;

int	main(void) {
	double	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> a >> b >> c >> x;
	if (x <= a) {
		cout << 1.0 << endl;
	} else if (x <= b) {
		cout << (double)(c / (b - a)) << endl;
	} else {
		cout << 0.0 << endl;
	}
	return (0);
}
