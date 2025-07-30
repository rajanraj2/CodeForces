#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}


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
            if (arr[i] > n) {
                i--;
                continue;
            }
            n -= arr[i];
            result++;
        }

        cout << result << endl;




        // if (n < k) result = n;
        // else {
        //     while (n > 0) {
        //         // if (n < k) {
        //         //     result += n;
        //         //     n = 0;
        //         //     break;
        //         // }
        //         // int p = 1;
        //         // while (p * k <= n) {
        //         //     if (p * k == p) {
        //         //         result += n;
        //         //         n = 0;
        //         //         break;
        //         //     }
        //         //     p *= k;
        //         // }
        //         // if (n == 0) break;
        //         // result++;
        //         // n -= p;

                
        //         int num = k;
        //         while (true) {
        //             if (n < k) {
        //                 result += n;
        //                 n = 0;
        //                 break;
        //             }
        //             if (num * k <= n && num * k != num) {
        //                 num = num * k;
        //                 if (num > arr.end()) arr.push_back(num);
        //             }
        //             else break;
        //         }
        //         if (n == 0) break;
        //         result++;
        //         n -= num;
        //     }
        // }
        // cout << result << endl;
    }
    return 0;
}