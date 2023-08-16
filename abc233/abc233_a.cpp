#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, y;
	int	ans = 0;
	string	s, t;

	cin >> x >> y;
	if (y <= x) {
		cout << 0 << endl;
	} else {
		cout << (y - x - 1) / 10 + 1<< endl;
	}
	return (0);
}

