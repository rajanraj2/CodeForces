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

        int result = n, convert = 0;
        char prev = s[0];
        for (int it : s) {
            if (it != prev) {
                convert++;
                prev = it;
            }
        }
        
        if (convert == 0) {
            if (s[0] == '1') result += 1;
        }
        else {
            if (s[0] == '0') {
                result += convert;
                if (convert == 2) result--;
                else if (convert > 2) result -= 2;
            }
            else {
                result += convert;
                if (convert > 1) result--;
            }
        }

        cout << result << "\n";
        
    }    
    return 0;
}