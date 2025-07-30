#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

bool check(int n, int a, int b) {
    if (a == n && b == 1) return false;
    if (a == 1 && b == n) return true;

    bool ans = false;
    if (a > b) ans = true;
    return ans;
}

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        char ch;
        bool result = false;
        
        vi a, b;
        for (int i = 1; i <= n; i++) {
            cin >> ch;
            if (ch == 'A') a.pb(i);
            else b.pb(i);
        }

        for (int it1 : a) {
            bool alice = true;
            for (int it2 : b) {
                if (!check(n, it1, it2)) {
                    alice = false;
                    break;
                }
            }
            if (alice) {
                result = true;
                break;
            }
        }

        if (result) cout << "Alice\n";
        else cout << "Bob\n";

    }    
    return 0;
}