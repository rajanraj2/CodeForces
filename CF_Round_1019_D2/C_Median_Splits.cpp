// #include<bits/stdc++.h>
// using namespace std;
// #define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define int long long int 
// #define vi vector<int>
// #define vs vector<string>
// #define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
// #define w(x) int x; cin >> x; while(x--)
// #define pb push_back

// bool helper(int start, vi& arr, int& k, int& next) {
//     multiset<int> win;
//     auto mid = win.end();
//     int n = arr.size();

//     for (int i = start; i < n - 1; ++i) {
//         int num = arr[i];
//         int old_size = win.size();
//         win.insert(num);

//         if (old_size == 0) mid = win.begin();
//         else if (old_size % 2 == 0) mid++;
//         else if (num < *mid) mid--;

//         if (*mid <= k) {
//             int j = i;
//             while (j + 1 < n - 1 && arr[j + 1] > k) j++;
//             next = j + 1;  
//             return true;
//         }
//     }
//     return false;
// }

// bool helper_rev(int end, vi& arr, int& k, int& prev) {
//     multiset<int> win;
//     auto mid = win.end();

//     for (int i = end; i > 0; --i) {
//         int num = arr[i];
//         int old_size = win.size();
//         win.insert(num);

//         if (old_size == 0) mid = win.begin();
//         else if (old_size % 2 == 0) mid++;
//         else if (num < *mid) --mid;

//         if (*mid <= k) {
//             int j = i;
//             while (j - 1 > 0 && arr[j - 1] > k) j--;
//             prev = j - 1;
//             return true;
//         }
//     }
//     return false;
// }

// int32_t main() {
//     fio;
//     w(t) {
//         int n, k;
//         cin >> n >> k;

//         vi arr(n);

//         string result = "NO";

//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             if (arr[i] <= k) count++;
//         }


//         if (n == 3 && count >= 2) {
//             cout << "YES\n";
//             continue;
//         }

//         int nxt1, nxt2;
//         if (helper(0, arr, k, nxt1)) {
//             if (helper(nxt1, arr, k, nxt2)) {
//                 result = "YES";
//             }
//             else {
//                 int prev1;
//                 if (helper_rev(n - 1, arr, k, prev1)
//                     && prev1 >= nxt1) {
//                     result = "YES";
//                 }
//             }
//         }

//         if (result == "NO") {
//             int prev1, prev2;
//             if (helper_rev(n - 1, arr, k, prev1)) {
//                 if (helper_rev(prev1, arr, k, prev2)) {
//                     result = "YES";
//                 }
//             }
//         }

//         cout << result << "\n";
//     }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define all(x) x.begin(),x.end()
#define w(t) ll t; cin>>t; while(t--)
#define f(start,n) for (int i = start; i < n; i++)
#define fr(n,start) for (int i = n-1; i >= start; i--)
 
const ll mod = 1000000007;
const ll md = 998244353;
 
const int INF = numeric_limits<int>::max();

vector<int> row = {0,0,1,-1};
vector<int> col = {1,-1,0,0};

bool sparker(int n, vector<int> &a, int k){
    int sz = 0, ct = 0;
    f(0,n - 2){
        sz++;
        if (a[i] <= k) ct++;
        if (ct *2 >= sz){
            int j = i + 1;
            if (ct * 2 > sz && j < n - 2 && a[j] > k) j++;
            // cout << j << " ";
            int ctj = 0, szj = 0;
            while (j < n - 1){
                szj++;
                if (a[j] <= k) ctj++;
                if (ctj * 2 >= szj) return true;
                j++;
            }
            int l = n - 1, ctk = 0, szk = 0;
            while (l > i + 1){
                szk++;
                if (a[l] <= k) ctk++;
                if (ctk * 2 >= szk) return true;
                l--;
            }
        }
    }
    return false;
}

void solve() {
    int n, k; cin >> n >> k; vector<int> a(n); f(0,n) cin >> a[i];
    bool c = sparker(n, a, k);
    reverse(all(a));
    c = c || sparker(n, a, k);
    if (c) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    w(t) solve();
    // solve();
}