#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> s;
	if (s == "Monday") {
		cout << 5 << endl;
	} else if (s == "Tuesday") {
		cout << 4 << endl;
	} else if (s == "Wednesday") {
		cout << 3 << endl;
	} else if (s == "Thursday") {
		cout << 2 << endl;
	}else {
		cout << 1 << endl;
	}
	return (0);
}
