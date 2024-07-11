#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string a;
        cin >> a;
        
        vector<int> dp(n + 2, INT_MAX);
        dp[0] = 0; 

        for (int i = 0; i <= n; ++i) {
            if (dp[i] == INT_MAX) continue; 

            for (int j = 1; j <= m && i + j <= n + 1; ++j) {
                int next_pos = i + j;
                if (next_pos == n + 1 || a[next_pos - 1] == 'L') {
                    dp[next_pos] = min(dp[next_pos], dp[i]);
                } else if (a[next_pos - 1] == 'W') {
                    dp[next_pos] = min(dp[next_pos], dp[i] + 1);
                } 
            }
        }

        if (dp[n + 1] <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
