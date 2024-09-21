#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int result = 0;
        int gold = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= k) gold += arr[i];
            else if (arr[i] == 0 && gold > 0) {
                result++;
                gold--;
            }
        }
        cout << result << endl;
    }
    return 0;
}