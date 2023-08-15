#include <iostream>
#include <climits>
using namespace std;

int	main(void) {
	int	n, m, x, a[100][100], b, c[100], d = 0, e, f, k;
	int	ans = 0;
	int	num_min = INT_MAX;
	string	s, t;

	k = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		for (int j = 0; j < c[i]; j++) {
			cin >> a[i][j];
		}
	}
	cin >> x;
 	for (int i = 0; i < n; i++) {
 		for (int j = 0; j < c[i]; j++) {
 			if (a[i][j] == x) {
				num_min = min(num_min, c[i]);
 			}
 		}
 	}
	if (num_min == INT_MAX) {
		cout << 0 << endl;
		cout << endl;
	} else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < c[i]; j++) {
				if (a[i][j] == x && c[i] == num_min) {
					k++;
				}
			}
		}
		cout << k << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < c[i]; j++) {
				if (a[i][j] == x && c[i] == num_min && d != k - 1) {
					cout << i + 1 << ' ';
					d++;
				}
				else if (a[i][j] == x && c[i] == num_min) {
					cout << i + 1 << endl;
				}
			}
		}
	}
	return (0);
}
