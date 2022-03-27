// https://codeforces.com/problemset/problem/1525/B
#include <bits/stdc++.h>
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

        int i;
        for (i = 0; i < n; i++)
            if (a[i] != i+1) break;

        if (i == n)
            cout << 0 << endl;
        else if (a[0] == n && a[n-1] == 1) 
            cout << 3 << endl;
        else if (a[0] == 1 || a[n-1] == n) 
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}
