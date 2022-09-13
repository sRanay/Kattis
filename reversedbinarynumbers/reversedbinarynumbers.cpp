#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    int sum = 0;
    int power = 0;
    deque<int> intdeque;
    cin >> n;
    while(n >0) {
        intdeque.push_back(n%2);
        n=n/2;
    }
    while(!intdeque.empty()) {
        sum += (intdeque.back() * pow(2,power));
        intdeque.pop_back();
        power++;
    }
    cout << sum << endl;
}