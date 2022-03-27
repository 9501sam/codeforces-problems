#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n+1], sum, l, r;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sum = 0;
        for (int i = 1; i <= n; i++)
            sum += a[i];

        if (sum % x != 0) {
            cout << n << endl;
            continue;
        }

        l = 1;
        while (l <= n && (a[l] % x == 0)) 
            l++;
        r = n;
        while (r >= 1 && (a[r] % x == 0)) 
            r--;

        if (l <= r) 
            cout << max(n-l, r-1) << endl;
        else
            cout << -1 << endl;
    }
}
