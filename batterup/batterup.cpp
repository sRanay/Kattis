#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    double N, atbats, bases = 0, slugdenom = 0, counter = 0;
    cin >> N;
    while (counter < N) {
        cin >> atbats;
        if (atbats != -1) {
            slugdenom++;
            bases += atbats;
        }
        counter++;
    }
    cout << bases/slugdenom << endl;

    return 0;
}