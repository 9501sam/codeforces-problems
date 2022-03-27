// https://codeforces.com/gym/103428/problem/J
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        b *= 180;
        ll mod = __gcd(a, b);
        ll m = b / mod - 1;
        cout << m << endl;
    }
}
