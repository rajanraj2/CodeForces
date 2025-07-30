#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (k < 0) k *= -1;
        int val = (k + p - 1) / p;
        if (val > n) {
            cout << -1 << endl;
        } 
        else {
            cout << val << endl;
        }
    }    
    return 0;
}