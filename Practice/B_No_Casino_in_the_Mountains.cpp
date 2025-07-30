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

    int left = 0, right = 0, days = 0, result = 0;

    while (right < n) {
        if (arr[right] == 1) {
            days = 0;
            left = right + 1;
        }
        else {
            days++;
            if (right - left + 1 >= k) {
                result++;
                left = right + 2;
                right++;
            }
        }
        right++;
    }

    cout << result << "\n";
}

int32_t main() {
    fio;
    w(t) solve();
    return 0;
}