#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a[2][2], b, r, c;
	int	ans = 0;
	string	s, t;

	cin >> r >> c;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	cout << a[r - 1][c - 1] << endl;
	return (0);
}
