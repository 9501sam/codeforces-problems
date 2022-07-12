// https://codeforces.com/problemset/problem/1697/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, sum = 0;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++) {
            // cout << a[i] << "< ";
            sum += a[i];
        }
        int ans;
        if (m >= sum) {
            ans = 0;
        } else {
            ans = sum - m;
        }
        cout << ans << endl;
    }

    return 0;
}
