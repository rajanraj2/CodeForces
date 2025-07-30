#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    w(t) {
        string s, result = "";
        cin >> s;
        vi freq(10, 0);

        for (auto it : s) {
            freq[it - '0']++;
        }

        for (int i = 0; i < 10; i++) {
            if (freq[9 - i]) {
                result += to_string(9 - i);
                freq[9 - i]--;
            }
            else {
                int j = (9 - i) + 1;
                while (j < 10 && freq[j] == 0) {
                    j++;
                }
                result += to_string(j);
                freq[j]--;
            }
        }

        cout << result << "\n";
        
    }    
    return 0;
}