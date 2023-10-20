// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m;
// 	int a, b, c, d, e, f;
// 	int	ans = 0;
// 	int	s, t, x;
// 
// 	cin >> s >> t >> x;
// 	if ((s < t && s <= x && x < t) || (s > t && s <= x && x < 24) || (s > t && 0 <= x && x < t)) {
// 		cout << "Yes" << endl;
// 	} else {
// 		cout << "No" << endl;
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, m;
	int a, b, c, d, e, f;
	int	ans = 0;
	int	s, t, x;

	cin >> s >> t >> x;
	if (s < t) {
		cout << (s <= x && x < t ? "Yes" : "No") << endl;
	} else {
		cout << (s <= x || x < t ? "Yes" : "No") << endl;
	}
	
	return (0);
}
