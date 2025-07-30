#include<bits/stdc++.h>
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
        int n, k, result = 0;
        cin >> n >> k; 
        
        vi a(n), b(n);
        ivec(a);
        ivec(b);
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++) {
            result += max(a[i], b[i]);
            pq.push(min(a[i], b[i]));
            if (pq.size() >= k) pq.pop();
        }

        while (!pq.empty()) {
            result += pq.top();
            pq.pop();
        }
        
        cout << result + 1 << "\n"; 
    }    
    return 0;
}