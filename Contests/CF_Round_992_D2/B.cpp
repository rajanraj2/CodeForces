#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        if (n <= 4) {
            cout << 2 << endl;
            continue;
        }
        int ans = 2;
        int val = 4;
        while (val < n) {
            val = (val + 1) * 2;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}