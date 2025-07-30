#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

#define MAXN 1000100

int spf[1000100];

// find factors in simplest form
// find their complements
// check in map if the complement is present

void pre() {
    for (int i = 0; i < MAXN; i++) spf[i] = i;

    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}


map<int, int> get_factor_map(int x) {
    map<int, int> mpp;
    while(x != 1) {
        mpp[spf[x]]++;
        x /= spf[x];
    }
    return mpp;
}


pair<int, int> reduced_and_complement(int x) {
    auto mpp = get_factor_map(x);
    int red = 1;
    int comp = 1;

    for (auto it : mpp) {
        if (it.second % 2 == 1) {
            red *= it.first;
            comp *= it.first;
        }
    }

    return {red, comp};
}


int32_t main() {
    fio;
    pre();

    int n;
    cin >> n;
    
    vi arr(n);
    int ans = 0, zc = 0;

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            zc++;
            continue;
        }
        auto temp = reduced_and_complement(arr[i]);
        ans += freq[temp.second];
        freq[temp.first]++;
    }
    ans += (zc * (n - zc));
    ans += ((zc * (zc - 1)) / 2);

    cout << ans << "\n";
    
    return 0;
}
