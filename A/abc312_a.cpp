// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m, x, a, b, c, d, e, f;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> s;
// 	if (s == "ACE") {
// 		cout << "Yes" << endl;
// 	} else if (s == "BDF") {
// 		cout << "Yes" << endl;
// 	} else if (s == "CEG") {
// 		cout << "Yes" << endl;
// 	} else if (s == "DFA") {
// 		cout << "Yes" << endl;
// 	} else if (s == "EGB") {
// 		cout << "Yes" << endl;
// 	} else if (s == "FAC") {
// 		cout << "Yes" << endl;
// 	} else if (s == "GBD") {
// 		cout << "Yes" << endl;
// 	} else {
// 		cout << "No" << endl;
// 	}
// 	return (0);
// }

#include <iostream>
#include <string>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c, d, e, f;
	int	ans = 0;
	string	s, t = "ACEGBDFAC";

	cin >> s;
	cout << (t.find(s) == string::npos ? "No" : "Yes") << endl;
	return (0);
}
