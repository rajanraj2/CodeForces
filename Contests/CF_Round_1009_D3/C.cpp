#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

int helper(int x) {
    if (x == 0) return 1; // Special case for 0
    
    int y = x;
    int bit = 0;
    int prev = x & 1;
    
    int i = 0;
    int mask = 1;
    
    while (true) {
        bit = (x >> i) & 1;
        
        if (i > 0) {
            int prev = (x >> (i-1)) & 1; 
            if (bit != prev) {
                y ^= mask; 
                break;
            }
        }
        
        y ^= mask;

        i++;
        mask <<= 1;
    } 
    return y;
}

bool isTriangle(int x, int y, int z) {
    if (x + y > z && y + z > x && z + x > y) return true;
    return false;
}

int32_t main() {
    fio;
    w(t) {
        int x;
        cin >> x;
        
        if (x <= 4) {
            cout << -1 << "\n";
            continue;
        }
        
        int y = helper(x);
        int z = x ^ y;
        if (z == 0) {
            cout << -1 << "\n";
            continue;
        }

        int result = min(y, z);
        if (result >= x || !isTriangle(x, y, z)) result = -1;
        cout << result << "\n";
    }    
    return 0;
}
