// https://codeforces.com/problemset/problem/1708/A
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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll a0 = a[0];
        bool yes = true;

        for (int i = 1; i < n; i++)
            if ((a[i] % a[0] != 0)) {
                yes = false;
                break;
            }

        if (yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
