#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int L, D, X;
    cin >> L; 
    cin >> D; 
    cin >> X;
    int maxvalue = 0;
    int minvalue = 0;
    int sum = 0;
    for(int i = L;i <= D;i++){
        sum = 0;
        for(int j = i;j != 0;j/=10) {
            sum += j%10;
        }
        if(sum == X) {
            if (minvalue == 0) {
                minvalue = i;
            } else {
                maxvalue = i;
            }
        }
    }
    if (maxvalue == 0) {
        maxvalue = minvalue;
    }
    cout << minvalue << endl;
    cout << maxvalue << endl;
}