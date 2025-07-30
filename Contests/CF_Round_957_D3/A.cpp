#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int x = a, y = b, z = c;
        for (int i = 0; i < 5; i++) {
            int mini = min(x, min(y, z));
            if (x == mini) {
                x++;
            } else if (y == mini) {
                y++;
            } else {
                z++;
            }
        }
        int result = x * y * z;
        cout << result << endl;
    }
    return 0;
}