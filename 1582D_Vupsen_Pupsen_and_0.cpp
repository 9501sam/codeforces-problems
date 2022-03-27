// https://codeforces.com/contest/1582/problem/D
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n % 2 == 0) {
            for (int i = 0; i < n; i += 2)
                cout << a[i+1] << " " << -a[i] << " ";
            cout << endl;
        } else {
            for (int i = 0; i < n-3; i += 2)
                cout << a[i+1] << " " << -a[i] << " ";

            int k, x, y;
            if (a[n-1] + a[n-2] != 0) {
                x = a[n-1];
                y = a[n-2];
                k = a[n-3];
                cout << (x + y) << " " << -k << " " << -k << endl;
            } else if (a[n-3] + a[n-2] != 0) {
                x = a[n-3];
                y = a[n-2];
                k = a[n-1];
                cout << -k << " " << -k << " " << (x+y) << endl;
            } else if (a[n-3] + a[n-1] != 0) {
                x = a[n-1];
                y = a[n-3];
                k = a[n-2];
                cout << -k << " " << (x + y) << " " << -k << endl;
            }
        }
    }
}
