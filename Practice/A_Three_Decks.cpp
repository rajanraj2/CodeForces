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
        int a, b, c;
        cin >> a >> b >> c;

        int diff = b - a;
        int val = c - diff;
        c -= diff;
        
        if (a + diff == c) {
            cout << "YES\n";
            continue;
        }

        if (c < a + diff) {
            cout << "NO\n";
            continue;
        }

        int extra = c - a - diff;
        if (extra % 3 == 0) cout << "YES\n";
        else cout << "NO\n";


        
    }    
    return 0;
}