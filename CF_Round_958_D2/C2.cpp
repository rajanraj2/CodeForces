#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;
        ans.push_back(n);
        long long current = n;
        
        for (long long i = n - 1; i >= 1; --i) {
            if ((current | i) == n) {
                ans.push_back(i);
                current = i;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (long long num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
