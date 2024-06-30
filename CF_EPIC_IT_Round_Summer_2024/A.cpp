#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int result = ((n - 1) * k) + 1;
        cout << result << endl;
    }
    return 0;
}