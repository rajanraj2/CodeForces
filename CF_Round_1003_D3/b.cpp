#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string str;
        cin >> str;
        long long m = 0, s = 0;
        for (char ch : str) {
            if (ch == '_') m++;
            else s++;
        }
        if (s < 2 || m == 0) {
            cout << 0 << "\n";
            continue;
        }
        long long a = s / 2;
        long long b = s - a;
        long long ans = a * m * b;
        cout << ans << "\n";
    }    
    return 0;
}