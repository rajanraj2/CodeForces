#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr(k);
        unordered_map<int, int> mpp;
        pair<int, int> result = {-1, -1};
        for (int i = 0; i < k; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
        }

        for (int i = 1; i <= k; i++) {
            if (i * i == k - 2 && mpp[i] > 1) result = {i, i};
            else if ((k - 2)% i == 0 && mpp[i] > 0 && mpp[(k - 2) / i] > 0) result = {i, (k - 2) / i};
        }

        cout << result.first << " " << result.second << endl;
    }
    return 0;
}