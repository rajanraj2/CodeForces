#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);
        int sum = 0;
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
            sum += arr[i];
        }
        int mini = sum - y;
        int maxi = sum - x;
        int total = n * (n + 1) / 2;

        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++) {
            int a = arr[i];
            int b = ;
        }

    }
    return 0;
}