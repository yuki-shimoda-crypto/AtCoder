// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m;
// 	int	ans = 0;
// 	string	s, t, a, b;
// 
// 	cin >> n;
// 	if (n / 16 > 9) {
// 		a = 'A' + n / 16 - 10;
// 	} else {
// 		a = n / 16 + '0';
// 	}
// 	if (n % 16 > 9) {
// 		b = 'A' + n % 16 - 10;
// 	} else {
// 		b = n % 16 + '0';
// 	}
// 	cout << a << b << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> n;
	a = n / 16;
	b =  n % 16;
	if (a < 10) {
		cout << a;
	} else {
		cout << (char)('A' + a - 10);
	}
	if (b < 10) {
		cout << b << endl;
	} else {
		cout << (char)('A' + b - 10) << endl;
	}
	return (0);
}
