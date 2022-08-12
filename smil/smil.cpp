#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  string input;
  cin >> input;
  int savedlocation;
  int location = 0;
  bool firstsym = false;
  bool secondsym = false;
  for (char i : input) {
    if (i == ':' || i == ';') {
      firstsym = true;
      savedlocation = location;
      location++;
      continue;
    }
    if (i == '-' && firstsym == true) {
      secondsym = true;
      location++;
      continue;
    } else if (i == ')' && firstsym == true) {
      cout << savedlocation << endl;
      location++;
      firstsym = false;
      continue;
    }
    if (i == ')' && secondsym == true) {
      cout << savedlocation << endl;
      firstsym = false;
      secondsym = false;
      savedlocation = 0;
      location++;
      continue;
    }
    location++;
    firstsym = false;
    secondsym = false;
  }
  return 0;
}