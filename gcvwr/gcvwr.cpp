#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int G, T, N, weight, maxweight, remainder;
    int counter = 0, totalweight = 0;
    cin >> G >> T >> N;
    while (counter < N) {
        cin >> weight;
        totalweight += weight;
        counter++;
    }
    maxweight = (G - T) * 0.9;
    remainder = maxweight - totalweight;
    cout << remainder << endl;
    return 0;
}