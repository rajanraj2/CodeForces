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

    int count = 0, neg = 0;

    for (auto it : arr) {
        if (it == 0) count++;
        else if (it == -1) neg++;
    }

    int result = count;
    if (neg % 2 == 1) result += 2;

    cout << result << "\n";
}

int32_t main() {
    fio;
    w(t) solve();
    return 0;
}