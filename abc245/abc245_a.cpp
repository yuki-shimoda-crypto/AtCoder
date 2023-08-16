#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b, c, d;
	int	ans = 0;
	string	s, t;

	cin >> a >> b >> c >> d;
	if (c < a) {
		cout << "Aoki" << endl;
	} else if (a < c) {
		cout << "Takahashi" << endl;
	} else {
		if (d < b) {
			cout << "Aoki" << endl;
		} else {
			cout << "Takahashi" << endl;
		}
	}
	return (0);
}
