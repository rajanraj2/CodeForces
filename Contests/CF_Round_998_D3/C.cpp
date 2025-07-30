#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
        }

        int result = 0;
        for (auto it : mpp) {
            int diff = k - it.first;
            if (mpp.find(diff) != mpp.end()) {
                if (diff == it.first) {
                    result += mpp[it.first] / 2;
                    mpp[it.first] %= 2;
                } 
                else {
                    int count = min(mpp[it.first], mpp[diff]);
                    mpp[diff] -= count;
                    mpp[it.first] -= count;
                    result += count;
                }
            }
        }
        cout << result << endl;
    }
    return 0;
};


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
        
//         sort(arr.begin(), arr.end());
//         int ans = 0;
//         int left = 0, right = n - 1;
//         while (left < right) {
//             if (arr[right] >= k) {
//                 right--;
//             } 
//             else if (arr[right] + arr[left] == k) {
//                 ans++;
//                 right--;
//                 left++;
//             } 
//             else {
//                 left++;
//             }
//         }
//         cout << ans << endl;
//     }    
//     return 0;
// }