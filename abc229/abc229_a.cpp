// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, x, a, b, c, d, e, f;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> s >> t;
// 	if (s[0] == '#' && s[1] == '#') {
// 		cout << "Yes" << endl;
// 	} else if (s[0] == '#' && t[0] == '#') {
// 		cout << "Yes" << endl;
// 	} else if (t[0] == '#' && t[1] == '#') {
// 		cout << "Yes" << endl;
// 	} else if (s[1] == '#' && t[1] == '#') {
// 		cout << "Yes" << endl;
// 	}else {
// 		cout << "No" << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m;
	int a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> s >> t;
	if (s == "#." && t == ".#") {
		cout << "No" << endl;
	} else if (s == ".#" && t == "#.") {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}
	return (0);
}
