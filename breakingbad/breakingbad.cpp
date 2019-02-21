#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; // Number of items
	string item;
	vector<int> itemlist[N];
	unordered_map<string,int> itemid;
	vector<string> reverseitem;
	cin >> N;
	for(int i = 0;i < N;i++) {
		cin >> item;
		itemid[item] = i;
		reverseitem.push_back(item);
	}
	int M; // Number of pairs of items that are suspicious
	string pair;
	string item1,item2; // Items that cant be together
	cin >> M;
	for(int i = 0;i < M;i++) {
		getline(cin,pair);
		istringstream ss(pair);
		ss >> item1 >> item2;
		itemlist[itemid[item1]].push_back(itemid[item2]);
		itemlist[itemid[item2]].push_back(itemid[item1]);
	}

	int colorArr[N];
	for(int i = 0;i < N;i++){
		colorArr[i] = -1;
	}
	for(int i = 0;i < N;i++) {
		colorArr[i] = 1;
		queue<int> q;
		q.push(i);
		while(!q.empty()) {
			int u = q.front();
			q.pop();
			for(auto iter: itemlist[u]) {
				if(colorArr[iter] == -1) {
					colorArr[iter] = 1 - colorArr[u];
					q.push(iter);
				} else if(colorArr[iter] == colorArr[u]) {
					cout << "impossible\n";
					return 0;
				}
			}
		}
	}
	string ans = "\n";
	for(int i = 0;i < N;i++) {
		if(colorArr[i]) {
			ans = reverseitem[i] + " " + ans;
		} else {
			ans = ans + reverseitem[i] + " ";
		}
	}
	cout << "\n";

}