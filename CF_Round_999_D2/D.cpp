#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int suma = 0, sumb = 0;
        priority_queue<int> sa, sb;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            suma += a[i];
            sa.push(a[i]);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            sumb += b[i];
            sb.push(b[i]);
        }
        if (suma != sumb) {
            cout << "No" << endl;
            continue;
        }

        bool flag = false;
        while (!sa.empty()) {
            if (sb.empty() || b.size() > a.size()) {
                flag = true;
                break;
            }
            int x = sb.top();
            sb.pop();
            if (x < sa.top()) {
                flag = true;
                break;
            }
            if (x == sa.top()) {
                sa.pop();
            }
            else {
                sb.push(x / 2);
                sb.push((x + 1) / 2);
            }
        }
        if (flag || !sb.empty()) {
            cout << "No" << endl;
            continue;
        }
        
        cout << "Yes" << endl;
    }    
    return 0;
}