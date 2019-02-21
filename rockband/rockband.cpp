#include <bits/stdc++.h>
using namespace std;

int main() {
	int M,S,song;
	cin >> M >> S;
	vector<int> mempreflist[M];
	set<int> songlist;
	for(int i = 0;i < M;i++) {
		for(int j = 0;j < S;j++) {
			cin >> song;
			mempreflist[i].push_back(song);
		}
	}
}