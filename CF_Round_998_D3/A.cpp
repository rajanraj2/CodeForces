#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(5);
        for (int i = 0; i < 5; i++) {
            if (i != 2) cin >> arr[i]; 
        }

        int val = 0;
        if (arr[3] == (arr[0] + arr[1]) + arr[1]) val++;
        if (arr[4] == ((arr[0] + arr[1]) + arr[3])) val++;

        int a3 = arr[3] - arr[1];
        int cnt = 0;
        if (a3 == arr[0] + arr[1]) cnt++;
        if (arr[4] == a3 + arr[3]) cnt++;
        val = max(val, cnt);

        a3 = arr[4] - arr[3];
        cnt = 0;
        if (a3 == arr[0] + arr[1]) cnt++;
        if (arr[3] == arr[1] + a3) cnt++;
        val = max(val, cnt);

        cout << val + 1 << endl;
    }
    return 0;
}
