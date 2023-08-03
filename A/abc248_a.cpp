// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 45;
// 	string	s, t;
// 
// 	cin >> n;
// 	for (int i = 0; i < 9; i++) {
// 		ans -= n % 10;
// 		n /= 10;
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
	bool	flag[10];

	cin >> s;
	for (int i = 0; i < 10; i++) {
		flag[i] = true;
	}
	for (int i = 0; i < 9; i++) {
		flag[s[i] - '0'] = false;
	}
	for (int i = 0; i < 10; i++) {
		if (flag[i]) {
			cout << i << endl;
		}
	}
	return (0);
}
