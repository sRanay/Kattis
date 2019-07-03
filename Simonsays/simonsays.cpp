#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	string sentence,token,ans;
	sentence = "";
	ans = "";
	int counter = 0;
	cin >> N;
	cin.ignore(100,'\n');
	while(N--) {
		getline(cin,sentence);
		//cout << sentence;
		istringstream ss(sentence);
		while(ss >> token) {
			//cout << token;
			if(counter == 2) {
				ans = ans + token + " ";
			}
			else if(token == "Simon" || token == "says") {
				counter++;
			}
		}
		if(counter == 2) {
			cout << ans << "\n";
		}
		ans = "";
		counter = 0;
	}
}