#include <iostream>
using namespace std;

int	main(void) {
	int	n, m;
	int a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;
	int	x;

	cin >> x;
	if (x < 40) {
		cout << (40 - x) << endl;
	} else if (x < 70) {
		cout << (70 - x) << endl;
	} else if (x < 90) {
		cout << (90 - x) << endl;
	} else {
		cout << "expert" << endl;
	}
	return (0);
}
