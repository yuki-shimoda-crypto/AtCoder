//#include <iostream>
//using namespace std;
//
//int	main(void) {
//	int	n, m;
//	int a, b, c, d, e, f;
//	int	ans = 0;
//	string	s, t;
//
//	cin >> a >> b >> c;
//	ans = c;
//	while (ans <= b) {
//		if (a <= ans) {
//			cout << ans << endl;
//			return (0);
//		} else {
//			ans += c;
//		}
//	}
//	cout << -1 << endl;
//	return (0);
//}

#include <iostream>
using namespace std;
typedef long long ll;

int	main(void) {
	ll	a, b, c;

	cin >> a >> b >> c;
	ll	y = b / c * c;
	if (a <= y) {
		cout << y << endl;
	} else {
		cout << -1 << endl;
	}
	return (0);
}
