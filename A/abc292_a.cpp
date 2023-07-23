// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, a, b;
// 	string	s;
// 
// 	cin >> s;
// 	for (int i = 0; i < s.length(); i++) {
// 			s[i] = toupper(s[i]);
// 	}
// 	cout << s << endl;
// 	return (0);
// }

#include <iostream>
using namespace std;

int	main(void) {
	int	n, a, b;
	string	s;
	string	t = "";

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		t += toupper(s[i]);
	}
	cout << t << endl;
	return (0);
}
