#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K, O, totaloutlet, innercounter = 0, outercounter = 0;
	cin >> N;
	while (outercounter < N) {
		cin >> K;
		totaloutlet = 0;
		innercounter = 0;
		while (innercounter < K) {
			cin >> O;
			if (innercounter >= 1) {
				totaloutlet += O - 1;
			} else {
				totaloutlet = O;
			}
			innercounter++;
		}
		cout << totaloutlet << endl;
		outercounter++;
	}
    return 0;
}