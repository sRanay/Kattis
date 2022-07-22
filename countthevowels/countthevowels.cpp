#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int counter = 0;
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}