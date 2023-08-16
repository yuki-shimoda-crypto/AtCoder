#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, a[10], b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	n = 10;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	n = 3;
	for (int i = 0; i < n; i++) {
		ans = a[ans];
	}
	cout << ans << endl;
	return (0);
}
