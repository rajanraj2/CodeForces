#include <bits/stdc++.h>
using namespace std;

bool helper(int val, int k) {
    vector<int> brr;
    for (int i = 1; i < val; i++) {
        brr.push_back(i);
    }
    brr.push_back(-1);
    if (brr.size() > k / 2) {
        return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n), b;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int left = 0, right = n + 1, result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (helper(mid, k)) {
                result = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        cout << result << endl;
    }    
    return 0;
}