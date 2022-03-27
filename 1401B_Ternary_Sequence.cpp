// https://codeforces.com/problemset/problem/1401/B
#include <iostream>
#include <algorithm>
using namespace std;

#define OP(x, y) \
    do { \
        tmp = min(a[x], b[y]); \
        a[x] -= tmp; \
        b[y] -= tmp; \
    } while (0)

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a[3], b[3], tmp, ans = 0;
        cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];

        // (1, 0)
        OP(1, 0);

        // (0, 2)
        OP(0, 2);

        // (2, 1) +2
        OP(2, 1);
        ans += tmp * 2;

        // (2, 2)
        OP(2, 2);

        // (2, 0)
        OP(2, 0);

        // (1, 1)
        OP(1, 1);

        // (0, 1)
        OP(0, 1);

        // (0, 0)
        OP(0, 0);

        // (1, 2) -2
        OP(1, 2);
        ans -= tmp * 2;

        cout << ans << endl;
    }
}

