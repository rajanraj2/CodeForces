#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string result;

        // int odd = 0;
        // for (int i = n; i > n - k; i--) {
        //     if (i % 2 != 0) odd++;
        // }

        // if (odd % 2 == 0) cout << "YES" << endl;
        // else cout << "NO" << endl;

        
        
        if (k == 1) {
            if (n % 2 == 0) result = "YES";
            else result = "NO";
            cout << result << endl;
            continue;
        }

        int firstOdd = (n % 2 == 0) ? n - 1 : n;
        int lastOdd = ((n - k + 1) % 2 == 0) ? n - k + 2: n - k + 1;

        if (firstOdd < lastOdd) result = "NO";
        else {
            int countOdd = (firstOdd - lastOdd) / 2 + 1;
            if (countOdd % 2 == 0) result = "YES";
            else result = "NO";
        }

        
        cout << result << endl;
    }
    return 0;
}