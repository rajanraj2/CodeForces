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
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        int left = 0, right = 0, index = -1;
        int time = -1;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') left++;
            else right++;
            int diff = left - right;
            if (index == -1 && diff == 0) index = i + 1;

            if (time == -1 && x == diff) time = i + 1;
        }

        if (time == -1 || time > k) {
            cout << 0 << "\n";
            continue;
        }
        if (index == -1) {
            cout << 1 << "\n";
            continue;
        }
        cout << 1 + (k - time) / index << "\n";
    }    
    return 0;
}