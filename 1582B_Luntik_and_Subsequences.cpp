// https://codeforces.com/problemset/problem/1582/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, cnt0 = 0, cnt1 = 0, x;
        cin >> n;
        while (n--) {
            cin >> x;
            if (x == 0) cnt0++;
            else if (x == 1) cnt1++;
        }
        cout << ((ll)1 << cnt0) * ((ll) cnt1) << endl;
    }
}
