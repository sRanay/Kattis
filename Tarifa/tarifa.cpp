#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int X,N,P;
	int ans;
	cin >> X >> N;
	ans = X*(N+1);
	while(N--) {
		cin >> P;
		ans -= P;
	}
	cout << ans << "\n";
}