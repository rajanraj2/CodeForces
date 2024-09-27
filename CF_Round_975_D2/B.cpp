#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n), query(q);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        

        vector<int> result(arr[n - 1]), prefix(arr[n - 1]);

        for (int i = 0; i < arr[n - 1]; i++) {
            if (i == 0) prefix[i] = n - 1;
            else prefix[i] = n - 1 - i + prefix[i - 1];
        }

        for (int i = 0; i < q; i++) cin >> query[i];

        for (int i = 0; i < arr[n - 1]; i++) {
            result[i] = prefix[i] - (i) * (i - 1) / 2;
        }

        for (int i = 0; i < arr[n - 1]; i++) {
            // cout << prefix[i] << " ";
            cout << result[i] << " ";
        }
        cout << endl;

    }
    return 0;
}