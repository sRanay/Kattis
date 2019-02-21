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
			for(int i = 0;i < 5;i++) {
				cout << numlist[i] << ' ';
			}
			cout << endl;
		} else if(numlist[1] > numlist[2]) {
			swap(numlist[1],numlist[2]);
			for(int i = 0;i < 5;i++) {
				cout << numlist[i] << ' ';
			}
			cout << endl;
		} else if(numlist[2] > numlist[3]) {
			swap(numlist[2],numlist[3]);
			for(int i = 0;i < 5;i++) {
				cout << numlist[i] << ' ';
			}
			cout << endl;
		} else if(numlist[3] > numlist[4]) {
			swap(numlist[3],numlist[4]);
			for(int i = 0;i < 5;i++) {
				cout << numlist[i] << ' ';
			}
			cout << endl;
		} else {
			break;
		}
	}
}