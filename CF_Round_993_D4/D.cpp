#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> freq(n + 1, 0);
        map<int, int> mpp;
        set<int> st;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mpp[a[i]]++;
            st.insert(a[i]);
        }
        vector<int> b(n);
        b[0] = a[0];
        int mode = a[0];
        freq[mode]++;

        for (int i = 1; i < n; i++) {
            freq[a[i]]++;
            // b[i] = a[i];
            mode = a[i];

            if (freq[a[i]] >= freq[mode]) {
                mode = a[i];
            }
            b[i] = mode;

            // if (st.count(a[i])) {
            //     b[i] = a[i];
            //     st.erase(a[i]);
            // }
            // b[i] = n;
        }   
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}