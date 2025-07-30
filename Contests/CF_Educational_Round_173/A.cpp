#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr;
        arr.push_back(n);
        if (n < 4) {
            cout << 1 << endl;
            continue;
        }
        long long count = 0;
        long long left = n;

        while (left > 3) {
            count = count * 2;
            count++;
            left = left / 4;
        }
        count++;

        cout << count << endl;
    }
    return 0;
}