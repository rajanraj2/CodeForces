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
        string s;
        cin >> s;
        vi result(n);
        int small = 1, big = n;

        for (int i = n - 2; i >= 0; i--) {
            if (s[i] == '>') result[i + 1] = big--;
            else result[i + 1] = small++;
        }
        result[0] = small;

        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }    
    return 0;
}