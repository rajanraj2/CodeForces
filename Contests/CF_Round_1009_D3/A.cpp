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
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        string result = "NO";

        int a = sqrt((r * r + d * d));
        int b = sqrt((r * r + u * u));
        int c = sqrt((l * l + u * u));
        int e = sqrt((l * l + d * d));
        if ((a == b) && (b == c) && (c == e) && ((r + l) == (u + d))) result = "YES";
        
        cout << result << "\n";
        
    }    
    return 0;
}