#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string result = "YES";
        for (int i = 1; i < n; i++) {
            int diff = (arr[i] - arr[i - 1]);
            if (diff < 0) diff *= -1;
            if (diff == 5 || diff == 7) continue;
            else {
                result = "NO";
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}