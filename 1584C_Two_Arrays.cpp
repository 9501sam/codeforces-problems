// https://codeforces.com/problemset/problem/1584/C
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        
        int i;
        for (i = 0; i < n; i++)
            if ((b[i] != a[i]) && (b[i] != a[i] + 1)) break;

        if (i != n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
