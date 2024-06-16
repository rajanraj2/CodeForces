#include <bits/stdc++.h>
using namespace std;

int  main() {
    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> A, B;
        char last = 'A';
        for (int i = 0; i < n; i++) {
            int na = A.size();
            int nb = B.size();
            if ((na - nb == 1) or (na - nb == -1)) {
                if (last == 'A') {
                    B.push_back(arr[i]); last = 'B';
                }
                else {
                    A.push_back(arr[i]); last = 'A';
                }
            }
            else if (na - nb == 0){
                if (last == 'A') {
                    A.push_back(arr[i]); last = 'A';
                }
                else {
                    B.push_back(arr[i]); last = 'B';
                }
            }
        }
        int result = A[A.size() - 1] + B[B.size() - 1];
        cout << result << endl;
        t--;
    }
    return 0;
}