// https://codeforces.com/problemset/problem/1543/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a, b, e, m;
        cin >> a >> b;
        e = abs(a-b);
        if (e == 0) {
            cout << "0 0" << endl;
            continue;
        }
        ll m1 = a % e;
        ll m2 = e - m1;
        m = m1 < m2 ? m1 : m2;
        cout << e << " " << m << endl;
    }
}
