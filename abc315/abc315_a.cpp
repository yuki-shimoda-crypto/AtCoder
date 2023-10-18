// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m;
// 	int a, b, c, d, e, f;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> s;
// 	n = s.size();
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
// 			cout << s[i];
// 		}
// 	}
// 	cout << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m;
	int a, b, c, d, e, f;
	string	ans = "";
	string	s, t;

	cin >> s;
	for (char c : s) {
		if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
			ans += c;
		}
	}
	cout << ans << endl;
	return (0);
}
