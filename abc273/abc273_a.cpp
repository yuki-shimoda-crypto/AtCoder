// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b;
// 	int	ans = 1;
// 	string	s, t;
// 
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		ans = (i + 1) * ans;
// 	}
// 	cout << ans << endl;
// 	
// 	return (0);
// }

#include <iostream>
using namespace std;

int	f(int n)
{
	if (n == 0) {
		return (1);
	} else {
		return (n * f(n - 1));
	}
}

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
	string	s, t;

	cin >> n;
	cout << f(n) << endl;
	return (0);
}

