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
        int n, result = 0;
        cin >> n;
        string s;
        cin >> s;

        vi arr;
        char prev = s[0];
        int len = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != prev) {
                if (prev == 'B') arr.pb(len);
                else arr.pb(-1 * len);
                len = 1;
                prev = s[i];
            }
            else len++;
        }
        if (prev == 'B') arr.pb(len);
        else arr.pb(-1 * len);

        int sz = arr.size();
        int rem = 0;
        for (int i = sz - 1; i > 0; i--) {
            if (arr[i] < 0) continue;
            
            int black = arr[i] + rem;
            if (i == 0) break;

            int pink = abs(arr[i - 1]);
            while (pink > 0) {
                if (pink > 1) result += black;
                else result += (black + 1) / 2;
                pink -= 2;
            }
            rem = black;
            i--;
        }

        cout << result << "\n";

    }    
    return 0;
}