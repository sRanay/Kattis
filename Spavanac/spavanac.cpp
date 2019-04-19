#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int H,M;
	cin >> H >> M;
	if(M < 45) {
		M = 60 - (45-M);
		if(H == 0) {
			H = 23;
		} else {
			H--;
		}
	} else {
		M = M - 45;
	}
	cout << H << " " << M << "\n";
}