#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int x, y;
        long long count = 0;

        for (int i = l1; i <= r1; i++) {
            long long temp = i;
            if (temp < l2 || temp > r2) continue;

            while (temp >= l2 && temp <= r2) {
                if (temp >= l2 && temp <= r2) count++;
                if (temp > LLONG_MAX / k) break;
                temp *= k;
                // i *= k;
                // count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}