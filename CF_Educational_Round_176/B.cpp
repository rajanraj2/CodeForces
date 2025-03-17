#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

int helper(vi &arr, int k) {
    int result = 0;
    sort(arr.rbegin(), arr.rend());
    result = accumulate(arr.begin(), arr.begin() + (k + 1), 0LL);
    return result;
}

int32_t main() {
    fio;
    w(t) {
        int n, k, result = 0, maxi = LLONG_MIN, highest = LLONG_MIN;
        cin >> n >> k;
        vi arr(n);
        ivec(arr);

        if (k == 1 && n > 2) {
            for (int i = 1; i < n - 1; i++) maxi = max(maxi, arr[i]);
            highest = max(arr.front(), arr.back());
            result = highest;
            if (highest >= maxi) result += arr.front() == highest ? max(arr.back(), maxi) : max(arr.front(), maxi);
            else result += maxi;
        }
        else result = helper(arr, k);
        cout << result << "\n";
    }    
    return 0;
}
