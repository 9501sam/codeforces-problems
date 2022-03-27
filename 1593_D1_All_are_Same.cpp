// https://codeforces.com/problemset/problem/1593/D1
#include <iostream>
using namespace std;

#define INF (int)(~0 ^ (1 << 31)) 

int gcd(int a, int b)
{
    while (a && b) 
        if (a > b)
            a -= b;
        else
            b -= a;
    return a + b;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], min = INF;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < min)
                min = a[i];
        }

        for (int i = 0; i < n; i++)
            a[i] -= min;
        int i, k;
        for (i = 0; i < n; i++)
            if (a[i] != 0) {
                k = a[i];
                break;
            }
        if (i == n) {
            cout << -1 << endl;
            continue;
        }
        for (; i < n; i++)
            if (a[n] != 0)
                k = gcd(k, a[i]);
        cout << k << endl;
    }
    return 0;
}
