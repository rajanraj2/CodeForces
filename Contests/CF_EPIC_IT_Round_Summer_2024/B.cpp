#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]);
            count++;
        }
        cout << count - 1 << endl;
    }
    return 0;
}