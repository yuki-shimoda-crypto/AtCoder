#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, b, c, d, e, f;
	int	ans = 0;
	string	s, a[100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (a[0] != a[i]) {
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}
