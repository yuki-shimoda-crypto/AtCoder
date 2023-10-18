#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> s;
	n = s.size();
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1 && s[i] == '1') {
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}
