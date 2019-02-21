#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
bool isitneg[1000];
vector<ii> AdjList[1000];

void dfs_flagNegInf(int x) {
	if(isitneg[x]) {
		return;
	}
	isitneg[x] = 1;
	for(auto nei: AdjList[x]) {
		dfs_flagNegInf(nei.first);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,q,s;
	int u,v,w;
	while(true) {
		cin >> n >> m >> q >> s;
		// n is number of nodes
		// m is number of edges
		// q is number of queries
		// s is the source node
		if(n == 0 && m == 0 & q == 0 & s == 0) {
			break;
		}
		for(int i = 0;i < m;i++) {
			cin >> u >> v >> w;
			// u -> v has a weight of w
			::AdjList[u].push_back(make_pair(v,w));
		}
		int dist[n];
		int dist_save[n];
		for(int i = 0;i < n; i++) {
			dist[i] = 40000001;
			::isitneg[i] = false;
		}
		dist[s] = 0;

		// Run Bellman Ford for n-1 passes
		for(int i = 0;i < n-1;i++) {
			for(int j = 0;j < n;j++) {
				for(int k = 0;k < ::AdjList[j].size();k++) {
					ii cur = AdjList[j][k];
					if(dist[j] == 40000001) {
						continue;
					}
					if(dist[cur.first] == 40000001) {
						dist[cur.first] = dist[j] + cur.second;
					} else {
						dist[cur.first] = min(dist[cur.first], dist[j]+cur.second);
					}
				}
			}
		}
		// Copy original dist array
		for(int i = 0;i < n;i++) {
			dist_save[i] = dist[i];
		}

		// Run Bellmon For for 1 more pass
		for(int j = 0;j < n;j++) {
			for(int k = 0;k < ::AdjList[j].size();k++) {
				ii cur = AdjList[j][k];
				if(dist[j] == 40000001) {
					continue;
				}
				if(dist[cur.first] == 40000001) {
					dist[cur.first] = dist[j] + cur.second;
				} else {
					dist[cur.first] = min(dist[cur.first], dist[j]+cur.second);
				}
			}
		}

		// Check if there any cycle
		for(int i = 0;i < n;i++) {
			if(dist[i] != dist_save[i]) {
				dfs_flagNegInf(i); // Run dfs to flag out those nodes
			}
		}

		int d;
		for(int i = 0;i < q;i++) {
			cin >> d;
			if(::isitneg[d] == true) {
				cout << "-Infinity\n";
			} else if(dist[d] == 40000001) {
				cout << "Impossible\n";
			} else {
				cout << dist[d] << "\n";
			}
		}
		for(int i = 0;i < n;i++) {
			AdjList[i].clear();
		}
	}
}