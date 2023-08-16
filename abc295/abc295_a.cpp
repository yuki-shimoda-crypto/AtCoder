// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, a, b;
// 	string	w;
// 	string	s;
// 
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> w;
// 		if (w == "and" || w == "not" || w == "that" || w == "the" || w == "you") {
// 			cout << "Yes" << endl;
// 			return (0);
// 		}
// 	}
// 	cout << "No" << endl;
// 	return (0);
// }

#include <iostream>
#include <vector>
using namespace std;

int	main(void) {
	int	n, a, b;
	string	s;
	vector<string> word = {"and", "not", "that", "the", "you"};

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (auto &nx : word) {
			if (s == nx) {
				cout << "Yes" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
	return (0);
}
