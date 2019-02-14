#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	int scounter = 0;
	cin >> input;
	for(int i = 0;i < input.length();i++) {
		if(input[i] == 's') {
			scounter++;
			if(scounter == 2) {
				cout << "hiss\n";
				return 0;
			}
		} else {
			scounter = 0;
		}
	}
	cout << "no hiss\n";
	return 0;
}