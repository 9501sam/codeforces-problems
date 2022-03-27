// https://codeforces.com/problemset/problem/1365/A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        int cntR = 0;
        int cntC = 0;
        bool rol[n] = {};
        bool col[m] = {};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (a[i][j]) {
                    rol[i] = true;
                    col[j] = true;
                }
        for (int i = 0; i < n; i++)
            cntR += rol[i];
        for (int i = 0; i < m; i++)
            cntC += col[i];
        n -= cntR;
        m -= cntC;

        int x = min(n, m);
        // cout << "x = " << x << endl;
        if (x % 2 == 1) 
            cout << "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }
}
