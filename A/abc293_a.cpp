// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, a, b;
// 	string	s;
// 	char	tmp;
// 
// 	cin >> s;
// 	for (int i = 0; i < s.length(); i += 2) {
// 		tmp = s[i];
// 		s[i] = s[i + 1];
// 		s[i + 1] = tmp;
// 	}
// 	cout << s << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, a, b;
	string	s;

	cin >> s;
	for (int i = 0; i < s.length() / 2; i++) {
		swap(s[2 * i], s[2 * i + 1]);
	}
	cout << s << endl;
	return (0);
}

