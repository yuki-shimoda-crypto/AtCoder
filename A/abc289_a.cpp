// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	string	s, t;
// 
// 	cin >> s;
// 	n = s.size();
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] == '0') {
// 			s[i] = '1';
// 		} else {
// 			s[i] = '0';
// 		}
// 	}
// 	cout << s << endl;
// 	return (0);
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	string	s, t;
// 
// 	cin >> s;
// 	n = s.size();
// 	replace(s.begin(), s.end(), '0', 'x');
// 	replace(s.begin(), s.end(), '1', '0');
// 	replace(s.begin(), s.end(), 'x', '1');
// 	cout << s << endl;
// 	return (0);
// }

// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	string	s, t;
// 
// 	cin >> s;
// 	n = s.size();
// 	for (char c: s) {
// 		if (c == '0') {
// 			cout << '1';
// 		} else {
// 			cout << '0';
// 		}
// 	}
// 	cout << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	string	s, t;

	cin >> s;
	n = s.size();
	for (char &c: s) {
		if (c == '0') {
			c = '1';
		} else {
			c = '0';
		}
	}
	cout << s << endl;
	return (0);
}
