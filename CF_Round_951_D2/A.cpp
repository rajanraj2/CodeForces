#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        int result = 1e9;
        for (int j = 1; j < n; j++) {
            result = min(result, max(arr[j - 1], arr[j]) - 1);
        }
        cout << result << endl;
    }
}

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         int n, x;
//         cin >> n;
//         vector<int> arr(n);
//         int miniPrev, mini, miniNext;
//         for (int j = 0; j < n; j++) {
//             cin >> x;
//             arr[j] = x;
//         }

//         for (int j = 0; j < n; j++) {
//             if ((j > 0 & j < n-1) & arr[j] < mini )  {
//                 mini = arr[j];
//                 miniPrev = arr[j-1];
//                 miniNext = arr[j + 1];
//                 cout << "miniPrev1: " << miniPrev << " mini: " << mini << " miniNext: " << miniNext << endl;
//             }
//             else if (j == 0 & j < n-1) {
//                 mini = arr[j];
//                 miniPrev = INT_MAX;
//                 miniNext = arr[j+1];
//                 cout << "miniPrev2: " << miniPrev << " mini: " << mini << " miniNext: " << miniNext << endl;
//             }
//             else if (j == n-1 & arr[j] < mini) {
//                 mini = arr[j];
//                 miniPrev = arr[j-1];
//                 miniNext = INT_MAX;
//                 cout << "miniPrev3: " << miniPrev << " mini: " << mini << " miniNext: " << miniNext << endl;
//             }
//         }
//         int result = min(miniPrev, miniNext) - 1;
//         cout << result << endl;
//     }
//     return 0;
// }