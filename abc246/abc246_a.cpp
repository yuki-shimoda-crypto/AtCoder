#include <iostream>
using namespace std;

int	main(void) {
	int	x[4], y[4];

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y [i];
	}
	if (x[0] == x[1]) {
		cout << x[2] << ' ';
	} else if (x[0] == x[2]) {
		cout << x[1] << ' ';
	} else {
		cout << x[0] << ' ';
	}
	if (y[0] == y[1]) {
		cout << y[2] << endl;
	} else if (y[0] == y[2]) {
		cout << y[1] << endl;
	} else {
		cout << y[0] << endl;
	}
	return (0);
}
