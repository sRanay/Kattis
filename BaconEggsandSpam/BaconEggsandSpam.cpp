#include <bits/stdc++.h>
using namespace std;

int main() {
    int day = 100;
    int n;
    string orderind,name,food,key;
    map<string, set<string>> orders;
    map<string, set<string>>::iterator iter;
    set<string>::iterator j;
    key = "";
    for(int i = 0;i < day;i++) {
        cin >> n;
        if(n == 0) {
            break;
        }
        for(int it = -1;it < n;it++) {
            getline(cin,orderind);
            istringstream ss(orderind);
            ss >> name;
            while(ss >> food) {
                orders[food].insert(name);
            }
        }
        for(iter = orders.begin();iter != orders.end();iter++) {
            cout << (*iter).first << " ";
            for(j = (*iter).second.begin();j != (*iter).second.end();j++) {
                cout << *j << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        orders.clear();

    }   
}