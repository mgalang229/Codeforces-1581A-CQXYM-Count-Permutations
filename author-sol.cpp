#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		// (2 * n!) / 2
		long long ans = 1;
		for (long long i = 3; i <= 2 * n; i++) {
			ans = (ans * i) % 1000000007;
		}
		cout << ans << '\n';
	}
	return 0;
}
