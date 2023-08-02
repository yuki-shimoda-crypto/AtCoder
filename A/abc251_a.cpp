#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> s;
	n = s.size();
	for (int i = 0; i < 6 / n; i++) {
		cout << s;
	}
	cout << endl;
	return (0);
}
