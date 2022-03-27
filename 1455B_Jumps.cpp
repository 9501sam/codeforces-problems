// https://codeforces.com/problemset/problem/1455/B
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x, pos = 0, cnt = 0, k = 0;
        cin >> x;

        if (x == 1) {
            cout << 1 << endl;
            continue;
        } else if (x == 2) {
            cout << 3 << endl;
            continue;
        } else if (x == 3) {
            cout << 2 << endl;
            continue;
        }

        while (pos < x)
            pos += ++k;

        if (pos == x) {
            cout << k << endl;
            continue;
        }

        int l = pos - k, r = pos;

        int res;
        if (x == pos - 1)
            res = k + 1;
        else
            res = k;

        cout << res << endl;
    }
}
