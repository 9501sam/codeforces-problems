// https://codeforces.com/problemset/problem/1366/A
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll Max = max(a, b);
        ll Min = min(a, b);

        if (Max >= Min * 2) {
            cout << Min << endl;
            continue;
        }

        ll res = 0, diff = Max - Min, remain = Min - diff;
        res += diff;
        res += (remain / 3) * 2;
        res += (remain % 3 == 2);

        cout << res << endl;
    }
}
