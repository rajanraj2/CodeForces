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
        for (int i = n - 2; i >= 0; i--) {
                if (arr[i] > arr[i + 1]) {
                    int sub = min(arr[i], arr[i + 1]);
                    if (arr[i] - arr[i + 1] > sub) {
                        result = "NO";
                        break;
                    }
                    arr[i] -= (arr[i] - arr[i + 1]);
                }
        }

        if (result == "NO") {
            cout << result << endl;
            continue;
        }

        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                result = "NO";
                break;
            }
        }
        cout << result << endl;
    }    
    return 0;
}