#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string input;
	cin >> input;
	int counter = 0;
	int ans = 0;
	for(int i = 0;i < input.length();i++) {
		if(counter > 2) {
			counter = 0;
		}
		if(counter == 0) {
			if(input[i] != 'P') {
				ans++;
			}
			counter++;
		} else if(counter == 1) {
			if(input[i] != 'E') {
				ans++;
			}
			counter++;
		} else if(counter == 2) {
			if(input[i] != 'R') {
				ans++;
			}
			counter++;
		}
	}
	cout << ans << "\n";

}