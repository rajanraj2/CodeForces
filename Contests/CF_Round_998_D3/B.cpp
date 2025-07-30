#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        vector<pair<int, int>> ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
            sort(arr[i].begin(), arr[i].end());
            ans.push_back({arr[i][0], i});
        }
        bool flag = false;

        sort(ans.begin(), ans.end());
        vector<vector<int>> vec(n);
        for (int i = 0; i < n; i++) {
            vec[i] = arr[ans[i].second];
        }


        int prev = -1;
        for (int i = 0; i < m; i++) {
            if (prev >= vec[0][i]) flag = true;
            if (flag) break;
            for (int j = 1; j < n; j++) {
                if (vec[j][i] <= vec[j - 1][i]) {
                    flag = true;
                    break;
                }
            }
            prev = vec[n - 1][i];
            
        }

        if (flag) {
            cout << -1 << endl;
            continue;
        }

        for (auto it : ans) {
            cout << it.second + 1 << " ";
        }
        cout << endl;
        
    }    
    return 0;
}