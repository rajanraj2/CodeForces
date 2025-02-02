#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        set<int> st1, st2;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            st1.insert(a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            st2.insert(b[i]);
        }
        
        if (st1.size() >= 2 && st2.size() >= 2) {
            cout << "YES" << endl;
        }
        else if (st1.size() == 1 && st2.size() >= 3) {
            cout << "YES" << endl;
        }
        else if (st2.size() == 1 && st1.size() >= 3) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }    
    return 0;
}