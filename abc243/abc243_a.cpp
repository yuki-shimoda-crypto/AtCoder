// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	f, m, t, v;
// 	int	ans = 0;
// 
// 	cin >> v >> f >> m >> t;
// 	v -= (f + m + t) * (v / (f + m + t));
// 	while (1) {
// 		v -= f;
// 		if (v < 0) {
// 			cout << 'F' << endl;
// 			return (0);
// 		}
// 		v -= m;
// 		if (v < 0) {
// 			cout << 'M' << endl;
// 			return (0);
// 		}
// 		v -= t;
// 		if (v < 0) {
// 			cout << 'T' << endl;
// 			return (0);
// 		}
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	v, a, b, c;

	cin >> v >> a >> b >> c;
	v %= a + b + c;
	if (v < a) {
		cout << 'F' << endl;
	} else if (v < a + b) {
		cout << 'M' << endl;
	} else {
		cout << 'T' << endl;
	}
	return (0);
}
