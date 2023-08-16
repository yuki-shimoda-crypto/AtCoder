#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> n;
	if (n % 4 == 0) {
		cout << n + 2<< endl;
	} else if (n % 4 == 1) {
		cout << n + 1<< endl;
	} else if (n % 4 == 2) {
		cout << n << endl;
	} else {
		cout << n + 3<< endl;
	}
	return (0);
}
