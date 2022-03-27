// https://codeforces.com/problemset/problem/1454/C
#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n+1], cnt[n+1] = {};
        for (int i = 0; i <= n; i++)
            cnt[i] = -5;
        a[0] = 0;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            if (a[i] != a[i-1])
                cnt[a[i]] = max(cnt[a[i]] + 1, (ll)1);
        cnt[a[1]]--;
        cnt[a[n]]--;
        ll min = (ll)1e9;
        ll minI = -1;
        for (ll i = 1; i <= n; i++)
            if (cnt[i] != -5 && cnt[i] < min) {
                min = cnt[i];
                minI = i;
            }
        cout << cnt[minI]+1 << endl;
        // cout << "hahaha" << endl;
    }
}
