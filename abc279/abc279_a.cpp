// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> s;
// 	n = s.size();
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] == 'v') {
// 			ans += 1;
// 		} else {
// 			ans += 2;
// 		}
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

	cin >> s;
	for (char c : s) {
		if (c == 'v') {
			ans += 1;
		}
		else {
			ans += 2;
		}
	}
	cout << ans << endl;
	return (0);
}
