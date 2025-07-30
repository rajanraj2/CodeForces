#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            int diff = a[i] - b[i + 1];
            if (diff > 0) sum += diff;
        }
        sum += a[n - 1];
        cout << sum << endl;
    };
    return 0;
}