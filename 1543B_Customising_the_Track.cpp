// https://codeforces.com/problemset/problem/1543/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, x, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        ll k = sum % n;
        cout << k * (n-k) << endl;
    }
}
