#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n), rem(n);
        map<int, int> mpp;
        int ans = -1, index = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            rem[i] = arr[i] % k;
            mpp[rem[i]]++;
        }
        for (auto& it : mpp) if (it.second == 1) ans = it.first;

        for (int i = 0; i < n; i++) if (rem[i] == ans) index = i + 1;

        if (ans == -1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << index << endl;
        }
    }
    return 0;
}