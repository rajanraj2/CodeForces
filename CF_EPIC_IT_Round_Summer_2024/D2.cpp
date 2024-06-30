#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<int> alice;
        alice.push_back(arr[0]);
        arr.erase(arr.begin());

        while (!arr.empty())
        {
            // Bob takes the largest remaining element
            arr.pop_back(); 

            // Alice takes the smallest element greater than her last one
            if (arr.empty())
                break;
            auto it = upper_bound(arr.begin(), arr.end(), alice.back());
            if (it != arr.end())
            {
                alice.push_back(*it);
                arr.erase(it);
            }
        }
        cout << alice.size() << endl;
    }
    return 0;
}
