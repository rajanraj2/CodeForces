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

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr.size() == 0)
            {
                break;
            }
            int x = arr.size();
            arr.erase(arr.begin() + x - 1); // bob ate
            for (int j = 0; j < arr.size(); j++)
            {
                cout << arr[j] << " ";
            }
            cout << "arr ends " << endl;

            cout << "arr starts" << arr[i] << "alice : " << alice[alice.size() - 1] << endl;
            while (arr[i] <= alice[alice.size() - 1] && i < arr.size())
            {
                i++;
            }
            cout << "check : " << arr[i] << "alice : " << alice[alice.size() - 1] << endl;
            if (i < arr.size() && arr[i] > alice[alice.size() - 1])
            {
                alice.push_back(arr[i]);
                cout << arr[i] << " : " << endl;
                arr.erase(arr.begin() + i);
            }
            cout << "arr ends" << arr[i] << endl;
        }
        for (int i = 0; i < alice.size(); i++)
        {
            cout << alice[i] << " ";
        }
        cout << alice.size() << endl;
    }
    return 0;
}