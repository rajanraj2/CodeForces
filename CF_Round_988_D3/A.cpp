#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
        }

        int result = 0;
        for (auto &x : mpp) {
            result += x.second / 2;
        }
        cout << result << endl;
    }
    return 0;
}