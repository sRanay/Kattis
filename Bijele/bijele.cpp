#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int correct_set[6] = {1,1,2,2,2,8};
	int input;
	int output;
	for(int i = 0;i < 6;i++) {
		cin >> input;
		output = correct_set[i] - input;
		cout << output << " ";
	}
	cout << "\n";
}