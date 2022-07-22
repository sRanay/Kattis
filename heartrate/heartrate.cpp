#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    double min, max, b;
    int N, counter= 0 ;
    double p, mincal, maxcal, cal;
    cin >> N;
    while (counter < N) {
        cin >> b >> p;
        min = b - 1;
        max = b + 1;
        cal = (60 * b) / p;
        mincal = (60 * min) / p;
        maxcal = (60 * max) / p;
        cout << fixed << setprecision(4) << mincal << " " << cal << " " << maxcal << endl;
        counter++;
    }
    return 0;
}