// https://codeforces.com/problemset/problem/1657/B
#include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, B, x, y, sum = 0, ai = 0;
        cin >> n >> B >> x >> y;
        for (int i = 1; i <= n; i++) {
            if (ai + x <= B) {
                ai += x;
            } else {
                ai -= y;
            }
            sum += ai;
        }
        cout << sum << endl;
    }
    return 0;
}
