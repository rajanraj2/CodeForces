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
        int n;
        cin >> n;
        
        vi arr(n), d(n), result(n), vis(n, 0);
        ivec(arr);
        ivec(d);
        int last = 0;

        for (int i = 0; i < n; i++) {
            int ind = d[i];
            int count = 0;

            while (true) {
                if (arr[ind - 1] == d[i] && vis[ind - 1] != 0) break; 
                int prev = arr[ind - 1];
                arr[ind - 1] = ind;
                vis[ind - 1] = 1;
                ind = prev;
                count++;
            }
            result[i] = last + count;
            last = result[i];
        }
        
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }    
    return 0;
}