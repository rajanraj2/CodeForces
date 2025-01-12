#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<vector<long long>> grid(n, vector<long long>(m));
        vector<long long> row(n, 0), col(m, 0);
        long long total = 0;
        
        set<pair<int, int>> path;
        int pi = 0, pj = 0;
        path.insert({pi, pj});

        for (char ch : s) {
            if (ch == 'R') pj++;
            else pi++;
            path.insert({pi, pj});
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                if (path.find({i, j}) == path.end()) {
                    row[i] += grid[i][j];
                    col[j] += grid[i][j];
                    total += grid[i][j];
                }
            }
        }

        long long target = total / (n - path.size());

        vector<pair<int, int>> arr(path.begin(), path.end());
        int len = arr.size();
        
        for (int k = 0; k < len - 1; k++) {
            auto [i, j] = arr[k];
            grid[i][j] = target - row[i];
            row[i] += grid[i][j];
            col[j] += grid[i][j];
        }
        
        auto [li, lj] = arr[len - 1];
        grid[li][lj] = target - row[li];
        row[li] += grid[li][lj];
        col[lj] += grid[li][lj];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}