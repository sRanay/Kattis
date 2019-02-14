#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	string line1,line2,diff;
	cin >> tc;
	while(tc--) {
		cin >> line1;
		cin >> line2;
		for(int i = 0;i < line1.length();i++) {
			if(line1[i] == line2[i]) {
				diff.append(".");
			} else {
				diff.append("*");
			}
		}
		cout << line1 << "\n" << line2 << "\n" << diff << "\n\n";
		diff = "";
	}
}