#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        vector<string> s(m);
        vector<string> result();

        for (int i = 0; i < m; i++) {
            cin >> s[i];
        }        

        result.clear();

        for (auto it : s) {
            unordered_map<char, int> mpp;
            bool flag = true;
            if (it.size() != n) {
                result.push_back("NO");
                continue;
            }

            for (int j = 0; j < it.size(); j++) {
                if (mpp.find(it[j]) == mpp.end()) {
                    mpp[it[j]] = arr[j];
                }
                else {
                    if (mpp[it[j]] != arr[j]) {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) result.push_back("YES");
            else result.push_back("NO");
        }

        for (auto it : result) {
            cout << it << endl;
        }
    }
    return 0;
}