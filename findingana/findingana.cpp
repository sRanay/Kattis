#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string input;
    string valid = "a";
    int counter = 0;
    cin >> input;
    int N = input.length();
    while (counter < N) {
        if (input.at(0) == 'a') {
            cout << input << endl;
            return 0;
        } else {
            input.erase(0,1);
        }
        counter++;
    }
    return 0;
}