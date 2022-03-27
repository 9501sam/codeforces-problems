// https://codeforces.com/problemset/problem/1539/C
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long ll;

int main()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll a[n], diff[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);

    for (ll i = 1; i < n; i++)
        diff[i] = a[i] - a[i-1];

    ll count = n;
    sort(diff+1, diff+n);

    for (ll i = 1; i < n; i++) {
        if (diff[i] <= x) {
            count--;
        } else if (diff[i] <= ((k + 1) * x)) {
            k -= (diff[i] - 1) / x;
            count--;
        } else {
            break;
        }
    }

    cout << count << endl;
}

