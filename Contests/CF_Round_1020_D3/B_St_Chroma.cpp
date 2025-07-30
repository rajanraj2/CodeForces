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
        int n, x;
        cin >> n >> x;
        
        if (n == x) {
            for (int i = 0; i < n; i++) cout << i << " ";
            cout << "\n";
            continue;
        }        

        int value = 0;
        for (int i = 0; i < n; i++) {
            if (i == x) continue;
            cout << i << " ";
        }
        cout << x << "\n";
    }    
    return 0;
}