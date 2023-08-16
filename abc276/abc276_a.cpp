// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = -1;
// 	string	s, t;
// 
// 	cin >> s;
// 	n = s.size();
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] == 'a') {
// 			ans = i;
// 		}
// 	}
// 	if (ans != -1) {
// 		cout << ans + 1 << endl;
// 	} else {
// 		cout << -1 << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> s;
	n = s.size();
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == 'a') {
			cout << i + 1 << endl;
			return (0);
		}
	}
	cout << -1 << endl;
	return (0);
}
