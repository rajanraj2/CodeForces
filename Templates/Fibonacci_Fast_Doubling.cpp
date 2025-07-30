#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

// F(2k) = Fk (2F(k+1) - F(k))
// F(2k + 1) = (F(k + 1))^2 + (F(k))^2; 
// {F(n), F(n + 1)}
pair<int, int> fib(int n) {
    if (n == 0) return {0, 1};
    auto p = fib(n >> 1);
    int c = p.first * (2 * p.second - p.first);
    int d = p.first * p.first + p.second * p.second;
    if (n & 1) return {d, c + d};
    else return {c, d};
}

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;

        auto ans = fib(n);
        cout << ans.first << "\n";
        
    }    
    return 0;
}