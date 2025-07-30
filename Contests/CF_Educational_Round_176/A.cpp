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
        int n, k, result = 0, zero = 0;
        cin >> n >> k;
        
        // while (n) {
        //     int val = k;
        //     if ((n - k) % 2 == 1) val--;; 
            
        //     n -= val;
        //     n = max(zero, n);
        //     result++;
        // }

        if (n % 2) {
            n -= k;
            result = 1;
            if (n > 0) result += (n + k - 2) / (k - 1);
        }
        else result = (n + k - 2) / (k - 1);

        cout << result << "\n";
    }    
    return 0;
}