#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	string	s[10], t;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << s[i] << endl;
	}

	return (0);
}
