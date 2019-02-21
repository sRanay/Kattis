#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	double q,y;
	double total = 0;
	while(N--) {
		cin >> q >> y;
		total += (q*y);
	}
	cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);
	cout << total << "\n";
}