// https://codeforces.com/problemset/problem/1614/A
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
            if (l < a[i] && a[i] < r) {
                sum += k / a[i];
                break;
            }
        cout << sum << endl;
    }
}
