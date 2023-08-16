// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m;
// 	int	ans = 0;
// 	double a, b;
// 	string	s, t;
// 
// 	cin >> a >> b;
// 	cout << fixed << setprecision(3) << round((b / a) * 1000) / 1000 << endl;
// 	return (0);
// }

#include <iostream>
#include <iomanip>
using namespace std;

int	main(void) {
	int	n, m, a, b;
	int	ans = 0;
//	string	s, t;

	cin >> a >> b;
	double	s = (double)b / (double)a;
	cout << fixed << setprecision(3) << s << endl;
	return (0);
}
