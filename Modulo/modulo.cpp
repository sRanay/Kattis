#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int input;
    set<int> unique;
    for(int i = 0;i <= 10;i++) {
        cin >> input;
        input = input % 42;
        unique.insert(input);
    }
    cout << unique.size() << endl;
    return 0;
}