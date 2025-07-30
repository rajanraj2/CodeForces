// https://codeforces.com/contest/2062/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (flag && (arr[i] <= (2 * i) || arr[i] <= (2 * (n - i - 1)))) flag = false;
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }    
    return 0;
}