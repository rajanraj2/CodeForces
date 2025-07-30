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
    int n;
    cin >> n;
    
    vi arr(n), result;
    int total = 0;
    unordered_map<int, vi> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
        mpp[arr[i]].pb(i + 1);
    }

    sort(arr.begin(), arr.end());
    unordered_set<int> st;
    for (int i = 0; i < n - 1; i++) {
        int val = total - arr[i];
        if (val % 2) continue;
        if (arr.back() == val / 2) st.insert(arr[i]);
    }
    int val = total - arr[n - 1];
    if (val % 2 == 0 && arr[n - 2] == val / 2) st.insert(arr[n - 1]);

    for (auto it : mpp) {
        if (st.find(it.first) != st.end()) {
            for (int i = 0; i < it.second.size(); i++) {
                result.pb(mpp[it.first][i]);
            }
        }
    }
    
    cout << result.size() << "\n";
    for (auto it : result) cout << it << " ";
    cout << "\n";

    return 0;
}