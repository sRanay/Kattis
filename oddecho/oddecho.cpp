#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  string input;
  int N;
  int counter = 1;
  cin >> N;
  while (counter < N+1) {
    cin >> input;
    if (counter % 2 != 0) {
      cout << input << endl;
    }
    counter++;
  }
}