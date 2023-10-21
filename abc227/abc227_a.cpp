#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, k;
	int a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> n >> k >> a;
	cout << (((k - 1) % n + a) % n == 0 ? n : ((k - 1) % n + a) % n) << endl;
	return (0);
}
