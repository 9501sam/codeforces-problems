// https://codeforces.com/problemset/problem/1472/D
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n, tmp, ans;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());

        ans = 0;
        for (ll i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (v[i] % 2 == 0)
                    ans += v[i];
            } else {
                if (v[i] % 2 == 1)
                    ans -= v[i];
            }
        }

        if (ans > 0)
            cout << "Alice" << endl;
        else if (ans < 0)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
}

