// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> a >> b;
// 	if (a % 2 == 1 || b % 2 == 1) {
// 		ans += 1;
// 	}
// 	if (3 < a || 3 < b) {
// 		ans += 4;
// 	}
// 	if (a == 2 || a == 3 || a == 6 || a == 7 || b == 2 || b == 3 || b == 6 || b == 7) {
// 		ans += 2;
// 	}
// 	cout << ans << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> a >> b;
	cout << (a|b) << endl;
	return (0);
}
