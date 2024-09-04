#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        int a = x / k;
        int b = y / k;
        if (x % k != 0) a++;
        if (y % k != 0) b++; 
        int result = max(a, b) * 2;
        if (x > y) result--;
        cout << result << endl;
    }
    return 0;
}