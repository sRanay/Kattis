#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int g1,g2,g3,g4, total;
	int highest = 0;
	int winner;
	for(int i = 1;i < 6;i++) {
		cin >> g1 >> g2 >> g3 >> g4;
		total = g1 + g2 + g3 + g4;
		if(total > highest) {
			winner = i;
			highest = total;
		}
	}
	cout << winner << " " << highest << "\n";
}