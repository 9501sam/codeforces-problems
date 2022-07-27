// https://codeforces.com/problemset/problem/1689/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p[n], q[n];
        for (int i = 0; i < n; i++)
            cin >> p[i];

        if (n == 1) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
            q[i] = i + 1;

        for (int i = 0; i < n - 1; i++) {
            if (p[i] == q[i]) {
                int tmp = q[i];
                q[i] = q[i + 1];
                q[i + 1] = tmp;
            }
        }
        if (q[n - 1] == p[n - 1]) {
            int tmp = q[n - 1];
            q[n - 1] = q[n - 2];
            q[n - 2] = tmp;
        }

        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
        cout << endl;
    }

    return 0;
}
