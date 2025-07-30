#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int result;
        result = max(0, max(x1, max(x2, x3)) - min(x1, min(x2, x3)));
        cout << result << endl;
    }
    return 0;
}