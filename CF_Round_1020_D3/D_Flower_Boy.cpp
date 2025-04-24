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
    w(t) {
        int n, m, result = INT_MAX;
        cin >> n >> m;
        vi a(n), b(m);
        ivec(a);
        ivec(b);

        vi frwd(m + 1), bkwd(m + 1);
        frwd[0] = -1;
        bkwd[m] = n;

        int ind = 0;
        for (int i = 0; i < m; i++) {
            while (ind < n && a[ind] < b[i]) ind++;
            if (ind == n) frwd[i + 1] = n;
            else frwd[i + 1] = ind++;
        }

        if (frwd[m] < n) {
            cout << 0 << "\n";
            continue;
        }

        ind = n - 1;
        for (int i = m - 1; i >= 0; i--) {
            while (ind >= 0 && a[ind] < b[i]) ind--;
            if (ind < 0) bkwd[i] = -1;
            else bkwd[i] = ind--;
        }

        for (int i = 1; i <= m; i++) {
            if (frwd[i - 1] < bkwd[i]) result = min(result, b[i - 1]);
        }

        if (result == INT_MAX) result = -1;

        cout << result << "\n";
    }
    return 0;
}
