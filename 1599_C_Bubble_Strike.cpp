// https://codeforces.com/contest/1599/problem/C
#include <iostream>
using namespace std;

// P = U / D
#define U(m) (2*((m))*((m)-1)*((m)-2) \
        + 6*((m))*((m)-1)*(N-(m)) \
        + 3*((m))*(N-(m))*(N-(m)-1))
#define D(m) (2*(N)*(N-1)*(N-2))
#define P(m) ((double)U(m) / (double)D(m))

typedef long long ll;

ll N;
double p;

ll search(ll l, ll r) // l <= possible ans <= r
{
    if (l == r) 
        return r;
    ll nums = r - l + 1;

    int m = (l+r) / 2;

    if (P(m) == p)
        return m;
    else if (P(m) < p && p < P(m+1))
        return m+1;
    else if (P(m) > p)
        return search(l, m);
    else
        return search(m, r);
}

int main()
{
    cin >> N >> p;

    ll ans = search((ll)0, (ll)N);
    cout << ans << endl;
    return 0;
}
