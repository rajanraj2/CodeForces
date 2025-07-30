#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int c = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int k = -1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) k = i;
        }
        if (k == -1) {
            cout << -1 << endl;
            continue;
        }
        int x = arr[k];
        vector<int> result(4, x);
        bool flag = true;

        arr.erase(arr.begin() + k);
        arr.erase(arr.begin() + k - 1); 
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[i - 1] + (2 * x)) {
                flag = false;
                result[2] = arr[i - 1];
                result[3] = arr[i];
                break;
            }
        }
        if (flag) {
            cout << -1 << endl;
            continue;
        }

        cout << result[0] << " " << result[1] << " " << result[2] << " " << result[3] << endl;
    }    
    return 0;
}