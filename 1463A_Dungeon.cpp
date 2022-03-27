// https://codeforces.com/problemset/problem/1463/A
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c) % 9 != 0) {
            cout << "NO" << endl;

        } else if (min(a, min(b, c)) < (a + b + c) / 9) {
            cout << "NO" << endl;

        } else {
            cout << "YES" << endl;
        }

    }
    return 0;
}
