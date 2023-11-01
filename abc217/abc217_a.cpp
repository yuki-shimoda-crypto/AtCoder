#include <iostream>
#include <cstring>
using namespace std;

int	main(void) {
	int	n, m;
	int a, b, c, d, e, f;
	char	s[100], t[100];

	cin >> s >> t;
	if (strcmp(s, t) < 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return (0);
}
