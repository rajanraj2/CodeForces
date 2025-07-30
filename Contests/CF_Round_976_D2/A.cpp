#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int result = 0;
        vector<int> arr;

        int num = 1;
        arr.push_back(num);
        while (num * k <= n && num * k != num) {
            num = num * k;
            arr.push_back(num);
        }

        int i = arr.size() - 1;
        while (n > 0) {
            if (i == 0) {
                result += n;
                break;
            }
            if (arr[i] > n) {
                i--;
                continue;
            }
            n -= arr[i];
            result++;
        }

        cout << result << endl;

    }
    return 0;
}