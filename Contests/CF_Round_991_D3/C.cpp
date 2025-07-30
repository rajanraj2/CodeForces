#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int sum = 0, count2 = 0, count3 = 0;
        string s = to_string(n);
        string result = "NO";
        for (char ch : s) {
            sum += ch - '0';
            if (ch == '2') count2++;
            else if (ch == '3') count3++;
        }
        cout << "sum : " << sum << endl;
        if (sum % 9 == 0) {
            result = "YES";
            cout << result << endl;
            continue;
        }

        int diff = sum % 9;
        if (diff == 8) {
            if (count2 >= 4) {
                result = "YES";
            }
            else if (count3 >= 1 && count2 >= 1) {
                result = "YES";
            }
        }
        else if (diff == 6) {
            if (count3 >= 1 || count2 >= 3) {
                result = "YES";
            }
        }
        else if (diff == 4) {
            if (count2 >= 2) {
                result = "YES";
            }
        }
        else if (diff == 2) {
            if (count2 >= 1) {
                result = "YES";
            }
        }
        cout << result << endl;
    }
    return 0;
}