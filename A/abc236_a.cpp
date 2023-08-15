#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> s >> a >> b;
	swap(s[a - 1], s[b - 1]);
	cout << s << endl;
	return (0);
}
