#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    n /= 10000;
    if (n == 555) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}