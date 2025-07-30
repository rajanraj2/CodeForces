#include <bits/stdc++.h>
using namespace std;

bool isPossibleTransformation(vector<vector<int>> &a, vector<vector<int>> &b, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((a[i][j] - b[i][j]) % 3 != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                a[i][j] = ch - '0';
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                b[i][j] = ch - '0';
            }
        }

        if (isPossibleTransformation(a, b, n, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
