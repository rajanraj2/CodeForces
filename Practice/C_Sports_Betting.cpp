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
        int n;
        cin >> n;
        
        vi arr(n);
        map<int, int> mpp;
        bool possible = false;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
            if (mpp[arr[i]] >=  4) possible = true;
        }
        
        if (possible) {
            cout << "Yes" <<"\n";
            continue;
        }

        if (mpp.size() < 2) {
            cout << "No" << "\n";
            continue;
        }

        int index = 0, sz = mpp.size();
        vector<pair<int, int>> freq(sz);
        for (auto it : mpp) {
            freq[index++] = {it.first, it.second};
        }


        for(int i = 0; i < sz - 1; i++){
            if(freq[i + 1].first == freq[i].first + 1 && freq[i].second >= 2 && freq[i + 1].second >= 3) {
                possible = true;
                break;
            }
            if(freq[i + 1].first == freq[i].first + 1 && freq[i].second >= 3 && freq[i + 1].second >= 2) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "Yes" <<"\n";
            continue;
        }

        for(auto it : mpp){
            int curr = it.first;
            if(it.second >= 2 && (mpp[curr + 1] >= 1 && mpp[curr + 2] >= 2)){
                possible = true;
                break;
            }
        }


        // for(int i = 0; i < sz - 2; i++){
        //     if(freq[i].first + 2 == freq[i + 2].first) {
        //         if (freq[i].second >= 2 && freq[i+2].second >= 2) {
        //             possible = true;
        //             break;
        //         }
        //     }
        // }

        if (possible) {
            cout << "Yes" <<"\n";
            continue;
        }

        cout << "No\n";
    }    
    return 0;
}