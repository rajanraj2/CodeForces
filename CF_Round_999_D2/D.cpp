#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int suma = 0, sumb = 0;
        multiset<int> sb;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            suma += a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            sumb += b[i];
            sb.insert(b[i]);
        }
        if (suma != sumb) {
            cout << "NO" << endl;
            continue;
        }

        string result = "YES";
        int i = 0;
        while (i < n) {
            if (sb.count(a[i])) {
                sb.erase(sb.find(a[i]));
            } 
            else if (i < n - 1 && abs(a[i + 1] - a[i]) <= 1) {
                a[i + 1] += a[i];
            }
            else {
                result = "NO";
                break;
            }
            i++;
        }       
        if (result == "NO") {
            cout << result << endl;
            continue;
        }

        if (!sb.empty() || i != n) result = "NO";
        cout << result << endl;
    }    
    return 0;
}