#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string input;
	cin >> input;
	int length = input.length()-1;
	cin >> input;
	if(input.length()-1 <= length) {
		cout <<"go\n";
	} else {
		cout << "no\n";
	}
}