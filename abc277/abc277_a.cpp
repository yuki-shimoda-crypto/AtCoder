// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	int	x, p;
// 	string	s, t;
// 
// 	cin >> n >> x;
// 	for (int i = 0; i < n; i++) {
// 		cin >> p;
// 		if (p == x) {
// 			cout << i + 1 << endl;
// 		}
// 	}
// 	return (0);
// }

#include <iostream>
#include <vector>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	int	x;
	string	s, t;

	cin >> n >> x;
	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < n; i++) {
		if (p[i] == x) {
			cout << i + 1 << endl;
		}
	}
	return (0);
}
