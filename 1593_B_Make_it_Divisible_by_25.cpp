// https://codeforces.com/contest/1593/problem/B
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, n0, n5, k0 = 0, k5 = 0;
        cin >> n;
        n0 = n;
        n5 = n;
        // 0
        while (n0 % 10 != 0) {
            n0 /= 10;
            k0++;
        }
        while (n0 % 25 != 0) {
            n0 = (n0 / 100) * 10 + n0 % 10;
            k0++;
        }
        // 5
        while (n5 % 10 != 5 && n5 > 0) {
            n5 /= 10;
            k5++;
        }
        while (n5 % 25 != 0 && n5 > 10) {
            n5 = (n5 / 100) * 10 + n5 % 10;
            k5++;
        }

        if (n5 == 0) 
            cout << k0 << endl;
        else if (n0 == 0)
            cout << k5 << endl;
        else
            cout << (k0 < k5 ? k0 : k5) << endl;
    }
    return 0;
}
