#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,cansize,paintsize,diff;
	long long total;
	set<int> cansizelist;
	vector<int> paintsizelist;
	cin >> n >> m;
	for(int i = 0;i < n;i++) {
		cin >> cansize;
		cansizelist.insert(cansize);
	}
	total = 0;
	for(int i = 0;i < m;i++) {
		cin >> paintsize;
		auto canit = cansizelist.lower_bound(paintsize);
		total = total + (paintsize - *canit);

	}
	cout << total << "\n";
}