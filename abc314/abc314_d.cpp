#include <iostream>
#include <climits>
#include <cctype>
using namespace std;

// void	lower(string *s, int n)
// {
// 	for (int i = 0; i < n; i++) {
// 		s[i] = tolower(s[i]);
// 	}
// }
// 
// void	upper(string *s, int n)
// {
// 	for (int i = 0; i < n; i++) {
// 		s[i] = toupper(s[i]);
// 	}
// }
//

std::string toLowerCase(const std::string& input) {
    std::string result = input;
    for (char& c : result) {
        c = std::tolower(c);
    }
    return result;
}

string toUpperCase(const std::string& input) {
    std::string result = input;
    for (char& c : result) {
        c = std::toupper(c);
    }
    return result;
}

int	main(void) {
	int	n, q;
	string	s;
	int	ans = 0;
	int	t[500000], x[500000];
	char	c[500000];
	int	index = INT_MAX;

	cin >> n >> s >> q;
	for (int i = 0; i < q; i++) {
		cin >> t[i] >> x[i] >> c[i];
	}
//	for (int i = 0; i < q; i++) {
//		if (t[i] == 1) {
//			s[x[i] - 1] = c[i - 1];
//		} else {
//			index = i;
//		}
//	}
	for (int i = 0; i < q; i++) {
		if (t[i] == 2 || t[i] == 3) {
			index = i;
		}
	}
	for (int i = 0; i < q; i++) {
		if (t[i] == 1) {
			s[x[i] - 1] = c[i];
		} else if (t[i] == 2 && i == index) {
			s = toLowerCase(s);
		} else if (t[i] == 3 && i == index) {
			s = toUpperCase(s);
		}
	}
	cout << s << endl;
	return (0);
}

