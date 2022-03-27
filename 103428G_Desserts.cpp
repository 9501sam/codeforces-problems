// https://codeforces.com/gym/103428/problem/G
#include <iostream>
using namespace std;

#define MOD 998244353
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MUL(a, b) (((ll)(a) * ll(b)) % MOD)

typedef long long ll;

int main()
{
    std::ios_base::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll max = a[0];
    for (int i = 1; i < n; i++)
        max = MAX(max, a[i]);

    ll k;
    for (k = 1; k <= m && k < max; k++)
        cout << 0 << endl;
    if (m < max) return 0;

    ll fac[max+4] = {1};
    for (int i = 1; i <= max; i++)
        fac[i] = MUL(i, fac[i-1]);
    ll res = 1;
    for (int i = 0; i < n; i++)
        res = MUL(res, fac[max] / MUL(fac[a[i]], fac[max - a[i]]));
    cout << res << endl;
    if (m == max) return 0;

    k = max + 1;
    for (; k <= m; k++) {
        ll d = 1;
        for (int i = 0; i < n; i++) {
            res = MUL(res, k);
            d = MUL(d, k - a[i]);
        }
        if (d == 0) {
            cout << 0 << endl;
        } else {
            res = res / d;
            cout << res << endl;
        }
    }
}

