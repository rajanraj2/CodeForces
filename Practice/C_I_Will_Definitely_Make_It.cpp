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
    int n, k;
    cin >> n >> k;
    
    vi arr(n);
    ivec(arr);
    string result = "YES";

    int value = arr[k - 1], water = 1, start = 0;
    sort(arr.begin(), arr.end());
    int maxi = arr[n - 1];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            start = i;
            break;
        }
    }

    int time = arr[start];
    while (true) {
        if (start >= n || arr[start] == maxi) break;

        int diff = arr[start + 1] - arr[start];
        if (diff <= time) {
            start++;
            water += diff;
            time = arr[start] - water + 1;
        }
        else {
            result = "NO";
            break;
        }
    }

    cout << result << "\n";
}

int32_t main() {
    fio;
    w(t) solve();
    return 0;
}