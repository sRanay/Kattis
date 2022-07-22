#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s;
    cin >> s;
    if (s.length() % 2 != 0) {
        cout << "fix" << endl;
        return 0;
    }
    while (!s.empty()) {
        if ((s.front() == '|' && s.back() == '|') || (s.front() == '(' && s.back() == ')')){
            s.erase(0,1);
            s.pop_back();
        } else {
            cout << "fix" << endl;
            return 0;
        }
    }
    cout << "correct" << endl;
    return 0;
}