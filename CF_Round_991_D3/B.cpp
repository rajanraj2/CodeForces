#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum = 0;
        cin >> n;
        vector<int> arr(n);
        string result = "NO";

        long long even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if (i % 2 == 0) even += arr[i];
            else odd += arr[i];
        }

        if (sum % n != 0) {
            cout << result << endl;
            continue;
        }

        long long avg = sum / n;
        int o = n / 2;
        int e = n - o;
        if (even == (e * avg) && odd == (o * avg)) result = "YES";
        cout << result << endl;
    }
    return 0;
}