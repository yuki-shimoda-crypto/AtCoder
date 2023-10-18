#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	int	p;
	string	s, t;

	cin >> n >> m >> p;
	for (int i = 1; i < n + 1; i++) {
		if (i == m) {
			ans++;
		}
		if ((i - m) > 0 && (i - m) % p == 0) {
			ans++;
		}
	}
	cout << ans << endl;
	return (0);
}
