#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int input;
	cin >> input;
	int totalsquare = pow(4,input);
	int length = sqrt(totalsquare) + 1;
	cout << length*length << "\n";
}