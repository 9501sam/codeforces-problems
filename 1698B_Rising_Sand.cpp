// https://codeforces.com/problemset/problem/1698/B
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (k == 1) {
            cout << (n - 1) / 2 << endl;
            continue;
        }

        ll ans = 0;
        for (int i = 1; i < n - 1; i++)
            if (a[i-1] + a[i+1] <  a[i])
                ans++;

        cout << ans << endl;
    }
    return 0;
}
