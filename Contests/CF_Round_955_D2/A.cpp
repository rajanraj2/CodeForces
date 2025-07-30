#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        if (x1 < y1) {
            if (x2 > y2) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
            }
        } 
        else if (x1 > y1) {
            if (x2 < y2) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";
            }
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}