#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,total,number,power;
	total = 0;
	string P, POW;
	cin >> N;
	while(N--) {
		cin >> P;
		power = atoi(P.back());
		P = P.substr(0, P.size()-1);
		number = atoi(P);
		total = total + pow(number, power);
	}
	cout << total << "\n";
}