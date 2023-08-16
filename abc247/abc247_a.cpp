// #include <iostream>
// #include <iomanip>
// #include <bitset>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> s;
// 	for (char c : s) {
// 		ans = ans << 1;
// 		if (c == '1') {
// 			ans += 1;
// 		}
// 	}
// 	ans = ans >> 1;
// 	cout <<  bitset<4>(ans) << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t(4, '0');

	cin >> s;
	t[1] = s[0];
	t[2] = s[1];
	t[3] = s[2];
	cout << t << endl;
	return (0);
}
