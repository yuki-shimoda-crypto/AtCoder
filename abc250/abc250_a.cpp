// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	h, w, r, c;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> h >> w >> r >> c;
// 	if (h == 1 && w == 1) {
// 		cout << 0 << endl;
// 	} else if ((h == 1 && (c == 1 || c == w)) || (w == 1 && (r == 1 || r == h))) {
// 		cout << 1 << endl;
// 	} else if (h == 1 || w == 1) {
// 		cout << 2 << endl;
// 	}else if ((r == 1 || r == h) && (c == 1 || c == w)) {
// 		cout << 2 << endl;
// 	} else if (r == 1 || r == h || c == 1 || c == w) {
// 		cout << 3 << endl;
// 	} else {
// 		cout << 4 << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	h, w, r, c;
	int	ans = 0;
	string	s, t;

	cin >> h >> w >> r >> c;
	if (r != 1) {
		ans++;
	}
	if (c != 1) {
		ans++;
	}
	if (r != h) {
		ans++;
	}
	if (c != w) {
		ans++;
	}
	cout << ans << endl;
	return (0);
}
