#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t) {
        long long n, a, b;
        cin >> n >> a >> b;
        long long profit = 0;
        if (a >= b) {
            profit = n * a;
            cout << profit << endl;
            t--;
            continue;
        }
        int times = min(n, b - a);
        profit = (times * b) - ((times - 1)* times / 2);
        if (times == n) {
            cout << profit << endl;
            t--;
            continue;
        }
        long long left = n - (b - a);
        profit += left *  a;
        cout << profit << endl;
        t--;
    }
    return 0;
}


// long long price = b;
        // price -= times;
        // while ((price > a) && (n - (b - price) > 0)) {
        //     profit += price;
        //     price--;
        // }