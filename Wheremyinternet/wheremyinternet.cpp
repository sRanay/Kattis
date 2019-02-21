#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
	int a,b;
	//N is number of houses
	//M is number of network cables deployed
	cin >> N >> M;
	vector<int> AdjList[N+1];
	// Creation of AdjList
	for(int i = 0;i < M;i++) {
		cin >> a >> b;
		AdjList[a].push_back(b);
		AdjList[b].push_back(a);
	}
	bool visted[N+1];
	for(int i = 0;i < N+1;i++) {
		visted[i] = false;
	}
	// BFS from 1
	int s = 1;
	visted[s] = true;
	queue<int> qu;
	qu.push(s);
	while(!qu.empty()) {
		int cur = qu.front();
		qu.pop();
		for(auto v : AdjList[cur]) {
			if(!visted[v]) {
				visted[v] = true;
				qu.push(v);
			}
		}
	}
	int status = 0;
	for(int i = 2;i < N+1;i++) {
		if(visted[i] == false) {
			cout << i << "\n";
			status = 1;
		}
	}
	if(status == 0) {
		cout << "Connected\n";
	}
}