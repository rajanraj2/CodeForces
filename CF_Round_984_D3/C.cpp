#include <bits/stdc++.h>
using namespace std;

string helper(string s) {
    string result = "NO";
    char prev1 = s[0], prev2 = s[1], prev3 = s[2];

    for (int i = 3; i < s.size(); i++) {
        if (prev1 == '1' && prev2 == '1' && prev3 == '0' && s[i] == '0') {
            result = "YES";
            break;
        }
        prev1 = prev2;
        prev2 = prev3;
        prev3 = s[i];
    }
    return result;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        vector<pair<int, int>> arr(q);
        for (int i = 0; i < q; i++) {
            cin >> arr[i].first >> arr[i].second;
        }
        bool check = false;

        if (s.size() < 4) {
            check = true;
        }

        string result = "NO";
        char prev1 = s[0], prev2 = s[1], prev3 = s[2];

        for (int i = 3; i < s.size(); i++) {
            if (prev1 == '1' && prev2 == '1' && prev3 == '0' && s[i] == '0') {
                result = "YES";
                break;
            }
            prev1 = prev2;
            prev2 = prev3;
            prev3 = s[i];
        }

        for (int i = 0; i < q; i++) {
            if (check) {
                cout << "NO" << endl;
                continue;
            }

            int index = arr[i].first - 1;
            s[index] = arr[i].second + '0';
            
            cout << s;
            if (index >= 3) {
                char prev1 = s[index - 3], prev2 = s[index - 2], prev3 = s[index - 1];

                for (int i = 0; i < 4; i++) {
                    if (index + i < s.size()) continue;
                    if (prev1 == '1' && prev2 == '1' && prev3 == '0' && s[index + i] == '0') {
                        result = "YES";
                        break;
                    }
                    prev1 = prev2;
                    prev2 = prev3;
                    prev3 = s[index + i];
                }
            }

            else if (index >= 2) {
                char prev1 = s[index - 2], prev2 = s[index - 1], prev3 = s[index];

                for (int i = 0; i < 4; i++) {
                    if (index + i < s.size()) continue;
                    if (prev1 == '1' && prev2 == '1' && prev3 == '0' && s[index + i + 1] == '0') {
                        result = "YES";
                        break;
                    }
                    prev1 = prev2;
                    prev2 = prev3;
                    prev3 = s[index + i + 1];
                }
            }

            else if (index >= 1) {
                char prev1 = s[index - 1], prev2 = s[index], prev3 = s[index + 1];

                for (int i = 0; i < 4; i++) {
                    if (index + i < s.size()) continue;
                    if (prev1 == '1' && prev2 == '1' && prev3 == '0' && s[index + i + 2] == '0') {
                        result = "YES";
                        break;
                    }
                    prev1 = prev2;
                    prev2 = prev3;
                    prev3 = s[index + i + 2];
                }
            }

            else if (index >= 3) {
                char prev1 = s[index], prev2 = s[index + 1], prev3 = s[index + 2];

                for (int i = 0; i < 4; i++) {
                    if (index + i < s.size()) continue;
                    if (prev1 == '1' && prev2 == '1' && prev3 == '0' && s[index + i + 3] == '0') {
                        result = "YES";
                        break;
                    }
                    prev1 = prev2;
                    prev2 = prev3;
                    prev3 = s[index + i + 3];
                }
            }

            cout << result << endl;
        }
    }
    return 0;
}