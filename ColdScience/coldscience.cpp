#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	int ans = 0;
	int input;
	cin >> tc;
	while(tc--) {
		cin >> input;
		if(input < 0) {
			ans++;
		}
	}
	cout << ans << "\n";
}