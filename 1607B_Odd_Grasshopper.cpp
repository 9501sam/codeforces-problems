// https://codeforces.com/problemset/problem/1607/B
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll x, n, offset;
        cin >> x >> n;

        if (n % 4 == 1) {
            offset = -n;
        } else if (n % 4 == 2) {
            offset = 1;
        } else if (n % 4 == 3) {
            offset = n + 1;
        } else {
            offset = 0;
        }
        offset *= ((x % 2 == 0) ? 1 : -1);

        cout << (x + offset) << endl;
    }
}

