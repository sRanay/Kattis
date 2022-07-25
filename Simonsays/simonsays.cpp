#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,counter;
	counter = 0;
	string input,token,oldtoken;
	oldtoken = "";
	cin >> N;
	cin.ignore(200,'\n');
	while(N--) {
		getline(cin,input);
		istringstream ss(input);
		while(ss >> token) {
			if(token == "Simon" || token == "says") {
				counter++;
			}
			if(counter == 2) {
				oldtoken = oldtoken + " " + token;
			}
		}
		cout << oldtoken << "\n";
		oldtoken = "";
		counter = 0;
	}

}