// https://codeforces.com/problemset/problem/1696/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int ans = 0;

        for (int i = 1; i <= n; i++)
            if (a[i] != 0 && a[i - 1] == 0)
                ans++;
        ans = (ans < 2) ? ans : 2;
        cout << ans << endl;
    }

    return 0;
}
