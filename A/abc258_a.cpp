// #include <iostream>
// #include <iomanip>
// using namespace std;
// 
// int	main(void) {
// 	int	k;
// 	int	ans = 0;
// 
// 	cin >> k;
// 	cout << (21 + k / 60)  << ':' << setw(2) << setfill('0') << (0 + k % 60) << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

string	fix(int m)
{
	if (m < 10) {
		return (string{'0'} + to_string(m));
	} else {
		return (to_string(m));
	}
}

int	main(void) {
	int	k;
	int	h, m;

	cin >> k;
	h = k < 60 ? 21: 22;
	m = k % 60;
	cout << h << ':' << fix(m) << endl;
	return (0);
}
