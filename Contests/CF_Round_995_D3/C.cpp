#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m), b(k);
        set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(i + 1);
        } 
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++) {
            cin >> b[i];
            if (st.find(b[i]) != st.end()) {
                st.erase(b[i]);
            }
        }
        if (n - k > 1) {
            string result(m, '0');
            cout << result << endl;
            continue;
        }

        if (st.size() == 0) {
            string result(n, '1');
            cout << result << endl;
            continue;
        }

        int val = *st.begin();


        string result = "";
        for (int i = 0; i < m; i++) {
            if (a[i] == val) result += "1";
            else result += "0";
        }
        cout << result << endl;
    }
    return 0;
}