#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,q,s;
	int u,v,w;
	while(true) {
		cin >> n >> m >> q >> s;
		if(n == 0 && m == 0 & q == 0 & s == 0) {
			break;
		}
		vector<ii> AdjList[n];
		for(int i = 0;i < m;i++) {
			cin >> u >> v >> w;
			AdjList[u].push_back(make_pair(v,w));
		}
		// Preprocessing
		int distance[n];
		for(int i = 0;i < n;i++) {
			distance[i] = 100000000;
		}
		distance[s] = 0;
		priority_queue<ii,vector<ii>,greater<ii>> pq;
		pq.push(make_pair(0,s));
		while(!pq.empty()) {
			ii cur = pq.top();
			pq.pop();
			for (auto iter : AdjList[cur.second]) { // Iterating all the edges that nodes has
				w = iter.second; // Weight
				v = iter.first; // Vertex
				if(distance[v] > distance[cur.second] + w) {
					distance[v] = distance[cur.second] + w;
					pq.push(make_pair(distance[v],v));
				}
			}
		}
		int d;
		for(int i = 0;i < q;i++) {
			cin >> d;
			if(distance[d] == 100000000) {
				cout << "Impossible\n";
			} else {
				cout << distance[d] << "\n";
			}
		} 
	}
}