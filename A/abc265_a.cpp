#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b, x, y;
	int	ans = 0;
	string	s, t;

	cin >> x >> y >> n;
	if (x * 3 > y) {
		cout << (n / 3) * y + (n % 3) * x << endl;
	} else {
		cout << n * x << endl;
	}
	return (0);
}
