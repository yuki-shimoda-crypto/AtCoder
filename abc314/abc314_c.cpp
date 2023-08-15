#include <iostream>
#include <climits>
using namespace std;

int	main(void) {
	int	n, m, x, a, b, c[200000], d, e, f;
	int	ans = 0;
	string	s, t;
	int		index[200000] = {INT_MAX};
	char	charactor[200000] = {'\0'}, tmp[200000] = {'\0'};

	cin >> n >> m;
	cin >> s;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		if (charactor[c[i] - 1] == '\0') {
			index[c[i] - 1] = i;
			charactor[c[i] - 1] = s[i];
		}
		else {
			tmp[c[i] - 1] = s[i];
			s[i] = charactor[c[i] - 1];
			charactor[c[i] - 1] = tmp[c[i] - 1];
		}
	}
	for (int i = 0; i < n; i++) {
		if (index[c[i] - 1] != INT_MAX) {
			s[index[c[i] - 1]] = charactor[c[i] - 1];
		}
	}
	cout << s << endl;
	return (0);
}
