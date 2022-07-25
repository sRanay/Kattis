#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int counter = 0;
    int whilecounter = 0;
    int min = 0, max;
    string S, T, I;
    getline(cin, S);
    stringstream X(S);
    while (getline(X, T, ';')) {
        if (T.length() != 1) {
            stringstream Y(T);
            min = 0;
            whilecounter = 0;
            while(getline(Y, I, '-')) {
                if (min == 0) {
                    min = stoi(I);
                } else {
                    max = stoi(I);
                }
                whilecounter++;
            }
            if (whilecounter == 1) {
                counter++;
            } else {
                counter += max - min + 1;
            }
        } else {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}