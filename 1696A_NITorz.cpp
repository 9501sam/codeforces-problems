// https://codeforces.com/problemset/problem/1696/A
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, z;
        cin >> n >> z;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            a[i] = a[i] | z;
        }
        
        ll max = 0;
        for (int i = 0; i < n; i++)
            max = max > a[i] ? max : a[i];
        cout << max << endl;
    }
    return 0;
}
