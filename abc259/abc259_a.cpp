// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, x, t, d;
// 	int	ans = 0;
// 
// 	cin >> n >> m >> x >> t >> d;
// 	if (x <= m) {
// 		cout << t << endl;
// 		return (0);
// 	}
// 	for (int i = x - 1; i >= m; i--) {
// 		t -= d;
// 	}
// 	cout << t << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, x, t, d;

	cin >> n >> m >> x >> t >> d;
	if (x <= m) {
		cout << t << endl;
	} else {
		cout << t - (x - m) * d << endl;
	}
	return (0);
}
