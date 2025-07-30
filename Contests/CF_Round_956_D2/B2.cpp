#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                int val = ch - '0'; // Convert character to integer
                sum_a += val;
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                int val = ch - '0'; // Convert character to integer
                sum_b += val;
            }
        }

        if (sum_a % 2 == sum_b % 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
