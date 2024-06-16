#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n ,x;
        cin >> n;
        int sum = 0;
        int k = 1;
        while (sum <= n) {
            sum += k * x;
            if (sum <= n) {
                k++;
            }
            else {
                sum -= k * x;
            }
        }
    }
}