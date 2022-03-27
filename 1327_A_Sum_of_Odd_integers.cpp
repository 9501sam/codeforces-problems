// https://codeforces.com/problemset/problem/1327/A
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        if ((n - k) % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        n = (n - k) / 2;
        if (((k - 1) * k) <= 2*n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
