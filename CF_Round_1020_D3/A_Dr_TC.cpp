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
        string s;
        cin >> s;
        
        int one = 0, total = 0;
        for (auto it : s) {
            if (it == '1') one++;
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') total += one - 1;
            else total += one + 1;
        }
        
        cout << total << "\n";
    }    
    return 0;
}