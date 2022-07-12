// https://codeforces.com/problemset/problem/1699/A
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        if (n % 2 == 1) {
            cout << -1 << endl;
        } else {
            cout << n / 2 << " " << n / 2 << " " << 0 << endl;
        }
    }
    return 0;
}
