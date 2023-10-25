// #include <iostream>
// using namespace std;
// 
// int	main(void) {
// 	int	n, m;
// 	int a, b, c, d, e, f;
// 	int	ans = 0;
// 	string	s, t;
// 
// 	cin >> s;
// 	if (s[0] != s[1] && s[1] != s[2] && s[0] != s[2]) {
// 		cout << 6 << endl;
// 	} else if ((s[0] == s[1] && s[1] != s[2]) || (s[0] != s[1] && s[1] == s[2]) || (s[0] != s[1] && s[0] == s[2])) {
// 		cout << 3 << endl;
// 	} else {
// 		cout << 1 << endl;
// 	}
// 	return (0);
// }

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int	main(void) {
	int	n, m;
	int a, b, c, d, e, f;
	int	ans = 0;
	string	S;
	set<string> s;

	cin >> S;
	sort(S.begin(), S.end());
	while (1) {
		s.insert(S);
		if (!next_permutation(S.begin(), S.end())) {
			break ;
		}
	}
	cout << s.size() << endl;
	return (0);
}
