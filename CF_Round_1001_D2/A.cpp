// https://codeforces.com/contest/2062/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int one = 0;
        for (char ch : s) {
            if (ch == '1') one++;
        }
        cout << one << endl;
    }    
    return 0;
}