#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a[200] = {0}, b, k;
	int	ans = 0;
	string	s, t;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = k; i < n + k; i++) {
		cout << a[i]<< (i != n + k - 1 ? ' ' : '\n');
	}
	return (0);
}
