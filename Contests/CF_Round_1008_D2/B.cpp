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
        int n, k;
        cin >> n >> k;

        int parity = k % 2;
        for (int i = 0; i < n - 2; i++) {
            if (parity) cout << n << " ";
            else cout << n - 1 << " ";
        }
        cout << n << " " << n - 1 << "\n";
    }    
    return 0;
}