#include <bits/stdc++.h>
using namespace std;

#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

void solve() {
    int n;
    cin >> n;
    
    vi arr(n);
    ivec(arr);
    sort(arr.begin(), arr.end());

    int result = INT_MIN;

    for (int i = 0; i < n; i += 2) {
        int value = abs(arr[i + 1] - arr[i]);
        result = max(result, value);
    }

    cout << result << "\n";
}

int32_t main() {
    fio;
    w(t) solve();
    return 0;
}