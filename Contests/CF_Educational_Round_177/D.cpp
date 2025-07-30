#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

// take non zero count of characters in an array
// sort it in non-ascending order
// we can multiply each count with 2 and add it to get the total no. of required length
// if the req. length is greater than the sum of count of all elements then it is not possible to create such a string so ans will be 0
// process the array in the following way :
// - check if the required no. of odd and even number of indices are available or not
// - if available then select the req. no. of indices from both and store it in dp using combanatorics
// output the total no. of ways of creating the string satisfying the given conditions

int32_t main() {
    fio;
    w(t) {
        vi arr(26);
        ivec(arr);
        int mod = 998244353;
        int result = 0;


    }    
    return 0;
}