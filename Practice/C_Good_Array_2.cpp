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
    int n, total = 0;
    cin >> n;
    
    vi arr(n), result;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
        total += arr[i];
    }

    for (int i = 0; i < n; i++) {
        int rem = total - arr[i];
        if (rem % 2) continue;

        int target = rem / 2;
        freq[arr[i]]--;
        if (freq[target] > 0) result.pb(i + 1);
        freq[arr[i]]++;
    }

    cout << result.size() << "\n";
    for (auto it : result) cout << it << " ";
    cout << "\n";
    
    return 0;
}   