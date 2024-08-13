#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_set<int> st;
        bool flag = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        st.insert(a[0]);
        for (int i = 1; i < n; i++) {
            int prev = a[i] - 1;
            int next = a[i] + 1;

            if ((prev == 0 && st.find(next) == st.end()) || 
                (next == n + 1 && st.find(prev) == st.end()) ||
                (prev != 0 && next != n + 1 && st.find(prev) == st.end() && st.find(next) == st.end())) {
                flag = false;
                break;
            }
            st.insert(a[i]);

        }

        if (flag) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}