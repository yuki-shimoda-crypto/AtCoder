// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, a, b, c, d, e, f;
// 	int	ans = 0;
// 	int	x, y, z;
// 	string	s, t;
// 
// 	cin >> s;
// 	x = s[0] - '0';
// 	y = s[1] - '0';
// 	z = s[2] - '0';
// 	ans = (x + y + z) * 111;
// 	cout << ans << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	ans = 0;
	char	a, b, c;
	string	s, t;

	cin >> a >> b >> c;
	string	abc = string({a, b, c});
	string	bca = string({b, c, a});
	string	cab = string({c, a, b});
	ans = stoi(abc) + stoi(bca) + stoi(cab);
	cout << ans << endl;
	return (0);
}
