#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a[100], b[100];
	string	s;
	int	total = 0;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < m; i++) {
		total += a[b[i] - 1];
	}
	cout << total << endl;
	return (0);
}
