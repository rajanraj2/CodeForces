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
        int result = 0;
        
        int val = n / 15;
        int rem = n % 15;
        result += 3 * val;
        if (rem >= 2) result += 3;
        else if (rem == 1) result += 2;
        else result++;

        cout << result << "\n";
        
    }    
    return 0;
}