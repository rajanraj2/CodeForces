#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> key;
    set<int> used;
    
    for (int i = 0; i < n - 1; i++) {
        key.push_back(i);
        used.insert(i);
    }
    
    int last = x;
    for (int i = 0; i < n - 1; i++) {
        last ^= key[i];
    }
    
    if (used.count(last) || last >= (1 << 30)) {
        key[n - 2] ^= last;
        key.push_back(last);
    } else {
        key.push_back(last);
    }
    
    for (int num : key) cout << num << " ";
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}