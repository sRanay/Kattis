#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M,ans,cd;
	unordered_map<int,int> cdlist;
	while(true) {
		cin >> N >> M;
		if(N == 0 && M == 0) {
			break;
		}
		for(int i = 0;i < N;i++) {
			cin >> cd;
			cdlist[cd] = 1;
		}
		ans = 0;
		for(int i = 0;i < M;i++) {
			cin >> cd;
			if(cdlist[cd] == 1) {
				ans++;
			}
		}
		cout << ans << "\n";
		cdlist.clear();
	}
}