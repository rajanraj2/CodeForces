#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 1) odd++;
            else even++;
        }
        int result = 0;
        if (even > 0) result = odd + 1;
        else result = odd - 1;
        
        cout << result << endl;
    }    
    return 0;
}