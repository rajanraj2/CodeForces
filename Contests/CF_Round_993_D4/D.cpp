#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, index = 0;
        cin >> n;
        vector<int> a(n), b;
        set<int> st;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (!st.count(a[i])) {
                b.push_back(a[i]);
                st.insert(a[i]);
            }
        }

        for (int i = 1; i <= n; i++) {
            if (!st.count(i)) b.push_back(i);
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}