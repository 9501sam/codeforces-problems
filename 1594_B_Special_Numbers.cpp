// https://codeforces.com/contest/1594/problem/B
#include <iostream>
using namespace std;

typedef unsigned long long ll;
#define MOD (ll)(1e9 + 7)

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, k, result = 0, mask = 1, tmp = 1;
        cin >> n >> k;
        for (int i = 0; i < 31; i++) {
            if (k & mask)
                result = (result + tmp) % MOD;
            tmp = (tmp * n) % MOD;
            mask <<= 1;
        }

        cout << result << endl;
    }
    return 0;
}

