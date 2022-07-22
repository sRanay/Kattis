#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    double a, b;
    cin >> a;
    b = 100 - a;
    cout << fixed << setprecision(10) << 100/a << endl;
    cout << fixed << setprecision(10) << 100/b << endl;
    return 0;
}