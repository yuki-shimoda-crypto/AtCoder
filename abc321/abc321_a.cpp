#include <iostream>
#include <cmath>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f, i;
	int	ans = 0;
	string	s, t;

	cin >> s;
	n = s.size();
	for (int i = 0; i < n - 1; i++) {
		a = s[i] - '0';
		b = s[i + 1] - '0';
		if (a <= b) {
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}
