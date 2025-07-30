#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = a + b + c;
        int days = n / sum;
        int step = days * sum;
        days *= 3;
        if (step < n) {
            step += a;
            days++;
        }
        if (step < n) {
            step += b;
            days++;
        } 
        if (step < n) {
            step += c;
            days++;
        }
        cout << days << endl;

    }
    return 0;
}