#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int result = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxi = *max_element(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            if (arr[i] == maxi) {
                if (i % 2 == 0) {
                    result = maxi + n / 2;
                    if (n % 2 != 0) result++;
                    break;
                }
                else {
                    result = maxi + n / 2;
                }
            } 
        }

        cout << result << endl;
    }
    return 0;
}
