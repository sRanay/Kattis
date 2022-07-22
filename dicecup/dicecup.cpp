#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int N, M ,loop, min, counter = 0;
    cin >> N >> M;
    loop = abs(N-M) + 1;
    if (N > M) {
        min = M;
    } else {
        min = N;
    }
    while (counter < loop){
        cout << min+1 << endl;
        min++;
        counter++;
    }
    return 0;
}