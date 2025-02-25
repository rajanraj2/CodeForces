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
        int n, x;
        cin >> n >> x;
        set<int> st;
        
        int cnt = 0;
        while (x) {
            st.insert(1 << cnt);
            x = x >> 1;
            cnt++;
        }

        int i = n - cnt, num = 0;
        while (i ) {
            if (st.find(num) == st.end()) {
                st.insert(num);
                i--;
            }
            num++; 
            if (num > x) break;
        }
        
        
        // print all elements in the set
        for (auto it : st) cout << it << " ";
        int sz = st.size();
        while (sz < n) {
            cout << 0 << " ";
            sz++;
        }
        cout << "\n";
        
    }    
    return 0;
}