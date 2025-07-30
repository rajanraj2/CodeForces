#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

bool isTriangle(int x, int y, int z) {
    if (x + y > z && y + z > x && z + x > y) return true;
    return false;
}

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        
        vi arr(n);
        ivec(arr);
        
    }    
    return 0;
}