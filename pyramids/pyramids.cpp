#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int N;
  int height = 0;
  int blocklayer = 1;
  int blocksneeded = 0;
  cin >> N;
  while (blocksneeded <= N) {
    blocksneeded += pow(blocklayer, 2);
    blocklayer += 2;
    height++;
  }
  cout << height-1 << endl;
  return 0;
}