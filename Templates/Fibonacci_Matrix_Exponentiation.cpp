#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

const int mod = 1e9 + 7;

void multiply(vector<vector<int>> &a, vector<vector<int>> &b) {
    vector<vector<int>> res(2, vector<int>(2));
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                res[i][j] = (res[i][j] + a[i][k] * b[k][j] % mod) % mod;
    a = res;
}

void matrixPower(vector<vector<int>> &mat, int n) {
    vector<vector<int>> res = {{1, 0}, {0, 1}}; // Identity matrix
    while (n > 0) {
        if (n % 2)
            multiply(res, mat);
        multiply(mat, mat);
        n /= 2;
    }
    mat = res;
}

int fib(int n) {
    if (n == 0) return 0;
    vector<vector<int>> mat = {{1, 1}, {1, 0}};
    matrixPower(mat, n - 1);
    return mat[0][0]; // F(n)
}

int32_t main() {
    int n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}
