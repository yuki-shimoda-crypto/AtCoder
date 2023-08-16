// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 	int	l1, r1, l2, r2;
// 
// 	cin >> l1 >> r1;
// 	cin >> l2 >> r2;
// 	if (r1 < l2 || r2 < l1) {
// 		cout << 0 << endl;
// 	} else if (l1 < l2) {
// 		if (r1 < r2) {
// 			cout << r1 - l2 << endl;
// 		} else {
// 			cout << r2 - l2 << endl;
// 		}
// 	} else {
// 		if (r1 < r2) {
// 			cout << r1 - l1 << endl;
// 		} else {
// 			cout << r2 - l1 << endl;
// 		}
// 	}
// 	return (0);
// }

// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	l1, r1, l2, r2;
// 
// 	cin >> l1 >> r1 >> l2 >> r2;
// 	if (l1 > l2) {
// 		swap(l1, l2);
// 		swap(r1, r2);
// 	}
// 	if (r1 < l2) {
// 		cout << 0 << endl;
// 	} else if (r1 < r2) {
// 		cout << r1 - l2 << endl;
// 	} else {
// 		cout << r2 - l2 << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	l1, r1, l2, r2;
	
	cin >> l1 >> r1 >> l2 >> r2;
	cout << max(0, min(r1, r2) - max(l2, l1)) << endl;
	return (0);
}
