// https://codeforces.com/contest/2062/problem/C


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long result = -1e18;
        int now = n;
        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = 0; j < now; j++) sum += arr[j];
            if (i == 0) result = max(result, sum);
            else result = max(result, max(sum, - sum));
            for (int j = 0; j < now - 1; j++) arr[j] = arr[j + 1] - arr[j];
            now--;
        }
        cout << result << endl;
    }    
    return 0;
}