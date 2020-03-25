#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main() {
    multiset <int> s;
    int n;
    bool v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << s.insert(x) << "/n";
    }

    for (auto now = s.begin(); now != s.end(); now++){
            cout << now << " " << "\n";  
            if (s.find(*now) == s.end()){
                cout << now << "\n";
                //cout << 
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
    }
} 
