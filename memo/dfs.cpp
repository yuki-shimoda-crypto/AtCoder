#include "bits/stdc++.h"
#include <unistd.h>
using namespace std;
#include "atcoder/all"
using namespace atcoder;
using i64 = long long;
using u64 = unsigned long long;
using ld = long double;
using i_i = pair<int, int>;
using i_b = pair<int, bool>;
using l_l = pair<i64, i64>;
using d_d = pair<double, double>;
using s_s = pair<string, string>;
using i_i_i = tuple<int, int, int>;
using i_i_i_i = tuple<int, int, int, int>;
using l_l_l = tuple<i64, i64, i64>;
using l_l_l_l = tuple<i64, i64, i64, i64>;
#define rep(i, n) for(int i = 0; i < n; i++)
#define ifbit(n,k) ((n>>k)&1) //if kth bit of n is on then true (sitakara, 0-indexed)
#define zpad(i) cout << setfill('0') << setw(i)
#define dout cout << fixed << setprecision(10)
#define douts(i) cout << fixed << setprecision(i) << scientific
#define pcnt __builtin_popcount
constexpr int INF = 2147483647;
constexpr i64 I64F = 9223372036854775807;
constexpr int m1007 = 1000000007;
constexpr int m9982 = 998244353;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int n;
vector<int> a;
int k;
int now;
int ans;

void dfs(int i) 
{
	if (i == n) 
	{
		if (now == k)
			ans = 1;
		return;
	}
	now += a[i];
	dfs(i + 1);
	now -= a[i];
	dfs(i + 1);
}

int main() 
{
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
	}
	cin >> k;
	dfs(0);
	cout << (ans ? "Yes" : "No") << endl;

	return 0;
}