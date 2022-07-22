#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int N, num;
    int counter = 0;
    int sum = 0;
    cin >> N;
    while (counter < N) {
        cin >> num;
        sum += num;
        counter++;
    } 
    cout << sum << endl;
    return 0;
}