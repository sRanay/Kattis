#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> numlist;
	int num;
	for(int i = 0;i < 5;i++) {
		cin >> num;
		numlist.push_back(num);
	}
	while(true) {
		if(numlist[0] > numlist[1]) {
			swap(numlist[0],numlist[1]);
		} else if(numlist[1] > numlist[2]) {
			swap(numlist[1],numlist[2]);
		} else if(numlist[2] > numlist[3]) {
			swap(numlist[2],numlist[3]);
		} else if(numlist[3] > numlist[4]) {
			swap(numlist[3],numlist[4]);
		} else {
			break;
		}
		for(int i = 0;i < 5;i++) {
			cout << numlist[i] << ' ';
		}
		cout << "\n";
		if(numlist[0] == 1 && 
			numlist[1] == 2 &&
			numlist[2] == 3 &&
			numlist[3] == 4 &&
			numlist[4] == 5) {
			break;
		}
	}
}