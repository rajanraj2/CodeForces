#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    w(t) {
        int n, k, x, initial = 0, total = 0, ans = -1;
        cin >> n >> k >> x;
        
        vi arr(n), pre(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i > 0) pre[i] = pre[i - 1] + arr[i];
            else pre[i] = arr[i];
        }
        int sum = pre[n - 1];
        int result = 0;

        // int left = 1, right = k;
        // while (left <= right) {
        //     int mid = left + (right - left) / 2;
        //     if ((sum * mid) >= x) {
        //         ans = mid;
        //         right = mid - 1;
        //     }
        //     else left = mid + 1;
        // }

        for (int i = 0; i < n; i++) {
            int curr = (i == 0 ? 0 : pre[i - 1]);
            auto it = lower_bound(pre.begin() + i, pre.end(), curr + x);
            if (it != pre.end()) result += k;
            else {
                int val = sum - curr;
                int needed = x - val;
                int extra = (needed + sum - 1) / sum;
                if (extra < k) result += (k - extra);
            }
        }

        // if (ans == -1) {
        //     cout << 0 << "\n";
        //     continue;
        // }

        // int count = n * (ans - 1);
        // total = sum * (ans - 1);
        // for (int i = 0; i < n; i++) {
        //     if (total >= x) break;
        //     total += arr[i];
        //     count++;
        // }
        // if (total >= x) result = (n * k) - count + 1;

        cout << result << "\n";
    }    
    return 0;
}