#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); ++i) cin >> arr[i];
#define w(x) int x; cin >> x; while (x--)
#define pb push_back

const int MAX_BITS = 20;

bool is_k_lonely(const vi &a, int k) {
    int n = a.size();
    vector<int> bit_count(MAX_BITS, 0);
    set<int> ors;

    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < MAX_BITS; ++j) {
            if ((a[i] >> j) & 1)
                bit_count[j]++;
        }
    }

    int curr_or = 0;
    for (int j = 0; j < MAX_BITS; ++j)
        if (bit_count[j]) curr_or |= (1LL << j);
    ors.insert(curr_or);

    for (int i = k; i < n; ++i) {
        for (int j = 0; j < MAX_BITS; ++j)
            if ((a[i - k] >> j) & 1) bit_count[j]--;

        for (int j = 0; j < MAX_BITS; ++j)
            if ((a[i] >> j) & 1) bit_count[j]++;

        curr_or = 0;
        for (int j = 0; j < MAX_BITS; ++j)
            if (bit_count[j]) curr_or |= (1LL << j);

        ors.insert(curr_or);
        if (ors.size() > 1) return false;
    }

    return true;
}

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        vi a(n);
        ivec(a);

        int left = 1, right = n, answer = n;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (is_k_lonely(a, mid)) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
