#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	string soundstring,sound,animal,goes;
	vector<string> foxsound;
	unordered_map<string,int> foxsoundlist;
	cin >> T;
	cin.ignore(100,'\n');
	for(int i = 0;i < T;i++) {
		getline(cin,soundstring);
		istringstream ss(soundstring);
		while(ss >> sound) {
			foxsoundlist[sound] = 0;
			foxsound.push_back(sound);
		}
		while(true) {
			getline(cin,soundstring);
			if(soundstring != "what does the fox say?") {
				istringstream ss(soundstring);
				ss >> animal >> goes >> sound;
				foxsoundlist[sound] = 1;
			} else {
				break;
			}
		}
		for(auto it = foxsound.begin();it != foxsound.end();it++) {
			if(foxsoundlist[*it] == 0) {
				cout << *it << ' ';
			}
		}
		cout << "\n";
		foxsound.clear();
	}
}
