#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc,number;
	cin >> tc;
	while(tc--) {
		cin >> number;
		if(number % 2 == 0) {
			cout << number << " is even\n";
		} else {
			cout << number << " is odd\n";
		}
	}
}