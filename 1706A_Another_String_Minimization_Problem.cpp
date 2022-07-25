// https://codeforces.com/problemset/problem/1706/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n + 1];
        char s[m + 1];

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= m; i++)
            s[i] = 'B';

        for (int i = 1; i <= n; i++) {
            int j = a[i];
            int k = m + 1 - a[i];
            // cout << "j = " << j << ", k = " << k << endl;
            if ((s[j] == 'B') && (s[k] == 'B')) {
                int h = (j < k) ? j : k;
                s[h] = 'A';
                // cout << h << endl;
            } else if (s[j] == 'B') {
                s[j] = 'A';
                // cout << j << endl;
            } else if (s[k] == 'B') {
                s[k] = 'A';
                // cout << k << endl;
            }
        }

        for (int i = 1; i <= m; i++)
            cout << s[i];
        cout << endl;
    }

    return 0;
}
