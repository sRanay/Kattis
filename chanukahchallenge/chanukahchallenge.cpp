#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int P, K, N, candlesneeded, total, counter = 0;
    cin >> P;
    while (counter < P) {
        cin >> K >> N;
        candlesneeded = 2;
        total = 0;
        for (int i = 0; i < N; i++) {
            total += candlesneeded;
            candlesneeded++;
        }
        cout << K << " " << total << endl;
        counter++;
    }
    return 0;
}