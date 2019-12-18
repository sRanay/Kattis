#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,r,e,c,total;
	cin >> n;
	while(n--){
		cin >> r >> e >> c;
		total = e - c;
		if(r > total) {
			cout << "do not advertise\n";
		} else if(r < total) {
			cout << "advertise\n";
		} else {
			cout << "does not matter\n";
		}
	}

}