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
        int n;
        cin >> n;
        
        vi arr(n), maxi(n), sum(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        maxi[0] = arr[0];
        for (int i = 1; i < n; i++) {
            maxi[i] = max(maxi[i - 1], arr[i - 1]);
        }

        sum[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sum[i] = sum[i + 1] + arr[i];
        }
        
        for (int i = n - 1; i >= 0; i--) {
            int ans = sum[i];
            if (maxi[i] > arr[i]) {
                ans -= arr[i];
                ans += maxi[i];
            }
            cout << ans << " ";
        }
        cout << "\n";
        
    }    
    return 0;
}