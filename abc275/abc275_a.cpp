// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	int	h;
// 	int	bridge = 0;
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> h;
// 		if (bridge  < h) {
// 			bridge = h;
// 			ans = i;
// 		}
// 	}
// 	cout << ans + 1 << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	int	h[100];
	string	s, t;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	for (int i = 0; i < n; i++) {
		if (h[ans] < h[i]) {
			ans = i;
		}
	}
	cout << ans + 1 << endl;
	return (0);
}
