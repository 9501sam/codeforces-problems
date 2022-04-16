// https://codeforces.com/problemset/problem/1661/A
#include <iostream>
using namespace std;

#define ABS(x) ((x) > 0 ? (x) : -(x))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n], b[n], sum = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sum = 0;
        for (int i = 0; i < n-1; i++)
            sum += MIN(ABS(a[i] - a[i+1]) + ABS(b[i] - b[i+1]), ABS(ABS(a[i] - b[i+1]) + ABS(b[i] - a[i+1])));
        cout << sum << endl;
    }
    return 0;
}
