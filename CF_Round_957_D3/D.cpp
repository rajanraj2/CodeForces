#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string a;
        cin >> a;
        int last = 0;
        int water = 0;
        string result = "YES";
        while (last < n && result != "NO") {
            int index = last + m;
            while (index > last) {
                if (water > k) {
                    result = "NO";
                    break;
                }
                if (a[index] == 'L') {
                    last = index;
                }
                else if (a[index] == 'W') {
                    if (water < k) {
                        water++;
                    }
                    else {
                        index--;
                    }
                }
                else if (a[index] == 'C') {
                    index--;
                }
                if (index == last) {
                    result = "NO";
                    break;
                }
                last = index;
            }
        }
        cout << result << endl;
    }
    return 0;
}