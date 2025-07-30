#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, count = 0, total = 0;
        cin >> n >> m;
        vector<string> arr;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
            int len = s.size();
            if (flag && (total + len) <= m) {
                total += len;
                count++;
            } else {
                flag = false;
            }
        }
        cout << count << endl;
    }
    return 0;
}