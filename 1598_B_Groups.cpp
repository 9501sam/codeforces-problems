// https://codeforces.com/contest/1598/problem/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n][5];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < 5; j++)
                cin >> a[i][j];

        bool ans = false, end = false;
        for (int i = 0; i < 5; i++) {
            for (int j = i+1; j < 5; j++) {
                // cout << "i = " << i << endl;
                // cout << "j = " << j << endl;
                int day1 = 0, day2 = 0, dayBoth = 0;
                for (int k = 0; k < n; k++) {
                    day1 += a[k][i] && !a[k][j];
                    day2 += !a[k][i] && a[k][j];
                    dayBoth += a[k][i] && a[k][j];
                }

                // cout << "day1 = " << day1 << endl;
                // cout << "day2 = " << day2 << endl;
                // cout << "dayBoth = " << dayBoth << endl;
                // cout << endl;

                if ((day1 <= n/2) && (day2 <= n/2) && (day1 + day2 + dayBoth == n)) { // YES
                    ans = true;
                    end = true;
                }
            }

            if (end)
                break;
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}

