#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	string	s, t;
	bool	f_a = false, f_b = false, f_c = false;

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			f_a = true;
		} else if (s[i] == 'B') {
			f_b = true;
		} else if (s[i] == 'C') {
			f_c = true;
		}
		if (f_a && f_b && f_c) {
			cout << i + 1 << endl;
			return (0);
		}
	}
	return (0);
}
