// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> a;
// 		ans += a;
// 	}
// 	cout << ans << endl;
// 	return (0);
// }

#include <iostream>
#include <vector>
using namespace std;

int	main(void) {
	int	n, m, b;
	int	ans = 0;
	string	s, t;

	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		ans += a[i];
	}
	cout << ans << endl;
	return (0);
}
