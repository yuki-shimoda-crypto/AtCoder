// #include <iostream>
// #include <iomanip>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, x, a, b, c, d, e, f;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> n;
// 	if (n < 42) {
// 		cout << "AGC" << setw(3) << setfill('0') << n << endl;
// 	} else {
// 		cout << "AGC" << setw(3) << setfill('0') << n + 1 << endl;
// 	}
// 	return (0);
// }

#include <iostream>
#include <iomanip>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t;

	cin >> n;
	if (42 <= n) {
		n++;
	}
	cout << "AGC" << setw(3) << setfill('0') << n << endl;
	return (0);
}
