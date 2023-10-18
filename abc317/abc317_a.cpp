#include <iostream>
#include <vector>
using namespace std;

int	main(void) {
	int	n, m;
	int a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;
	int	h, x;
	vector<int> p;

	// input
	cin >> n >> h >> x;
	p.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	// process
	for (int i = 0; i < n; i++) {
		if (h + p[i] >= x) {
			cout << i + 1 << endl;
			return (0);
		}
	}
	cout << n << endl;
	return (0);
}
