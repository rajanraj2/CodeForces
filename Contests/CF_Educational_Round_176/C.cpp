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
        int n, m, val, result = 0;
        cin >> n >> m;
        
        vi freq(n + 1, 0), suf(n + 2, 0);
        for (int i = 0; i < m; i++) {
            cin >> val;
            freq[val]++;
        }
        for (int i = n; i > 0; i--) suf[i] = suf[i + 1] + freq[i];

        for (int i = 1; i < n; i++) {
            int left = suf[i], right = suf[n - i];
            int common = suf[max(i, (n - i))];
            int value = left * right - common;
            result += value;
        }

        cout << result << "\n";
    }    
    return 0;
}