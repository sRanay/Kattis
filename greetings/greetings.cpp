#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string input; 
    string addon = "";
    cin >> input;
    input.erase(0,1);
    input.pop_back();
    for (int i = 0;i < input.length(); i++) {
        addon += "e";
    }
    input = "h" + input + addon + "y";
    cout << input << endl;
    return 0;
}