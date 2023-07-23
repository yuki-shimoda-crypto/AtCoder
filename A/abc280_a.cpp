// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b, h, w;
// 	string	s[10], t;
// 	int	count = 0;
// 
// 	cin >> h >> w;
// 	for (int i = 0; i < h; i++) {
// 		cin >> s[i];
// 	}
// 	for (int i = 0; i < h; i++) {
// 		for (int j = 0; j < w; j++) {
// 			if (s[i][j] == '#' ) {
// 				count++;
// 			}
// 		}
// 	}
// 	cout << count << endl;
// 	return (0);
// }

// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> n >> m;
// 	for (int i = 0; i < n; i++) {
// 		cin >> s;
// 		for (int j = 0; j < m; j++) {
// 			if (s[j] == '#') {
// 				ans++;
// 			}
// 		}
// 	}
// 	cout << ans << endl;
// 	return (0);
// }

#include <iostream>
#include <algorithm>
using namespace std;

int	main(void) {
	int	n, m, a, b, h, w;
	string	s, t;
	int	ans = 0;

	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		cin >> s;
		ans += count(s.begin(), s.end(), '#');
	}
	cout << ans << endl;
	return (0);
}
