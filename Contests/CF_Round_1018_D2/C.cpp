#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)4e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<ll>> h(n, vector<ll>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> h[i][j];
            }
        }
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int j = 0; j < n; j++) cin >> b[j];

        // Precompute allowed differences for rows (x)
        // allowRow[i][d+1] = true if x[i+1] - x[i] == d is allowed, for d in {-1,0,1}
        vector<array<bool,3>> allowRow(n-1, {true,true,true});
        for(int i = 0; i < n-1; i++){
            array<bool,3> forbid = {false,false,false};
            for(int j = 0; j < n; j++){
                ll s = h[i+1][j] - h[i][j];
                if(s == 0)      forbid[1] = true; // forbid d =  0
                else if(s == 1) forbid[0] = true; // forbid d = -1 (because -s = -1)
                else if(s == -1)forbid[2] = true; // forbid d = +1 (because -s = +1)
                // differences >1 or < -1 impose no restriction
            }
            for(int k = 0; k < 3; k++){
                allowRow[i][k] = !forbid[k];
            }
        }

        // Precompute allowed differences for columns (y)
        vector<array<bool,3>> allowCol(n-1, {true,true,true});
        for(int j = 0; j < n-1; j++){
            array<bool,3> forbid = {false,false,false};
            for(int i = 0; i < n; i++){
                ll t = h[i][j+1] - h[i][j];
                if(t == 0)      forbid[1] = true;
                else if(t == 1) forbid[0] = true;
                else if(t == -1)forbid[2] = true;
            }
            for(int k = 0; k < 3; k++){
                allowCol[j][k] = !forbid[k];
            }
        }

        // DP for rows: x_i in {0,1}
        // dpR[i][v] = min cost up to row i with x_i = v
        vector<array<ll,2>> dpR(n, {INF, INF});
        dpR[0][0] = 0;
        dpR[0][1] = a[0];
        for(int i = 0; i < n-1; i++){
            array<ll,2> next = {INF, INF};
            for(int x_i = 0; x_i <= 1; x_i++){
                if(dpR[i][x_i] == INF) continue;
                for(int k = 0; k < 3; k++){
                    if(!allowRow[i][k]) continue;
                    int d = k - 1; // map k=0->d=-1; k=1->0; k=2->1
                    int x_ip1 = x_i + d;
                    if(x_ip1 < 0 || x_ip1 > 1) continue;
                    ll cost = dpR[i][x_i] + (x_ip1 ? a[i+1] : 0);
                    next[x_ip1] = min(next[x_ip1], cost);
                }
            }
            dpR[i+1] = next;
        }
        ll bestRow = min(dpR[n-1][0], dpR[n-1][1]);

        // DP for columns: y_j in {0,1}
        vector<array<ll,2>> dpC(n, {INF, INF});
        dpC[0][0] = 0;
        dpC[0][1] = b[0];
        for(int j = 0; j < n-1; j++){
            array<ll,2> next = {INF, INF};
            for(int y_j = 0; y_j <= 1; y_j++){
                if(dpC[j][y_j] == INF) continue;
                for(int k = 0; k < 3; k++){
                    if(!allowCol[j][k]) continue;
                    int d = k - 1;
                    int y_jp1 = y_j + d;
                    if(y_jp1 < 0 || y_jp1 > 1) continue;
                    ll cost = dpC[j][y_j] + (y_jp1 ? b[j+1] : 0);
                    next[y_jp1] = min(next[y_jp1], cost);
                }
            }
            dpC[j+1] = next;
        }
        ll bestCol = min(dpC[n-1][0], dpC[n-1][1]);

        ll ans = (bestRow >= INF || bestCol >= INF) ? -1 : (bestRow + bestCol);
        cout << ans << "\n";
    }

    return 0;
}
