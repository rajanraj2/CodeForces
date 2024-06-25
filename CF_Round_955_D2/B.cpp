#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        unordered_map<int, int> visitCount;
        while (k > 0) {
            x++;
            k--;

            while (x % y == 0) {
                x /= y;
            }

            // Track visit counts to detect cycles
            visitCount[x]++;
            if (visitCount[x] > 1) {
                // We have entered a cycle, calculate the remaining steps in the cycle
                int cycleLength = 1;
                int temp = x + 1;
                while (temp % y == 0) {
                    temp /= y;
                    cycleLength++;
                }

                k = k % cycleLength;
                break;
            }
        }

        cout << x << endl;
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x, y, k;
//         cin >> x >> y >> k;
//         while (k--) {
//             x++;
//             while (x % y == 0) {
//                 x /= y;
//             }
//         }
//         cout << x << endl;
//     }
//     return 0;
// }

