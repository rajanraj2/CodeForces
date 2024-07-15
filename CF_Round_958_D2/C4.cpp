#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;

        while (n > 0) {
            ans.push_back(n);
            n = n & (n - 1);
        }

        cout << ans.size() << endl;
        for (long long num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
