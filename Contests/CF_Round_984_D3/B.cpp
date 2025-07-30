#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> arr(k);
        unordered_map<int, int> mpp;
        int result = 0;
        for (int i = 0; i < k; i++) {
            cin >> arr[i].first >> arr[i].second;
            if (mpp.find(arr[i].first) == mpp.end()) mpp[arr[i].first] = arr[i].second;
            else mpp[arr[i].first] = mpp[arr[i].first] + arr[i].second;
        }

        vector<pair<int, int>> vec;
        for (auto it : mpp) {
            vec.push_back({it.first, it.second});
        }

        sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        });

        int iter = min(n, (int)vec.size());
        for (int i = 0; i < iter; i++) {
            result += vec[i].second;
        }

        cout << result << endl;


    }
    return 0;
}