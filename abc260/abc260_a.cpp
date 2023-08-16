#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> s;
	if (s[0] != s[1] && s[0] != s[2]) {
		cout << s[0] << endl;
	} else if (s[1] != s[0] && s[1] != s[2]) {
		cout << s[1] << endl;
	} else if (s[2] != s[0] && s[2] != s[1]) {
		cout << s[2] << endl;
	} else {
		cout << -1 << endl;
	}
	return (0);
}
