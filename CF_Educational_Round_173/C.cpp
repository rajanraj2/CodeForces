#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n), pre(n + 1), suf(n + 1);
        pre[0] = 0;
        suf[n] = 0;
        int val = INT_MAX, total = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            pre[i + 1] = pre[i - 1] + arr[i];
            if (arr[i] != 1 && arr[i] != -1) {
                val = arr[i];
            }
            total += arr[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] + arr[i];
        }


    }
    return 0;
}