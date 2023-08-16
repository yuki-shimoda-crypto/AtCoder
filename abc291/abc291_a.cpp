// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, a, b, num;
// 	string	s;
// 
// 	cin >> s;
// 	for (int i = 0; i < s.size(); i++) {
// 		if ('A' <= s[i] && s[i] <= 'Z') {
// 			cout << i + 1 << endl;
// 			return (0);
// 		}
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, a, b;
	string	s;

	cin >> s;
	n = s.size();
	for (int i = 0; i < n; i++) {
		if (isupper(s[i])) {
			cout << i + 1 << endl;
			return (0);
		}
	}
	return (0);
}
