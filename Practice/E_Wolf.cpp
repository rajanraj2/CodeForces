#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> p(n);
        unordered_map<int, int> pos_map;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            pos_map[p[i]] = i + 1; // 1-based position
        }
        while (q--) {
            int l, r, x;
            cin >> l >> r >> x;
            if (!pos_map.count(x) || pos_map[x] < l || pos_map[x] > r) {
                cout << -1 << " ";
                continue;
            }
            int pos = pos_map[x];
            int current_l = l, current_r = r;
            int required_less = 0, required_greater = 0;
            vector<int> path;
            while (current_l <= current_r) {
                int m = (current_l + current_r) / 2;
                if (m == pos) break;
                path.push_back(m);
                if (pos > m) {
                    current_l = m + 1;
                } else {
                    current_r = m - 1;
                }
            }
            for (int m : path) {
                int element = p[m - 1]; // Convert to 0-based index
                if (pos > m) {
                    if (element >= x) required_less++;
                } else {
                    if (element <= x) required_greater++;
                }
            }
            int cnt_less = x - 1;
            int cnt_greater = n - x;
            if (required_less > cnt_less || required_greater > cnt_greater) {
                cout << -1 << " ";
            } else {
                cout << (required_less + required_greater) << " ";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
