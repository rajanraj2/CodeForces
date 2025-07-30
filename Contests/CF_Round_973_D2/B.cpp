#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {    
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int result = arr[n - 1];
        arr.pop_back();

        while (arr.size() > 1) {

            int last = arr.back();
            int maxi = *max_element(arr.begin(), arr.end() - 1);

            auto toDelete = find(arr.begin(), arr.end() - 1, maxi);
            if (toDelete != arr.end()) {
                arr.erase(toDelete);
            }

            arr[arr.size() - 1] = last - maxi;
        }

        result -= arr[0];
        cout << result << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {    
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) cin >> arr[i];
        
//         int result = arr[n - 1];
//         arr.pop_back();

//         while (arr.size() > 1) {
//             int last = arr.back();
//             int maxi = *max_element(arr.begin(), arr.end() - 1);
//             arr.erase(remove(arr.begin(), arr.end() - 1, maxi), arr.end() - 1);
//             // arr.erase(remove(arr.begin(), arr.end(), maxi), arr.end());
//             arr[arr.size() - 1] = last - maxi;
//         }

//         result -= arr[0];
//         cout << result << endl;
//     }
//     return 0;
// }
