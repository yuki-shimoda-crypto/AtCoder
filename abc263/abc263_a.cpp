// #include <iostream>
// #include <set>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a[5], b, c, d, e;
// 	int	ans = 0;
// 	int	num = 0;
// 
// 	n = 5;
// 	set<int> s;
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 		s.insert(a[i]);
// 		if (a[0] == a[i]) {
// 			num++;
// 		}
// 	}
// 	if (s.size() == 2 && (num == 2 || num == 3)) {
// 		cout << "Yes" << endl;
// 	} else {
// 		cout << "No" << endl;
// 	}
// 	return (0);
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int	main(void) {
	int	n, m, b;
	int	ans = 0;
	string	s, t;

	vector<int> a(5);
	n = 5;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	if ((a[0] == a[2] && a[3] == a[4]) || (a[0] == a[1] && a[2] == a[4])) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return (0);
}
