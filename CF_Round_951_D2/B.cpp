#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        int count = 0;
        for (int j = 0; j < max(x, y); j++) {
            if ((j + 1) ^ x == (j + 1) ^ y) {
                while (true) {
                    count = 0;
                    int k = j;
                    if ((k + 1) ^ x == (k + 1) ^ y) {
                        k++;
                        count++;
                    } 
                    else {
                        break;
                    }
                }
                break;
            }
        }
        cout << count << endl;
    }
    return 0;  
}