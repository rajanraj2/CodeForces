#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;
        
        // Start with the smallest number 1
        long long current = 0;
        for (long long i = 1; i <= n; ++i) {
            if ((current | i) <= n) {
                ans.push_back(i);
                current |= i;
            }
        }

        // Add the final number `n` itself if not already added
        if (current != n) {
            ans.push_back(n);
        }
        
        cout << ans.size() << endl;
        for (long long num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
