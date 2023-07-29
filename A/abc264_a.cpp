//#include <iostream>
//using namespace std;
//
//int	main(void) {
//	int	n, m, a, b;
//	int	ans = 0;
//	string	s, t;
//	int	l, r;
//
//	s = "atcoder";
//	cin >> l >> r;
//	for (int i = 0; i < r - l + 1; i++) {
//		cout << s[i + l - 1];
//	}
//	cout << endl;
//	return (0);
//}

// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	s = "atcoder";
// 	int	l, r;
// 	cin >> l >> r;
// 	n = 7;
// 	for (int i = 0; i < n; i++) {
// 		if (l - 1 <= i && i < r) {
// 			cout << s[i];
// 		}
// 	}
// 	cout << endl;
// 	return (0);
// }

// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	s = "atcoder";
// 	int	l, r;
// 	cin >> l >> r;
// 	for (int i = l - 1; i < r; i++) {
// 		cout << s[i];
// 	}
// 	cout << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	int	l, r;
	cin >> l >> r;
	cout << ((string)"atcoder").substr(l - 1, r - l + 1) << endl;
	
	return (0);
}
