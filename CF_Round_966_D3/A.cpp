#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        string s = to_string(a);
        if (a > 101 && s[0] == '1' && s[1] == '0' && s[2] != '0') {
            cout << "YES\n"; 
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}