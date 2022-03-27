// https://codeforces.com/contest/1541/problem/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= (n - 2 - (n % 2)); i += 2) {
            cout << i+1 << " " << i << " ";
        }

        if (n % 2 == 0) {
            cout << n << " " << n-1;
        } else {
            cout << n-1 << " " << n << " " << n-2;
        }

        cout << endl;
    }
    
    return 0;
}
