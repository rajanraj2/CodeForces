#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        int count = 0;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < k - 1; i++) {
            if (a[i] > 1) {
                count = count + a[i] - 1;
            }
        }
        count += n - a[k - 1];
        cout << count << endl;
    }
    return 0;
}