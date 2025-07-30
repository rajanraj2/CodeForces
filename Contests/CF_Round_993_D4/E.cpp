#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int x, y;
        long long ans = 0;
        long long p = 1;
        while (p <= 1e9) {
            ans += max(0LL, min(r1, (r2 / p)) - max(l1, (l2 + p - 1)/ p) + 1);
            p *= k;
        }   
        cout << ans << endl;
    }
    return 0;
}