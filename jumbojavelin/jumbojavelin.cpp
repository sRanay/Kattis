#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int N, rod;
    int sum = 0;
    int counter = 0;
    cin >> N;
    while (counter < N) {
        cin >> rod;
        sum += rod;
        counter++;
    }
    sum = sum - (N-1);
    cout << sum << endl;
    return 0;
}