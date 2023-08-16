// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	a, b, c, d, e, f, x;
// 	int	ans = 0;
// 	int	taka = 0, aoki = 0;
// 	string	s, t;
// 
// 	cin >> a >> b >> c >> d >> e >> f >> x;
// 	taka = b * a * (x / (a + c));
// 	for (int i = 0; i < (x % (a + c)) && i < a; i++) {
// 		taka += b;
// 	}
// 	aoki = e * d * (x / (d + f));
// 	for (int i = 0; i < (x % (d + f)) && i < d; i++) {
// 		aoki += e;
// 	}
// 	if (aoki < taka) {
// 		cout << "Takahashi" << endl;
// 	} else if (taka < aoki) {
// 		cout << "Aoki" << endl;
// 	}
// 	else {
// 		cout << "Draw" << endl;
// 	}
// 	return (0);
// }

// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, a, b, c, d, e, f, x;
// 	int	ans = 0;
// 	int	taka = 0, aoki = 0;
// 	string	s, t;
// 
// 	cin >> a >> b >> c >> d >> e >> f >> x;
// 	n = x;
// 	for (int i = 0; i < n; i++) {
// 		if (i % (a + c) < a) {
// 			taka += b;
// 		}
// 		if (i % (d + f) < d) {
// 			aoki += e;
// 		}
// 	}
// 	if (aoki < taka) {
// 		cout << "Takahashi" << endl;
// 	} else if (taka < aoki) {
// 		cout << "Aoki" << endl;
// 	} else {
// 		cout << "Draw" << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b, c, d, e, f, x;
	int	ans = 0;
	int	taka = 0, aoki = 0;
	string	s, t;

	cin >> a >> b >> c >> d >> e >> f >> x;
	taka = b * a * (x / (a + c)) + b * min(a, x % (a + c));
	aoki = e * d * (x / (d + f)) + e * min(d, x % (d + f));
	if (aoki < taka) {
		cout << "Takahashi" << endl;
	} else if (taka < aoki) {
		cout << "Aoki" << endl;
	} else {
		cout << "Draw" << endl;
	}
	return (0);
}
