// https://codeforces.com/problemset/problem/1415/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 2 * n;
        for (int c = 1; c <= 100; c++) {
            int i, cnt = 0;
            for (i = 0; i < n; i++) {
                if (a[i] != c) {
                    cnt++;
                    i = i + k - 1;
                }
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
}
