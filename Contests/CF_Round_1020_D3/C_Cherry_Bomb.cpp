#include <bits/stdc++.h>
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
        int n, k;
        cin >> n >> k;
        
        vi a(n), b(n);
        int neg = 0, mini = INT_MAX, maxi = INT_MIN;
        int result = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
        }
        int val = -1;
        

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] == -1) neg++;
            else val = a[i] + b[i];
        }
        bool flag = false;

        if (neg == n) {
            result = k + mini - maxi + 1;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (b[i] == -1) {
                    int diff = val - a[i];
                    if (diff < 0 || diff > k) {
                        result = 0;
                        flag = true;
                        break;
                    }
                }
                else {
                    if (val != -1 && a[i] + b[i] != val) {
                        result = 0;
                        flag = true;
                        break;
                    }
                }
            }
        }

        if (!flag && neg != n) result = 1;

        cout << result << "\n";
    }    
    return 0;
}