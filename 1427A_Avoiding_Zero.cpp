// https://codeforces.com/problemset/problem/1427/A
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
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        if (sum == 0) {
            cout << "NO" << endl;
            continue;
        }
        int s = sum > 0 ? 1 : -1;

        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            if (a[i] * s > 0) 
                cout << a[i] << " ";

        for (int i = 0; i < n; i++)
            if (a[i] * s <= 0) 
                cout << a[i] << " ";
        cout << endl;
    }
}

