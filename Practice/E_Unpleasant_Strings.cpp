#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

void helper(string& t, vector<vi>& arr, vi& dp, int n) {
    int index = 0;
    bool absent = false;

    for (char ch : t) {
        if (arr[index][ch - 'a'] == n) {
            absent = true;
            break;
        }
        index = arr[index][ch - 'a'] + 1;
    }

    if (absent) cout << 0 << "\n";
    else cout << dp[index] << "\n";
}

int32_t main() {
    fio;

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int q;
    cin >> q;

    vector<vi> arr(n+1, vi (26));
    for(int i = 0; i < k; i++) arr[n][i] = n;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < k; j++) {
            if (s[i] - 'a' == j) arr[i][j] = i;
            else arr[i][j] = arr[i+1][j];
        }
    }

    vi dp(n+1, 0);
    dp[n] = 1;

    for (int i = n - 1; i >= 0; i--) {
        int ans = n + 1;

        for (int j = 0; j < k; j++) {
            if (arr[i][j] == n) {
                ans = 1;
                break;
            }
        }

        if (ans == 1) {
            dp[i] = ans;
            continue;
        }

        for (int j = 0; j < k; j++) {
            int next = arr[i][j] + 1;
            ans = min(ans, dp[next] + 1);
        }
        dp[i] = ans;
    }

    string t;
    while (q--) {
        cin >> t;
        helper(t, arr, dp, n);
    }

    return 0;
}