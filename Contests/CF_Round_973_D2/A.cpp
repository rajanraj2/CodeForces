#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int a = min(x, y);
        int result = n / a;
        if (n % a != 0) result++;
        cout << result << endl;
    }
    return 0;
}