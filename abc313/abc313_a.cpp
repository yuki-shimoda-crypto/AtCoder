// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, x, a, b, c, d, e, f;
// 	int	ans = 0;
// 	int	tmp = 0;
// 	int	p[100];
// 	string	s, t;
// 
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> p[i];
// 	}
// 	tmp = 0;
// 	for (int i = 1; i < n; i++) {
// 		tmp = max(tmp, p[i]);
// 	}
// 	if (tmp < p[0]) {
// 		cout << 0 << endl;
// 	} else if (tmp == p[0]) {
// 		cout << 1 << endl;
// 	} else {
// 		cout << tmp - p[0] + 1<< endl;
// 	}
// 	return (0);
// }

#include <iostream>
#include <vector>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	m = 0;
	for (int i = 1; i < n; i++) {
		m = max(p[i], m);
	}
	cout << max(0, m + 1 - p[0]) << endl;
	return (0);
}
