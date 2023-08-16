// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	yes = 0, no = 0;
// 	string	s, t;
// 
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> s;
// 		if (s[0] == 'F') {
// 			yes++;
// 		}
// 		else {
// 			no++;
// 		}
// 	}
// 	if (no < yes) {
// 		cout << "Yes" << endl;
// 	} else {
// 		cout << "No" << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	count;
	string	s, t;

	cin >> n;
	count = 0;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "For") {
			count++;
		}
	}
	if (count > n / 2) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return (0);
}
