#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int N;
    int total = 0, counter = 0;
    map<char, int> dormantvalues;
    map<char, int> nondormantvalues;
    dormantvalues['A'] = 11;
    dormantvalues['K'] = 4;
    dormantvalues['Q'] = 3;
    dormantvalues['J'] = 20;
    dormantvalues['T'] = 10;
    dormantvalues['9'] = 14;
    dormantvalues['8'] = 0;
    dormantvalues['7'] = 0;
    nondormantvalues['A'] = 11;
    nondormantvalues['K'] = 4;
    nondormantvalues['Q'] = 3;
    nondormantvalues['J'] = 2;
    nondormantvalues['T'] = 10;
    nondormantvalues['9'] = 0;
    nondormantvalues['8'] = 0;
    nondormantvalues['7'] = 0;
    char dormantsuit;
    string input;
    cin >> N >> dormantsuit;
    N = N * 4;
    while (counter < N) {
        cin >> input;
        if (input.back() == dormantsuit) {
            total += dormantvalues[input.front()];
        } else {
            total += nondormantvalues[input.front()];
        }
        counter++;
    }
    cout << total << endl;
    return 0;
}