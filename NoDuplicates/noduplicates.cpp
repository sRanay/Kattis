#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string input;
	getline(cin,input);
	istringstream ss(input);
	string word;
	unordered_map<string,int> wordcounter;
	while(ss >> word) {
		if(wordcounter[word] == 0) {
			wordcounter[word] += 1;
		} else {
			cout << "no\n";
			return 0;
		}
	}
	cout << "yes\n";
}