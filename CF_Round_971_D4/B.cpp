#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            int ans;
            char a, b, c, d;
            cin >> a >> b >> c >> d;
            if (a == '#') ans = 1;
            else if (b == '#') ans = 2;
            else if (c == '#') ans = 3;
            else ans = 4;
            arr[i] = ans;
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}