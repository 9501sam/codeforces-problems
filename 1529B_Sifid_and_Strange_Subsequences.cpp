// https://codeforces.com/problemset/problem/1529/B
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        sort(a, a+n);
        ll cnt = 0;

        ll min_diff = a[1] - a[0];
        ll i;
        for (i = 0; i < n; i++) {
            min_diff = min(min_diff, a[i+1] - a[i]);
            if (a[i+1] > min_diff) break;
        }

        i++;

        ll res = min(n, i);

        cout << res << endl;
    }
}
