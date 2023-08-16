// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a[5];
// 	int	ans = 0;
// 	string	s, t;
// 
// 	n = 5;
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n - 1; j++) {
// 			if (a[j] > a[j + 1]) {
// 				swap(a[j], a[j + 1]);
// 			}
// 		}
// 	}
// 	ans = 1;
// 	for (int i = 0; i < n - 1; i++) {
// 		if (a[i] != a[i + 1]) {
// 			ans++;
// 		}
// 	}
// 	cout << ans << endl;
// 	return (0);
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a[5], b;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	n = 5;
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}
// 	sort(a, a + n);
// 	ans = 1;
// 	for (int i = 0; i < n - 1; i++) {
// 		if (a[i] != a[i + 1]) {
// 			ans++;
// 		}
// 	}
// 	cout << ans << endl;
// 	return (0);
// }

#include <iostream>
#include <set>
using namespace std;

int	main(void) {
	int	n, m, a;
	int	ans = 0;
	string	t;

	set<int> s;
	n = 5;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}
	cout << s.size() << endl;
	return (0);
}
