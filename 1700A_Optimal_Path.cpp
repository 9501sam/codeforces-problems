// https://codeforces.com/problemset/problem/1700/A
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll v = (1 + m) * m / 2;
        ll h = m * ((1 + n) * n / 2);
        ll ans = v + h - m;
        // cout << endl;
        // cout << v << " " << h << endl;
        cout << ans << endl;
    }
    return 0;
}
