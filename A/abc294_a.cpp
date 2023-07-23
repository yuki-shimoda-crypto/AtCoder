#include <iostream>
using namespace std;

int	main(void) {
	int	n, a[100], b, last;
	string	s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			last = i;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i];
			if (i == last) {
				cout << endl;
			} else {
				cout << ' ';
			}
		}
	}
	return (0);
}
