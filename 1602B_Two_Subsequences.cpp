// https://codeforces.com/contest/1602/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count[n+1];
        int a[n+1][n]; // a[i-th][n];
        for (int i = 0; i < n; i++)
            cin >> a[0][i];

        for (int i = 1; i <= n; i++) {
            for (int k = 0; k < n+1; k++)
                count[k] = 0;
            for (int j = 0; j < n; j++) {
                int num = a[i-1][j];
                count[num]++;
            }
            for (int j = 0; j < n; j++) {
                int num = a[i-1][j];
                a[i][j] = count[num];
            }
        } 
        int q, x, k;
        cin >> q;
        while (q--) {
            cin >> x >> k;
            if (k > n)
                cout << a[n][x-1] << endl;
            else
                cout << a[k][x-1] << endl;
        }
    }
    return 0;
}
