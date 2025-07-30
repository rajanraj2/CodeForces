#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int point = 0, step = 1, i = 1;
        bool s = true;
        while (abs(point) <= n) {
            step = i * 2 - 1;
            if (s) {
                if (step > 0) step = -step;
                point += step;
                s = false; 
            }
            else {
                if (step < 0) step = -step;
                point += step;
                s = true;
            }
            i++;
        }
        if (s) cout << "Kosuke" << endl;
        else cout << "Sakurako" << endl;
    }
    return 0;
}