// #include <iostream>
// #include <vector>
// using namespace std;
// 
// bool	is_changed(string s, string t) {
// 	int	n = 0;
// 	int	j = 0;
// 	bool flag = true;
// 
// 	if (s.size() - t.size() != 0) {
// 		return (false);
// 	}
// 	n = s.size();
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] == t[j]) {
// 			j++;
// 			continue ;
// 		}
// 		else if (s[i] != t[j] && flag) {
// 			flag = false;
// 			j++;
// 			continue ;
// 		}
// 		return (false);
// 	}
// 	return (true);
// }
// 
// bool	is_deleted(string s, string t) {
// 	int	n = 0;
// 	int	j = 0;
// 	bool flag = true;
// 
// 	if (t.size() - s.size() != 1) {
// 		return (false);
// 	}
// 	n = t.size();
// 	for (int i = 0; i < n; i++) {
// 		if (s[j] == t[i]) {
// 			j++;
// 			continue ;
// 		}
// 		else if (s[j] != t[i] && flag) {
// 			flag = true;
// 			continue ;
// 		}
// 		return (false);
// 	}
// 	return (true);
// }
// 
// bool	is_inserted(string s, string t) {
// 	int	n = 0;
// 	int	j = 0;
// 	bool flag = true;
// 
// 	if (s.size() - t.size() != 1) {
// 		return (false);
// 	}
// 	n = s.size();
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] == t[j]) {
// 			j++;
// 			continue ;
// 		}
// 		else if (s[i] != t[j] && flag) {
// 			flag = false;
// 			continue ;
// 		}
// 		return (false);
// 	}
// 	return (true);
// }
// 
// int	main(void) {
// 	int	n;
// 	int	num[500001];
// 	string	s[500001], t;
// 	int	sum = 0, j = 0;
// 
// 	cin >> n >> t;
// 	for (int i = 0; i < n; i++) {
// 		num[i] = 0;
// 	}
// 	for (int i = 0; i < n; i++) {
// 		cin >> s[i];
// 	}
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] == t) {
// 			num[j] = i + 1;
// 			j++;
// 			sum++;
// 		} else if (is_inserted(s[i], t)) {
// 			num[j] = i + 1;
// 			j++;
// 			sum++;
// 		} else if (is_deleted(s[i], t)) {
// 			num[j] = i + 1;
// 			j++;
// 			sum++;
// 		} else if (is_changed(s[i], t)) {
// 			num[j] = i + 1;
// 			j++;
// 			sum++;
// 		}
// 	}
// 	cout << sum << endl;
// 	int	i = 0;
// 	while (num[i] != 0) {
// 		if (num[i + 1] != 0) {
// 			cout << num[i] << ' ';
// 		} else {
// 			cout << num[i];
// 		}
// 		i++;
// 	}
// 	cout << endl;
// 	return (0);
// }

#include <iostream>
#include <vector>
using namespace std;

bool is_changed(const string& s, const string& t) {
    int j = 0;
    bool flag = true;

    if (s.size() != t.size()) {
        return false;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[j]) {
            j++;
        } else if (flag) {
            flag = false;
            j++;
        } else {
            return false;
        }
    }
    return true;
}

bool is_deleted(const string& s, const string& t) {
    int j = 0;
    bool flag = true;

    if (s.size() + 1 != t.size()) {
        return false;
    }

    for (int i = 0; i < t.size(); i++) {
        if (j < s.size() && s[j] == t[i]) {
            j++;
        } else if (flag) {
            flag = false;
        } else {
            return false;
        }
    }
    return true;
}

bool is_inserted(const string& s, const string& t) {
    return is_deleted(t, s);
}

int main(void) {
    int n;
    vector<int> num;
    vector<string> s;
    string t;

    cin >> n >> t;
    s.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == t || is_inserted(s[i], t) || is_deleted(s[i], t) || is_changed(s[i], t)) {
            num.push_back(i + 1);
        }
    }

    cout << num.size() << endl;
    for (int i = 0; i < num.size(); i++) {
        cout << num[i];
        if (i != num.size() - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}
