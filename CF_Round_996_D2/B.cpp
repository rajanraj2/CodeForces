#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int count = 0, mini = INT_MAX, val = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                count++;
                val = b[i] - a[i];
            }
            else {
                int diff = a[i] - b[i];
                mini = min(mini, diff);
            }
        }

        string result = "YES";
        if (count > 1) {
            result = "NO";
        }
        else if (count == 1) {
            if (val > mini) {
                result = "NO";
            }
        }
        cout << result << endl;
        
    }    
    return 0;
}