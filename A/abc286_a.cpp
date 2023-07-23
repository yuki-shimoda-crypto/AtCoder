// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, p, q, r, s;
// 	//string	s, t;
// 	int	a[100];
// 
// 	cin >> n >> p >> q >> r >> s;
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}
// 	for (int i = 0; i < q - p + 1; i++) {
// 		swap(a[p + i - 1], a[r + i - 1]);
// 	}
// 	for (int i = 0; i < n; i++) {
// 		if (i == n - 1) {
// 			cout << a[i] << endl;	
// 		} else {
// 			cout << a[i] << ' ';	
// 		}
// 	}
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, p, q, r, s;
	int	a[100];

	cin >> n >> p >> q >> r >> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (p - 1 <= i && i <= q - 1) {
			cout << a[r - 1 + i - (p - 1)];
		} else if (r - 1 <= i && i <= s - 1) {
			cout << a[p - 1 + i - (r - 1)];
		} else {
			cout << a[i];
		}
		if (i == n - 1) {
			cout << endl;
		} else {
			cout << ' ';
		}
	}
	
	return (0);
}
