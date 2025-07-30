#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); ++i) cin >> arr[i];
#define w(x) int x; cin >> x; while (x--)
#define pb push_back

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        vi arr(n);
        ivec(arr);

        int total_or = 0;
        for (int num : arr) {
            total_or |= num;
        }

        if (total_or == 0) {
            cout << "1\n";
            continue;
        }

        int max_k = 0;

        for (int bit = 0; bit < 20; ++bit) {
            if ((total_or >> bit) & 1) {
                vi positions;

                for (int i = 0; i < n; ++i) {
                    if ((arr[i] >> bit) & 1) {
                        positions.pb(i);
                    }
                }

                int current_max = positions[0] + 1;  
                current_max = max(current_max, n - positions.back());

                for (int i = 1; i < positions.size(); ++i) {
                    current_max = max(current_max, positions[i] - positions[i - 1]);
                }

                max_k = max(max_k, current_max);
            }
        }

        cout << max_k << "\n";
    }

    return 0;
}
