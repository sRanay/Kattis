#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,W,H,hypotenuse,input;
	cin >> N >> W >> H;
	hypotenuse = pow(W,2) + pow(H,2);
	hypotenuse = sqrt(hypotenuse);
	while(N--) {
		cin >> input;
		if(input <= hypotenuse) {
			cout << "DA\n";
		} else {
			cout << "NE\n";
		}
	}
}