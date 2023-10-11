#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> n >> s;
	for (int i = 0; i < n - 2; i++) {
		if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
			cout << i + 1<< endl;
			return (0);
		}
	}
	cout << "-1" << endl;
	return (0);
}
