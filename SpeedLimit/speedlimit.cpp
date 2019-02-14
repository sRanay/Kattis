#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int input;
	int speed,hours,oldhours;
	int total = 0;
	while(true) {
		cin >> input;
		if(input == -1) {
			break;
		}
		for(int i = 0;i < input;i++) {
			cin >> speed >> hours;
			if(i == 0) {
				total = speed * hours;
			} else {
				total += speed * (hours-oldhours);
			}
			oldhours = hours;
		}
		cout << total << " miles\n";
	}
}