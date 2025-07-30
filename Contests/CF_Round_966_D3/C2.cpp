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

        for (int i = 0; i < m; i++) {
            cin >> s[i];
        }        

        vector<string> result;

        for (auto& it : s) {
            if (it.size() != n) {
                result.push_back("NO");
                continue;
            }

            unordered_map<char, int> charToInt;
            unordered_map<int, char> intToChar;
            bool flag = true;

            for (int j = 0; j < n; j++) {
                char c = it[j];
                int num = arr[j];

                if (charToInt.find(c) == charToInt.end()) {
                    charToInt[c] = num;
                } else if (charToInt[c] != num) {
                    flag = false;
                    break;
                }

                if (intToChar.find(num) == intToChar.end()) {
                    intToChar[num] = c;
                } else if (intToChar[num] != c) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                result.push_back("YES");
            } else {
                result.push_back("NO");
            }
        }

        for (const auto& res : result) {
            cout << res << endl;
        }
    }
    return 0;
}
