#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int count0 = 0, count1 = 0;
        int i = 0;
        while (i < n) {
            if (a[i] == '1') {
                count1++;
                i++;
            }
            if (a[i] == '0') {
                count0++;
                i++;
            }
            while (a[i] != '1' && i < n) {
                i++;
            }
        }
        if (count1 > count0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}