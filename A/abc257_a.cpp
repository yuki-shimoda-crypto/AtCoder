// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, x;
// 
// 	cin >> n >> x;
// 	cout << (char)('A' + (x - 1) / n )<< endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, x;
	string	s;

	cin >> n >> x;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < n; j++) {
			s.push_back('A' + i);
		}
	}
	cout << s[x - 1] << endl;
	return (0);
}
