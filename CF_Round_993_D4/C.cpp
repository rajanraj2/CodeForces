#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int result = 0;
        if (a <= m) result += a;
        else result += m;
        if (b <= m) result += b;
        else result += m;
        int left = (2 * m) - result;
        if (c <= left) result += c;
        else result += left;
        cout << result << endl;
    }
    return 0;
}