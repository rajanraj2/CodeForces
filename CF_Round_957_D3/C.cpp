#include <bits/stdc++.h>
using namespace std;

vector<int> find_permutation(int n, int m, int k) {
    vector<int> permutation(n);
    for (int i = 0; i < n; ++i) {
        permutation[i] = i + 1;
    }

    swap(permutation[0], permutation[k-1]);
    if (m != 1) {
        swap(permutation[n-1], permutation[m-1]);
    }
    return permutation;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> result = find_permutation(n, m, k);
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
