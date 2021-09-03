#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k, l;
		cin >> n >> k >> l;
		vector<int> s(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		// the maximum units that can be injected to your friend is exactly ('l' - 1) units
		// because it cannot be greater than or equal to 'l' units
		// once the maximum units have been multiplied, then add the new value of 'k' to the
		// last element which is your friend
		// count the number of the maximum element within the sequence and check if its
		// frequency is exactly one (1) and the index is ('n' - 1) which is the last element (friend)
		k *= (l - 1);
		s[n - 1] += k;
		int mx = *max_element(s.begin(), s.end());
		int index = -1;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == mx) {
				index = i;
				cnt++;
			}
		}
		cout << (cnt == 1 && index == n - 1 ? "Yes" : "No") << '\n';
	}
	return 0;
}
