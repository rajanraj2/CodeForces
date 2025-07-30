#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string ans = s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'p') {
                ans[i] = 'q';
            } 
            else if (s[i] == 'q') {
                ans[i] = 'p';
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}