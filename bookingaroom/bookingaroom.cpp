#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r,n,room;
	cin >> r >> n;
	int roomlist[r];
	for(int i = 0;i < r;i++) {
		roomlist[i] = 0;
	}
	while(n--) {
		cin >> room;
		roomlist[room] = 1;
	}
	if(r == n) {
		cout << "too late\n";
		return 0;
	}
	for(int i = 0;i < r;i++) {
		if(roomlist[i] == 0) {
			cout << i << "\n";
			return 0;
		}
	}
}