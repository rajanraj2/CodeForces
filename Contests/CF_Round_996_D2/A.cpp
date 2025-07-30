#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        int diff = abs(a - b);
        string result = "YES";
        if (diff % 2) result = "NO";

        cout << result << endl;
    }    
    return 0;
}