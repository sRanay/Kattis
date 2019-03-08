#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double C,L;
	double w,l;
	double totalarea = 0;
	double ans;
	cin >> C >> L;
	while(L--) {
		cin >> w >> l;
		totalarea += w*l;
	}
	ans = totalarea * C;
	cout << fixed << setprecision(6) << ans << "\n";
}