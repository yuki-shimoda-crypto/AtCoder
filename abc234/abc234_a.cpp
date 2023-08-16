#include <iostream>
using namespace std;

int	f(int x) {
	return (x * x + 2 * x + 3);
}

int	main(void) {
	int	n, m, x, a, b, c, d, e;
	int	ans = 0;
	int	s, t;

	cin >> t;
	cout << f(f(f(t) + t) + f(f(t))) << endl;
	return (0);
}
