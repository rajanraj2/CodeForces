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
        int n;
        cin >> n;
        int k = n;

        if (n == 1) {
            cout << -1 << "\n";
            continue;
        }
        
        k = 2;
        while (k <= n) {
            cout << k << " ";
            k += 2;
        }
        k = 1;
        while (k <= n - 2) {
            cout << k << " ";
            k += 2;
        }
        if (n % 2) cout << n;
        else cout << n - 1;
        cout << "\n";
    }    
    return 0;
}